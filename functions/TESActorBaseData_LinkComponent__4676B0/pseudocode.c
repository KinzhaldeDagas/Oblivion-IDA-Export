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

  v2 = a2; /*0x4676b6*/
  v4 = this + 0x18; /*0x4676bf*/
  if ( a2 ) /*0x4676c2*/
    OverrideFile = TESForm_GetOverrideFile(a2, 0xFFFFFFFF); /*0x4676cd*/
  else
    OverrideFile = 0; /*0x4676d1*/
  if ( v4 ) /*0x4676d5*/
  {
    do /*0x467748*/
    {
      v6 = *(int **)v4; /*0x4676d7*/
      if ( !*(_DWORD *)v4 /*0x46771d*/
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
        v4 = *((char **)v4 + 1); /*0x467743*/
      }
      else
      {
        v9 = *((_DWORD **)v4 + 1); /*0x46771f*/
        if ( v9 ) /*0x467724*/
        {
          *((_DWORD *)v4 + 1) = v9[1]; /*0x467729*/
          *(_DWORD *)v4 = *v9; /*0x46772f*/
          FormHeapFree((unsigned int)v9); /*0x467731*/
        }
        else
        {
          *(_DWORD *)v4 = 0; /*0x46773b*/
        }
      }
    }
    while ( v4 ); /*0x467748*/
    v2 = a2; /*0x46774a*/
  }
  *(_DWORD *)ArgList = *((_DWORD *)this + 5); /*0x467753*/
  result = *(_DWORD *)ArgList; /*0x46774e*/
  if ( *(_DWORD *)ArgList ) /*0x467757*/
  {
    TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x46775f*/
    v11 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x46777a*/
    result = (int)OblivionDynamicCast( /*0x467783*/
                    v11,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESLevItem `RTTI Type Descriptor',
                    0);
    *((_DWORD *)this + 5) = result; /*0x46778d*/
    if ( !result ) /*0x467790*/
    {
      refID = v2->member.refID; /*0x46779e*/
      v13 = a2->vtbl->GetEditorName(a2); /*0x4677a1*/
      return PrintError("Unable to find death item (%08X) on ActorBase (%08X) '%s'.", *(_DWORD *)ArgList, refID, v13); /*0x4677af*/
    }
  }
  return result; /*0x4677b7*/
}
