void __thiscall sub_590810(void *this, int a2)
{
  int v2; // ebx
  void (__thiscall ***v3)(_DWORD, int); // esi
  void (__thiscall ***v4)(_DWORD, int); // esi
  unsigned int i; // ebp
  _DWORD *v6; // esi
  void (__thiscall ***v7)(_DWORD, int); // edi
  volatile LONG *v8; // edi
  int v9; // eax
  volatile LONG *v10; // [esp+Ch] [ebp-8h] BYREF
  void *v11; // [esp+10h] [ebp-4h]

  v2 = a2;
  v11 = this;
  sub_708560((_DWORD *)a2, (volatile LONG **)&a2, 2);
  if ( a2 )
  {
    v3 = (void (__thiscall ***)(_DWORD, int))a2;
    if ( !InterlockedDecrement((volatile LONG *)(a2 + 4)) )
      (**v3)(v3, 1);
  }
  sub_708560((_DWORD *)v2, (volatile LONG **)&a2, 0);
  v4 = (void (__thiscall ***)(_DWORD, int))a2;
  if ( a2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(a2 + 4)) )
    {
      if ( v4 )
        (**v4)(v4, 1);
    }
  }
  sub_4784A0((_WORD *)(v2 + 0xAC));
  sub_477F90(v2 + 0xAC);
  for ( i = 0; i < *(unsigned __int16 *)(v2 + 0xB8); ++i )
  {
    if ( *(unsigned __int16 *)(v2 + 0xB6) > i )
    {
      v6 = *(_DWORD **)(*(_DWORD *)(v2 + 0xB0) + 4 * i);
      if ( v6 )
      {
        sub_708560(v6, (volatile LONG **)&a2, 2);
        if ( a2 )
        {
          v7 = (void (__thiscall ***)(_DWORD, int))a2;
          if ( !InterlockedDecrement((volatile LONG *)(a2 + 4)) )
            (**v7)(v7, 1);
        }
        sub_708560(v6, &v10, 0);
        v8 = v10;
        if ( v10 )
        {
          if ( !InterlockedDecrement(v10 + 1) )
          {
            if ( v8 )
              (**(void (__thiscall ***)(volatile LONG *, int))v8)(v8, 1);
          }
        }
        v9 = (*(int (__thiscall **)(_DWORD *))(*v6 + 8))(v6);
        if ( v9 )
          sub_590810(v11, v9);
      }
    }
  }
}
