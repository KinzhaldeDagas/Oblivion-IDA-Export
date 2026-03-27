double __userpurge sub_6183C0@<st0>(TESForm *a1@<ecx>, int a2@<ebp>, double a3@<st2>, int a4)
{
  int *v5; // eax
  int v6; // eax
  double result; // st7
  double v8; // st6
  TESForm::ModReferenceList *v9; // eax
  float v10; // [esp+4h] [ebp-Ch]

  if ( *(_BYTE *)(a4 + 4) == 0x3E )
  {
    sub_566380(a1, (void *)a4);
    v5 = *(int **)(a4 + 0x40);
    if ( v5 )
    {
      if ( v5[1] || *v5 )
      {
        v6 = *v5;
        if ( v6 )
          sub_616190((int)a1, a2, a3, 0.0, *(PlayerCharacter **)v6, *(_DWORD *)(v6 + 4), 0.0, 0.0, 0.0);
      }
    }
    a1[1].vtbl = (TESFormVtbl *)0xC;
    sub_612DA0(a1, 9);
    a1[2].member.modlist.next = *(TESForm::ModReferenceList **)(a4 + 0x44);
    LOBYTE(a1[3].vtbl) = *(_BYTE *)(a4 + 0x48);
    BYTE1(a1[3].vtbl) = *(_BYTE *)(a4 + 0x49);
    BYTE2(a1[3].vtbl) = *(_BYTE *)(a4 + 0x4A);
    a1[3].member.pad[0] = *(_BYTE *)(a4 + 0x4D);
    result = (double)(int)sub_452A60(*(Atmosphere **)(a4 + 0x28));
    v10 = result;
    sub_612EA0(a1, v10);
    v8 = flt_A30634;
    a1[4].member.modlist.data = *(Data **)(a4 + 0x70);
    a1[4].member.refID = *(_DWORD *)(a4 + 0x6C);
    v9 = *(TESForm::ModReferenceList **)(a4 + 0x74);
    *(float *)&a1[3].member.refID = v8;
    a1[4].member.modlist.next = v9;
    a1[3].member.flags = kFormFlags_TurnOffFire|kFormFlags_BorderRegion|kFormFlags_Deleted|kFormFlags_Linked|kFormFlags_Loaded|kFormFlags_FromActiveFile|kFormFlags_FromMaster|0x10;
    LOBYTE(a1[3].member.modlist.data) = 0;
    BYTE1(a1[3].member.modlist.data) = 0;
    a1[8].member.refID = *(UInt32 *)(a4 + 0xCC);
    a1[0x10].vtbl = *(TESFormVtbl **)(a4 + 0x180);
    a1[8].member.modlist.data = *(Data **)(a4 + 0xD0);
    a1[0xF].member.flags = *(TESForm::FormFlags *)(a4 + 0x170);
    LOBYTE(a1[0xF].member.refID) = *(_BYTE *)(a4 + 0x174);
    BYTE1(a1[0xF].member.modlist.next) = *(_BYTE *)(a4 + 0x17D);
    BYTE2(a1[0xF].member.modlist.next) = *(_BYTE *)(a4 + 0x17E);
    LOBYTE(a1[0xF].member.modlist.next) = *(_BYTE *)(a4 + 0x17C);
    a1[8].member.modlist.next = *(TESForm::ModReferenceList **)(a4 + 0xD4);
    a1[9].vtbl = *(TESFormVtbl **)(a4 + 0xD8);
    *(float *)&a1[9].member.type = *(float *)(a4 + 0xDC);
    a1[9].member.flags = *(TESForm::FormFlags *)(a4 + 0xE0);
    a1[9].member.refID = *(UInt32 *)(a4 + 0xE4);
    a1[9].member.modlist.data = *(Data **)(a4 + 0xE8);
    a1[9].member.modlist.next = *(TESForm::ModReferenceList **)(a4 + 0xEC);
    a1[0xA].vtbl = *(TESFormVtbl **)(a4 + 0xF0);
    *(float *)&a1[0xA].member.type = *(float *)(a4 + 0xF4);
    a1[0xA].member.flags = *(TESForm::FormFlags *)(a4 + 0xF8);
    a1[0xA].member.refID = *(UInt32 *)(a4 + 0xFC);
    a1[0xA].member.modlist.data = *(Data **)(a4 + 0x100);
    LOBYTE(a1[0x12].member.refID) = *(_BYTE *)(a4 + 0x1BC);
  }
  return result;
}
