char __thiscall EffectItem_SetMagnitude(int this, int a2)
{
  char result; // al

  result = 0;
  if ( (*(_DWORD *)(*(_DWORD *)(this + 0x1C) + 0x58) & 0x100) == 0 && a2 >= 0 )
  {
    *(_DWORD *)(this + 4) = a2;
    *(float *)(this + 0x20) = -1.0;
    return 1;
  }
  return result;
}
