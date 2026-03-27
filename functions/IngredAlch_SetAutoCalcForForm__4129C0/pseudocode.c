void __thiscall IngredAlch_SetAutoCalcForForm(_BYTE *this, char a2)
{
  if ( a2 )
    *(this + 0x7C) &= ~1u;
  else
    *(this + 0x7C) |= 1u;
}
