OblivionPostLoadFormArray *__thiscall OblivionPostLoadFormArray_Initialize(
        OblivionPostLoadFormArray *self,
        unsigned int capacity,
        unsigned int growBy)
{
  int v4; // ecx
  __int64 v5; // rax

  self->growBy = growBy; /*0x45267b*/
  v4 = 0; /*0x45267e*/
  self->vtable = &NiTLargeArray<FormAndFlags *>::`vftable'; /*0x452682*/
  self->capacity = capacity; /*0x452688*/
  self->count = 0; /*0x45268b*/
  self->nonzeroCount = 0; /*0x45268e*/
  if ( capacity ) /*0x452691*/
  {
    v5 = 4LL * capacity; /*0x452698*/
    LOBYTE(v4) = HIDWORD(v5) != 0; /*0x45269a*/
    self->data = (OblivionPostLoadFormRecord **)FormHeapAlloc(v5 | -v4); /*0x4526a7*/
  }
  else
  {
    self->data = 0; /*0x4526b3*/
  }
  return self; /*0x4526af*/
}
