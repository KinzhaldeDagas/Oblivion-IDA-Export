TESObjectREFR *__thiscall sub_4CBA80(TESObjectCELL *this, TESForm *a2, char a3)
{
  ObjectListEntry *p_objectList; // esi
  TESObjectREFR *refr; // edi
  TESForm *v7; // eax

  if ( !a2 )
    return 0;
  sub_496EA0((char *)&stru_B35C80, this);
  p_objectList = &this->members.objectList;
  if ( this != (TESObjectCELL *)0xFFFFFFB8 )
  {
    while ( p_objectList->next || p_objectList->refr )
    {
      refr = p_objectList->refr;
      v7 = p_objectList->refr->vtbl->GetBaseForm(p_objectList->refr);
      p_objectList = p_objectList->next;
      if ( v7 && (!a3 || (refr->member.super.flags & 0x20) == 0) && v7 == a2 )
      {
        sub_496F50(&stru_B35C80, this);
        return refr;
      }
      if ( !p_objectList )
        break;
    }
  }
  sub_496F50(&stru_B35C80, this);
  return 0;
}
