int __thiscall sub_4CD000(TESObjectCELL *this)
{
  ObjectListEntry *p_objectList; // edi
  TESObjectREFR *refr; // esi
  int v4; // esi
  int v5; // eax

  sub_496EA0((char *)&stru_B35C80, this);
  p_objectList = &this->members.objectList;
  if ( this != (TESObjectCELL *)0xFFFFFFB8 )
  {
    do
    {
      refr = p_objectList->refr;
      if ( p_objectList->refr )
      {
        if ( !sub_4D7000(&p_objectList->refr->vtbl) && refr->vtbl->GetBaseForm(refr)->member.type == kFormType_Tree )
        {
          if ( refr->vtbl->GetNiNode(refr) )
          {
            v4 = (int)refr->vtbl->GetNiNode(refr);
            v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x9C))(v4);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 4))(v5, v4);
          }
        }
      }
      p_objectList = p_objectList->next;
    }
    while ( p_objectList );
  }
  return sub_496F50(&stru_B35C80, this);
}
