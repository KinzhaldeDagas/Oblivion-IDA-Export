BOOL __thiscall IngredAlch_IsAutoCalc(_BYTE *this)
{
  return (*(this + 0x7C) & 1) == 0;
}
