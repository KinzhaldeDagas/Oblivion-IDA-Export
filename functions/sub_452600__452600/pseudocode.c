unsigned int __thiscall NiTMap_U32Pointer_GetNextEntry(
        MEF_U32PointerMapLayout32 *self,
        MEF_U32PointerMapEntry32 **position,
        unsigned int *keyOut,
        void **valueOut)
{
  unsigned int result; // eax
  int v6; // eax
  unsigned int bucketCount; // edx
  MEF_U32PointerMapEntry32 **v8; // ecx

  result = (unsigned int)*position; /*0x45260a*/
  *keyOut = (*position)->key; /*0x452611*/
  *valueOut = *(void **)(result + 8); /*0x45261a*/
  if ( *(_DWORD *)result ) /*0x45261c*/
  {
    *position = *(MEF_U32PointerMapEntry32 **)result; /*0x452622*/
  }
  else
  {
    v6 = (*((int (__thiscall **)(MEF_U32PointerMapLayout32 *, _DWORD))self->vtable + 1))(self, *(_DWORD *)(result + 4)); /*0x452634*/
    bucketCount = self->bucketCount; /*0x452636*/
    result = v6 + 1; /*0x452639*/
    if ( result >= bucketCount ) /*0x45263e*/
    {
LABEL_7:
      *position = 0; /*0x452656*/
    }
    else
    {
      v8 = &self->buckets[result]; /*0x452643*/
      while ( !*v8 ) /*0x45264a*/
      {
        ++result; /*0x45264c*/
        ++v8; /*0x45264f*/
        if ( result >= bucketCount ) /*0x452654*/
          goto LABEL_7; /*0x452654*/
      }
      *position = *v8; /*0x452661*/
    }
  }
  return result; /*0x452624*/
}
