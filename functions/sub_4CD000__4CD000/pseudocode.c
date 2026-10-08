int __thiscall sub_4CD000(TESObjectCELL *this)
{
  ObjectListEntry *p_objectList; // edi
  TESObjectREFR *refr; // esi
  int v4; // esi
  int v5; // eax

  sub_496EA0((char *)&unk_B35C80, this); /*0x4cd00a*/
  p_objectList = &this->members.objectList; /*0x4cd00f*/
  if ( this != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4cd014*/
  {
    do /*0x4cd073*/
    {
      refr = p_objectList->refr; /*0x4cd017*/
      if ( p_objectList->refr ) /*0x4cd017*/
      {
        if ( !sub_4D7000(&p_objectList->refr->vtbl) && refr->vtbl->GetBaseForm(refr)->member.type == kFormType_Tree ) /*0x4cd038*/
        {
          if ( refr->vtbl->GetNiNode(refr) ) /*0x4cd044*/
          {
            v4 = (int)refr->vtbl->GetNiNode(refr); /*0x4cd056*/
            v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x9C))(v4); /*0x4cd062*/
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 4))(v5, v4); /*0x4cd06c*/
          }
        }
      }
      p_objectList = p_objectList->next; /*0x4cd06e*/
    }
    while ( p_objectList ); /*0x4cd073*/
  }
  return sub_496F50(&unk_B35C80, this); /*0x4cd082*/
}
