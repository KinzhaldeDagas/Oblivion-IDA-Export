void *__usercall _alloca_@<eax>(int a1@<eax>)
{
  char v1; // sp
  int v2; // ecx

  v2 = (v1 + 8 - (_BYTE)a1) & 0xF; /*0x983fa7*/
  return _alloca_probe(__CFADD__(v2, a1) ? 0xFFFFFFFF : v2 + a1);
}
