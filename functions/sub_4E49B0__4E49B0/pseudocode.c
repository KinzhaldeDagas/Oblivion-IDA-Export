void __cdecl sub_4E49B0(int a1, int a2, float a3)
{
  int v3; // esi
  double v4; // st7
  int v5; // edx
  float *v6; // ecx
  int v7; // eax
  float v8; // [esp+4h] [ebp+4h]

  if ( a1 )
  {
    v3 = a2;
    if ( a2 )
    {
      v4 = a3;
      v5 = 0;
      v6 = (float *)(a1 + 4);
      do
      {
        if ( *v6 > v4 )
        {
          v7 = *((_DWORD *)v6 + 0xFFFFFFFF);
          v8 = *v6;
          *((_DWORD *)v6 + 0xFFFFFFFF) = v3;
          v3 = v7;
          *v6 = v4;
          v4 = v8;
        }
        if ( !v3 )
          break;
        ++v5;
        v6 += 2;
      }
      while ( v5 < 5 );
    }
  }
}
