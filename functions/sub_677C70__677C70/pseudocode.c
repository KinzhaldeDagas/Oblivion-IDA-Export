int *__thiscall sub_677C70(int *this, int *a2)
{
  int v2; // eax
  bool v3; // zf

  v2 = *this;
  v3 = *this == 0;
  *a2 = *this;
  if ( !v3 )
    InterlockedIncrement((volatile LONG *)(v2 + 4));
  return a2;
}
