int sub_7072E0()
{
  int v0; // edi
  unsigned int i; // esi
  float v3; // [esp+8h] [ebp-4h]
  float v4; // [esp+8h] [ebp-4h]

  v0 = FormHeapAlloc(0x400u);
  for ( i = 0; i < 0x80; *(_DWORD *)(v0 + 4 * i + 0x1FC) = ((unsigned int)&loc_7FFFFA + 5) & LODWORD(v4) )
  {
    v3 = sqrt(COERCE_FLOAT((i | 0x3F80) << 0x10));
    *(_DWORD *)(v0 + 4 * i) = ((unsigned int)&loc_7FFFFA + 5) & LODWORD(v3);
    v4 = sqrt(COERCE_FLOAT((i++ | 0x4000) << 0x10));
  }
  return v0;
}
