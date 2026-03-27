TESObjectREFR *__thiscall sub_4CBB20(TESObjectCELL *this, char a2, char a3)
{
  ObjectListEntry *p_objectList; // esi
  TESObjectREFR *refr; // edi
  int v6; // eax

  sub_496EA0((char *)&stru_B35C80, this);
  p_objectList = &this->members.objectList;
  if ( this != (TESObjectCELL *)0xFFFFFFB8 )
  {
    while ( p_objectList->next || p_objectList->refr )
    {
      refr = p_objectList->refr;
      v6 = (int)p_objectList->refr->vtbl->GetBaseForm(p_objectList->refr);
      p_objectList = p_objectList->next;
      if ( v6 && (!a3 || (refr->member.super.flags & 0x20) == 0) && *(_BYTE *)(v6 + 4) == a2 )
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
