void __stdcall sub_444740(const char *a1)
{
  TESObjectCELL *currentInteriorCell; // esi
  BSExtraDataVtbl *v2; // eax
  char *v3; // edx
  char v5; // [esp+3h] [ebp-109h] BYREF
  char v6[260]; // [esp+4h] [ebp-108h] BYREF

  if ( a1 )
  {
    currentInteriorCell = TES->currentInteriorCell;
    if ( currentInteriorCell && TESObjectCELL_IsInterior(TES->currentInteriorCell) )
      v2 = sub_424180(&currentInteriorCell->members.extraData);
    else
      v2 = (BSExtraDataVtbl *)bhkWorldM;
    if ( v2 )
    {
      strcpy(v6, a1);
      v3 = &v5;
      while ( *++v3 )
        ;
      *(_DWORD *)v3 = dword_A375F8;
      v3[4] = byte_A375FC;
      sub_889D60((int)v2, 0, (int)v6);
    }
  }
}
