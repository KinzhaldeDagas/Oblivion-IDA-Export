int __thiscall HighProcess::SetCurrentAction(HighProcess *this, SInt16 a2, BSAnimGroupSequence *a3)
{
  int result; // eax

  LOWORD(result) = a2;
  this->currentAction = a2;
  this->animgroupSequence = a3;
  return result;
}
