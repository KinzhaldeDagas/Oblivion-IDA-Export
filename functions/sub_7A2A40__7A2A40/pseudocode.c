// 2026-05-25 fidelity note: Oblivion stock 15000 texture-controls parser is bounded by the existing CTreeEngine branch-info pointer-vector count and requires 15001 after that loop. Compatibility mirror must not treat unknown branch count as a free-running record stream; standalone unknown count is accepted only as zero-entry/end-token form.
int __thiscall OB_CTreeEngine_ParseTextureControls_010201A0(
        OB_CTreeEngine_010201A0 *this,
        OB_CTreeFileAccess_010201A0 *file)
{
  unsigned int v3; // ebx
  void *begin; // ecx
  unsigned int v5; // ebp
  int byteBufferBegin; // ecx
  void *v7; // ecx
  int v8; // ebx
  void *v9; // ecx
  char *v10; // ebp
  int result; // eax
  rsize_t v12; // [esp-4h] [ebp-B4h]
  bool v13; // [esp+17h] [ebp-99h]
  unsigned int i; // [esp+18h] [ebp-98h]
  int v15; // [esp+1Ch] [ebp-94h] BYREF
  char v16; // [esp+20h] [ebp-90h]
  int v17; // [esp+30h] [ebp-80h]
  int v18; // [esp+34h] [ebp-7Ch]
  int v19; // [esp+38h] [ebp-78h] BYREF
  char v20; // [esp+3Ch] [ebp-74h]
  int v21; // [esp+4Ch] [ebp-64h]
  int v22; // [esp+50h] [ebp-60h]
  _BYTE v23[40]; // [esp+54h] [ebp-5Ch] BYREF
  _BYTE v24[40]; // [esp+7Ch] [ebp-34h] BYREF
  int v25; // [esp+ACh] [ebp-4h]

  v3 = 0; /*0x7a2a76*/
  for ( i = 0; ; v3 = i ) /*0x7a2a78*/
  {
    begin = this->branchInfoVector.begin; /*0x7a2a80*/
    if ( !begin || v3 >= ((char *)this->branchInfoVector.end - (char *)begin) >> 2 ) /*0x7a2a97*/
      break; /*0x7a2a97*/
    if ( OB_CTreeFileAccess_ReadDword_010201A0(file) != 0x3A9A ) /*0x7a2aa9*/
    {
      LODWORD(v12) = 0x1A; /*0x7a2b4c*/
      v18 = 0xF; /*0x7a2b57*/
      v17 = 0; /*0x7a2b5f*/
      v16 = 0; /*0x7a2b63*/
      OB_stString28_AssignBytes_010201A0(&v15, (int)file, "malformed texture controls", v12); /*0x7a2b68*/
      v25 = 0; /*0x7a2b77*/
      OB_IdvFileError_Ctor_010201A0((std::exception *)v23, &v15, 0); /*0x7a2b7e*/
      ThrowException__((DWORD)v23, &_TI3_AVIdvFileError__); /*0x7a2b8d*/
    }
    v5 = file->cursorOffset++; /*0x7a2aaf*/
    byteBufferBegin = file->byteBufferBegin; /*0x7a2ab6*/
    if ( !byteBufferBegin || v5 >= file->byteBufferEnd - byteBufferBegin ) /*0x7a2ac4*/
      _invalid_parameter_noinfo(v3, (int)file, (int)this); /*0x7a2ac6*/
    v7 = this->branchInfoVector.begin; /*0x7a2ad2*/
    v13 = *(_BYTE *)(file->byteBufferBegin + v5) != 0; /*0x7a2ad5*/
    if ( !v7 || v3 >= ((char *)this->branchInfoVector.end - (char *)v7) >> 2 ) /*0x7a2ae8*/
      _invalid_parameter_noinfo(v3, (int)file, (int)this); /*0x7a2aea*/
    v8 = 4 * v3; /*0x7a2af8*/
    *(_BYTE *)(*(_DWORD *)((char *)this->branchInfoVector.begin + v8) + 0x1E) = v13; /*0x7a2afd*/
    if ( OB_CTreeFileAccess_ReadDword_010201A0(file) != 0x3A9B ) /*0x7a2b0c*/
    {
      LODWORD(v12) = 0x1A; /*0x7a2b92*/
      v18 = 0xF; /*0x7a2b9d*/
      v17 = 0; /*0x7a2ba5*/
      v16 = 0; /*0x7a2bad*/
      OB_stString28_AssignBytes_010201A0(&v15, (int)file, "malformed texture controls", v12); /*0x7a2bb2*/
      v25 = 1; /*0x7a2bc2*/
      OB_IdvFileError_Ctor_010201A0((std::exception *)v23, &v15, 0); /*0x7a2bcd*/
      ThrowException__((DWORD)v23, &_TI3_AVIdvFileError__); /*0x7a2bdc*/
    }
    v9 = this->branchInfoVector.begin; /*0x7a2b12*/
    if ( !v9 || i >= ((char *)this->branchInfoVector.end - (char *)v9) >> 2 ) /*0x7a2b25*/
      _invalid_parameter_noinfo(v8, (int)file, (int)this); /*0x7a2b27*/
    v10 = (char *)this->branchInfoVector.begin + v8; /*0x7a2b31*/
    ++i; /*0x7a2b3b*/
    *(float *)(*(_DWORD *)v10 + 0x20) = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7a2b40*/
  }
  result = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a2be3*/
  if ( result != 0x3A99 ) /*0x7a2bed*/
  {
    LODWORD(v12) = 0x1A; /*0x7a2bef*/
    v22 = 0xF; /*0x7a2bfa*/
    v21 = 0; /*0x7a2c02*/
    v20 = 0; /*0x7a2c06*/
    OB_stString28_AssignBytes_010201A0(&v19, (int)file, "malformed texture controls", v12); /*0x7a2c0b*/
    v25 = 2; /*0x7a2c1d*/
    OB_IdvFileError_Ctor_010201A0((std::exception *)v24, &v19, 0); /*0x7a2c28*/
    ThrowException__((DWORD)v24, &_TI3_AVIdvFileError__); /*0x7a2c3a*/
  }
  return result; /*0x7a2c3f*/
}
