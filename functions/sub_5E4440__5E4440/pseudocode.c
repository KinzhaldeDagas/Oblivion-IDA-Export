void __thiscall sub_5E4440(Actor *a1, int a6, int a7)
{
  int v8; // edi
  int v9; // eax

  if ( a6 ) /*0x5e444a*/
  {
    if ( (*(_BYTE *)(a6 + 0x88) & 1) != 0 ) /*0x5e4453*/
    {
      if ( *(_DWORD *)(a6 + 0x64) ) /*0x5e4455*/
      {
        a1->vtbl->super.super.RemoveItem((TESObjectREFR *)a1, (TESForm *)a6, 0, 1, 0, 0, 0, 0, 0, 1, 0); /*0x5e4476*/
        PlayerCharacter_ReconcileHotkeysAfterInventoryRemoval(); /*0x5e4478*/
        v8 = *(_DWORD *)(a6 + 0x64); /*0x5e447d*/
        if ( v8 ) /*0x5e4482*/
          v9 = v8 + 0x18; /*0x5e4484*/
        else
          v9 = 0; /*0x5e4489*/
        MagicCaster_CastMagicItem(&a1->members.magicCaster.vtbl, v9, a7, 0); /*0x5e4496*/
        if ( a1 == (Actor *)reference ) /*0x5e44a3*/
          sub_664850(reference, 0); /*0x5e44a7*/
      }
    }
  }
}
