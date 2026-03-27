void __thiscall sub_6C9420(unsigned int *this, int a2, _DWORD **a3)
{
  unsigned int *v3; // ebx
  unsigned int v4; // edi
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  void (__thiscall ***v6)(_DWORD, int); // esi
  int *v7; // eax
  unsigned int v8; // esi
  int *v9; // eax
  unsigned int v10; // esi

  v3 = (unsigned int *)a2;
  v4 = 0;
  if ( *(_DWORD *)(a2 + 0xC) )
  {
    v5 = InterlockedDecrement;
    do
    {
      sub_6C6610(v3, &a2, v4);
      if ( a2 )
      {
        v6 = (void (__thiscall ***)(_DWORD, int))a2;
        if ( !v5((volatile LONG *)(a2 + 4)) )
          (**v6)(v6, 1);
      }
      ++v4;
    }
    while ( v4 < v3[3] );
  }
  v7 = (int *)v3[5];
  if ( v7 )
  {
    v8 = (unsigned int)(v7 + 0xFFFFFFFF);
    _LN21(v7, 0x10u, v7[0xFFFFFFFF], (void (__thiscall *)(void *))sub_6C64C0);
    FormHeapFree(v8);
  }
  v9 = (int *)v3[6];
  if ( v9 )
  {
    v10 = (unsigned int)(v9 + 0xFFFFFFFF);
    _LN21(v9, 0x10u, v9[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v10);
  }
  sub_6C70A0(this, v3, a3);
}
