void __thiscall sub_52EE30(TESForm *this)
{
  TESForm *v1; // edi
  bool v2; // zf
  TESFormVtbl *vtbl; // esi
  TESForm *v4; // eax
  Data *OverrideFile; // eax
  TESForm *v6; // eax
  int Destroy; // ecx
  int v8; // ebp
  void (__thiscall *CopyFromBase)(BaseFormComponent *, BaseFormComponent *); // eax
  const char *v10; // eax
  void (__thiscall **p_ClearComponentReferences)(BaseFormComponent *); // ebp
  void (__thiscall *v12)(TESForm *, bool); // ebx
  unsigned int v13; // esi
  _WORD *v14; // edi
  int v15; // [esp-10h] [ebp-20h]
  TESForm *v16; // [esp+4h] [ebp-Ch]
  int a1; // [esp+8h] [ebp-8h] BYREF
  TESForm *v18; // [esp+Ch] [ebp-4h]

  v1 = this;
  v2 = (this->member.flags & 8) == 0;
  v18 = this;
  if ( v2 )
  {
    v16 = (TESForm *)((char *)this + 0x28);
    if ( this != (TESForm *)0xFFFFFFD8 )
    {
      do
      {
        vtbl = v16->vtbl;
        if ( !v16->vtbl )
          break;
        if ( !LOBYTE(vtbl->Unk_08) )
        {
          if ( vtbl->super.InitializeComponent )
          {
            v4 = TESForm_LookupByFormID((UInt32)vtbl->super.InitializeComponent);
            vtbl->super.InitializeComponent = (void (__thiscall *)(BaseFormComponent *))OblivionDynamicCast(
                                                                                          v4,
                                                                                          0,
                                                                                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                                                                          &TESQuest `RTTI Type Descriptor',
                                                                                          0);
          }
          else if ( vtbl->LoadForm )
          {
            a1 = (int)vtbl->LoadForm;
            OverrideFile = TESForm_GetOverrideFile(v1, 0xFFFFFFFF);
            TESForm_ResolveFormID((UInt32 *)&a1, OverrideFile);
            v6 = TESForm_LookupByFormID(a1);
            vtbl->LoadForm = (bool (__thiscall *)(TESForm *, void *))OblivionDynamicCast(
                                                                       v6,
                                                                       0,
                                                                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                                                       &TESQuest `RTTI Type Descriptor',
                                                                       0);
          }
          else
          {
            Destroy = 0;
            if ( vtbl != (TESFormVtbl *)0xFFFFFFFC )
              Destroy = (int)vtbl->Destroy;
            v8 = 0;
            if ( Destroy > 0 )
            {
              CopyFromBase = vtbl->super.CopyFromBase;
              do
              {
                if ( (*(_DWORD *)(*(_DWORD *)CopyFromBase + 8) & 0x20) == 0 )
                  ++v8;
                CopyFromBase = (void (__thiscall *)(BaseFormComponent *, BaseFormComponent *))((char *)CopyFromBase + 4);
                --Destroy;
              }
              while ( Destroy );
              if ( v8 > 0 )
              {
                v10 = (const char *)((int (__thiscall *)(TESForm *, int))v1->vtbl->GetEditorName)(v1, v8);
                PrintError(
                  "No Quest Reference on Topic \"%s\" (%d non-deleted infos attached to this quest).",
                  v10,
                  v15);
              }
            }
          }
          LOBYTE(vtbl->Unk_08) = 1;
        }
        p_ClearComponentReferences = &vtbl->super.ClearComponentReferences;
        if ( vtbl != (TESFormVtbl *)0xFFFFFFFC )
        {
          sub_5A56F0(&vtbl->super.ClearComponentReferences);
          v12 = vtbl->Destroy;
          v13 = 0;
          if ( v12 )
          {
            do
            {
              v14 = *((_WORD **)p_ClearComponentReferences[1] + v13);
              if ( v14 )
              {
                (*(void (__thiscall **)(_WORD *))(*(_DWORD *)v14 + 0x6C))(v14);
                v14[0x10] = v13;
              }
              ++v13;
            }
            while ( v13 < (unsigned int)v12 );
            v1 = v18;
          }
        }
        v16 = *(TESForm **)&v16->member.type;
      }
      while ( v16 );
    }
    TESForm_SetIsLinked(v1, 1);
  }
}
