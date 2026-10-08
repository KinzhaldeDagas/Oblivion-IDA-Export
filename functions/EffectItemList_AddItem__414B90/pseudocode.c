char __thiscall EffectItemList_AddItem(_DWORD *this, _DWORD *a2)
{
  char result; // al

  BSSimpleList_PushBack(this + 1, (int)a2); /*0x414b9c*/
  result = EffectItem_IsHostile(a2); /*0x414ba3*/
  if ( result ) /*0x414baa*/
    ++*(this + 3); /*0x414bac*/
  return result; /*0x414bb0*/
}
