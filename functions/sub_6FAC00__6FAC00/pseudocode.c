int sub_6FAC00()
{
  int v0; // esi
  int result; // eax

  v0 = FormHeapAlloc(0x1Cu);
  result = 0;
  if ( v0 )
  {
    sub_752BF0((_DWORD *)v0);
    *(float *)(v0 + 0x18) = 1.0;
    *(_DWORD *)v0 = &BSWindModifier::`vftable';
    *(_DWORD *)(v0 + 0xC) = 0xFA0;
    return v0;
  }
  return result;
}
