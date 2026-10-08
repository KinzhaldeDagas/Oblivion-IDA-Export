char __thiscall EffectItem_SetMagnitude(int this, int a2)
{
  char result; // al

  result = 0; /*0x413349*/
  if ( (*(_DWORD *)(*(_DWORD *)(this + 0x1C) + 0x58) & 0x100) == 0 && a2 >= 0 ) /*0x413356*/
  {
    *(_DWORD *)(this + 4) = a2; /*0x41335e*/
    *(float *)(this + 0x20) = -1.0; /*0x413361*/
    return 1; /*0x413364*/
  }
  return result; /*0x413366*/
}
