int __thiscall sub_9181D0(int this, char *a2, int a3, int a4)
{
  int result; // eax
  unsigned int v5; // ebp
  int v6; // esi
  int v7; // edi
  int v8; // ebx
  int v9; // ecx
  char *v10; // eax
  int v11; // esi
  char v12; // cl
  char v13; // cl
  char v14; // cl
  char v15; // cl
  char *v16; // eax
  int v17; // esi
  char v18; // cl
  char v19; // cl
  char *v20; // eax
  int v21; // esi
  char v22; // cl
  char *v23; // [esp+8h] [ebp-214h]
  int v24; // [esp+Ch] [ebp-210h]
  _BYTE v26[2]; // [esp+18h] [ebp-204h] BYREF
  char v27; // [esp+1Ah] [ebp-202h] BYREF
  char v28; // [esp+1Eh] [ebp-1FEh] BYREF

  if ( !*(_BYTE *)(this + 0xC) )
    return (*(int (__thiscall **)(_DWORD, char *, int))(**(_DWORD **)(this + 8) + 0xC))(
             *(_DWORD *)(this + 8),
             a2,
             a4 * a3);
  v23 = a2;
  v5 = 0x200;
  v6 = a3;
  v7 = a4 * a3;
  v8 = 0x200 / a3;
  v9 = a4 * a3 % 0x200;
  result = v9 / a3;
  v24 = v9 / a3;
  if ( a4 * a3 > 0 )
  {
    while ( 1 )
    {
      if ( v7 < 0x200 )
      {
        v8 = v24;
        v5 = v9;
      }
      sub_8B1890(v26, v23, v5);
      if ( v6 == 2 )
      {
        v20 = v26;
        if ( v8 > 0 )
        {
          v21 = v8;
          do
          {
            v22 = *v20;
            *v20 = v20[1];
            v20[1] = v22;
            v20 += 2;
            --v21;
          }
          while ( v21 );
        }
      }
      else if ( v6 == 4 )
      {
        if ( v8 > 0 )
        {
          v16 = &v27;
          v17 = v8;
          do
          {
            v18 = v16[0xFFFFFFFE];
            v16[0xFFFFFFFE] = v16[1];
            v16[1] = v18;
            v19 = v16[0xFFFFFFFF];
            v16[0xFFFFFFFF] = *v16;
            *v16 = v19;
            v16 += 4;
            --v17;
          }
          while ( v17 );
        }
      }
      else if ( v6 == 8 && v8 > 0 )
      {
        v10 = &v28;
        v11 = v8;
        do
        {
          v12 = v10[0xFFFFFFFA];
          v10[0xFFFFFFFA] = v10[1];
          v10[1] = v12;
          v13 = v10[0xFFFFFFFB];
          v10[0xFFFFFFFB] = *v10;
          *v10 = v13;
          v14 = v10[0xFFFFFFFC];
          v10[0xFFFFFFFC] = v10[0xFFFFFFFF];
          v10[0xFFFFFFFF] = v14;
          v15 = v10[0xFFFFFFFD];
          v10[0xFFFFFFFD] = v10[0xFFFFFFFE];
          v10[0xFFFFFFFE] = v15;
          v10 += 8;
          --v11;
        }
        while ( v11 );
      }
      result = (*(int (__thiscall **)(_DWORD, _BYTE *, unsigned int))(**(_DWORD **)(this + 8) + 0xC))(
                 *(_DWORD *)(this + 8),
                 v26,
                 v5);
      v7 -= v5;
      v23 += v5;
      if ( v7 <= 0 )
        break;
      v6 = a3;
      v9 = a4 * a3 % 0x200;
    }
  }
  return result;
}
