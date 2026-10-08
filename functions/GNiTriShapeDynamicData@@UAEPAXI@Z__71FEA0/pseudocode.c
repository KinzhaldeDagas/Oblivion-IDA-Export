NiTriShapeData *__thiscall NiTriShapeData_ScalarDeletingDestructor(NiTriShapeData *self, unsigned int flags)
{
  NiTriShapeData_Destruct(self); /*0x71fea3*/
  if ( (flags & 1) != 0 ) /*0x71fead*/
    FormHeapFree((unsigned int)self); /*0x71feb0*/
  return self; /*0x71feba*/
}
