double __cdecl sub_5538F0(int a1, int a2, int a3, unsigned int a4)
{
  int v4; // edi
  int v5; // esi
  int v6; // eax
  int *v7; // eax
  _DWORD *v8; // esi
  int v9; // eax
  float v11; // [esp+0h] [ebp-1Ch]
  _DWORD v12[3]; // [esp+4h] [ebp-18h] BYREF
  unsigned int v13; // [esp+10h] [ebp-Ch]

  v11 = 0.0;
  if ( !a1 )
    return v11;
  v4 = dword_B39B80;
  if ( !dword_B39B80 )
  {
    sub_553550();
    v4 = dword_B39B80;
  }
  v5 = 0x10 * (a3 + 2 * a2);
  v6 = *(_DWORD *)(v5 + v4 + 0x8C);
  if ( !v6 )
    return v11;
  if ( a4 < (*(_DWORD *)(v5 + v4 + 0x90) - v6) / 0x34 )
  {
    if ( !v4 )
    {
      sub_553550();
      v4 = dword_B39B80;
    }
    v7 = (int *)sub_54F6C0((_DWORD *)(v5 + v4 + 0x88), a4);
    v8 = sub_5523C0(v7, v12, (_DWORD *)(a1 + 0x18 * (a3 + 2 * a2)));
    v9 = v8[3];
    if ( !v9 || !((v8[4] - v9) >> 2) )
      _invalid_parameter_noinfo();
    v11 = *(float *)v8[3];
    if ( v13 )
      FormHeapFree(v13);
  }
  return v11;
}
