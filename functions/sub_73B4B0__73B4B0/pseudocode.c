__int16 __thiscall sub_73B4B0(int this, __int16 a2)
{
  bool v2; // zf
  __int16 result; // ax

  v2 = *(_WORD *)(this + 0x44) == 0; /*0x73b4b0*/
  result = a2; /*0x73b4b5*/
  *(_WORD *)(this + 0x52) = a2; /*0x73b4ba*/
  if ( !v2 ) /*0x73b4be*/
    **(_WORD **)(this + 0x48) = a2; /*0x73b4c3*/
  return result; /*0x73b4c6*/
}
