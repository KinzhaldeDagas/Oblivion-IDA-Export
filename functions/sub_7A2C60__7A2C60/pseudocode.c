// 2026-05-25 fidelity note: Oblivion stock 16000 flare-info parser is bounded by the existing CTreeEngine branch-info pointer-vector count and requires 16001 after fixed 16002..16012 records per entry. Compatibility mirror must not treat unknown branch count as a free-running record stream; standalone unknown count is accepted only as zero-entry/end-token form.
int __thiscall OB_CTreeEngine_ParseFlareInfo_010201A0(OB_CTreeEngine_010201A0 *this, OB_CTreeFileAccess_010201A0 *file)
{
  unsigned int v2; // ebp
  OB_stVector16_010201A0 *p_branchInfoVector; // esi
  void *begin; // ecx
  void *v5; // ecx
  int v6; // ebx
  void *v7; // ecx
  int v8; // ebx
  void *v9; // ecx
  int v10; // ebx
  void *v11; // ecx
  int v12; // ebx
  void *v13; // ecx
  int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  int result; // eax
  rsize_t v22; // [esp-4h] [ebp-ACh]
  int v23; // [esp+14h] [ebp-94h] BYREF
  char v24; // [esp+18h] [ebp-90h]
  int v25; // [esp+28h] [ebp-80h]
  int v26; // [esp+2Ch] [ebp-7Ch]
  _BYTE v27[40]; // [esp+30h] [ebp-78h] BYREF
  int v28; // [esp+58h] [ebp-50h] BYREF
  char v29; // [esp+5Ch] [ebp-4Ch]
  int v30; // [esp+6Ch] [ebp-3Ch]
  int v31; // [esp+70h] [ebp-38h]
  _BYTE v32[40]; // [esp+74h] [ebp-34h] BYREF
  int v33; // [esp+A4h] [ebp-4h]

  v2 = 0; /*0x7a2c94*/
  p_branchInfoVector = &this->branchInfoVector; /*0x7a2c96*/
  while ( 1 ) /*0x7a2ca0*/
  {
    begin = p_branchInfoVector->begin; /*0x7a2ca0*/
    if ( !begin || v2 >= ((char *)p_branchInfoVector->end - (char *)begin) >> 2 ) /*0x7a2cb7*/
      break; /*0x7a2cb7*/
    if ( OB_CTreeFileAccess_ReadDword_010201A0(file) != 0x3E82 ) /*0x7a2cc9*/
    {
      LODWORD(v22) = 0x14; /*0x7a2eff*/
      v26 = 0xF; /*0x7a2f0a*/
      v25 = 0; /*0x7a2f12*/
      v24 = 0; /*0x7a2f16*/
      OB_stString28_AssignBytes_010201A0(&v23, (int)file, "malformed flare info", v22); /*0x7a2f1b*/
      v33 = 0; /*0x7a2f2a*/
      OB_IdvFileError_Ctor_010201A0((std::exception *)v27, &v23, 0); /*0x7a2f31*/
      ThrowException__((DWORD)v27, &_TI3_AVIdvFileError__); /*0x7a2f40*/
    }
    v5 = p_branchInfoVector->begin; /*0x7a2ccf*/
    if ( !v5 || v2 >= ((char *)p_branchInfoVector->end - (char *)v5) >> 2 ) /*0x7a2ce0*/
      _invalid_parameter_noinfo(0, (int)file, (int)p_branchInfoVector); /*0x7a2ce2*/
    v6 = (int)p_branchInfoVector->begin + 4 * v2; /*0x7a2cf3*/
    *(float *)(*(_DWORD *)v6 + 0x24) = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7a2cfe*/
    if ( OB_CTreeFileAccess_ReadDword_010201A0(file) != 0x3E83 ) /*0x7a2d0b*/
    {
      LODWORD(v22) = 0x14; /*0x7a2f45*/
      v26 = 0xF; /*0x7a2f50*/
      v25 = 0; /*0x7a2f58*/
      v24 = 0; /*0x7a2f60*/
      OB_stString28_AssignBytes_010201A0(&v23, (int)file, "malformed flare info", v22); /*0x7a2f65*/
      v33 = 1; /*0x7a2f75*/
      OB_IdvFileError_Ctor_010201A0((std::exception *)v27, &v23, 0); /*0x7a2f80*/
      ThrowException__((DWORD)v27, &_TI3_AVIdvFileError__); /*0x7a2f8f*/
    }
    v7 = p_branchInfoVector->begin; /*0x7a2d11*/
    if ( !v7 || v2 >= ((char *)p_branchInfoVector->end - (char *)v7) >> 2 ) /*0x7a2d22*/
      _invalid_parameter_noinfo(v6, (int)file, (int)p_branchInfoVector); /*0x7a2d24*/
    v8 = (int)p_branchInfoVector->begin + 4 * v2; /*0x7a2d35*/
    *(_DWORD *)(*(_DWORD *)v8 + 0x28) = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a2d3e*/
    if ( OB_CTreeFileAccess_ReadDword_010201A0(file) != 0x3E84 ) /*0x7a2d4d*/
    {
      LODWORD(v22) = 0x14; /*0x7a2f94*/
      v26 = 0xF; /*0x7a2f9f*/
      v25 = 0; /*0x7a2fa7*/
      v24 = 0; /*0x7a2faf*/
      OB_stString28_AssignBytes_010201A0(&v23, (int)file, "malformed flare info", v22); /*0x7a2fb4*/
      v33 = 2; /*0x7a2fc4*/
      OB_IdvFileError_Ctor_010201A0((std::exception *)v27, &v23, 0); /*0x7a2fcf*/
      ThrowException__((DWORD)v27, &_TI3_AVIdvFileError__); /*0x7a2fde*/
    }
    v9 = p_branchInfoVector->begin; /*0x7a2d53*/
    if ( !v9 || v2 >= ((char *)p_branchInfoVector->end - (char *)v9) >> 2 ) /*0x7a2d64*/
      _invalid_parameter_noinfo(v8, (int)file, (int)p_branchInfoVector); /*0x7a2d66*/
    v10 = (int)p_branchInfoVector->begin + 4 * v2; /*0x7a2d77*/
    *(float *)(*(_DWORD *)v10 + 0x2C) = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7a2d82*/
    if ( OB_CTreeFileAccess_ReadDword_010201A0(file) != 0x3E85 ) /*0x7a2d8f*/
    {
      LODWORD(v22) = 0x14; /*0x7a2fe3*/
      v26 = 0xF; /*0x7a2fee*/
      v25 = 0; /*0x7a2ff6*/
      v24 = 0; /*0x7a2ffe*/
      OB_stString28_AssignBytes_010201A0(&v23, (int)file, "malformed flare info", v22); /*0x7a3003*/
      v33 = 3; /*0x7a3013*/
      OB_IdvFileError_Ctor_010201A0((std::exception *)v27, &v23, 0); /*0x7a301e*/
      ThrowException__((DWORD)v27, &_TI3_AVIdvFileError__); /*0x7a302d*/
    }
    v11 = p_branchInfoVector->begin; /*0x7a2d95*/
    if ( !v11 || v2 >= ((char *)p_branchInfoVector->end - (char *)v11) >> 2 ) /*0x7a2da6*/
      _invalid_parameter_noinfo(v10, (int)file, (int)p_branchInfoVector); /*0x7a2da8*/
    v12 = (int)p_branchInfoVector->begin + 4 * v2; /*0x7a2db9*/
    *(float *)(*(_DWORD *)v12 + 0x30) = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7a2dc4*/
    if ( OB_CTreeFileAccess_ReadDword_010201A0(file) != 0x3E86 ) /*0x7a2dd1*/
    {
      sub_414750((int)&v23, "malformed flare info"); /*0x7a303b*/
      v33 = 4; /*0x7a304b*/
      OB_IdvFileError_Ctor_010201A0((std::exception *)v27, &v23, 0); /*0x7a3056*/
      ThrowException__((DWORD)v27, &_TI3_AVIdvFileError__); /*0x7a3065*/
    }
    v13 = p_branchInfoVector->begin; /*0x7a2dd7*/
    if ( !v13 || v2 >= ((char *)p_branchInfoVector->end - (char *)v13) >> 2 ) /*0x7a2de8*/
      _invalid_parameter_noinfo(v12, (int)file, (int)p_branchInfoVector); /*0x7a2dea*/
    v14 = (int)p_branchInfoVector->begin + 4 * v2; /*0x7a2dfb*/
    *(float *)(*(_DWORD *)v14 + 0x34) = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7a2e04*/
    if ( OB_CTreeFileAccess_ReadDword_010201A0(file) != 0x3E87 ) /*0x7a2e13*/
    {
      sub_414750((int)&v23, "malformed flare info"); /*0x7a3073*/
      v33 = 5; /*0x7a3083*/
      OB_IdvFileError_Ctor_010201A0((std::exception *)v27, &v23, 0); /*0x7a308e*/
      ThrowException__((DWORD)v27, &_TI3_AVIdvFileError__); /*0x7a309d*/
    }
    v15 = sub_54F7A0(p_branchInfoVector, v2); /*0x7a2e23*/
    *(float *)(*(_DWORD *)v15 + 0x38) = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7a2e2e*/
    if ( OB_CTreeFileAccess_ReadDword_010201A0(file) != 0x3E88 ) /*0x7a2e3b*/
    {
      sub_414750((int)&v23, "malformed flare info"); /*0x7a30ab*/
      v33 = 6; /*0x7a30bb*/
      OB_IdvFileError_Ctor_010201A0((std::exception *)v27, &v23, 0); /*0x7a30c6*/
      ThrowException__((DWORD)v27, &_TI3_AVIdvFileError__); /*0x7a30d5*/
    }
    v16 = sub_54F7A0(p_branchInfoVector, v2); /*0x7a2e4b*/
    *(float *)(*(_DWORD *)v16 + 0x3C) = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7a2e56*/
    if ( OB_CTreeFileAccess_ReadDword_010201A0(file) != 0x3E89 ) /*0x7a2e63*/
    {
      sub_414750((int)&v23, "malformed flare info"); /*0x7a30e3*/
      v33 = 7; /*0x7a30f3*/
      OB_IdvFileError_Ctor_010201A0((std::exception *)v27, &v23, 0); /*0x7a30fe*/
      ThrowException__((DWORD)v27, &_TI3_AVIdvFileError__); /*0x7a310d*/
    }
    v17 = sub_54F7A0(p_branchInfoVector, v2); /*0x7a2e73*/
    *(float *)(*(_DWORD *)v17 + 0x40) = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7a2e7c*/
    if ( OB_CTreeFileAccess_ReadDword_010201A0(file) != 0x3E8A ) /*0x7a2e8b*/
    {
      sub_414750((int)&v23, "malformed flare info"); /*0x7a311b*/
      v33 = 8; /*0x7a312b*/
      OB_IdvFileError_Ctor_010201A0((std::exception *)v27, &v23, 0); /*0x7a3136*/
      ThrowException__((DWORD)v27, &_TI3_AVIdvFileError__); /*0x7a3145*/
    }
    v18 = sub_54F7A0(p_branchInfoVector, v2); /*0x7a2e9b*/
    *(float *)(*(_DWORD *)v18 + 0x44) = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7a2ea6*/
    if ( OB_CTreeFileAccess_ReadDword_010201A0(file) != 0x3E8B ) /*0x7a2eb3*/
    {
      sub_414750((int)&v23, "malformed flare info"); /*0x7a3153*/
      v33 = 9; /*0x7a3163*/
      OB_IdvFileError_Ctor_010201A0((std::exception *)v27, &v23, 0); /*0x7a316e*/
      ThrowException__((DWORD)v27, &_TI3_AVIdvFileError__); /*0x7a317d*/
    }
    v19 = sub_54F7A0(p_branchInfoVector, v2); /*0x7a2ec3*/
    *(float *)(*(_DWORD *)v19 + 0x48) = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7a2ece*/
    if ( OB_CTreeFileAccess_ReadDword_010201A0(file) != 0x3E8C ) /*0x7a2edb*/
    {
      sub_414750((int)&v23, "malformed flare info"); /*0x7a318b*/
      v33 = 0xA; /*0x7a319b*/
      OB_IdvFileError_Ctor_010201A0((std::exception *)v27, &v23, 0); /*0x7a31a6*/
      ThrowException__((DWORD)v27, &_TI3_AVIdvFileError__); /*0x7a31b5*/
    }
    v20 = sub_54F7A0(p_branchInfoVector, v2); /*0x7a2eeb*/
    *(float *)(*(_DWORD *)v20 + 0x4C) = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7a2ef4*/
    ++v2; /*0x7a2ef7*/
  }
  result = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a31bc*/
  if ( result != 0x3E81 ) /*0x7a31c6*/
  {
    LODWORD(v22) = 0x14; /*0x7a31c8*/
    v31 = 0xF; /*0x7a31d3*/
    v30 = 0; /*0x7a31db*/
    v29 = 0; /*0x7a31df*/
    OB_stString28_AssignBytes_010201A0(&v28, (int)file, "malformed flare info", v22); /*0x7a31e4*/
    v33 = 0xB; /*0x7a31f3*/
    OB_IdvFileError_Ctor_010201A0((std::exception *)v32, &v28, 0); /*0x7a31fe*/
    ThrowException__((DWORD)v32, &_TI3_AVIdvFileError__); /*0x7a320d*/
  }
  return result; /*0x7a3212*/
}
