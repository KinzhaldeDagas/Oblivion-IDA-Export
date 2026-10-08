char __thiscall EffectItem_SetRange(int this, int a2)
{
  char result; // al

  result = 0; /*0x413415*/
  if ( a2 == 1 ) /*0x41341b*/
  {
    if ( (*(_DWORD *)(*(_DWORD *)(this + 0x1C) + 0x58) & 0x20) == 0 ) /*0x413428*/
      return result; /*0x413428*/
EffectItem_SetRange___SetRange:
    *(_DWORD *)(this + 0x10) = a2; /*0x413459*/
    *(float *)(this + 0x20) = -1.0; /*0x413462*/
    return 1; /*0x413465*/
  }
  if ( a2 == 2 ) /*0x413432*/
  {
    if ( (*(_DWORD *)(*(_DWORD *)(this + 0x1C) + 0x58) & 0x40) != 0 ) /*0x413440*/
      goto EffectItem_SetRange___SetRange; /*0x413440*/
  }
  else if ( !a2 && (*(_DWORD *)(*(_DWORD *)(this + 0x1C) + 0x58) & 0x10) != 0 ) /*0x413457*/
  {
    goto EffectItem_SetRange___SetRange; /*0x413457*/
  }
  return result; /*0x41342a*/
}
