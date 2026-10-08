void __userpurge sub_69C850(MagicFogProjectile *ecx0@<ecx>, TESForm a1)
{
  int v4; // edi
  _DWORD *v5; // eax
  UInt32 unk094; // ecx
  bool v7; // cf
  int v8; // [esp+0h] [ebp-Ch]
  unsigned int destination; // [esp+8h] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+0h] BYREF

  sub_69C100(ecx0); /*0x69c855*/
  ecx0->super.super.vtbl->super.Unk_52((TESObjectREFR *)ecx0); /*0x69c864*/
  sub_69F800(ecx0, a1.vtbl, *(_DWORD *)&a1.member.type); /*0x69c872*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, &ecx0->unk07C, 4u); /*0x69c87f*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, &ecx0->super.speed, 4u); /*0x69c88c*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, &ecx0->unk080, 4u); /*0x69c89c*/
  SaveLoad_LoadData(g_TESSaveLoadGame, &ecx0->unk088, 4u); /*0x69c8b0*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, &ecx0->unk08C, 4u); /*0x69c8c0*/
  if ( ecx0->unk088 == 1 ) /*0x69c8c8*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, &a1.member, 4u); /*0x69c8d3*/
    ecx0->castingVFX = *(_DWORD *)&a1.member.type; /*0x69c8dc*/
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x71u ) /*0x69c8ec*/
  {
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, &ecx0->unk084, 4u); /*0x69c8fd*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, &a1, 2u); /*0x69c90b*/
    v4 = 0; /*0x69c910*/
    if ( LOWORD(a1.vtbl) ) /*0x69c917*/
    {
      do /*0x69c975*/
      {
        TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)ecx0, &destination, 4u); /*0x69c929*/
        TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, &retaddr, 1u); /*0x69c937*/
        v5 = (_DWORD *)FormHeapAlloc(0xCu); /*0x69c93e*/
        if ( v5 ) /*0x69c948*/
        {
          unk094 = ecx0->unk094; /*0x69c94f*/
          *v5 = v8; /*0x69c959*/
          v5[1] = (unsigned __int8)retaddr; /*0x69c95b*/
          v5[2] = unk094; /*0x69c95e*/
        }
        else
        {
          v5 = 0; /*0x69c963*/
        }
        v7 = ++v4 < (unsigned int)(unsigned __int16)destination; /*0x69c96d*/
        ecx0->unk094 = (UInt32)v5; /*0x69c96f*/
      }
      while ( v7 ); /*0x69c975*/
    }
  }
}
