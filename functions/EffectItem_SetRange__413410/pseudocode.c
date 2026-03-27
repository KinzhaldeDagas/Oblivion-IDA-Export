char __thiscall EffectItem_SetRange(int this, int a2)
{
  char result; // al

  result = 0;
  if ( a2 == 1 )
  {
    if ( (*(_DWORD *)(*(_DWORD *)(this + 0x1C) + 0x58) & 0x20) == 0 )
      return result;
EffectItem_SetRange___SetRange:
    *(_DWORD *)(this + 0x10) = a2;
    *(float *)(this + 0x20) = -1.0;
    return 1;
  }
  if ( a2 == 2 )
  {
    if ( (*(_DWORD *)(*(_DWORD *)(this + 0x1C) + 0x58) & 0x40) != 0 )
      goto EffectItem_SetRange___SetRange;
  }
  else if ( !a2 && (*(_DWORD *)(*(_DWORD *)(this + 0x1C) + 0x58) & 0x10) != 0 )
  {
    goto EffectItem_SetRange___SetRange;
  }
  return result;
}
