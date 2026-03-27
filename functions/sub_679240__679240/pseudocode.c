int __thiscall sub_679240(int *this, int a2, int a3)
{
  char v3; // al
  int *v4; // esi
  int v5; // ebp
  int v6; // edi
  char v7; // bl
  int *i; // ebx
  int v9; // esi
  void (__thiscall ***v10)(_DWORD, int); // edi
  int v11; // eax
  int v13; // [esp+10h] [ebp-4h] BYREF

  v3 = 0;
  v4 = this + 0x12;
  v13 = 0;
  v5 = 0;
  if ( *(this + 0x13) )
  {
    v6 = a2;
  }
  else
  {
    v6 = 0;
    v3 = 1;
    if ( !*v4 )
    {
      v7 = 1;
      goto LABEL_6;
    }
  }
  v7 = 0;
LABEL_6:
  if ( (v3 & 1) != 0 )
  {
    if ( v6 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
        (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    }
  }
  if ( !v7 )
  {
    for ( i = v4; i; i = (int *)i[1] )
    {
      v9 = *sub_677C70(i, &v13);
      if ( v13 )
      {
        v10 = (void (__thiscall ***)(_DWORD, int))v13;
        if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) )
          (**v10)(v10, 1);
      }
      if ( v9 )
      {
        v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9);
        if ( v11 )
        {
          while ( (_UNKNOWN *)v11 != &unk_B3C0D4 )
          {
            v11 = *(_DWORD *)(v11 + 4);
            if ( !v11 )
              goto LABEL_27;
          }
          if ( *(_DWORD *)(v9 + 0x1C) == a2 )
          {
            if ( *(_BYTE *)(v9 + 0x28) )
            {
              if ( !*(_BYTE *)(v9 + 0x24) )
              {
                if ( *(_DWORD *)(v9 + 0x34) != a3 || v5 )
                  *(_BYTE *)(v9 + 0x24) = 1;
                else
                  v5 = v9;
              }
            }
          }
        }
      }
LABEL_27:
      ;
    }
  }
  return v5;
}
