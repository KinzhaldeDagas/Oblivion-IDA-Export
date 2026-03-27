int __thiscall TESActorBaseData_LinkComponent(char *this, TESForm *a2)
{
  TESForm *v2; // esi
  char *v4; // edi
  Data *OverrideFile; // ebx
  int *v6; // esi
  TESForm *v7; // eax
  void *v8; // eax
  _DWORD *v9; // eax
  int result; // eax
  TESForm *v11; // eax
  UInt32 refID; // esi
  const char *v13; // eax
  char ArgList[4]; // [esp+10h] [ebp-8h] BYREF
  int a1; // [esp+14h] [ebp-4h] BYREF

  v2 = a2;
  v4 = this + 0x18;
  if ( a2 )
    OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF);
  else
    OverrideFile = 0;
  if ( v4 )
  {
    do
    {
      v6 = *(int **)v4;
      if ( !*(_DWORD *)v4
        || *v6
        && (a1 = *v6,
            TESForm_ResolveFormID((UInt32 *)&a1, OverrideFile),
            v7 = TESForm_LookupByFormID(a1),
            v8 = OblivionDynamicCast(
                   v7,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                   &TESFaction `RTTI Type Descriptor',
                   0),
            (*v6 = (int)v8) != 0) )
      {
        v4 = *((char **)v4 + 1);
      }
      else
      {
        v9 = *((_DWORD **)v4 + 1);
        if ( v9 )
        {
          *((_DWORD *)v4 + 1) = v9[1];
          *(_DWORD *)v4 = *v9;
          FormHeapFree((unsigned int)v9);
        }
        else
        {
          *(_DWORD *)v4 = 0;
        }
      }
    }
    while ( v4 );
    v2 = a2;
  }
  *(_DWORD *)ArgList = *((_DWORD *)this + 5);
  result = *(_DWORD *)ArgList;
  if ( *(_DWORD *)ArgList )
  {
    TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);
    v11 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
    result = (int)OblivionDynamicCast(
                    v11,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESLevItem `RTTI Type Descriptor',
                    0);
    *((_DWORD *)this + 5) = result;
    if ( !result )
    {
      refID = v2->member.refID;
      v13 = a2->vtbl->GetEditorName(a2);
      return PrintError("Unable to find death item (%08X) on ActorBase (%08X) '%s'.", *(_DWORD *)ArgList, refID, v13);
    }
  }
  return result;
}
