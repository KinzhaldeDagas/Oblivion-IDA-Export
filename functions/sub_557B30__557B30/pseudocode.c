// Destroy all 64-byte records in an EGT basis bank, free its storage, and reset the range.
void __thiscall FaceGenEgtBasisBank_Destruct(FaceGenEgtBasisBank *self)
{
  void *begin; // eax

  begin = self->begin; /*0x557b33*/
  if ( begin ) /*0x557b38*/
  {
    FaceGenEgtBasisRecordArray_Destruct(begin, self->end); /*0x557b41*/
    FormHeapFree((unsigned int)self->begin); /*0x557b4a*/
  }
  self->begin = 0; /*0x557b52*/
  self->end = 0; /*0x557b59*/
  self->capacityEnd = 0; /*0x557b60*/
}
