BOOL __thiscall SpellEnch_MagicItem_IsAutoCalc(_BYTE *this)
{
  return (*(this + 0x28) & 1) == 0;
}
