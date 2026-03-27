void __thiscall sub_8A47C0(int *this, int a2)
{
  int *i; // edi
  bool v3; // bl
  void (__thiscall ***v4)(_DWORD, int); // esi
  int *v5; // eax
  int v6; // ecx
  void (__thiscall *v7)(int, int); // edx
  void (__thiscall ***v8)(_DWORD, int); // esi
  int v9; // [esp+10h] [ebp-18h]
  int v10; // [esp+14h] [ebp-14h] BYREF
  int v11; // [esp+18h] [ebp-10h] BYREF
  unsigned int v12; // [esp+24h] [ebp-4h]

  v9 = 0;
  for ( i = this + 4; ; i = (int *)i[1] )
  {
    v3 = 0;
    if ( i )
    {
      v9 |= 1u;
      if ( *sub_677C70(i, &v10) )
        v3 = 1;
    }
    if ( (v9 & 1) != 0 )
    {
      v4 = (void (__thiscall ***)(_DWORD, int))v10;
      v9 &= ~1u;
      if ( v10 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
        {
          if ( v4 )
            (**v4)(v4, 1);
        }
      }
    }
    if ( !v3 )
      break;
    v5 = sub_677C70(i, &v11);
    v6 = *v5;
    v7 = *(void (__thiscall **)(int, int))(*(_DWORD *)*v5 + 0x5C);
    v12 = 0;
    v7(v6, a2);
    v12 = 0xFFFFFFFF;
    if ( v11 )
    {
      v8 = (void (__thiscall ***)(_DWORD, int))v11;
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
        (**v8)(v8, 1);
    }
  }
}
