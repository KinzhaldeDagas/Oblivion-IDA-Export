int sub_7C4CE0()
{
  int v0; // eax
  MEF_U32PointerMapEntry32 **buckets; // ecx
  MEF_U32PointerMapEntry32 *v2; // eax
  bool v3; // zf
  void *v4; // esi
  int result; // eax
  void *valueOut; // [esp+0h] [ebp-Ch] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+4h] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+8h] [ebp-4h] BYREF

  v0 = 0; /*0x7c4ce9*/
  if ( stru_B2CBC4.bucketCount ) /*0x7c4ce0*/
  {
    buckets = stru_B2CBC4.buckets; /*0x7c4cef*/
    while ( !buckets[v0] ) /*0x7c4cf9*/
    {
      if ( ++v0 >= stru_B2CBC4.bucketCount ) /*0x7c4d04*/
        goto LABEL_5; /*0x7c4d04*/
    }
    v2 = buckets[v0]; /*0x7c4d7c*/
  }
  else
  {
LABEL_5:
    v2 = 0; /*0x7c4d06*/
  }
  v3 = stru_B2CBC4.entryCount == 0; /*0x7c4d08*/
  position = v2; /*0x7c4d0f*/
  valueOut = 0; /*0x7c4d13*/
  if ( !v3 ) /*0x7c4d1a*/
  {
    if ( v2 ) /*0x7c4d1e*/
    {
      do /*0x7c4d57*/
      {
        NiTMap_U32Pointer_GetNextEntry(&stru_B2CBC4, &position, &keyOut, &valueOut); /*0x7c4d35*/
        v4 = valueOut; /*0x7c4d3a*/
        if ( valueOut ) /*0x7c4d40*/
        {
          sub_7C3850(valueOut); /*0x7c4d44*/
          FormHeapFree((unsigned int)v4); /*0x7c4d4a*/
        }
      }
      while ( position ); /*0x7c4d57*/
    }
  }
  result = NiTMap_Clear(&stru_B2CBC4); /*0x7c4d5f*/
  unk_B43348 = 0; /*0x7c4d64*/
  unk_B4334C = 0; /*0x7c4d6e*/
  return result; /*0x7c4d78*/
}
