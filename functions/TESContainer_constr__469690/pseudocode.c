TESContainer *__thiscall TESContainer_constr(TESContainer *this)
{
  this->vtbl = (BaseFormComponentVtbl *)&TESContainer::`vftable';
  this->list.data = 0;
  this->list.next = 0;
  this->type = 0;
  return this;
}
