unsigned int __thiscall sub_70D440(unsigned __int16 *this, _DWORD *a2)
{
  int v2; // edi
  unsigned int result; // eax
  unsigned int v4; // ebp
  unsigned int v5; // esi
  int v6; // eax
  int v7; // ebp
  int v8; // eax
  int v9; // esi
  unsigned int v10; // esi

  sub_7081B0(this, a2); /*0x70d469*/
  v2 = sub_7124A0(a2); /*0x70d475*/
  if ( v2 ) /*0x70d47d*/
    InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x70d483*/
  result = sub_7124D0(a2); /*0x70d493*/
  if ( result ) /*0x70d49a*/
  {
    v4 = result; /*0x70d49c*/
    do /*0x70d4cf*/
    {
      result = sub_7124A0(a2); /*0x70d4a2*/
      v5 = result; /*0x70d4a7*/
      if ( result ) /*0x70d4ab*/
      {
        InterlockedIncrement((volatile LONG *)(result + 4)); /*0x70d4b1*/
        result = InterlockedDecrement((volatile LONG *)(v5 + 4)); /*0x70d4b8*/
        if ( !result ) /*0x70d4c0*/
          result = (**(int (__thiscall ***)(unsigned int, int))v5)(v5, 1); /*0x70d4ca*/
      }
      --v4; /*0x70d4cc*/
    }
    while ( v4 ); /*0x70d4cf*/
  }
  if ( a2[0x36] >= 0x4010004u ) /*0x70d4df*/
  {
    v6 = sub_7124D0(a2); /*0x70d4e3*/
    if ( v6 ) /*0x70d4ea*/
    {
      v7 = v6; /*0x70d4ec*/
      do /*0x70d51f*/
      {
        v8 = sub_7124A0(a2); /*0x70d4f2*/
        v9 = v8; /*0x70d4f7*/
        if ( v8 ) /*0x70d4fb*/
        {
          InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x70d501*/
          if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x70d508*/
            (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x70d51a*/
        }
        --v7; /*0x70d51c*/
      }
      while ( v7 ); /*0x70d51f*/
    }
    result = a2[0x36]; /*0x70d525*/
    if ( result >= 0xA000107 && result < 0xA00010F ) /*0x70d537*/
    {
      result = sub_7124D0(a2); /*0x70d53b*/
      if ( result ) /*0x70d542*/
      {
        v10 = result; /*0x70d544*/
        do /*0x70d550*/
        {
          result = sub_7124A0(a2); /*0x70d548*/
          --v10; /*0x70d54d*/
        }
        while ( v10 ); /*0x70d550*/
      }
    }
  }
  if ( v2 ) /*0x70d55c*/
  {
    result = InterlockedDecrement((volatile LONG *)(v2 + 4)); /*0x70d562*/
    if ( !result ) /*0x70d56a*/
      return (**(unsigned int (__thiscall ***)(int, int))v2)(v2, 1); /*0x70d574*/
  }
  return result; /*0x70d576*/
}
