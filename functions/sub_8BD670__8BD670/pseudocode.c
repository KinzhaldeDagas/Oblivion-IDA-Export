int *__thiscall sub_8BD670(int **this, char a2)
{
  int *v3; // ecx
  int *result; // eax

  if ( a2 )
  {
    v3 = *(this + 3);
    if ( v3 )
      result = sub_8BD600(v3, 1);
    *(this + 3) = 0;
  }
  return result;
}
