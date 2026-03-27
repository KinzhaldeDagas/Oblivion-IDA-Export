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

  sub_7081B0(this, a2);
  v2 = sub_7124A0(a2);
  if ( v2 )
    InterlockedIncrement((volatile LONG *)(v2 + 4));
  result = sub_7124D0(a2);
  if ( result )
  {
    v4 = result;
    do
    {
      result = sub_7124A0(a2);
      v5 = result;
      if ( result )
      {
        InterlockedIncrement((volatile LONG *)(result + 4));
        result = InterlockedDecrement((volatile LONG *)(v5 + 4));
        if ( !result )
          result = (**(int (__thiscall ***)(unsigned int, int))v5)(v5, 1);
      }
      --v4;
    }
    while ( v4 );
  }
  if ( a2[0x36] >= 0x4010004u )
  {
    v6 = sub_7124D0(a2);
    if ( v6 )
    {
      v7 = v6;
      do
      {
        v8 = sub_7124A0(a2);
        v9 = v8;
        if ( v8 )
        {
          InterlockedIncrement((volatile LONG *)(v8 + 4));
          if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
            (**(void (__thiscall ***)(int, int))v9)(v9, 1);
        }
        --v7;
      }
      while ( v7 );
    }
    result = a2[0x36];
    if ( result >= 0xA000107 && result < 0xA00010F )
    {
      result = sub_7124D0(a2);
      if ( result )
      {
        v10 = result;
        do
        {
          result = sub_7124A0(a2);
          --v10;
        }
        while ( v10 );
      }
    }
  }
  if ( v2 )
  {
    result = InterlockedDecrement((volatile LONG *)(v2 + 4));
    if ( !result )
      return (**(unsigned int (__thiscall ***)(int, int))v2)(v2, 1);
  }
  return result;
}
