// Verified: iterates every connected-point list bucket and calls sub_67EDA0 on each node. That helper clears coordinate/temporary fields and masks the flag byte at +0x10; exact field meanings remain Unknown.
void __thiscall sub_4E8E80(_DWORD *this)
{
  unsigned int v1; // edx
  MEF_U32PointerMapLayout32 *v2; // edi
  unsigned int v3; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  MEF_U32PointerMapEntry32 *v6; // eax
  _DWORD *v7; // esi
  void *valueOut; // [esp+8h] [ebp-Ch] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+Ch] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+10h] [ebp-4h] BYREF

  v1 = *(this + 8); /*0x4e8e80*/
  v2 = (MEF_U32PointerMapLayout32 *)(this + 7); /*0x4e8e88*/
  v3 = 0; /*0x4e8e8b*/
  if ( v1 ) /*0x4e8e8f*/
  {
    v4 = (_DWORD *)*(this + 9); /*0x4e8e91*/
    v5 = v4; /*0x4e8e94*/
    while ( !*v5 ) /*0x4e8e99*/
    {
      ++v3; /*0x4e8e9b*/
      ++v5; /*0x4e8e9e*/
      if ( v3 >= v1 ) /*0x4e8ea3*/
        goto LABEL_5; /*0x4e8ea3*/
    }
    v6 = (MEF_U32PointerMapEntry32 *)v4[v3]; /*0x4e8efc*/
  }
  else
  {
LABEL_5:
    v6 = 0; /*0x4e8ea5*/
  }
  position = v6; /*0x4e8ea9*/
  while ( position ) /*0x4e8ead*/
  {
    valueOut = 0; /*0x4e8ec1*/
    NiTMap_U32Pointer_GetNextEntry(v2, &position, &keyOut, &valueOut); /*0x4e8ec9*/
    v7 = valueOut; /*0x4e8ece*/
    if ( valueOut ) /*0x4e8ed4*/
    {
      do /*0x4e8eed*/
      {
        if ( !v7[1] && !*v7 ) /*0x4e8edc*/
          break; /*0x4e8edf*/
        sub_67EDA0((_BYTE *)*v7); /*0x4e8ee3*/
        v7 = (_DWORD *)v7[1]; /*0x4e8ee8*/
      }
      while ( v7 ); /*0x4e8eed*/
    }
  }
}
