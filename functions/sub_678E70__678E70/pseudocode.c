LONG __thiscall sub_678E70(int *this, int a2, LONG a3)
{
  LONG result; // eax
  int *v4; // esi
  LONG v5; // edi
  char v6; // bl
  int *v7; // ebx
  LONG v8; // ebp
  int v9; // esi
  int (__thiscall ***v10)(_DWORD, int); // edi

  result = 0;
  v4 = this + 0x12;
  if ( *(this + 0x13) )
  {
    v5 = a3;
  }
  else
  {
    v5 = 0;
    result = 1;
    if ( !*v4 )
    {
      v6 = 1;
      goto LABEL_6;
    }
  }
  v6 = 0;
LABEL_6:
  if ( (result & 1) != 0 )
  {
    if ( v5 )
    {
      result = InterlockedDecrement((volatile LONG *)(v5 + 4));
      if ( !result )
        result = (**(int (__thiscall ***)(LONG, int))v5)(v5, 1);
    }
  }
  if ( !v6 )
  {
    v7 = v4;
    if ( v4 )
    {
      v8 = a3;
      do
      {
        v9 = *sub_677C70(v7, &a3);
        result = a3;
        if ( a3 )
        {
          v10 = (int (__thiscall ***)(_DWORD, int))a3;
          result = InterlockedDecrement((volatile LONG *)(a3 + 4));
          if ( !result )
            result = (**v10)(v10, 1);
        }
        if ( v9 )
        {
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9);
          if ( result )
          {
            while ( (_UNKNOWN *)result != &unk_B3C0D4 )
            {
              result = *(_DWORD *)(result + 4);
              if ( !result )
                goto LABEL_24;
            }
            if ( *(_DWORD *)(v9 + 0x1C) == a2 && *(_DWORD *)(v9 + 0x34) == v8 )
              *(_BYTE *)(v9 + 0x24) = 1;
          }
        }
LABEL_24:
        v7 = (int *)v7[1];
      }
      while ( v7 );
    }
  }
  return result;
}
