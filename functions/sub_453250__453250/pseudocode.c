void __thiscall sub_453250(void (__stdcall ****this)(signed int))
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx
  void (__thiscall ***v6)(_DWORD, int); // ecx
  void (__thiscall ***v7)(_DWORD, int); // ecx
  void (__thiscall ***v8)(_DWORD, int); // ecx
  void (__thiscall ***v9)(_DWORD, int); // ecx
  _DWORD *v10; // eax
  unsigned int i; // ecx
  void (__thiscall ***v12)(_DWORD, int); // ecx
  _DWORD *v13; // eax
  unsigned int j; // ecx
  void (__thiscall ***v15)(_DWORD, int); // ecx
  int *v16; // eax
  void (__thiscall ***v17)(_DWORD, int); // edi
  void (__stdcall ***v18)(signed int); // edi
  void (__stdcall ***v19)(signed int); // edi

  v2 = (void (__thiscall ***)(_DWORD, int))*this;
  if ( v2 )
    (**v2)(v2, 1);
  v3 = (void (__thiscall ***)(_DWORD, int))*(this + 2);
  if ( v3 )
    (**v3)(v3, 1);
  v4 = (void (__thiscall ***)(_DWORD, int))*(this + 3);
  if ( v4 )
    (**v4)(v4, 1);
  v5 = (void (__thiscall ***)(_DWORD, int))*(this + 4);
  if ( v5 )
    (**v5)(v5, 1);
  if ( *(this + 0x13) )
    FormHeapFree((unsigned int)*(this + 0x13));
  v6 = (void (__thiscall ***)(_DWORD, int))*(this + 0x15);
  if ( v6 )
    (**v6)(v6, 1);
  v7 = (void (__thiscall ***)(_DWORD, int))*(this + 0x16);
  if ( v7 )
    (**v7)(v7, 1);
  v8 = (void (__thiscall ***)(_DWORD, int))*(this + 0x17);
  if ( v8 )
    (**v8)(v8, 1);
  v9 = (void (__thiscall ***)(_DWORD, int))*(this + 0x18);
  if ( v9 )
    (**v9)(v9, 1);
  v10 = *(this + 0x1D);
  if ( v10 )
  {
    for ( i = 0; i < v10[3]; ++i )
      *(_DWORD *)(v10[1] + 4 * i) = 0;
    v10[3] = 0;
    v10[4] = 0;
    v12 = (void (__thiscall ***)(_DWORD, int))*(this + 0x1D);
    if ( v12 )
      (**v12)(v12, 1);
  }
  v13 = *(this + 0x1E);
  if ( v13 )
  {
    for ( j = 0; j < v13[3]; ++j )
      *(_DWORD *)(v13[1] + 4 * j) = 0;
    v13[3] = 0;
    v13[4] = 0;
    v15 = (void (__thiscall ***)(_DWORD, int))*(this + 0x1E);
    if ( v15 )
      (**v15)(v15, 1);
  }
  if ( *(this + 0x70) )
    MemoryHeap_Free_checked(*(this + 0x70));
  if ( *(this + 0x1B) )
  {
    while ( 1 )
    {
      v16 = (int *)*(this + 0x1B);
      if ( !v16[1] && !*v16 )
        break;
      v17 = (void (__thiscall ***)(_DWORD, int))*v16;
      BSSimpleList_Remove(*(this + 0x1B), *v16);
      if ( v17 )
        (**v17)(v17, 1);
    }
    FormHeapFree((unsigned int)*(this + 0x1B));
  }
  if ( *(this + 9) )
  {
    do
    {
      v18 = (void (__stdcall ***)(signed int))(*(this + 9))[1];
      FormHeapFree((unsigned int)*(this + 9));
      *(this + 9) = v18;
    }
    while ( v18 );
  }
  *(this + 8) = 0;
  if ( *(this + 0xB) )
  {
    do
    {
      v19 = (void (__stdcall ***)(signed int))(*(this + 0xB))[1];
      FormHeapFree((unsigned int)*(this + 0xB));
      *(this + 0xB) = v19;
    }
    while ( v19 );
  }
  *(this + 0xA) = 0;
}
