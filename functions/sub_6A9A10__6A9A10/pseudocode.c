int __thiscall sub_6A9A10(_DWORD *this)
{
  int v2; // edx
  unsigned int v3; // ecx
  unsigned int v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // edx
  int result; // eax
  _DWORD **v8; // ecx
  unsigned int v9; // eax
  void *valueOut; // [esp+8h] [ebp-Ch] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+Ch] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+10h] [ebp-4h] BYREF

  v2 = *(this + 0xC0); /*0x6a9a17*/
  v3 = *(_DWORD *)(v2 + 4); /*0x6a9a1d*/
  v4 = 0; /*0x6a9a20*/
  valueOut = 0; /*0x6a9a24*/
  if ( v3 ) /*0x6a9a2c*/
  {
    v5 = *(_DWORD **)(v2 + 8); /*0x6a9a2e*/
    v6 = v5; /*0x6a9a31*/
    while ( !*v6 ) /*0x6a9a36*/
    {
      ++v4; /*0x6a9a38*/
      ++v6; /*0x6a9a3b*/
      if ( v4 >= v3 ) /*0x6a9a40*/
        goto LABEL_5; /*0x6a9a40*/
    }
    result = v5[v4]; /*0x6a9a88*/
  }
  else
  {
LABEL_5:
    result = 0; /*0x6a9a42*/
  }
  position = (MEF_U32PointerMapEntry32 *)result; /*0x6a9a46*/
  if ( result ) /*0x6a9a4a*/
  {
    do /*0x6a9a97*/
    {
      NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)*(this + 0xC0), &position, &keyOut, &valueOut); /*0x6a9a65*/
      v8 = (_DWORD **)valueOut; /*0x6a9a6a*/
      result = *(_DWORD *)valueOut; /*0x6a9a6e*/
      if ( (*(_DWORD *)valueOut & 0x10) != 0 ) /*0x6a9a72*/
      {
        v9 = result | 0x200; /*0x6a9a74*/
        *(_DWORD *)valueOut = v9; /*0x6a9a7b*/
        if ( (v9 & 1) != 0 ) /*0x6a9a7d*/
          result = sub_6B7130((int)v8, 1); /*0x6a9a81*/
        else
          result = sub_6B6AA0(v8); /*0x6a9a8d*/
      }
    }
    while ( position ); /*0x6a9a97*/
  }
  return result; /*0x6a9a99*/
}
