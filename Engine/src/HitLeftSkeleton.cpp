#include "LightTextureGraphicsObject.h"
#include "FlatTextureGraphicsObject.h"
#include "GameObjectBasic.h"
#include "GameObjectMan.h"
#include "ShaderObjectNodeMan.h"
#include "NullGraphicsObject.h"
#include "HitLeftSkeleton.h"
#include "MeshNodeMan.h"
#include "GameObjectAnimSkeleton.h"
#include "GameObjectAnimSkin.h"
#include "TextureNodeMan.h"
#include "PCSTreeForwardIterator.h"

namespace Axiom
{
	HitLeftSkeleton::Data skel[]
	{
		{ 4, -1, "Bone" },
		{ 5,  4, "Bone_L" },
		{ 6,  5, "Bone_L_001" },
		{ 7,  6, "Bone_L_002" },
		{ 8,  4, "Bone_R" },
		{ 9,  8, "Bone_R_001" },
		{10,  9, "Bone_R_002" },
		{11,  4, "Bone_001" }
	};

	HitLeftSkeleton::HitLeftSkeleton(Bone* bone, int numBones)
		: mFirstBone(nullptr),
		mNumBones(numBones)
	{
		privSetAnimationHierarchy(bone);
		assert(mFirstBone);
	}

	HitLeftSkeleton::~HitLeftSkeleton()
	{

	}

	GameObjectAnim* HitLeftSkeleton::GetFirstBone()
	{
		assert(mFirstBone);
		return mFirstBone;
	}

	GameObjectAnim* HitLeftSkeleton::privFindBoneByIndex(int index)
	{
		GameObjectAnim* pFound = nullptr;

		GameObjectAnim* pObj = GetFirstBone();

		// TODO - add test bed for an interator of a tree with only one node
		if (pObj->mIndex == index)
		{
			pFound = pObj;
		}
		else
		{
			PCSTreeForwardIterator pIter(pObj);
			PCSNode* pNode = pIter.First();
			GameObjectAnim* pGameObj = nullptr;

			// walks the anim node does the pose for everything that
			while (pNode != nullptr)
			{
				assert(pNode);
				// Update the game object
				pGameObj = (GameObjectAnim*)pNode;
				if (pGameObj->mIndex == index)
				{
					pFound = pGameObj;
					break;
				}
				pNode = pIter.Next();
			}
		}

		return pFound;
	}

	void HitLeftSkeleton::privSetAnimationHierarchy(Bone* pBoneResult)
	{
#if 1
		assert(pBoneResult);

		// Mesh
		Mesh* MeshArray[8];

		MeshArray[0] = MeshNodeMan::Find(Mesh::Name::Bone);
		MeshArray[1] = MeshNodeMan::Find(Mesh::Name::Bone_L);
		MeshArray[2] = MeshNodeMan::Find(Mesh::Name::Bone_L_001);
		MeshArray[3] = MeshNodeMan::Find(Mesh::Name::Bone_L_002);
		MeshArray[4] = MeshNodeMan::Find(Mesh::Name::Bone_R);
		MeshArray[5] = MeshNodeMan::Find(Mesh::Name::Bone_R_001);
		MeshArray[6] = MeshNodeMan::Find(Mesh::Name::Bone_R_002);
		MeshArray[7] = MeshNodeMan::Find(Mesh::Name::Bone_001);

		// Load Shader 
		Shader* pShaderObject_textureLight = ShaderObjectNodeMan::Find(Shader::Name::LightTexture);
		assert(pShaderObject_textureLight);

		// GraphicsObject for a specific instance
		GraphicsObject* pGraphicsObj;

		// Create GameObject
		Vec3 color(1, 1, 1);
		Vec3 pos(1, 1, 1);

		//---------------------------------------
		// ChickenBot
		//---------------------------------------

		Texture* pTex = TextureNodeMan::Find(Texture::Name::ChickenBot);

		// Add A Dummy pivot object
		Mesh* pMeshNull = MeshNodeMan::Find(Mesh::Name::NULL_MESH);
		assert(pMeshNull);

		Shader* pShaderNull = ShaderObjectNodeMan::Find(Shader::Name::NullShader);
		assert(pShaderNull);

		pGraphicsObj = new NullGraphicsObject(pMeshNull, pShaderNull);
		GameObjectBasic* pPivot = new GameObjectBasic(pGraphicsObj);
		pPivot->SetName("Pivot");
		pPivot->DrawDisable();
		pPivot->mDeltaX = 0.003f;
		pPivot->SetScale(100.0f, 100.0f, 100.0f);
		pPivot->SetTrans(-6.0f, -8.0f, 3.2f);

		// Add Bones in Hierarchy
		GameObjectMan::Add(pPivot, GameObjectMan::GetRoot());

		GameObjectAnim* pGameObj;

		// Root animation is treated differently
		for (int i = 0; i < 1; i++)
		{
			pGraphicsObj = new LightTextureGraphicsObject(MeshArray[i], pShaderObject_textureLight, pTex, color, pos);
			pGameObj = new GameObjectAnimSkin(pGraphicsObj, pBoneResult);
			pGameObj->SetIndex(skel[i].index);
			pGameObj->SetName(skel[i].name);

			GameObjectMan::Add(pGameObj, pPivot);
			mFirstBone = pGameObj;
		}

		for (int i = 1; i < mNumBones - 4; i++)
		{
			pGraphicsObj = new LightTextureGraphicsObject(MeshArray[i], pShaderObject_textureLight, pTex, color, pos);
			pGameObj = new GameObjectAnimSkin(pGraphicsObj, pBoneResult);
			pGameObj->SetIndex(skel[i].index);
			pGameObj->SetName(skel[i].name);

			GameObjectAnim* pParent = privFindBoneByIndex(skel[i].parentIndex);
			GameObjectMan::Add(pGameObj, pParent);
		}

#else
		assert(pBoneResult);

		// Load the mesh
		Mesh* pPyramidMesh = MeshNodeMan::Find(Mesh::Name::PYRAMID);
		assert(pPyramidMesh);

		// Load Shader 
		ShaderObject* pShaderObject_textureLight = ShaderObjectNodeMan::Find(ShaderObject::Name::LightTexture);
		assert(pShaderObject_textureLight);

		// GraphicsObject for a specific instance
		GraphicsObject* pGraphicsObj;

		// Create GameObject
		Vec3 color(1, 1, 1);
		Vec3 pos(1, 1, 1);

		//---------------------------------------
		// ChickenBot
		//---------------------------------------

		TextureObject* pTex = TexNodeMan::Find(TextureObject::Name::Duckweed);

		// Add A Dummy pivot object
		Mesh* pMeshNull = MeshNodeMan::Find(Mesh::Name::NULL_MESH);
		assert(pMeshNull);

		ShaderObject* pShaderNull = ShaderObjectNodeMan::Find(ShaderObject::Name::NullShader);
		assert(pShaderNull);

		pGraphicsObj = new GraphicsObject_Null(pMeshNull, pShaderNull);
		GameObjectBasic* pPivot = new GameObjectBasic(pGraphicsObj);
		pPivot->SetName("Pivot");
		pPivot->DrawDisable();
		pPivot->delta_x = 0.003f;
		pPivot->SetScale(100, 100, 100);
		pPivot->SetTrans(-3, 0, 0);

		// Add Bones in Hierarchy
		GameObjectMan::Add(pPivot, GameObjectMan::GetRoot());
		GameObjectAnim* pGameObj;

		// Root animation is treated differently
		for (int i = 0; i < 1; i++)
		{
			pGraphicsObj = new GraphicsObject_LightTexture(pPyramidMesh, pShaderObject_textureLight, pTex, color, pos);
			pGameObj = new GameObjectAnimSkeleton(pGraphicsObj, pBoneResult);
			pGameObj->SetIndex(skel[i].index);
			pGameObj->SetName(skel[i].name);

			GameObjectMan::Add(pGameObj, pPivot);
			pFirstBone = pGameObj;
		}

		for (int i = 1; i < numBones - 4; i++)
		{
			pGraphicsObj = new GraphicsObject_LightTexture(pPyramidMesh, pShaderObject_textureLight, pTex, color, pos);
			pGameObj = new GameObjectAnimSkeleton(pGraphicsObj, pBoneResult);
			pGameObj->SetIndex(skel[i].index);
			pGameObj->SetName(skel[i].name);

			GameObjectAnim* pParent = privFindBoneByIndex(skel[i].parentIndex);

			GameObjectMan::Add(pGameObj, pParent);
		}


#endif

	}
}