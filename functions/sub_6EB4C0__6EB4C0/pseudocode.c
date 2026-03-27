int sub_6EB4C0()
{
  int v0; // esi
  int result; // eax

  v0 = FormHeapAlloc(0x34u);
  result = 0;
  if ( v0 )
  {
    sub_6CC4E0((float *)v0);
    *(_DWORD *)v0 = &NiBlendBoolInterpolator::`vftable';
    *(_BYTE *)(v0 + 0x30) = byte_A7C6AC;
    return v0;
  }
  return result;
}
