LONG __usercall sub_581A50@<eax>(unsigned int *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  void (__thiscall ***v5)(_DWORD, int); // ecx
  unsigned int v6; // esi
  unsigned int v7; // esi
  LONG (__stdcall *v8)(volatile LONG *); // edi
  int v9; // esi
  void (__thiscall ***v10)(_DWORD, int); // ecx
  void (__thiscall ***v11)(_DWORD, int); // ecx
  void (__thiscall ***v12)(_DWORD, int); // ecx
  int v13; // esi
  unsigned int v14; // esi
  unsigned __int16 v15; // cx
  unsigned int i; // edi
  unsigned int v17; // esi
  LONG result; // eax
  int v19; // ecx
  LONG (__stdcall *v20)(volatile LONG *); // edi
  int v21; // esi
  int v22; // esi
  unsigned int v23; // ebp

  v5 = (void (__thiscall ***)(_DWORD, int))a1[0x20];
  if ( v5 )
  {
    (**v5)(v5, 1);
    a1[0x20] = 0;
  }
  if ( Console_ )
  {
    v6 = Console_;
    sub_585940((void **)Console_);
    FormHeapFree(v6);
  }
  Console_ = 0;
  sub_572D90(a2, a3, a4);
  sub_577270();
  v7 = *a1;
  v8 = InterlockedDecrement;
  if ( *a1 )
  {
    if ( !v8((volatile LONG *)(v7 + 4)) )
    {
      if ( v7 )
        (**(void (__thiscall ***)(unsigned int, int))v7)(v7, 1);
    }
    *a1 = 0;
  }
  if ( a1[1] )
  {
    v9 = a1[1];
    if ( v9 )
    {
      if ( !v8((volatile LONG *)(v9 + 4)) )
        (**(void (__thiscall ***)(int, int))v9)(v9, 1);
      a1[1] = 0;
    }
  }
  byte_B3A6D4 = 1;
  v10 = (void (__thiscall ***)(_DWORD, int))a1[0x1B];
  if ( v10 )
    (**v10)(v10, 1);
  v11 = (void (__thiscall ***)(_DWORD, int))a1[0x1A];
  if ( v11 )
    (**v11)(v11, 1);
  byte_B3A6D4 = 0;
  Menu_ClearB3A708();
  v12 = (void (__thiscall ***)(_DWORD, int))a1[7];
  if ( v12 )
    (**v12)(v12, 1);
  v13 = a1[0x1E];
  if ( v13 )
  {
    if ( !v8((volatile LONG *)(v13 + 4)) )
      (**(void (__thiscall ***)(int, int))v13)(v13, 1);
    a1[0x1E] = 0;
  }
  InterfaceManagerPtr = 0;
  sub_58BD50();
  v14 = a1[0x42];
  if ( v14 )
  {
    sub_538B60((int *)a1[0x42]);
    FormHeapFree(v14);
  }
  sub_57D200(a1);
  sub_584DB0();
  v15 = word_B13BCE;
  for ( i = 0; i < v15; ++i )
  {
    v17 = *(_DWORD *)(dword_B13BC8 + 4 * i);
    if ( v17 )
    {
      FormHeapFree(*(_DWORD *)(v17 + 8));
      *(_DWORD *)(v17 + 8) = 0;
      *(_WORD *)(v17 + 0xE) = 0;
      *(_WORD *)(v17 + 0xC) = 0;
      FormHeapFree(v17);
      v15 = word_B13BCE;
    }
  }
  result = 0;
  if ( v15 )
  {
    do
    {
      v19 = (unsigned __int16)result++;
      *(_DWORD *)(dword_B13BC8 + 4 * v19) = 0;
    }
    while ( (unsigned __int16)result < (unsigned __int16)word_B13BCE );
  }
  v20 = InterlockedDecrement;
  word_B13BCE = 0;
  word_B13BD0 = 0;
  v21 = a1[0x1E];
  if ( v21 )
  {
    result = v20((volatile LONG *)(v21 + 4));
    if ( !result )
      result = (**(int (__thiscall ***)(int, int))v21)(v21, 1);
  }
  v22 = a1[1];
  if ( v22 )
  {
    result = v20((volatile LONG *)(v22 + 4));
    if ( !result )
      result = (**(int (__thiscall ***)(int, int))v22)(v22, 1);
  }
  v23 = *a1;
  if ( v23 )
  {
    result = v20((volatile LONG *)(v23 + 4));
    if ( !result )
      return (**(LONG (__thiscall ***)(unsigned int, int))v23)(v23, 1);
  }
  return result;
}
