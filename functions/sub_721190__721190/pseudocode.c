int sub_721190()
{
  int v0; // esi
  int result; // eax

  v0 = FormHeapAlloc(0x10u);
  result = 0;
  if ( v0 )
  {
    sub_721350((_DWORD *)v0);
    *(float *)(v0 + 0xC) = 0.0;
    *(_DWORD *)v0 = &NiFloatExtraData::`vftable';
    return v0;
  }
  return result;
}
