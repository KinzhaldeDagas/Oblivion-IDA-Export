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

  if ( !a3 || (a3->member.flags & 0x800) != 0 || (a3->member.flags & 0x4000) != 0 ) /*0x50a263*/
    goto LABEL_16; /*0x50a263*/
  if ( !sub_4D7990(a3) ) /*0x50a272*/
  {
    TesObjectREFR_Disable((int)a3); /*0x50a31e*/
LABEL_16:
    *(_BYTE *)(a6 + 4) |= 1u; /*0x50a326*/
    return 1; /*0x50a32e*/
  }
  if ( a5 && a5[3] ) /*0x50a283*/
  {
    if ( TESForm::GetEditorNameLen(a3) ) /*0x50a28b*/
      Name = (char *)a3->vtbl->GetEditorName(a3); /*0x50a29e*/
    else
      Name = TESObjectREFR_GetName((TESObjectREFR *)a3); /*0x50a2a2*/
    v7 = a5[3]; /*0x50a2a9*/
    refID = a3->member.refID; /*0x50a2ac*/
    v9 = Name; /*0x50a2af*/
    v10 = (const char *)(*(int (__thiscall **)(_DWORD *))(*a5 + 0xD4))(a5); /*0x50a2b9*/
    PrintError( /*0x50a2c4*/
      "Disable is being called on reference %08X %s in script %08X %s even though it has an enable state parent.  This is"
      " not valid behavior and will be ignored.",
      refID,
      v9,
      v7,
      v10);
    return 1; /*0x50a2cf*/
  }
  else
  {
    if ( TESForm::GetEditorNameLen(a3) ) /*0x50a2d5*/
      v12 = (char *)a3->vtbl->GetEditorName(a3); /*0x50a2e8*/
    else
      v12 = TESObjectREFR_GetName((TESObjectREFR *)a3); /*0x50a2ec*/
    v13 = a3->member.refID; /*0x50a2f6*/
    v14 = v12; /*0x50a2f9*/
    (*(void (__thiscall **)(_DWORD *))(*a5 + 0xD4))(a5); /*0x50a303*/
    PrintError( /*0x50a30e*/
      "Disable is being called on reference %08X %s in a results script even though it has an enable state parent.  This "
      "is not valid behavior and will be ignored.",
      v13,
      v14);
    return 1; /*0x50a319*/
  }
}
