void __thiscall sub_4ED830(TESForm *this)
{
  Data *OverrideFile; // eax
  TESForm *v3; // eax
  void *v4; // eax
  const char *v5; // eax
  TESForm *v6; // edi
  int v7; // ebx
  Data *v8; // eax
  TESForm *v9; // eax
  TESFormVtbl *v10; // eax
  const char *v11; // eax
  int v12; // [esp-8h] [ebp-14h]
  int v13; // [esp+0h] [ebp-Ch]
  char ArgList[4]; // [esp+8h] [ebp-4h] BYREF

  if ( (this->member.flags & 8) == 0 )
  {
    *(_DWORD *)ArgList = *((_DWORD *)this + 0xE);
    if ( *(_DWORD *)ArgList )
    {
      OverrideFile = TESForm_GetOverrideFile(this, 0xFFFFFFFF);
      TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);
      v3 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
      v4 = OblivionDynamicCast(
             v3,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESSound `RTTI Type Descriptor',
             0);
      *((_DWORD *)this + 0xE) = v4;
      if ( !v4 )
      {
        v5 = (const char *)((int (__thiscall *)(TESForm *, UInt32))this->vtbl->GetEditorName)(this, this->member.refID);
        PrintError("Could not find sound (%08X) for water type '%s' (%08X).", *(_DWORD *)ArgList, v5, v13);
      }
    }
    v6 = (TESForm *)((char *)this + 0xA0);
    v7 = 3;
    do
    {
      *(_DWORD *)ArgList = v6->vtbl;
      if ( *(_DWORD *)ArgList )
      {
        v8 = TESForm_GetOverrideFile(this, 0xFFFFFFFF);
        TESForm_ResolveFormID((UInt32 *)ArgList, v8);
        v9 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
        v10 = (TESFormVtbl *)OblivionDynamicCast(
                               v9,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &TESWaterForm `RTTI Type Descriptor',
                               0);
        v6->vtbl = v10;
        if ( !v10 )
        {
          v11 = (const char *)((int (__thiscall *)(TESForm *, UInt32))this->vtbl->GetEditorName)(
                                this,
                                this->member.refID);
          PrintError("Could not find WaterForm (%08X) for water type '%s' (%08X).", *(_DWORD *)ArgList, v11, v12);
        }
      }
      v6 = (TESForm *)((char *)v6 + 4);
      --v7;
    }
    while ( v7 );
    TESForm_SetIsLinked(this, 1);
  }
}
