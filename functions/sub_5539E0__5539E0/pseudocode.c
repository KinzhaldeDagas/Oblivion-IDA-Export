void __cdecl sub_5539E0(int a1, int a2, int a3, unsigned int a4, float a5)
{
  int v5; // ecx
  int v6; // esi
  int v7; // eax
  int *v9; // eax
  int *v10; // eax
  _DWORD *v11; // eax
  int v12[3]; // [esp+18h] [ebp-3Ch] BYREF
  unsigned int v13; // [esp+24h] [ebp-30h]
  int v14; // [esp+28h] [ebp-2Ch]
  int v15; // [esp+2Ch] [ebp-28h]
  _DWORD v16[3]; // [esp+30h] [ebp-24h] BYREF
  unsigned int v17; // [esp+3Ch] [ebp-18h]
  int v18; // [esp+50h] [ebp-4h]
  float v19; // [esp+58h] [ebp+4h]
  int v20; // [esp+58h] [ebp+4h]

  if ( a1 )
  {
    v5 = dword_B39B80;
    if ( !dword_B39B80 )
    {
      sub_553550();
      v5 = dword_B39B80;
    }
    v6 = 0x10 * (a3 + 2 * a2);
    v7 = *(_DWORD *)(v6 + v5 + 0x8C);
    if ( v7 )
    {
      if ( a4 < (*(_DWORD *)(v6 + v5 + 0x90) - v7) / 0x34 )
      {
        v19 = sub_5538F0(a1, a2, a3, a4);
        *(float *)&v20 = a5 - v19;
        if ( !dword_B39B80 )
          sub_553550();
        v9 = (int *)sub_54F6C0((_DWORD *)(v6 + dword_B39B80 + 0x88), a4);
        v10 = sub_552730(v9, v16);
        v18 = 0;
        v11 = sub_552310(v10, v12, *(float *)&v20);
        LOBYTE(v18) = 1;
        sub_551DA0((_DWORD *)(a1 + 0x18 * (a3 + 2 * a2)), v11);
        if ( v13 )
          FormHeapFree(v13);
        v13 = 0;
        v14 = 0;
        v15 = 0;
        if ( v17 )
          FormHeapFree(v17);
      }
    }
  }
}
