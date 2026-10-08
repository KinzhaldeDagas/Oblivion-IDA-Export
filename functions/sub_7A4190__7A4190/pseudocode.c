// Oblivion core branch-info parser. Allocates/parses compact branch-level records from core 1014/1016 data only; later 23000 light-seam reduction and 26000 supplemental branch data are absent from this parser/storage path.
int __userpurge OB_CTreeEngine_ParseBranchInfo_010201A0@<eax>(
        unsigned int *this@<ecx>,
        int a2@<ebx>,
        OB_CTreeFileAccess_010201A0 *a3)
{
  unsigned int v3; // edi
  unsigned int *v4; // esi
  char *v5; // ebx
  int Dword_010201A0; // eax
  float *v8; // eax
  unsigned int v9; // ecx
  float **v10; // ecx
  int result; // eax
  rsize_t v12; // [esp-4h] [ebp-78h]
  int v13[2]; // [esp+14h] [ebp-60h] BYREF
  int v14; // [esp+1Ch] [ebp-58h] BYREF
  int v15; // [esp+24h] [ebp-50h] BYREF
  char v16; // [esp+28h] [ebp-4Ch]
  int v17; // [esp+38h] [ebp-3Ch]
  int v18; // [esp+3Ch] [ebp-38h]
  _BYTE v19[40]; // [esp+40h] [ebp-34h] BYREF
  int v20; // [esp+70h] [ebp-4h]
  OB_CTreeFileAccess_010201A0 *v21; // [esp+78h] [ebp+4h]

  v3 = *(this + 0x1A); /*0x7a41b7*/
  v4 = this + 0x18; /*0x7a41bd*/
  if ( *(this + 0x19) > v3 ) /*0x7a41c0*/
    _invalid_parameter_noinfo(a2, v3, (int)v4); /*0x7a41c2*/
  v5 = (char *)v4[1]; /*0x7a41c7*/
  if ( (unsigned int)v5 > v4[2] ) /*0x7a41cd*/
    _invalid_parameter_noinfo((int)v5, v3, (int)v4); /*0x7a41cf*/
  OB_stVector4_EraseRange_010201A0(v4, (int)v5, v13, (int)v4, v5, (int)v4, (char *)v3); /*0x7a41df*/
  Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(a3);// Stock core branch-info count read. Oblivion does not apply the local SpeedTreeOBSE former 256-count ceiling here; it loops the file count, allocating/appending compact SIdvBranchInfo records, then requires 1015. /*0x7a41ea*/
  if ( Dword_010201A0 > 0 ) /*0x7a41f3*/
  {
    v21 = (OB_CTreeFileAccess_010201A0 *)Dword_010201A0; /*0x7a41f5*/
    do /*0x7a4261*/
    {
      v8 = OB_SIdvBranchInfo_Parse_010201A0((unsigned int *)a3); /*0x7a4201*/
      v9 = v4[1]; /*0x7a4206*/
      v13[0] = (int)v8; /*0x7a420e*/
      if ( v9 ) /*0x7a4212*/
        v3 = (int)(v4[2] - v9) >> 2; /*0x7a421d*/
      else
        v3 = 0; /*0x7a4214*/
      if ( v9 && v3 < (int)(v4[3] - v9) >> 2 ) /*0x7a422e*/
      {
        v10 = (float **)v4[2]; /*0x7a4230*/
        *v10 = v8; /*0x7a4233*/
        v4[2] = (unsigned int)(v10 + 1); /*0x7a4238*/
      }
      else
      {
        v3 = v4[2]; /*0x7a423d*/
        if ( v9 > v3 ) /*0x7a4242*/
          _invalid_parameter_noinfo(0, v3, (int)v4); /*0x7a4244*/
        OB_stVector4_InsertOne_010201A0(v4, (unsigned int **)&v14, v4, (_DWORD *)v3, v13); /*0x7a4257*/
      }
      v21 = (OB_CTreeFileAccess_010201A0 *)((char *)v21 + 0xFFFFFFFF); /*0x7a425c*/
    }
    while ( v21 ); /*0x7a4261*/
  }
  result = OB_CTreeFileAccess_ReadDword_010201A0(a3); /*0x7a4265*/
  if ( result != 0x3F7 ) /*0x7a426f*/
  {
    LODWORD(v12) = 0x15;                        // 2026-05-21 SpeedTreeOBSE core malformed pass: ParseBranchInfo requires 1015 after the counted compact branch levels; missing or displaced 1015 is a core malformed failure before stock load. /*0x7a4271*/
    v18 = 0xF; /*0x7a427c*/
    v17 = 0; /*0x7a4284*/
    v16 = 0; /*0x7a4288*/
    OB_stString28_AssignBytes_010201A0(&v15, v3, "malformed branch data", v12); /*0x7a428c*/
    v20 = 0; /*0x7a429b*/
    OB_IdvFileError_Ctor_010201A0((std::exception *)v19, &v15, 0); /*0x7a429f*/
    ThrowException__((DWORD)v19, &_TI3_AVIdvFileError__); /*0x7a42ae*/
  }
  return result; /*0x7a42b3*/
}
