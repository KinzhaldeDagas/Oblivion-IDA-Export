// Destroys a FaceGenMatrix by freeing the coefficient allocation at +0x0C, then clears begin/end/capacity-end.
void __thiscall FaceGenMatrix_Destruct(FaceGenMatrix *this)
{
  if ( this->begin ) /*0x43ace3*/
    FormHeapFree((unsigned int)this->begin); /*0x43aceb*/
  this->begin = 0; /*0x43acf3*/
  this->end = 0; /*0x43acfa*/
  this->capacityEnd = 0; /*0x43ad01*/
}
