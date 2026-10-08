int __thiscall sub_6A9AA0(_DWORD *this)
{
  int v2; // edx
  unsigned int v3; // ecx
  unsigned int v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // edx
  int result; // eax
  int *v8; // ecx
  unsigned int v9; // eax
  void *valueOut; // [esp+8h] [ebp-Ch] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+Ch] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+10h] [ebp-4h] BYREF

  v2 = *(this + 0xC0); /*0x6a9aa7*/
  v3 = *(_DWORD *)(v2 + 4); /*0x6a9aad*/
  v4 = 0; /*0x6a9ab0*/
  valueOut = 0; /*0x6a9ab4*/
  if ( v3 ) /*0x6a9abc*/
  {
    v5 = *(_DWORD **)(v2 + 8); /*0x6a9abe*/
    v6 = v5; /*0x6a9ac1*/
    while ( !*v6 ) /*0x6a9ac6*/
    {
      ++v4; /*0x6a9ac8*/
      ++v6; /*0x6a9acb*/
      if ( v4 >= v3 ) /*0x6a9ad0*/
        goto LABEL_5; /*0x6a9ad0*/
    }
    result = v5[v4]; /*0x6a9b18*/
  }
  else
  {
LABEL_5:
    result = 0; /*0x6a9ad2*/
  }
  position = (MEF_U32PointerMapEntry32 *)result; /*0x6a9ad6*/
  if ( result ) /*0x6a9ada*/
  {
    do /*0x6a9b29*/
    {
      NiTMap_U32Pointer_GetNextEntry((MEF_U32PointerMapLayout32 *)*(this + 0xC0), &position, &keyOut, &valueOut); /*0x6a9af5*/
      v8 = (int *)valueOut; /*0x6a9afa*/
      result = *(_DWORD *)valueOut; /*0x6a9afe*/
      if ( (*(_DWORD *)valueOut & 0x10) != 0 ) /*0x6a9b02*/
      {
        v9 = result & 0xFFFFFDFF; /*0x6a9b04*/
        *(_DWORD *)valueOut = v9; /*0x6a9b0b*/
        if ( (v9 & 1) != 0 ) /*0x6a9b0d*/
          result = sub_6B7130((int)v8, 0); /*0x6a9b11*/
        else
          result = sub_6B6E60(v8, 1); /*0x6a9b1f*/
      }
    }
    while ( position ); /*0x6a9b29*/
  }
  return result; /*0x6a9b2b*/
}
