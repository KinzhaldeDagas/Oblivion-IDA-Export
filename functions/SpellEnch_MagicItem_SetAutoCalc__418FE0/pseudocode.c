void __thiscall SpellEnch_MagicItem_SetAutoCalc(_BYTE *this, int a2)
{
  if ( (_BYTE)a2 ) /*0x418fe5*/
    SpellEnch_MagicItem_SetAutoCalc_::AutoCalc_(this, a2); /*0x418fe5*/
  else
    *(this + 0x28) |= 1u; /*0x418fe7*/
}
