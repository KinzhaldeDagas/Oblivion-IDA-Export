__int16 __thiscall sub_73B4B0(int this, __int16 a2)
{
  bool v2; // zf
  __int16 result; // ax

  v2 = *(_WORD *)(this + 0x44) == 0;
  result = a2;
  *(_WORD *)(this + 0x52) = a2;
  if ( !v2 )
    **(_WORD **)(this + 0x48) = a2;
  return result;
}
