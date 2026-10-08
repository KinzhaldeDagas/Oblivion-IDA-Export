void __thiscall sub_4CB520(TESObjectCELL *this, _DWORD *a2)
{
  ObjectListEntry *p_objectList; // esi
  TESObjectREFR *refr; // edi

  if ( a2 ) /*0x4cb52a*/
  {
    sub_496EA0((char *)&unk_B35C80, this); /*0x4cb533*/
    p_objectList = &this->members.objectList; /*0x4cb538*/
    if ( this != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4cb53d*/
    {
      do /*0x4cb572*/
      {
        refr = p_objectList->refr; /*0x4cb540*/
        if ( p_objectList->refr ) /*0x4cb540*/
        {
          if ( refr->vtbl->GetBaseForm(p_objectList->refr) == (TESForm *)MEMORY[0xB35EA8] ) /*0x4cb558*/
          {
            if ( sub_4D7730(refr) ) /*0x4cb55c*/
              BSSimpleList_PushFront(a2, (int)refr); /*0x4cb568*/
          }
        }
        p_objectList = p_objectList->next; /*0x4cb56d*/
      }
      while ( p_objectList ); /*0x4cb572*/
    }
    sub_496F50(&unk_B35C80, this); /*0x4cb57b*/
  }
}
