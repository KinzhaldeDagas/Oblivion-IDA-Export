TESObjectREFR *__thiscall sub_4CBA80(TESObjectCELL *this, TESForm *a2, char a3)
{
  ObjectListEntry *p_objectList; // esi
  TESObjectREFR *refr; // edi
  TESForm *v7; // eax

  if ( !a2 ) /*0x4cba88*/
    return 0; /*0x4cba8a*/
  sub_496EA0((char *)&unk_B35C80, this); /*0x4cba99*/
  p_objectList = &this->members.objectList; /*0x4cba9e*/
  if ( this != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4cbaa3*/
  {
    while ( p_objectList->next || p_objectList->refr ) /*0x4cbab9*/
    {
      refr = p_objectList->refr; /*0x4cbabb*/
      v7 = p_objectList->refr->vtbl->GetBaseForm(p_objectList->refr); /*0x4cbac7*/
      p_objectList = p_objectList->next; /*0x4cbacb*/
      if ( v7 && (!a3 || (refr->member.super.flags & 0x20) == 0) && v7 == a2 ) /*0x4cbae3*/
      {
        sub_496F50(&unk_B35C80, this); /*0x4cbb03*/
        return refr; /*0x4cbb08*/
      }
      if ( !p_objectList ) /*0x4cbae7*/
        break; /*0x4cbae7*/
    }
  }
  sub_496F50(&unk_B35C80, this); /*0x4cbae9*/
  return 0; /*0x4cba8c*/
}
