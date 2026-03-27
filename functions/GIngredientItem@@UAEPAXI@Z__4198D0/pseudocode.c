IngredientItem *__thiscall IngredientItem::`scalar deleting destructor'(IngredientItem *this, char a2)
{
  IngredientItem::~IngredientItem(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
