int *__thiscall sub_434A70(int *this, const char *a2, int a3)
{
  int v4; // eax
  const char *v5; // ecx
  _BYTE *v6; // edx
  char v7; // al
  int v8; // edi

  *(this + 2) = 0;
  v4 = FormHeapAlloc(strlen(a2) + 1);
  *this = v4;
  v5 = a2;
  v6 = (_BYTE *)v4;
  do
  {
    v7 = *v5;
    *v6++ = *v5++;
  }
  while ( v7 );
  v8 = *(this + 2);
  if ( v8 != a3 )
  {
    if ( v8 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
        (**(void (__thiscall ***)(int, int))v8)(v8, 1);
    }
    *(this + 2) = a3;
    if ( a3 )
      InterlockedIncrement((volatile LONG *)(a3 + 4));
  }
  *(this + 1) = 0;
  return this;
}
