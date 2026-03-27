int __stdcall sub_8D2EE0(int a1, float a2)
{
  int v2; // ecx
  __int64 v3; // rax
  int v4; // esi
  double v5; // st7

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(unsigned int *)(v2 + 0x18);
  if ( (int)v3 > 0 )
  {
    v4 = 0;
    do
    {
      LODWORD(v3) = *(_DWORD *)(v2 + 0x14);
      v5 = a2 + *(float *)(v3 + v4);
      LODWORD(v3) = v4 + v3;
      ++HIDWORD(v3);
      v4 += 0x40;
      *(float *)v3 = v5;
      LODWORD(v3) = *(_DWORD *)(v2 + 0x18);
    }
    while ( SHIDWORD(v3) < (int)v3 );
  }
  return v3;
}
