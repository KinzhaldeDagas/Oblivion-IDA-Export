void __thiscall sub_4CBD30(TESObjectCELL *this, _DWORD *a2)
{
  ObjectListEntry *p_objectList; // edi
  TESObjectREFR *refr; // esi
  TESForm::FormFlags flags; // eax
  int v6; // eax

  if ( a2 ) /*0x4cbd3a*/
  {
    sub_496EA0((char *)&unk_B35C80, this); /*0x4cbd43*/
    p_objectList = &this->members.objectList; /*0x4cbd48*/
    if ( this != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4cbd4d*/
    {
      do /*0x4cbd9c*/
      {
        refr = p_objectList->refr; /*0x4cbd50*/
        if ( p_objectList->refr ) /*0x4cbd50*/
        {
          flags = refr->member.super.flags; /*0x4cbd56*/
          if ( (flags & 0x800) == 0 && (flags & 0x20) == 0 ) /*0x4cbd68*/
          {
            v6 = (int)refr->vtbl->GetBaseForm(p_objectList->refr); /*0x4cbd74*/
            if ( *(_BYTE *)(v6 + 4) == 0x18 && v6 != MEMORY[0xB35EBC] ) /*0x4cbd82*/
            {
              if ( TESObjectREFR_GetTeleportData(refr) ) /*0x4cbd86*/
                BSSimpleList_PushFront(a2, (int)refr); /*0x4cbd92*/
            }
          }
        }
        p_objectList = p_objectList->next; /*0x4cbd97*/
      }
      while ( p_objectList ); /*0x4cbd9c*/
    }
    sub_496F50(&unk_B35C80, this); /*0x4cbda5*/
  }
}
