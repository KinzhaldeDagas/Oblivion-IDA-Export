int sub_73B0B0()
{
  int v0; // esi
  int result; // eax

  v0 = FormHeapAlloc(0x1Cu);
  result = 0;
  if ( v0 )
  {
    sub_721350((NiObject *)v0);
    *(float *)(v0 + 0x18) = 0.0;
    *(_DWORD *)v0 = &NiVectorExtraData::`vftable';
    *(float *)(v0 + 0x14) = 0.0;
    *(float *)(v0 + 0x10) = 0.0;
    *(float *)(v0 + 0xC) = 0.0;
    return v0;
  }
  return result;
}
