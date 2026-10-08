char __userpurge sub_5B0D20@<al>(
        char *a1@<ecx>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st2>,
        double a7@<st1>,
        int a8,
        float a9)
{
  int v10; // eax
  PlayerCharacterVtbl *vtbl; // edi
  TESForm *Owner; // eax
  _BYTE *v14; // eax
  int v15; // ecx

  if ( !InterfaceManager_MenuModeHasFocus(0x3F6) || fConstant_2 != a9 ) /*0x5b0d48*/
    return 0; /*0x5b0d48*/
  if ( a8 != 0xB ) /*0x5b0d55*/
  {
    if ( a8 != 9 ) /*0x5b0e4d*/
      return 0; /*0x5b0e64*/
    (*(void (__thiscall **)(char *, _DWORD, _DWORD))(*(_DWORD *)a1 + 0xC))(a1, 0, 0); /*0x5b0e5a*/
    return 1; /*0x5b0e60*/
  }
  v10 = *((_DWORD *)a1 + 0x5E); /*0x5b0d5b*/
  if ( !v10 ) /*0x5b0d63*/
    return 1; /*0x5b0d63*/
  if ( *(_DWORD *)(v10 + 0x44) && !TESObjectREFR_GetItemCount((TESObjectREFR *)reference, (TESForm *)MEMORY[0xB35ECC]) /*0x5b0d93*/
    || *((_DWORD *)a1 + 0x54) == 1 )
  {
    return 0; /*0x5b0d93*/
  }
  Tile_SetFloat(*((Tile **)a1 + 0x5E), 0xFAEu, 1.0); /*0x5b0daa*/
  sub_58FBA0(*((_DWORD *)a1 + 0x5E), a6, a7, 1.0, 0); /*0x5b0db7*/
  if ( TESObjectREFR_GetOwner(*((TESObjectREFR **)a1 + 0xE)) ) /*0x5b0dbf*/
  {
    if ( !a1[0x17C] ) /*0x5b0dc8*/
    {
      vtbl = reference->vtbl; /*0x5b0dd8*/
      Owner = TESObjectREFR_GetOwner(*((TESObjectREFR **)a1 + 0xE)); /*0x5b0ddf*/
      if ( ((int (__thiscall *)(PlayerCharacter *, _DWORD, TESForm *, unsigned int))vtbl->super.Unk_92)( /*0x5b0dfb*/
             reference,
             *((_DWORD *)a1 + 0xE),
             Owner,
             0xFFFFFFFF) != 0xFFFFFFFF )
        a1[0x17C] = 1; /*0x5b0dfd*/
    }
  }
  BYTE1(dword_B3B0B4[0xD0]) = 1; /*0x5b0e05*/
  if ( LockPickMenu_TryAutoAttempt(a1) ) /*0x5b0e0b*/
  {
    v14 = a1 + 0x94; /*0x5b0e22*/
    v15 = 5; /*0x5b0e28*/
    do /*0x5b0e3a*/
    {
      v14[1] = 1; /*0x5b0e30*/
      *v14 = 1; /*0x5b0e33*/
      v14 += 0x28; /*0x5b0e35*/
      --v15; /*0x5b0e38*/
    }
    while ( v15 ); /*0x5b0e3a*/
    sub_5B03B0((int)a1, a2, a3, a4, a5, a6, a7, 1.0); /*0x5b0e3e*/
    return 1; /*0x5b0e44*/
  }
  else
  {
    sub_5AF200((int)a1); /*0x5b0e16*/
    return 1; /*0x5b0e1c*/
  }
}
