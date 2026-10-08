IngredientItem *__thiscall IngredientItem::`scalar deleting destructor'(IngredientItem *this, char a2)
{
  IngredientItem::~IngredientItem(this); /*0x4198d3*/
  if ( (a2 & 1) != 0 ) /*0x4198dd*/
    FormHeapFree((unsigned int)this); /*0x4198e0*/
  return this; /*0x4198ea*/
}
