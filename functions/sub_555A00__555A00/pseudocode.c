void __cdecl sub_555A00(int a1, int a2, int a3, float a4)
{
  signed int i; // esi
  double v5; // st7
  float v6[2]; // [esp+10h] [ebp-8h] BYREF

  for ( i = 0; i < 2; ++i )
  {
    if ( i == a2 )
    {
      v5 = a4;
    }
    else
    {
      if ( !dword_B39B80 )
        sub_553550();
      v5 = sub_6EDD30((_BYTE *)(dword_B39B80 + 0xC8), 0, i, a3, a1);
    }
    v6[i] = v5;
  }
  if ( !dword_B39B80 )
    sub_553550();
  sub_6EDE10((_BYTE *)(dword_B39B80 + 0xC8), 0, a3, (int)v6, a1);
}
