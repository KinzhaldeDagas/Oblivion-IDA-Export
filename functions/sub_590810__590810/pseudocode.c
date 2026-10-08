void __thiscall sub_590810(void *this, int a2)
{
  int v2; // ebx
  void (__thiscall ***v3)(_DWORD, int); // esi
  void (__thiscall ***v4)(_DWORD, int); // esi
  unsigned int i; // ebp
  int ***v6; // esi
  void (__thiscall ***v7)(_DWORD, int); // edi
  volatile LONG *v8; // edi
  int v9; // eax
  volatile LONG *v10; // [esp+Ch] [ebp-8h] BYREF
  void *v11; // [esp+10h] [ebp-4h]

  v2 = a2; /*0x590814*/
  v11 = this; /*0x590820*/
  sub_708560((int ***)a2, (volatile LONG **)&a2, 2); /*0x590827*/
  if ( a2 ) /*0x590832*/
  {
    v3 = (void (__thiscall ***)(_DWORD, int))a2; /*0x590834*/
    if ( !InterlockedDecrement((volatile LONG *)(a2 + 4)) ) /*0x59083a*/
      (**v3)(v3, 1); /*0x590850*/
  }
  sub_708560((int ***)v2, (volatile LONG **)&a2, 0); /*0x59085b*/
  v4 = (void (__thiscall ***)(_DWORD, int))a2; /*0x590860*/
  if ( a2 ) /*0x590866*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(a2 + 4)) ) /*0x59086c*/
    {
      if ( v4 ) /*0x590878*/
        (**v4)(v4, 1); /*0x590882*/
    }
  }
  sub_4784A0((_WORD *)(v2 + 0xAC)); /*0x59088c*/
  sub_477F90(v2 + 0xAC); /*0x590893*/
  for ( i = 0; i < *(unsigned __int16 *)(v2 + 0xB8); ++i ) /*0x59089a*/
  {
    if ( *(unsigned __int16 *)(v2 + 0xB6) > i ) /*0x5908b9*/
    {
      v6 = *(int ****)(*(_DWORD *)(v2 + 0xB0) + 4 * i); /*0x5908c5*/
      if ( v6 ) /*0x5908ca*/
      {
        sub_708560(v6, (volatile LONG **)&a2, 2); /*0x5908d5*/
        if ( a2 ) /*0x5908e0*/
        {
          v7 = (void (__thiscall ***)(_DWORD, int))a2; /*0x5908e2*/
          if ( !InterlockedDecrement((volatile LONG *)(a2 + 4)) ) /*0x5908e8*/
            (**v7)(v7, 1); /*0x5908fe*/
        }
        sub_708560(v6, &v10, 0); /*0x590909*/
        v8 = v10; /*0x59090e*/
        if ( v10 ) /*0x590914*/
        {
          if ( !InterlockedDecrement(v10 + 1) ) /*0x59091a*/
          {
            if ( v8 ) /*0x590926*/
              (**(void (__thiscall ***)(volatile LONG *, int))v8)(v8, 1); /*0x590930*/
          }
        }
        v9 = ((int (__thiscall *)(int ***))(*v6)[2])(v6); /*0x590939*/
        if ( v9 ) /*0x59093d*/
          sub_590810(v11, v9); /*0x590944*/
      }
    }
  }
}
