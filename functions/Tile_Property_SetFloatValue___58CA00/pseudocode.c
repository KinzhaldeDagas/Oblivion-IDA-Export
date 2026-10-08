// Verified: marks numeric; if changed or string trait 0xFDE, clears string, stores number, clears own expression actions via 0x588930, then CalculateValue(this,true). Same-value ordinary traits bypass clear/evaluation. Unlike Fallout SetFloat, no abClearActions parameter.
void __thiscall Tile::Value::SetFloat(OblivionTileValueView *this, float value)
{
  double number; // st7

  number = this->number; /*0x58ca03*/
  this->isNumeric = 1; /*0x58ca06*/
  if ( value != number || this->trait == 0xFDE ) /*0x58ca1d*/
  {
    BSStringT_Set(&this->text, EmptyString, 0); /*0x58ca29*/
    this->number = value; /*0x58ca34*/
    Tile::Value::ClearActions(this); /*0x58ca37*/
    Tile::Value::CalculateValue(this, 1); /*0x58ca40*/
  }
}
