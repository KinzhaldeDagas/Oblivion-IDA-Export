int __thiscall sub_6B9610(int ***this, unsigned int a2)
{
  int result; // eax
  int **v3; // esi

  result = (unsigned int)*(this + 9) / a2;
  v3 = *(this + 5);
  for ( *(this + 9) = (int **)result; v3; v3 = (int **)*v3 )
    result = sub_6B9610(v3[2], a2);
  return result;
}
