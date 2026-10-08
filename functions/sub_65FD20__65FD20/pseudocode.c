void __thiscall sub_65FD20(_DWORD *this, TESObjectREFR *a2)
{
  TESObjectCELL *DwordAtOffset40; // eax
  TESObjectCELL *v4; // eax
  BSSimpleList_VoidPtr *v5; // edi

  if ( a2 ) /*0x65fd2a*/
  {
    if ( a2->vtbl->GetBaseForm(a2) == (TESForm *)MEMORY[0xB35EBC] ) /*0x65fd3e*/
    {
      if ( TESObjectREFR_GetTeleportData(a2) ) /*0x65fd42*/
      {
        if ( !Shared_GetDwordAtOffset40(a2) /*0x65fd71*/
          || (DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a2),
              !TESObjectCELL_IsInterior(DwordAtOffset40))
          || (v4 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a2), TESObjectCELL_HasFlag80(v4)) )
        {
          v5 = (BSSimpleList_VoidPtr *)(this + 0x1C1); /*0x65fd7a*/
          if ( !BSSimpleList::Contains(v5, a2) ) /*0x65fd83*/
            BSSimpleList_PushFront(v5, (int)a2); /*0x65fd8f*/
        }
      }
    }
  }
}
