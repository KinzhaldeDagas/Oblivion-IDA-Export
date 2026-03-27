int sub_730560()
{
  int v0; // esi
  int result; // eax

  v0 = FormHeapAlloc(0x1Cu);
  result = 0;
  if ( v0 )
  {
    sub_721350((NiObject *)v0);
    *(_DWORD *)v0 = &NiColorExtraData::`vftable';
    *(float *)(v0 + 0xC) = 0.0;
    *(float *)(v0 + 0x10) = 0.0;
    *(float *)(v0 + 0x14) = 0.0;
    *(float *)(v0 + 0x18) = 0.0;
    *(_DWORD *)(v0 + 0xC) = dword_B25AD0;
    *(_DWORD *)(v0 + 0x10) = dword_B25AD4;
    *(_DWORD *)(v0 + 0x14) = dword_B25AD8;
    *(_DWORD *)(v0 + 0x18) = dword_B25ADC;
    return v0;
  }
  return result;
}
