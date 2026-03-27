void __thiscall sub_4CB520(TESObjectCELL *this, _DWORD *a2)
{
  ObjectListEntry *p_objectList; // esi
  TESObjectREFR *refr; // edi

  if ( a2 )
  {
    sub_496EA0((char *)&stru_B35C80, this);
    p_objectList = &this->members.objectList;
    if ( this != (TESObjectCELL *)0xFFFFFFB8 )
    {
      do
      {
        refr = p_objectList->refr;
        if ( p_objectList->refr )
        {
          if ( refr->vtbl->GetBaseForm(p_objectList->refr) == (TESForm *)TESDataHandler_g_MapMarker )
          {
            if ( sub_4D7730(refr) )
              BSSimpleList_PushFront(a2, (int)refr);
          }
        }
        p_objectList = p_objectList->next;
      }
      while ( p_objectList );
    }
    sub_496F50(&stru_B35C80, this);
  }
}
