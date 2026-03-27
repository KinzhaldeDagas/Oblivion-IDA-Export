void __thiscall sub_4CCC50(TESObjectCELL *this)
{
  ObjectListEntry *p_objectList; // edi
  TESObjectREFR *refr; // esi
  bool v4; // zf

  sub_496EA0((char *)&stru_B35C80, this);
  if ( this->members.cellProcessLevel == 6 )
  {
    p_objectList = &this->members.objectList;
    if ( this != (TESObjectCELL *)0xFFFFFFB8 )
    {
      do
      {
        refr = p_objectList->refr;
        v4 = p_objectList->refr == 0;
        p_objectList = p_objectList->next;
        if ( !v4 && (!refr->vtbl->IsActor(refr) || LOBYTE(refr[1].member.rot.x) || sub_45A500(SaveLoad_CurrentSavegame)) )
          refr->vtbl->Unk_58(refr);
      }
      while ( p_objectList );
    }
  }
  sub_496F50(&stru_B35C80, this);
}
