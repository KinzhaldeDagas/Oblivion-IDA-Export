int *__thiscall sub_4A19F0(int *this, int *a2)
{
  int v2; // eax
  bool v3; // zf

  v2 = *a2;
  v3 = *a2 == 0;
  *this = *a2;
  if ( !v3 )
    InterlockedIncrement((volatile LONG *)(v2 + 4));
  return this;
}
