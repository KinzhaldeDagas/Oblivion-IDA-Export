char __thiscall EffectItem_SetDuration(int this, int a2)
{
  char result; // al

  result = 0; /*0x4133e9*/
  if ( (*(_DWORD *)(*(_DWORD *)(this + 0x1C) + 0x58) & 0x80) == 0 && a2 >= 0 ) /*0x4133f6*/
  {
    *(_DWORD *)(this + 0xC) = a2; /*0x4133fe*/
    *(float *)(this + 0x20) = -1.0; /*0x413401*/
    return 1; /*0x413404*/
  }
  return result; /*0x413406*/
}
