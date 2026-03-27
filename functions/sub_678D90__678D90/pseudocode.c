LONG __thiscall sub_678D90(int *this, LONG a2)
{
  LONG result; // eax
  int *v3; // esi
  LONG v4; // edi
  char v5; // bl
  int *v6; // ebp
  LONG v7; // ebx
  int v8; // esi
  int (__thiscall ***v9)(_DWORD, int); // edi

  result = 0;
  v3 = this + 0x12;
  if ( *(this + 0x13) )
  {
    v4 = a2;
  }
  else
  {
    v4 = 0;
    result = 1;
    if ( !*v3 )
    {
      v5 = 1;
      goto LABEL_6;
    }
  }
  v5 = 0;
LABEL_6:
  if ( (result & 1) != 0 )
  {
    if ( v4 )
    {
      result = InterlockedDecrement((volatile LONG *)(v4 + 4));
      if ( !result )
        result = (**(int (__thiscall ***)(LONG, int))v4)(v4, 1);
    }
  }
  if ( !v5 )
  {
    v6 = v3;
    if ( v3 )
    {
      v7 = a2;
      do
      {
        v8 = *sub_677C70(v6, &a2);
        result = a2;
        if ( a2 )
        {
          v9 = (int (__thiscall ***)(_DWORD, int))a2;
          result = InterlockedDecrement((volatile LONG *)(a2 + 4));
          if ( !result )
            result = (**v9)(v9, 1);
        }
        if ( v8 )
        {
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8);
          if ( result )
          {
            while ( (_UNKNOWN *)result != &unk_B3C0BC )
            {
              result = *(_DWORD *)(result + 4);
              if ( !result )
                goto LABEL_23;
            }
            if ( *(_DWORD *)(v8 + 0x1C) == v7 )
            {
              result = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0x6C))(v8);
              *(_BYTE *)(v8 + 0x24) = 1;
            }
          }
        }
LABEL_23:
        v6 = (int *)v6[1];
      }
      while ( v6 );
    }
  }
  return result;
}
