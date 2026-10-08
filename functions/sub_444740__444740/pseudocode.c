void __stdcall sub_444740(const char *a1)
{
  TESObjectCELL *currentInteriorCell; // esi
  BSExtraDataVtbl *v2; // eax
  char *v3; // edx
  char v5; // [esp+3h] [ebp-109h] BYREF
  char v6[260]; // [esp+4h] [ebp-108h] BYREF

  if ( a1 ) /*0x44475e*/
  {
    currentInteriorCell = MEMORY[0xB333A0]->currentInteriorCell; /*0x444766*/
    if ( currentInteriorCell && TESObjectCELL_IsInterior(MEMORY[0xB333A0]->currentInteriorCell) ) /*0x44476f*/
      v2 = sub_424180(&currentInteriorCell->members.extraData); /*0x44477b*/
    else
      v2 = (BSExtraDataVtbl *)MEMORY[0xB35C24]; /*0x444782*/
    if ( v2 ) /*0x444789*/
    {
      strcpy(v6, a1); /*0x44478f*/
      v3 = &v5; /*0x4447a4*/
      while ( *++v3 ) /*0x4447af*/
        ; /*0x4447a7*/
      *(_DWORD *)v3 = dword_A375F8; /*0x4447b7*/
      v3[4] = byte_A375FC; /*0x4447bf*/
      sub_889D60((int)v2, 0, (int)v6); /*0x4447c9*/
    }
  }
}
