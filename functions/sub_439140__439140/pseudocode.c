const char **__thiscall sub_439140(const char **this, char *a2, UInt32 a3)
{
  int v4; // edi
  const char *v5; // eax
  char *v6; // ecx
  char *v7; // edx
  char v8; // al
  UInt32 *v9; // ebp
  int v10; // edi
  const char *v11; // eax
  bool v12; // zf
  void (__thiscall ***v13)(_DWORD, int); // edi

  *(this + 1) = 0; /*0x43916d*/
  *(this + 2) = 0; /*0x439174*/
  *(this + 3) = 0; /*0x439177*/
  v4 = (int)*(this + 2); /*0x43917a*/
  if ( v4 ) /*0x439184*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x43918a*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x4391a0*/
    *(this + 2) = 0; /*0x4391a2*/
  }
  v5 = (const char *)FormHeapAlloc(strlen(a2) + 1); /*0x4391bf*/
  *this = v5; /*0x4391c7*/
  v6 = a2; /*0x4391c9*/
  v7 = (char *)v5; /*0x4391cb*/
  do /*0x4391dc*/
  {
    v8 = *v6; /*0x4391d0*/
    *v7++ = *v6++; /*0x4391d2*/
  }
  while ( v8 ); /*0x4391dc*/
  v9 = sub_6CB240(&a3, a3, 0); /*0x4391f1*/
  v10 = (int)*(this + 1); /*0x4391f3*/
  if ( v10 != *v9 ) /*0x4391fe*/
  {
    if ( v10 ) /*0x439202*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x439208*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x43921e*/
    }
    v11 = (const char *)*v9; /*0x439220*/
    v12 = *v9 == 0; /*0x439223*/
    *(this + 1) = (const char *)*v9; /*0x439225*/
    if ( !v12 ) /*0x439228*/
      InterlockedIncrement((volatile LONG *)v11 + 1); /*0x43922e*/
  }
  v13 = (void (__thiscall ***)(_DWORD, int))a3; /*0x439234*/
  if ( a3 ) /*0x43923f*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(a3 + 4)) ) /*0x439245*/
    {
      if ( v13 ) /*0x439251*/
        (**v13)(v13, 1); /*0x43925b*/
    }
  }
  if ( *(this + 1) ) /*0x43925d*/
    sub_436DA0(this, a2); /*0x439269*/
  else
    PrintError("Could not create ControllerManager Sequence for \"%s\".\r\n", *this); /*0x439278*/
  return this; /*0x439282*/
}
