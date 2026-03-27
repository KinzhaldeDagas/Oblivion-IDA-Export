void __usercall sub_88A120(_DWORD *a1@<ecx>, int a2@<ebp>)
{
  unsigned int v3; // eax
  int v4; // ebx
  unsigned int i; // edi
  int v6; // eax
  bool v7; // zf
  _DWORD **v8; // eax
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  int v13; // ecx

  v3 = a1[0x11];
  if ( v3 )
  {
    if ( !a1[0xB] )
    {
      if ( v3 >= 0xC8 )
        a1[0x11] = 0xC8;
      v4 = (*(int (__thiscall **)(_DWORD *))(*a1 + 0x58))(a1);
      if ( v4 )
      {
        for ( i = 0; i < a1[0x11]; ++i )
        {
          v6 = a1[0x10];
          v7 = *(_DWORD *)(v6 + 4 * i) == 0;
          v8 = (_DWORD **)(v6 + 4 * i);
          if ( !v7 )
          {
            v9 = *v8;
            if ( !v9[2] )
            {
              v10 = v9[4];
              if ( !v10 || *(_DWORD *)(v10 + 0x54) )
              {
                v11 = v9[5];
                if ( !v11 || *(_DWORD *)(v11 + 0x54) )
                  sub_8988A0(v4, a2, v9);
              }
            }
          }
          v12 = a1[0x10] + 4 * i;
          if ( *(_DWORD *)v12 )
          {
            v13 = *(_DWORD *)v12;
            if ( *(_WORD *)(*(_DWORD *)v12 + 4) )
            {
              if ( !--*(_WORD *)(v13 + 6) )
                (**(void (__thiscall ***)(int, int))v13)(v13, 1);
            }
          }
        }
        _memset(a1[0x10], 0, 4 * a1[0x11]);
        a1[0x11] = 0;
      }
    }
  }
}
