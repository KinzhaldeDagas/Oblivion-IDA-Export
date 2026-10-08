void *__thiscall OB_NiAGDDataBlock_Allocate(OB_NiAGDDataBlock *this, unsigned int byteCount)
{
  if ( byteCount ) /*0x725fa6*/
    return (void *)FormHeapAlloc(byteCount); /*0x725fa9*/
  else
    return 0; /*0x725fb4*/
}
