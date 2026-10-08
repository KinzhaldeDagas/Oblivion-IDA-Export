// Return the number of 64-byte basis records in one loaded EGT bank.
unsigned int __thiscall FaceGenEgtBasisBank_GetCount(const FaceGenEgtBasisBank *self)
{
  void *begin; // edx

  begin = self->begin; /*0x556300*/
  if ( begin ) /*0x556305*/
    return ((char *)self->end - (char *)begin) >> 6; /*0x55630f*/
  else
    return 0; /*0x556307*/
}
