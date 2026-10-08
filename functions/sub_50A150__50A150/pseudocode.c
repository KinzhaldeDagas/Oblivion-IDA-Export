char __usercall sub_50A150@<al>(
        int ebx0@<ebx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7,
        TESChildCELL *a1,
        int a9,
        _DWORD *a10,
        int a11)
{
  char *Name; // eax
  int v12; // ebx
  void *vtbl; // esi
  const char *v14; // ebp
  const char *v15; // eax
  char *v17; // eax
  void *v18; // esi
  const char *v19; // ebp

  if ( !a1 ) /*0x50a157*/
    goto LABEL_15; /*0x50a157*/
  if ( !sub_4D7990(a1) ) /*0x50a166*/
  {
    TESObjectREFR_EnableREF(a1); /*0x50a212*/
    if ( ((int)a1[2].vtbl & 0x800) != 0 ) /*0x50a222*/
      sub_4DD850((int)a1, ebx0, a2, a3, a4, a5); /*0x50a226*/
LABEL_15:
    *(_BYTE *)(a11 + 4) &= ~1u; /*0x50a22b*/
    return 1; /*0x50a233*/
  }
  if ( a10 && a10[3] ) /*0x50a177*/
  {
    if ( TESForm::GetEditorNameLen((TESForm *)a1) ) /*0x50a17f*/
      Name = (char *)(*((int (__thiscall **)(TESChildCELL *))a1->vtbl + 0x35))(a1); /*0x50a192*/
    else
      Name = TESObjectREFR_GetName((TESObjectREFR *)a1); /*0x50a196*/
    v12 = a10[3]; /*0x50a19b*/
    vtbl = a1[3].vtbl; /*0x50a19e*/
    v14 = Name; /*0x50a1a1*/
    v15 = (const char *)(*(int (__thiscall **)(_DWORD *))(*a10 + 0xD4))(a10); /*0x50a1ad*/
    PrintError( /*0x50a1b8*/
      "Enable is being called on reference %08X %s in script %08X %s even though it has an enable state parent.  This is "
      "not valid behavior and will be ignored.",
      vtbl,
      v14,
      v12,
      v15);
    return 1; /*0x50a1c3*/
  }
  else
  {
    if ( TESForm::GetEditorNameLen((TESForm *)a1) ) /*0x50a1c9*/
      v17 = (char *)(*((int (__thiscall **)(TESChildCELL *))a1->vtbl + 0x35))(a1); /*0x50a1dc*/
    else
      v17 = TESObjectREFR_GetName((TESObjectREFR *)a1); /*0x50a1e0*/
    v18 = a1[3].vtbl; /*0x50a1e8*/
    v19 = v17; /*0x50a1eb*/
    (*(void (__thiscall **)(_DWORD *))(*a10 + 0xD4))(a10); /*0x50a1f7*/
    PrintError( /*0x50a202*/
      "Enable is being called on reference %08X %s in a results script even though it has an enable state parent.  This i"
      "s not valid behavior and will be ignored.",
      v18,
      v19);
    return 1; /*0x50a20d*/
  }
}
