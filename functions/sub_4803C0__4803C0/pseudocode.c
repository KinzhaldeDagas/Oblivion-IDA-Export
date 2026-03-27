int __cdecl sub_4803C0(int a1)
{
  int v1; // esi
  unsigned int v2; // edi
  int v3; // eax
  int v4; // ebx
  unsigned int v5; // ebp
  int v6; // eax
  int v7; // esi
  int v8; // eax
  double v9; // st7
  int v10; // eax
  double v11; // st7
  int v12; // esi
  int v13; // eax
  char v14; // al
  int v15; // eax
  int v16; // esi
  int v17; // eax
  double v18; // st7
  int v19; // eax
  double v20; // st7
  int v22; // [esp+8h] [ebp-Ch]
  float v23; // [esp+Ch] [ebp-8h]
  float v24; // [esp+10h] [ebp-4h]
  float v25; // [esp+10h] [ebp-4h]
  float v26; // [esp+18h] [ebp+4h]

  v1 = a1;
  v2 = 0;
  if ( !a1 )
    return 0;
  v22 = 0;
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
  v4 = v3;
  if ( v3 )
  {
    v5 = *(unsigned __int16 *)(v3 + 0xB6);
    if ( *(_WORD *)(v3 + 0xB6) )
    {
      do
      {
        if ( *(unsigned __int16 *)(v4 + 0xB6) > v2 )
          v6 = *(_DWORD *)(*(_DWORD *)(v4 + 0xB0) + 4 * v2);
        else
          v6 = 0;
        v7 = sub_4803C0(v6);
        if ( v7 )
        {
          if ( !v22
            || ((v8 = *(_DWORD *)(v22 + 8)) == 0 ? (v9 = 0.0) : (v9 = sub_89DA90((float *)*(_DWORD *)(v8 + 0x50))),
                (v10 = *(_DWORD *)(v7 + 8), v23 = v9, !v10)
              ? (v11 = 0.0)
              : (v11 = sub_89DA90((float *)*(_DWORD *)(v10 + 0x50))),
                v24 = v11,
                v24 > (double)v23) )
          {
            v22 = v7;
          }
        }
        ++v2;
      }
      while ( v2 < v5 );
      v1 = a1;
    }
  }
  v12 = *(_DWORD *)(v1 + 0xA8);
  if ( !v12 )
    goto LABEL_27;
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 4))(v12);
  if ( v13 )
  {
    while ( (char *)v13 != dword_BA7D24 )
    {
      v13 = *(_DWORD *)(v13 + 4);
      if ( !v13 )
        goto LABEL_23;
    }
    v14 = 1;
  }
  else
  {
LABEL_23:
    v14 = 0;
  }
  v15 = v14 != 0 ? v12 : 0;
  if ( v15 )
    v16 = *(_DWORD *)(v15 + 0x10);
  else
LABEL_27:
    v16 = 0;
  if ( !v22 )
    return v16;
  if ( v16
    && ((v17 = *(_DWORD *)(v16 + 8)) == 0 ? (v18 = 0.0) : (v18 = sub_89DA90((float *)*(_DWORD *)(v17 + 0x50))),
        (v19 = *(_DWORD *)(v22 + 8), v26 = v18, !v19)
      ? (v20 = 0.0)
      : (v20 = sub_89DA90((float *)*(_DWORD *)(v19 + 0x50))),
        v25 = v20,
        v25 <= (double)v26) )
  {
    return v16;
  }
  else
  {
    return v22;
  }
}
