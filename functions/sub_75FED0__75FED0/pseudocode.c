NiD3DTextureStage *__thiscall sub_75FED0(_DWORD *this, NiD3DTextureStage *a2, NiD3DTextureStage **a3)
{
  NiD3DTextureStage *result; // eax
  int v5; // ecx
  int v6; // edx
  NiD3DTextureStage **v7; // esi
  NiD3DTextureStage *v8; // ecx
  bool v9; // zf

  if ( (unk_B4204C & 1) == 0 ) /*0x75fee0*/
  {
    unk_B4204C |= 1u; /*0x75fee2*/
    unk_B42048 = 0; /*0x75feed*/
    atexit(sub_A26D40); /*0x75fef7*/
  }
  result = a2; /*0x75ff03*/
  if ( (unsigned int)a2 < *((unsigned __int16 *)this + 5) ) /*0x75ff0d*/
  {
    v5 = unk_B42048; /*0x75ff26*/
    v6 = *(this + 1); /*0x75ff2e*/
    if ( *a3 == (NiD3DTextureStage *)unk_B42048 ) /*0x75ff31*/
    {
      if ( *(_DWORD *)(v6 + 4 * (_DWORD)a2) != v5 ) /*0x75ff41*/
        --*((_WORD *)this + 6); /*0x75ff43*/
    }
    else if ( *(_DWORD *)(v6 + 4 * (_DWORD)a2) == v5 ) /*0x75ff36*/
    {
      ++*((_WORD *)this + 6); /*0x75ff38*/
    }
  }
  else
  {
    *((_WORD *)this + 5) = (_WORD)a2 + 1; /*0x75ff12*/
    if ( *a3 != (NiD3DTextureStage *)unk_B42048 ) /*0x75ff1e*/
      ++*((_WORD *)this + 6); /*0x75ff20*/
  }
  v7 = (NiD3DTextureStage **)(*(this + 1) + 4 * (_DWORD)a2); /*0x75ff4c*/
  v8 = *v7; /*0x75ff4f*/
  if ( *v7 != *a3 ) /*0x75ff53*/
  {
    if ( v8 ) /*0x75ff57*/
    {
      v9 = v8[7].Unk08-- == 1; /*0x75ff59*/
      if ( v9 ) /*0x75ff5d*/
        sub_772560(v8); /*0x75ff5f*/
    }
    result = *a3; /*0x75ff64*/
    v9 = *a3 == 0; /*0x75ff66*/
    *v7 = *a3; /*0x75ff68*/
    if ( !v9 ) /*0x75ff6a*/
      ++result[7].Unk08; /*0x75ff6c*/
  }
  return result; /*0x75ff6f*/
}
