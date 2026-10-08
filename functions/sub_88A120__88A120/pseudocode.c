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

  v3 = a1[0x11]; /*0x88a123*/
  if ( v3 ) /*0x88a128*/
  {
    if ( !a1[0xB] ) /*0x88a12e*/
    {
      if ( v3 >= 0xC8 ) /*0x88a13d*/
        a1[0x11] = 0xC8; /*0x88a13f*/
      v4 = (*(int (__thiscall **)(_DWORD *))(*a1 + 0x58))(a1); /*0x88a14e*/
      if ( v4 ) /*0x88a152*/
      {
        for ( i = 0; i < a1[0x11]; ++i ) /*0x88a15b*/
        {
          v6 = a1[0x10]; /*0x88a160*/
          v7 = *(_DWORD *)(v6 + 4 * i) == 0; /*0x88a163*/
          v8 = (_DWORD **)(v6 + 4 * i); /*0x88a167*/
          if ( !v7 ) /*0x88a16a*/
          {
            v9 = *v8; /*0x88a16c*/
            if ( !v9[2] ) /*0x88a16e*/
            {
              v10 = v9[4]; /*0x88a174*/
              if ( !v10 || *(_DWORD *)(v10 + 0x54) ) /*0x88a17b*/
              {
                v11 = v9[5]; /*0x88a181*/
                if ( !v11 || *(_DWORD *)(v11 + 0x54) ) /*0x88a188*/
                  sub_8988A0(v4, a2, v9); /*0x88a191*/
              }
            }
          }
          v12 = a1[0x10] + 4 * i; /*0x88a19d*/
          if ( *(_DWORD *)v12 ) /*0x88a199*/
          {
            v13 = *(_DWORD *)v12; /*0x88a1a2*/
            if ( *(_WORD *)(*(_DWORD *)v12 + 4) ) /*0x88a1a4*/
            {
              if ( !--*(_WORD *)(v13 + 6) ) /*0x88a1b0*/
                (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x88a1bf*/
            }
          }
        }
        _memset(a1[0x10], 0, 4 * a1[0x11]); /*0x88a1d7*/
        a1[0x11] = 0; /*0x88a1df*/
      }
    }
  }
}
