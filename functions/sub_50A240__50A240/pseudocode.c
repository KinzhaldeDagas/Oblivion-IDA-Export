char __cdecl sub_50A240(int a1, int a2, TESForm *a3, int a4, _DWORD *a5, int a6)
{
  char *Name; // eax
  int v7; // ebx
  UInt32 refID; // edi
  const char *v9; // ebp
  const char *v10; // eax
  char *v12; // eax
  UInt32 v13; // edi
  const char *v14; // ebp

  if ( !a3 || (a3->member.flags & 0x800) != 0 || (a3->member.flags & 0x4000) != 0 )
    goto LABEL_16;
  if ( !sub_4D7990(a3) )
  {
    TesObjectREFR_Disable((int)a3);
LABEL_16:
    *(_BYTE *)(a6 + 4) |= 1u;
    return 1;
  }
  if ( a5 && a5[3] )
  {
    if ( TESForm::GetEditorNameLen(a3) )
      Name = (char *)a3->vtbl->GetEditorName(a3);
    else
      Name = TESObjectREFR_GetName((TESObjectREFR *)a3);
    v7 = a5[3];
    refID = a3->member.refID;
    v9 = Name;
    v10 = (const char *)(*(int (__thiscall **)(_DWORD *))(*a5 + 0xD4))(a5);
    PrintError(
      "Disable is being called on reference %08X %s in script %08X %s even though it has an enable state parent.  This is"
      " not valid behavior and will be ignored.",
      refID,
      v9,
      v7,
      v10);
    return 1;
  }
  else
  {
    if ( TESForm::GetEditorNameLen(a3) )
      v12 = (char *)a3->vtbl->GetEditorName(a3);
    else
      v12 = TESObjectREFR_GetName((TESObjectREFR *)a3);
    v13 = a3->member.refID;
    v14 = v12;
    (*(void (__thiscall **)(_DWORD *))(*a5 + 0xD4))(a5);
    PrintError(
      "Disable is being called on reference %08X %s in a results script even though it has an enable state parent.  This "
      "is not valid behavior and will be ignored.",
      v13,
      v14);
    return 1;
  }
}
