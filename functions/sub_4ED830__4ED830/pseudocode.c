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

  if ( (this->member.flags & 8) == 0 ) /*0x4ed83c*/
  {
    *(_DWORD *)ArgList = *((_DWORD *)this + 0xE); /*0x4ed847*/
    if ( *(_DWORD *)ArgList ) /*0x4ed84b*/
    {
      OverrideFile = TESForm_GetOverrideFile(this, 0xFFFFFFFF); /*0x4ed84f*/
      TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x4ed85a*/
      v3 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x4ed875*/
      v4 = OblivionDynamicCast( /*0x4ed87e*/
             v3,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESSound `RTTI Type Descriptor',
             0);
      *((_DWORD *)this + 0xE) = v4; /*0x4ed888*/
      if ( !v4 ) /*0x4ed88b*/
      {
        v5 = (const char *)((int (__thiscall *)(TESForm *, UInt32))this->vtbl->GetEditorName)(this, this->member.refID); /*0x4ed89b*/
        PrintError("Could not find sound (%08X) for water type '%s' (%08X).", *(_DWORD *)ArgList, v5, v13); /*0x4ed8a8*/
      }
    }
    v6 = (TESForm *)((char *)this + 0xA0); /*0x4ed8b2*/
    v7 = 3; /*0x4ed8b8*/
    do /*0x4ed934*/
    {
      *(_DWORD *)ArgList = v6->vtbl; /*0x4ed8c4*/
      if ( *(_DWORD *)ArgList ) /*0x4ed8c8*/
      {
        v8 = TESForm_GetOverrideFile(this, 0xFFFFFFFF); /*0x4ed8ce*/
        TESForm_ResolveFormID((UInt32 *)ArgList, v8); /*0x4ed8d9*/
        v9 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x4ed8f4*/
        v10 = (TESFormVtbl *)OblivionDynamicCast( /*0x4ed8fd*/
                               v9,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &TESWaterForm `RTTI Type Descriptor',
                               0);
        v6->vtbl = v10; /*0x4ed907*/
        if ( !v10 ) /*0x4ed909*/
        {
          v11 = (const char *)((int (__thiscall *)(TESForm *, UInt32))this->vtbl->GetEditorName)( /*0x4ed919*/
                                this,
                                this->member.refID);
          PrintError("Could not find WaterForm (%08X) for water type '%s' (%08X).", *(_DWORD *)ArgList, v11, v12); /*0x4ed926*/
        }
      }
      v6 = (TESForm *)((char *)v6 + 4); /*0x4ed92e*/
      --v7; /*0x4ed931*/
    }
    while ( v7 ); /*0x4ed934*/
    TESForm_SetIsLinked(this, 1); /*0x4ed93a*/
  }
}
