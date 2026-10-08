// Initialize one 16-byte EGT basis-bank container with an empty begin/end/capacity range.
FaceGenEgtBasisBank *__thiscall FaceGenEgtBasisBank_Construct(FaceGenEgtBasisBank *self)
{
  self->begin = 0; /*0x6ef4a4*/
  self->end = 0; /*0x6ef4a7*/
  self->capacityEnd = 0; /*0x6ef4aa*/
  return self; /*0x6ef4ad*/
}
