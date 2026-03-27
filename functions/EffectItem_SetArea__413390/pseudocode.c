char __thiscall EffectItem_SetArea(int this, int a2)
{
  char result; // al

  result = 0;
  if ( (*(_DWORD *)(*(_DWORD *)(this + 0x1C) + 0x58) & 0x200) == 0 )
  {
    if ( *(_DWORD *)(this + 0x10) )
    {
      if ( a2 >= 0 )
      {
        *(_DWORD *)(this + 8) = a2;
        *(float *)(this + 0x20) = -1.0;
        return 1;
      }
    }
  }
  return result;
}
