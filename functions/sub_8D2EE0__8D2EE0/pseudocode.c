int __stdcall sub_8D2EE0(int a1, float a2)
{
  int v2; // ecx
  __int64 v3; // rax
  int v4; // esi
  double v5; // st7

  v2 = *(_DWORD *)(a1 + 8); /*0x8d2ee4*/
  v3 = *(unsigned int *)(v2 + 0x18); /*0x8d2eea*/
  if ( (int)v3 > 0 ) /*0x8d2eee*/
  {
    v4 = 0; /*0x8d2ef1*/
    do /*0x8d2f0a*/
    {
      LODWORD(v3) = *(_DWORD *)(v2 + 0x14); /*0x8d2ef3*/
      v5 = a2 + *(float *)(v3 + v4); /*0x8d2efa*/
      LODWORD(v3) = v4 + v3; /*0x8d2efd*/
      ++HIDWORD(v3); /*0x8d2eff*/
      v4 += 0x40; /*0x8d2f00*/
      *(float *)v3 = v5; /*0x8d2f03*/
      LODWORD(v3) = *(_DWORD *)(v2 + 0x18); /*0x8d2f05*/
    }
    while ( SHIDWORD(v3) < (int)v3 ); /*0x8d2f0a*/
  }
  return v3; /*0x8d2f0d*/
}
