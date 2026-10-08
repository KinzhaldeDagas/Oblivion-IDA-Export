void __thiscall sub_4CCC50(TESObjectCELL *this)
{
  ObjectListEntry *p_objectList; // edi
  TESObjectREFR *refr; // esi
  bool v4; // zf

  sub_496EA0((char *)&unk_B35C80, this); /*0x4ccc59*/
  if ( this->members.cellProcessLevel == 6 ) /*0x4ccc62*/
  {
    p_objectList = &this->members.objectList; /*0x4ccc65*/
    if ( this != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4ccc6a*/
    {
      do /*0x4cccac*/
      {
        refr = p_objectList->refr; /*0x4ccc70*/
        v4 = p_objectList->refr == 0; /*0x4ccc72*/
        p_objectList = p_objectList->next; /*0x4ccc74*/
        if ( !v4 && (!refr->vtbl->IsActor(refr) || LOBYTE(refr[1].member.rot.x) || sub_45A500(g_TESSaveLoadGame)) ) /*0x4ccc95*/
          refr->vtbl->Unk_58(refr); /*0x4ccca8*/
      }
      while ( p_objectList ); /*0x4cccac*/
    }
  }
  sub_496F50(&unk_B35C80, this); /*0x4cccb6*/
}
