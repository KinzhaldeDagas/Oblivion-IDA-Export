// Destroy one shared-normal index-pool block and its linked successors.
NiSharedNormalIndexPoolBlock *__thiscall NiSharedNormalIndexPoolBlock_Destruct(
        NiSharedNormalIndexPoolBlock *self,
        unsigned __int8 freeThis)
{
  NiSharedNormalIndexPoolBlock *next; // ecx

  FormHeapFree((unsigned int)self->begin); /*0x71fb06*/
  next = self->next; /*0x71fb0b*/
  if ( next ) /*0x71fb13*/
    NiSharedNormalIndexPoolBlock_Destruct(next, 1u); /*0x71fb17*/
  if ( (freeThis & 1) != 0 ) /*0x71fb21*/
    FormHeapFree((unsigned int)self); /*0x71fb24*/
  return self; /*0x71fb2e*/
}
