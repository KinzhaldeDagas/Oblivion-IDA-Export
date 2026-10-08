char __thiscall EffectItem_SetArea(int this, int a2)
{
  char result; // al

  result = 0; /*0x413399*/
  if ( (*(_DWORD *)(*(_DWORD *)(this + 0x1C) + 0x58) & 0x200) == 0 ) /*0x41339e*/
  {
    if ( *(_DWORD *)(this + 0x10) ) /*0x4133a0*/
    {
      if ( a2 >= 0 ) /*0x4133ac*/
      {
        *(_DWORD *)(this + 8) = a2; /*0x4133b4*/
        *(float *)(this + 0x20) = -1.0; /*0x4133b7*/
        return 1; /*0x4133ba*/
      }
    }
  }
  return result; /*0x4133bc*/
}
