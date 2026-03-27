char __thiscall EffectItemList_AddItem(_DWORD *this, _DWORD *a2)
{
  char result; // al

  BSSimpleList_PushBack(this + 1, (int)a2);
  result = EffectItem_IsHostile(a2);
  if ( result )
    ++*(this + 3);
  return result;
}
