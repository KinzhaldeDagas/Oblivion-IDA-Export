// Bounds-check and return a pointer to one 64-byte basis record in a loaded EGT bank.
void *__thiscall FaceGenEgtBasisBank_GetAt(FaceGenEgtBasisBank *self, unsigned int index)
{
  int v2; // ebx
  void *begin; // ecx

  begin = self->begin; /*0x556323*/
  if ( !begin || index >= ((char *)self->end - (char *)begin) >> 6 ) /*0x556339*/
    _invalid_parameter_noinfo(v2, index, (int)self); /*0x55633b*/
  return (char *)self->begin + 0x40 * index; /*0x556348*/
}
