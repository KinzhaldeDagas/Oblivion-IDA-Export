void __thiscall sub_4CBDB0(TESObjectCELL *this, _DWORD *a2)
{
  ObjectListEntry *p_objectList; // edi
  TESObjectREFR *refr; // esi
  TESForm::FormFlags flags; // eax
  int v6; // eax
  TESForm *v7; // ebp

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
          flags = refr->member.super.flags;
          if ( (flags & 0x800) == 0 && (flags & 0x20) == 0 )
          {
            v6 = (int)refr->vtbl->GetBaseForm(p_objectList->refr);
            if ( *(_BYTE *)(v6 + 4) == 0x18 && v6 != TESDataHandler_g_PrisonMarker )
            {
              v7 = refr->vtbl->GetBaseForm(refr);
              if ( GetTeleportExtraData(refr) || sub_4B78E0(v7) )
                BSSimpleList_PushFront(a2, (int)refr);
            }
          }
        }
        p_objectList = p_objectList->next;
      }
      while ( p_objectList );
    }
    sub_496F50(&stru_B35C80, this);
  }
}
