int __thiscall sub_6DF2A0(char *this, int a2, int a3)
{
  int *v4; // ebx
  char *v5; // ebp
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  int v9; // edi
  int v11; // [esp+18h] [ebp-8h]
  int v12; // [esp+1Ch] [ebp-4h]

  v12 = sub_6EBA60(this, a2, a3);
  v4 = (int *)(v12 + 0x38);
  v5 = this - v12;
  v11 = 3;
  do
  {
    v6 = *(_DWORD *)&v5[(_DWORD)v4];
    if ( v6 )
    {
      v7 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v6 + 0x88))(v6, a2, a3);
      v8 = *v4;
      v9 = v7;
      if ( *v4 != v7 )
      {
        if ( v8 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
            (**(void (__thiscall ***)(int, int))v8)(v8, 1);
        }
        *v4 = v9;
        if ( v9 )
          InterlockedIncrement((volatile LONG *)(v9 + 4));
      }
    }
    ++v4;
    --v11;
  }
  while ( v11 );
  return v12;
}
