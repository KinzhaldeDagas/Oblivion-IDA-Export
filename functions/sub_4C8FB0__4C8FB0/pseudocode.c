void __thiscall sub_4C8FB0(TESForm *this)
{
  TESForm *v2; // esi
  TESForm *v3; // ebx
  Data *OverrideFile; // eax
  TESForm *v5; // eax
  TESFormVtbl *v6; // eax
  const char *v7; // eax
  TESFormVtbl **v8; // eax
  int v9; // [esp-Ch] [ebp-14h]
  char ArgList[4]; // [esp+4h] [ebp-4h] BYREF

  if ( (this->member.flags & 8) == 0 )
  {
    v2 = (TESForm *)((char *)this + 0x2C);
    v3 = 0;
    if ( this != (TESForm *)0xFFFFFFD4 )
    {
      do
      {
        if ( !*(_DWORD *)&v2->member.type && !v2->vtbl )
          break;
        *(_DWORD *)ArgList = v2->vtbl;
        OverrideFile = TESForm_GetOverrideFile(this, 0xFFFFFFFF);
        TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);
        v5 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
        v6 = (TESFormVtbl *)OblivionDynamicCast(
                              v5,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              &TESGrass `RTTI Type Descriptor',
                              0);
        if ( v6 )
        {
          v2->vtbl = v6;
          v3 = v2;
          v2 = *(TESForm **)&v2->member.type;
        }
        else
        {
          v7 = (const char *)((int (__thiscall *)(TESForm *, UInt32))this->vtbl->GetEditorName)(
                               this,
                               this->member.refID);
          PrintError("Could not find Grass (%08X) for LandTexture '%s' (%08X).", *(_DWORD *)ArgList, v7, v9);
          if ( v3 )
          {
            BSSimpleList_Remove(v3, *(int *)ArgList);
            v2 = *(TESForm **)&v3->member.type;
          }
          else
          {
            v8 = *(TESFormVtbl ***)&v2->member.type;
            if ( v8 )
            {
              *(_DWORD *)&v2->member.type = v8[1];
              v2->vtbl = *v8;
              FormHeapFree((unsigned int)v8);
            }
            else
            {
              v2->vtbl = 0;
            }
          }
        }
      }
      while ( v2 );
    }
    TESForm_SetIsLinked(this, 1);
  }
}
