_DWORD *sub_44D770()
{
  int v0; // eax
  int v1; // ecx
  int v2; // ecx
  int v3; // eax
  unsigned int v4; // esi
  int v5; // eax
  _DWORD *result; // eax

  v0 = FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)dword_B0686C) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * dword_B0686C);
  v1 = 3 * dword_B0686C;
  dword_B33EAC = v0;
  *(_DWORD *)(v0 + 4 * v1 - 0xC) = 0;
  v2 = 1;
  v3 = 0xC;
  do
  {
    *(_DWORD *)(v3 + dword_B33EAC) = v3 + dword_B33EAC + 0xC;
    v4 = v2++;
    v3 += 0xC;
  }
  while ( v4 < dword_B0686C - 2 );
  if ( dword_B33EA8 )
  {
    *(_DWORD *)dword_B33EAC = dword_B33EA8;
    v5 = dword_B33EAC;
    dword_B33EA8 = dword_B33EAC;
    result = (_DWORD *)(v5 + 0xC);
    dword_B33EAC = (int)result;
  }
  else
  {
    result = (_DWORD *)dword_B33EAC;
    dword_B33EA8 = dword_B33EAC;
    *result = 0;
    dword_B33EAC += 0xC;
  }
  return result;
}
