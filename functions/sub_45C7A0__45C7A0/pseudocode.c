void __thiscall sub_45C7A0(char *this, TESForm *a2)
{
  UInt32 mainThreadID; // esi
  int v4; // eax
  void *v5; // eax
  char *v6; // eax
  int FormID; // eax

  mainThreadID = OSGlobals->mainThreadID;
  if ( GetCurrentThreadId() == mainThreadID )
    LOBYTE(v4) = *(this + 0x18);
  else
    v4 = *((_DWORD *)this + 6) >> 0x12;
  if ( (v4 & 1) == 0 )
    PrintError("DeleteForm() was called, but the game is not being loaded.");
  sub_452DF0(*(_DWORD **)this, a2->member.refID, 1);
  v5 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESObjectCELL `RTTI Type Descriptor',
         0);
  if ( (a2->member.flags & 0x4000) != 0 || v5 )
  {
    FormID = TESDataHandler_ReserveNextFormID((int *)TESDataHandler);
    TESForm_SetFormID(a2, FormID, 1);
  }
  else
  {
    TESForm_SetFormID(a2, 0, 1);
    TESForm_RemoveFromGlobalLists(a2);
    a2->vtbl->SetEditorID(a2, EmptyString);
    v6 = this + 0x30;
    if ( this == (char *)0xFFFFFFD0 )
    {
LABEL_11:
      BSSimpleList_PushFront((_DWORD *)this + 0xC, (int)a2);
    }
    else
    {
      while ( *(TESForm **)v6 != a2 )
      {
        v6 = *((char **)v6 + 1);
        if ( !v6 )
          goto LABEL_11;
      }
    }
  }
}
