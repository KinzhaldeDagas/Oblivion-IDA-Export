int __cdecl rand()
{
  int v0; // eax
  unsigned int v1; // ecx

  v0 = _getptd();
  v1 = 0x343FD * *(_DWORD *)(v0 + 0x14) + 0x269EC3;
  *(_DWORD *)(v0 + 0x14) = v1;
  return HIWORD(v1) & 0x7FFF;
}
