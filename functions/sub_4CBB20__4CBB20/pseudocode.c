TESObjectREFR *__thiscall sub_4CBB20(TESObjectCELL *this, char a2, char a3)
{
  ObjectListEntry *p_objectList; // esi
  TESObjectREFR *refr; // edi
  int v6; // eax

  sub_496EA0((char *)&unk_B35C80, this); /*0x4cbb2c*/
  p_objectList = &this->members.objectList; /*0x4cbb31*/
  if ( this != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4cbb36*/
  {
    while ( p_objectList->next || p_objectList->refr ) /*0x4cbb49*/
    {
      refr = p_objectList->refr; /*0x4cbb4b*/
      v6 = (int)p_objectList->refr->vtbl->GetBaseForm(p_objectList->refr); /*0x4cbb57*/
      p_objectList = p_objectList->next; /*0x4cbb5b*/
      if ( v6 && (!a3 || (refr->member.super.flags & 0x20) == 0) && *(_BYTE *)(v6 + 4) == a2 ) /*0x4cbb76*/
      {
        sub_496F50(&unk_B35C80, this); /*0x4cbb96*/
        return refr; /*0x4cbb9b*/
      }
      if ( !p_objectList ) /*0x4cbb7a*/
        break; /*0x4cbb7a*/
    }
  }
  sub_496F50(&unk_B35C80, this); /*0x4cbb7c*/
  return 0; /*0x4cbb88*/
}
