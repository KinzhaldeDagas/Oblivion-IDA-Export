const char **__thiscall sub_439140(const char **this, char *a2, int a3)
{
  int v4; // edi
  int v5; // eax
  char *v6; // ecx
  _BYTE *v7; // edx
  char v8; // al
  int *v9; // ebp
  int v10; // edi
  int v11; // eax
  bool v12; // zf
  void (__thiscall ***v13)(_DWORD, int); // edi

  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  v4 = (int)*(this + 2);
  if ( v4 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *(this + 2) = 0;
  }
  v5 = FormHeapAlloc(strlen(a2) + 1);
  *this = (const char *)v5;
  v6 = a2;
  v7 = (_BYTE *)v5;
  do
  {
    v8 = *v6;
    *v7++ = *v6++;
  }
  while ( v8 );
  v9 = sub_6CB240(&a3, a3, 0);
  v10 = (int)*(this + 1);
  if ( v10 != *v9 )
  {
    if ( v10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    }
    v11 = *v9;
    v12 = *v9 == 0;
    *(this + 1) = (const char *)*v9;
    if ( !v12 )
      InterlockedIncrement((volatile LONG *)(v11 + 4));
  }
  v13 = (void (__thiscall ***)(_DWORD, int))a3;
  if ( a3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(a3 + 4)) )
    {
      if ( v13 )
        (**v13)(v13, 1);
    }
  }
  if ( *(this + 1) )
    sub_436DA0(this, a2);
  else
    PrintError("Could not create ControllerManager Sequence for \"%s\".\r\n", *this);
  return this;
}
