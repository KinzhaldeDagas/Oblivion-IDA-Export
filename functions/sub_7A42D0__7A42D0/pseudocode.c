// OBLIVION AUTHORITY 2026-08-27: Parses optional top-level post-core token 7000 leaf cluster. Allocates leafLodLevelCount vectors, accepts token 7004 BillboardLeaf records inside 7002 LOD blocks, and sets parsedLeafLodFlag=1 even for an empty cluster. Inner token 7006 is only a BillboardLeaf packedColor field.
void __thiscall OB_CTreeEngine_ParseLeafCluster_010201A0(
        OB_CTreeEngine_010201A0 *this,
        OB_CTreeFileAccess_010201A0 *file)
{
  char *leafLodVectors; // eax
  unsigned int v4; // edi
  int leafLodLevelCount; // esi
  unsigned int v6; // ecx
  unsigned int v7; // eax
  OB_stVectorBillboardLeafPtr_010201A0 *v8; // edi
  OB_CTreeEngine_010201A0 *tree; // esi
  int Dword_010201A0; // eax
  int i; // eax
  OB_CBillboardLeaf_010201A0 *leaf; // eax
  OB_stVectorBillboardLeafPtr_010201A0 *lodVector; // esi
  OB_CBillboardLeaf_010201A0 **begin; // ecx
  unsigned int v15; // edi
  OB_CBillboardLeaf_010201A0 **end; // ecx
  OB_CBillboardLeaf_010201A0 **v17; // edi
  int v19; // [esp+14h] [ebp-68h]
  int lodIndex; // [esp+18h] [ebp-64h]
  unsigned int value; // [esp+1Ch] [ebp-60h] BYREF
  OB_stVector4Iterator_010201A0 result; // [esp+20h] [ebp-5Ch] BYREF
  OB_stString28_010201A0 details; // [esp+28h] [ebp-54h] BYREF
  OB_IdvFileError_010201A0 v24; // [esp+44h] [ebp-38h] BYREF
  int v25; // [esp+78h] [ebp-4h]

  v19 = 0; /*0x7a4307*/
  this->leafInfo.leafLodLevelCount = OB_CTreeFileAccess_ReadDword_010201A0(file);// Stock post-core 7000 leaf-cluster LOD count read. Oblivion stores the file count and allocates count-sized 0x10 LOD slots with overflow/allocation handling; no local 1024-count ceiling is present before parsing 7002 blocks. /*0x7a4314*/
  leafLodVectors = (char *)this->leafLodVectors; /*0x7a431a*/
  if ( leafLodVectors ) /*0x7a4322*/
  {
    v4 = (unsigned int)(leafLodVectors + 0xFFFFFFFC); /*0x7a4327*/
    _LN21( /*0x7a4333*/
      leafLodVectors,
      0x10u,
      *((_DWORD *)leafLodVectors + 0xFFFFFFFF),
      (void (__thiscall *)(void *))OB_stVector4_DestroyThiscall_010201A0);
    FormHeapFree(v4); /*0x7a4339*/
  }
  leafLodLevelCount = this->leafInfo.leafLodLevelCount; /*0x7a4341*/
  v6 = (unsigned __int64)(unsigned int)leafLodLevelCount >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * leafLodLevelCount;
  v7 = FormHeapAlloc(__CFADD__(v6, 4) ? 0xFFFFFFFF : v6 + 4);
  value = v7; /*0x7a436e*/
  v8 = 0; /*0x7a4372*/
  v25 = 0; /*0x7a4376*/
  if ( v7 ) /*0x7a437a*/
  {
    v8 = (OB_stVectorBillboardLeafPtr_010201A0 *)(v7 + 4); /*0x7a4387*/
    *(_DWORD *)v7 = leafLodLevelCount; /*0x7a438d*/
    ArrayConstructor( /*0x7a438f*/
      (char *)(v7 + 4),
      0x10u,
      leafLodLevelCount,
      (void (__thiscall *)(char *))FaceGenEgtBasisBank_Construct,
      (void (__thiscall *)(void *))OB_stVector4_DestroyThiscall_010201A0);
  }
  tree = this; /*0x7a4394*/
  v25 = 0xFFFFFFFF; /*0x7a439a*/
  this->leafLodVectors = v8; /*0x7a43a2*/
  Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a43a8*/
  if ( Dword_010201A0 != 0x1B59 ) /*0x7a43b2*/
  {
    lodIndex = 0; /*0x7a43b8*/
    do /*0x7a448d*/
    {
      if ( v19 >= tree->leafInfo.leafLodLevelCount ) /*0x7a43ca*/
      {
        details.capacity = 0xF; /*0x7a44ba*/
        details.size = 0; /*0x7a44c2*/
        details.storage.inlineData[0] = 0; /*0x7a44ca*/
        OB_stString28_AssignBytes_010201A0(&details, "too many leaf lod levels", 0x18u); /*0x7a44cf*/
        v25 = 1; /*0x7a44df*/
        OB_IdvFileError_Ctor_010201A0(&v24, &details, 0); /*0x7a44ea*/
        ThrowException__((DWORD)&v24, &_TI3_AVIdvFileError__); /*0x7a44f9*/
      }
      if ( Dword_010201A0 != 0x1B5A ) /*0x7a43d5*/
      {
        details.capacity = 0xF; /*0x7a4509*/
        details.size = 0; /*0x7a4511*/
        details.storage.inlineData[0] = 0; /*0x7a4519*/
        OB_stString28_AssignBytes_010201A0(&details, "malformed leaf lod data", 0x17u);// 2026-05-21 SpeedTreeOBSE core malformed pass: post-core 7000 leaf-cluster parser requires each LOD block to begin with 7002. /*0x7a451e*/
        v25 = 2; /*0x7a452e*/
        OB_IdvFileError_Ctor_010201A0(&v24, &details, 0); /*0x7a4539*/
        ThrowException__((DWORD)&v24, &_TI3_AVIdvFileError__); /*0x7a4548*/
      }
      for ( i = OB_CTreeFileAccess_ReadDword_010201A0(file); i != 0x1B5B; tree = this ) /*0x7a43e7*/
      {
        if ( i != 0x1B5C ) /*0x7a43f5*/
        {
          details.capacity = 0xF; /*0x7a4558*/
          details.size = 0; /*0x7a4560*/
          details.storage.inlineData[0] = 0; /*0x7a4568*/
          OB_stString28_AssignBytes_010201A0(&details, "malformed leaf lod data", 0x17u);// 2026-05-21 SpeedTreeOBSE core malformed pass: post-core 7000 LOD blocks accept only 7004 billboard-leaf records before 7003. /*0x7a456d*/
          v25 = 3; /*0x7a457d*/
          OB_IdvFileError_Ctor_010201A0(&v24, &details, 0); /*0x7a4588*/
          ThrowException__((DWORD)&v24, &_TI3_AVIdvFileError__); /*0x7a4597*/
        }
        leaf = OB_CBillboardLeaf_Parse_010201A0(file); /*0x7a43fc*/
        lodVector = &tree->leafLodVectors[lodIndex]; /*0x7a4407*/
        begin = lodVector->begin; /*0x7a440e*/
        value = (unsigned int)leaf; /*0x7a4413*/
        if ( begin ) /*0x7a4417*/
          v15 = lodVector->end - begin; /*0x7a4422*/
        else
          v15 = 0; /*0x7a4419*/
        if ( begin && v15 < lodVector->capacityEnd - begin ) /*0x7a4433*/
        {
          end = lodVector->end; /*0x7a4435*/
          *end = leaf; /*0x7a4438*/
          lodVector->end = end + 1; /*0x7a443d*/
        }
        else
        {
          v17 = lodVector->end; /*0x7a4442*/
          if ( begin > v17 ) /*0x7a4447*/
            _invalid_parameter_noinfo(); /*0x7a4449*/
          OB_stVector4_InsertOne_010201A0( /*0x7a445c*/
            (OB_stVector4_010201A0 *)lodVector,
            &result,
            (OB_stVector4Iterator_010201A0)__PAIR64__((unsigned int)v17, (unsigned int)lodVector),
            &value);
        }
        i = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a4463*/
      }
      ++v19; /*0x7a4477*/
      ++lodIndex; /*0x7a447c*/
      Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a4483*/
    }
    while ( Dword_010201A0 != 0x1B59 ); /*0x7a448d*/
  }
  tree->parsedLeafLodFlag = 1;                  // Presence and successful parsing of top-level 7000 leaf cluster sets parsedLeafLodFlag=1, even if the cluster contained no 7004 leaf records. Compute then skips generated explicit LOD construction. /*0x7a4493*/
}
/* Orphan comments:
2026-05-21 SpeedTreeOBSE core malformed pass: post-core 7000 leaf-cluster parser throws when parsed 7002 LOD blocks exceed the declared count.
*/
