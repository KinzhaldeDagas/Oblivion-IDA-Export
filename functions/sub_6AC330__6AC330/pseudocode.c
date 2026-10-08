MEF_U32PointerMapEntry32 *__thiscall sub_6AC330(_DWORD *this, unsigned int keyOut)
{
  int v3; // ecx
  unsigned int v4; // edx
  unsigned int v5; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // ecx
  MEF_U32PointerMapEntry32 *result; // eax
  int v9; // edi
  void *valueOut; // [esp+8h] [ebp-8h] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+Ch] [ebp-4h] BYREF

  v3 = *(this + 0xC0); /*0x6ac336*/
  v4 = *(_DWORD *)(v3 + 4); /*0x6ac33c*/
  v5 = 0; /*0x6ac33f*/
  valueOut = 0; /*0x6ac344*/
  if ( v4 ) /*0x6ac34c*/
  {
    v6 = *(_DWORD **)(v3 + 8); /*0x6ac34e*/
    v7 = v6; /*0x6ac351*/
    while ( !*v7 ) /*0x6ac356*/
    {
      ++v5; /*0x6ac358*/
      ++v7; /*0x6ac35b*/
      if ( v5 >= v4 ) /*0x6ac360*/
        goto LABEL_5; /*0x6ac360*/
    }
    result = (MEF_U32PointerMapEntry32 *)v6[v5]; /*0x6ac3b2*/
  }
  else
  {
LABEL_5:
    result = 0; /*0x6ac362*/
  }
  position = result; /*0x6ac366*/
  if ( result ) /*0x6ac36a*/
  {
    v9 = keyOut; /*0x6ac36c*/
    do /*0x6ac3a8*/
    {
      result = (MEF_U32PointerMapEntry32 *)NiTMap_U32Pointer_GetNextEntry( /*0x6ac385*/
                                             (MEF_U32PointerMapLayout32 *)*(this + 0xC0),
                                             &position,
                                             &keyOut,
                                             &valueOut);
      if ( (v9 & *(_DWORD *)valueOut) != 0 ) /*0x6ac390*/
      {
        sub_6B6AC0(valueOut); /*0x6ac392*/
        result = (MEF_U32PointerMapEntry32 *)sub_6AA9C0(this, (unsigned int **)&valueOut); /*0x6ac39e*/
      }
    }
    while ( position ); /*0x6ac3a8*/
  }
  return result; /*0x6ac3aa*/
}
