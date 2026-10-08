// Verified LowProcess load-link path calls ActiveEffect_Base_LinkAEList on its embedded active-effect EffectNode chain before resolving other saved references. Fallout uses its separate staged ActiveEffect load callbacks rather than this Oblivion link slot.
// positive sp value has been detected, the output may be wrong!
TESSaveLoadGame_SerializationView *__userpurge MiddleHighProc_LinkMagicData__::LinkMagicEffectList@<eax>(
        int a1@<edi>,
        TESChildCELL *ebx0@<ebx>,
        int a2,
        int a3,
        int a4)
{
  UInt32 *v5; // esi
  int *v6; // ebp
  UInt32 v7; // ebx
  TESForm *v8; // eax
  void *v9; // eax
  TESSaveLoadGame_SerializationView *result; // eax
  UInt32 *v11; // eax
  TESObjectREFR *v12; // [esp-Ch] [ebp-10h]

  ActiveEffect_Base_LinkAEList(*(EffectNode **)(a1 + 0x174), v12, ebx0); /*0x6517ba*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x65u ) /*0x6517cc*/
  {
    v5 = (UInt32 *)(a1 + 0xA8); /*0x6517cf*/
    v6 = 0; /*0x6517d5*/
    if ( a1 != 0xFFFFFF58 ) /*0x6517d9*/
    {
      do /*0x65181e*/
      {
        if ( !v5[1] && !*v5 ) /*0x6517e6*/
          break; /*0x6517e9*/
        v7 = *v5; /*0x6517eb*/
        if ( *v5 /*0x651813*/
          && (v8 = TESForm_LookupByFormID(v7),
              (v9 = OblivionDynamicCast(
                      v8,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                      (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                      0)) != 0) )
        {
          *v5 = (UInt32)v9; /*0x651815*/
          v6 = (int *)v5; /*0x651817*/
          v5 = (UInt32 *)v5[1]; /*0x651819*/
        }
        else if ( v6 ) /*0x65184d*/
        {
          BSSimpleList_Remove(v6, v7); /*0x651876*/
          v5 = (UInt32 *)v6[1]; /*0x65187b*/
        }
        else
        {
          v11 = (UInt32 *)v5[1]; /*0x65184f*/
          if ( v11 ) /*0x651854*/
          {
            v5[1] = v11[1]; /*0x651859*/
            *v5 = *v11; /*0x65185f*/
            FormHeapFree((unsigned int)v11); /*0x651861*/
          }
          else
          {
            *v5 = 0; /*0x65186b*/
          }
        }
      }
      while ( v5 ); /*0x65181e*/
    }
  }
  result = g_TESSaveLoadGame; /*0x651821*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x71u ) /*0x65182a*/
  {
    result = *(TESSaveLoadGame_SerializationView **)(a1 + 0x148); /*0x65182c*/
    if ( result ) /*0x651834*/
    {
      result = (TESSaveLoadGame_SerializationView *)MagicItem_LookupByFormID(*(_DWORD *)(a1 + 0x148)); /*0x651837*/
      *(_DWORD *)(a1 + 0x148) = result; /*0x65183f*/
    }
  }
  return result; /*0x651847*/
}
