int __thiscall sub_6B9610(int ***this, unsigned int a2)
{
  int result; // eax
  int **v3; // esi

  result = (unsigned int)*(this + 9) / a2; /*0x6b961b*/
  v3 = *(this + 5); /*0x6b961d*/
  for ( *(this + 9) = (int **)result; v3; v3 = (int **)*v3 ) /*0x6b9625*/
    result = sub_6B9610((int ***)v3[2], a2); /*0x6b962b*/
  return result; /*0x6b9636*/
}
