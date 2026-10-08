void __thiscall IngredAlch_SetAutoCalcForForm(_BYTE *this, char a2)
{
  if ( a2 ) /*0x4129c5*/
    *(this + 0x7C) &= ~1u; /*0x4129ce*/
  else
    *(this + 0x7C) |= 1u; /*0x4129c7*/
}
