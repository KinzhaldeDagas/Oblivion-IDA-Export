void __thiscall SpellEnch_MagicItem_SetAutoCalc(_BYTE *this, int a2)
{
  if ( (_BYTE)a2 )
    SpellEnch_MagicItem_SetAutoCalc_::AutoCalc_(this, a2);
  else
    *(this + 0x28) |= 1u;
}
