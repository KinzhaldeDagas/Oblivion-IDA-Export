int __cdecl rand()
{
  DWORD *v0; // eax
  unsigned int v1; // ecx

  v0 = _getptd(); /*0x9859dd*/
  v1 = 0x343FD * v0[5] + 0x269EC3; /*0x9859eb*/
  v0[5] = v1; /*0x9859f1*/
  return HIWORD(v1) & 0x7FFF; /*0x9859fe*/
}
