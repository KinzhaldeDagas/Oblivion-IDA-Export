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
  UInt32 vtbl; // esi
  const char *v14; // ebp
  const char *v15; // eax
  char *v17; // eax
  UInt32 v18; // esi
  const char *v19; // ebp

  if ( !a1 )
    goto LABEL_15;
  if ( !sub_4D7990(a1) )
  {
    TESObjectREFR_EnableREF(a1);
    if ( ((int)a1[2].vtbl & 0x800) != 0 )
      sub_4DD850((int)a1, ebx0, a2, a3, a4, a5);
LABEL_15:
    *(_BYTE *)(a11 + 4) &= ~1u;
    return 1;
  }
  if ( a10 && a10[3] )
  {
    if ( TESForm::GetEditorNameLen((TESForm *)a1) )
      Name = (char *)(*((int (__thiscall **)(TESChildCELL *))a1->vtbl + 0x35))(a1);
    else
      Name = TESObjectREFR_GetName((TESObjectREFR *)a1);
    v12 = a10[3];
    vtbl = (UInt32)a1[3].vtbl;
    v14 = Name;
    v15 = (const char *)(*(int (__thiscall **)(_DWORD *))(*a10 + 0xD4))(a10);
    PrintError(
      "Enable is being called on reference %08X %s in script %08X %s even though it has an enable state parent.  This is "
      "not valid behavior and will be ignored.",
      vtbl,
      v14,
      v12,
      v15);
    return 1;
  }
  else
  {
    if ( TESForm::GetEditorNameLen((TESForm *)a1) )
      v17 = (char *)(*((int (__thiscall **)(TESChildCELL *))a1->vtbl + 0x35))(a1);
    else
      v17 = TESObjectREFR_GetName((TESObjectREFR *)a1);
    v18 = (UInt32)a1[3].vtbl;
    v19 = v17;
    (*(void (__thiscall **)(_DWORD *))(*a10 + 0xD4))(a10);
    PrintError(
      "Enable is being called on reference %08X %s in a results script even though it has an enable state parent.  This i"
      "s not valid behavior and will be ignored.",
      v18,
      v19);
    return 1;
  }
}
