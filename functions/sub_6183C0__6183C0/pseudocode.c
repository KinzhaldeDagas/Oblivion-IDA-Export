double __userpurge sub_6183C0@<st0>(TESForm *a1@<ecx>, int a2@<ebp>, double a3@<st2>, int a4)
{
  int *v5; // eax
  int v6; // eax
  double result; // st7
  double v8; // st6
  TESForm::ModReferenceList *v9; // eax
  float v10; // [esp+4h] [ebp-Ch]

  if ( *(_BYTE *)(a4 + 4) == 0x3E ) /*0x6183cc*/
  {
    sub_566380(a1, (void *)a4); /*0x6183d3*/
    v5 = *(int **)(a4 + 0x40); /*0x6183d8*/
    if ( v5 ) /*0x6183dd*/
    {
      if ( v5[1] || *v5 ) /*0x6183e5*/
      {
        v6 = *v5; /*0x6183ea*/
        if ( v6 ) /*0x6183ee*/
          CombatController_TryAddTarget((int)a1, a2, a3, 0.0, *(Actor **)v6, *(_DWORD *)(v6 + 4), 0.0, 0.0, 0.0); /*0x618407*/
      }
    }
    a1[1].vtbl = (TESFormVtbl *)0xC; /*0x618410*/
    sub_612DA0(a1, 9); /*0x618417*/
    a1[2].member.modlist.next = *(TESForm::ModReferenceList **)(a4 + 0x44); /*0x61841f*/
    LOBYTE(a1[3].vtbl) = *(_BYTE *)(a4 + 0x48); /*0x618426*/
    BYTE1(a1[3].vtbl) = *(_BYTE *)(a4 + 0x49); /*0x61842d*/
    BYTE2(a1[3].vtbl) = *(_BYTE *)(a4 + 0x4A); /*0x618434*/
    a1[3].member.pad[0] = *(_BYTE *)(a4 + 0x4D); /*0x61843b*/
    result = (double)(int)Shared_GetPointerAtOffset08(*(Atmosphere **)(a4 + 0x28)); /*0x61844b*/
    v10 = result; /*0x618451*/
    sub_612EA0(a1, v10); /*0x618454*/
    v8 = kTerrainLODQuadRayDirectionZ; /*0x61845c*/
    a1[4].member.modlist.data = *(Data **)(a4 + 0x70); /*0x618462*/
    a1[4].member.refID = *(_DWORD *)(a4 + 0x6C); /*0x618468*/
    v9 = *(TESForm::ModReferenceList **)(a4 + 0x74); /*0x61846b*/
    *(float *)&a1[3].member.refID = v8; /*0x61846e*/
    a1[4].member.modlist.next = v9; /*0x618471*/
    a1[3].member.flags = kFormFlags_TurnOffFire|kFormFlags_BorderRegion|kFormFlags_Deleted|kFormFlags_Linked|kFormFlags_Loaded|kFormFlags_FromActiveFile|kFormFlags_FromMaster|0x10; /*0x618474*/
    LOBYTE(a1[3].member.modlist.data) = 0; /*0x61847b*/
    BYTE1(a1[3].member.modlist.data) = 0; /*0x61847f*/
    a1[8].member.refID = *(UInt32 *)(a4 + 0xCC); /*0x618489*/
    a1[0x10].vtbl = *(TESFormVtbl **)(a4 + 0x180); /*0x618495*/
    a1[8].member.modlist.data = *(Data **)(a4 + 0xD0); /*0x6184a1*/
    a1[0xF].member.flags = *(TESForm::FormFlags *)(a4 + 0x170); /*0x6184ad*/
    LOBYTE(a1[0xF].member.refID) = *(_BYTE *)(a4 + 0x174); /*0x6184ba*/
    BYTE1(a1[0xF].member.modlist.next) = *(_BYTE *)(a4 + 0x17D); /*0x6184c7*/
    BYTE2(a1[0xF].member.modlist.next) = *(_BYTE *)(a4 + 0x17E); /*0x6184d4*/
    LOBYTE(a1[0xF].member.modlist.next) = *(_BYTE *)(a4 + 0x17C); /*0x6184e1*/
    a1[8].member.modlist.next = *(TESForm::ModReferenceList **)(a4 + 0xD4); /*0x6184ed*/
    a1[9].vtbl = *(TESFormVtbl **)(a4 + 0xD8); /*0x6184f9*/
    *(float *)&a1[9].member.type = *(float *)(a4 + 0xDC); /*0x618505*/
    a1[9].member.flags = *(TESForm::FormFlags *)(a4 + 0xE0); /*0x618511*/
    a1[9].member.refID = *(UInt32 *)(a4 + 0xE4); /*0x61851d*/
    a1[9].member.modlist.data = *(Data **)(a4 + 0xE8); /*0x618529*/
    a1[9].member.modlist.next = *(TESForm::ModReferenceList **)(a4 + 0xEC); /*0x618535*/
    a1[0xA].vtbl = *(TESFormVtbl **)(a4 + 0xF0); /*0x618541*/
    *(float *)&a1[0xA].member.type = *(float *)(a4 + 0xF4); /*0x61854d*/
    a1[0xA].member.flags = *(TESForm::FormFlags *)(a4 + 0xF8); /*0x618559*/
    a1[0xA].member.refID = *(UInt32 *)(a4 + 0xFC); /*0x618565*/
    a1[0xA].member.modlist.data = *(Data **)(a4 + 0x100); /*0x618571*/
    LOBYTE(a1[0x12].member.refID) = *(_BYTE *)(a4 + 0x1BC); /*0x61857e*/
  }
  return result; /*0x618584*/
}
