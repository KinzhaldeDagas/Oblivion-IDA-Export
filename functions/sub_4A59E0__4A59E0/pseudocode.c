_DWORD *__thiscall sub_4A59E0(_DWORD *this, int *a2)
{
  int (__thiscall ***v3)(_DWORD); // ecx
  TESForm *v4; // eax
  Data *OverrideFile; // esi
  TESForm *v6; // edi
  TESForm *v7; // eax
  TESForm *v8; // ebx
  TESForm *v9; // eax
  int v10; // eax
  const char *v11; // esi
  int v12; // eax
  TESForm *v13; // eax
  int v14; // eax
  const char *v15; // esi
  int v16; // eax
  bool v17; // zf
  int a1; // [esp+10h] [ebp-4h] BYREF

  *this = &TESRegionGrassObject::`vftable';
  if ( TESDataHandler && (v3 = *(int (__thiscall ****)(_DWORD))(TESDataHandler + 0xCD8)) != 0 && (**v3)(v3) )
  {
    v4 = (TESForm *)(***(int (__thiscall ****)(_DWORD))(TESDataHandler + 0xCD8))(*(_DWORD *)(TESDataHandler + 0xCD8));
    a1 = *a2;
    OverrideFile = TESForm_GetOverrideFile(v4, 0xFFFFFFFF);
    TESForm_ResolveFormID((UInt32 *)&a1, OverrideFile);
    v6 = TESForm_LookupByFormID(a1);
    a1 = a2[1];
    TESForm_ResolveFormID((UInt32 *)&a1, OverrideFile);
    v7 = TESForm_LookupByFormID(a1);
  }
  else
  {
    v6 = TESForm_LookupByFormID(*a2);
    v7 = TESForm_LookupByFormID(a2[1]);
  }
  v8 = v7;
  *(this + 1) = 0;
  if ( v6 )
  {
    if ( v6->member.type == kFormType_Grass )
    {
      *(this + 1) = v6;
    }
    else if ( (***(int (__thiscall ****)(_DWORD))(TESDataHandler + 0xCD8))(*(_DWORD *)(TESDataHandler + 0xCD8)) )
    {
      v9 = (TESForm *)(***(int (__thiscall ****)(_DWORD))(TESDataHandler + 0xCD8))(*(_DWORD *)(TESDataHandler + 0xCD8));
      if ( TESForm::GetEditorNameLen(v9) )
      {
        v10 = (***(int (__thiscall ****)(_DWORD))(TESDataHandler + 0xCD8))(*(_DWORD *)(TESDataHandler + 0xCD8));
        v11 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0xD4))(v10);
      }
      else
      {
        v11 = EmptyString;
      }
      v12 = (***(int (__thiscall ****)(_DWORD))(TESDataHandler + 0xCD8))(*(_DWORD *)(TESDataHandler + 0xCD8));
      PrintError(
        "Instantiating a Grass region object for region %s (%d) with a non-Grass object.",
        v11,
        *(_DWORD *)(v12 + 0xC));
    }
    else
    {
      PrintError("Instantiating a Grass region object with a non-Grass object.");
    }
  }
  else if ( (***(int (__thiscall ****)(_DWORD))(TESDataHandler + 0xCD8))(*(_DWORD *)(TESDataHandler + 0xCD8)) )
  {
    v13 = (TESForm *)(***(int (__thiscall ****)(_DWORD))(TESDataHandler + 0xCD8))(*(_DWORD *)(TESDataHandler + 0xCD8));
    if ( TESForm::GetEditorNameLen(v13) )
    {
      v14 = (***(int (__thiscall ****)(_DWORD))(TESDataHandler + 0xCD8))(*(_DWORD *)(TESDataHandler + 0xCD8));
      v15 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 0xD4))(v14);
    }
    else
    {
      v15 = EmptyString;
    }
    v16 = (***(int (__thiscall ****)(_DWORD))(TESDataHandler + 0xCD8))(*(_DWORD *)(TESDataHandler + 0xCD8));
    PrintError("Instantiating a Grass region object for region %s (%d) without an object.", v15, *(_DWORD *)(v16 + 0xC));
  }
  else
  {
    PrintError("Instantiating a Grass region object without an object.");
  }
  v17 = *(this + 1) == 0;
  *(this + 2) = 0;
  if ( !v17 && v8 )
  {
    if ( v8->member.type == kFormType_LandTexture )
    {
      *(this + 2) = v8;
      return this;
    }
    PrintError("Instantiating a Grass region object with a parent that isn't a land texture.");
  }
  return this;
}
