TESObjectREFR *__thiscall sub_4CC910(TESObjectCELL *this)
{
  TESObjectREFR *v2; // ebp
  ObjectListEntry *p_objectList; // esi
  TESObjectREFR *refr; // edi

  v2 = 0; /*0x4cc91b*/
  sub_496EA0((char *)&unk_B35C80, this); /*0x4cc91d*/
  p_objectList = &this->members.objectList; /*0x4cc922*/
  if ( this != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4cc927*/
  {
    while ( 1 ) /*0x4cc930*/
    {
      refr = p_objectList->refr; /*0x4cc930*/
      if ( p_objectList->refr ) /*0x4cc930*/
      {
        if ( refr->vtbl->GetBaseForm(p_objectList->refr) == MEMORY[0xB33AA8] ) /*0x4cc948*/
          break; /*0x4cc948*/
      }
      p_objectList = p_objectList->next; /*0x4cc94a*/
      if ( !p_objectList ) /*0x4cc94f*/
      {
        sub_496F50(&unk_B35C80, this); /*0x4cc958*/
        return 0; /*0x4cc962*/
      }
    }
    v2 = refr; /*0x4cc963*/
  }
  sub_496F50(&unk_B35C80, this); /*0x4cc96c*/
  return v2; /*0x4cc95d*/
}
