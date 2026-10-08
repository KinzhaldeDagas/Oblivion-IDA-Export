// [Controller decode 2026-07-09] Non-player QueryControlState consumer: Grab control 28 pressed/held starts, continues, or releases object grab.
void __userpurge Player_ProcessGrabControl(
        TESObjectREFR *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5)
{
  InputGlobal *input; // esi
  bool v7; // bl
  UInt32 unk090; // eax
  bool v9; // cl
  bool v10; // dl
  InterfaceManager *Singleton; // eax
  UInt32 v12; // eax
  TESObjectREFR *v13; // esi
  NiAVObject *v14; // eax
  _DWORD *BhkCollisionObjectRecursive; // eax
  int v16; // eax
  int v17; // eax
  double v18; // st4
  TESObjectCELL *DwordAtOffset40; // eax
  double v20; // st7
  TESObjectREFRVtbl *vtbl; // ebx
  TESForm *Owner; // eax
  int v23; // eax
  TESObjectREFRVtbl *v24; // ebx
  TESForm *v25; // eax
  int v26; // eax
  TESForm *v27; // eax
  TESObjectREFRVtbl *v28; // ebx
  TESForm *v29; // eax
  int v30; // eax
  bool v31; // [esp+19h] [ebp-Bh]
  bool v32; // [esp+1Ah] [ebp-Ah]
  bool v33; // [esp+1Bh] [ebp-9h]
  float v34; // [esp+28h] [ebp+4h]
  float v35; // [esp+28h] [ebp+4h]
  float v36; // [esp+28h] [ebp+4h]

  input = MEMORY[0xB33398]->input; /*0x67117a*/
  v7 = InputGlobals::QueryControlState(input, 0x1C, 1) != 0; /*0x671193*/
  v31 = InputGlobals::QueryControlState(input, 0x1C, 0) != 0; /*0x67119d*/
  if ( v7 ) /*0x6711a4*/
    InterfaceManager_GetSingleton(0, 1)->unk090 = 0; /*0x6711b2*/
  unk090 = InterfaceManager_GetSingleton(0, 1)->unk090; /*0x6711c5*/
  v9 = unk090 == 1; /*0x6711d1*/
  v10 = unk090 == 2; /*0x6711d7*/
  v32 = unk090 == 1; /*0x6711dd*/
  v33 = unk090 == 2; /*0x6711e1*/
  if ( unk090 == 1 ) /*0x6711e5*/
  {
    Singleton = InterfaceManager_GetSingleton(0, 1); /*0x6711ea*/
    v9 = v32; /*0x6711ef*/
    v10 = v33; /*0x6711f3*/
    Singleton->unk090 = 2; /*0x6711fa*/
  }
  if ( v7 || v31 ) /*0x67120c*/
    goto LABEL_39; /*0x67120c*/
  if ( *(_DWORD *)a1[0xF].member.baseExtraList.members.m_presenceBitfield ) /*0x67120e*/
    goto LABEL_11; /*0x671215*/
  if ( v9 || v10 ) /*0x67121d*/
  {
LABEL_39:
    if ( *(_DWORD *)a1[0xF].member.baseExtraList.members.m_presenceBitfield ) /*0x671223*/
    {
LABEL_11:
      if ( *(_DWORD *)&a1[0xF].member.baseExtraList.members.m_presenceBitfield[8] == 1 ) /*0x671233*/
      {
        if ( v31 || v10 ) /*0x671242*/
          sub_66D930(a1, a5); /*0x67125e*/
        else
          sub_66A670(a1); /*0x671246*/
      }
      return; /*0x671251*/
    }
    if ( (v7 || v9) && !*(_DWORD *)&a1[0xF].member.baseExtraList.members.m_presenceBitfield[8] ) /*0x671278*/
    {
      v12 = sub_579540(); /*0x671285*/
      v13 = (TESObjectREFR *)v12; /*0x67128a*/
      if ( v12 ) /*0x67128e*/
      {
        v14 = (NiAVObject *)(*(int (__thiscall **)(UInt32))(*(_DWORD *)v12 + 0x154))(v12); /*0x67129e*/
        if ( v14 ) /*0x6712a2*/
        {
          BhkCollisionObjectRecursive = NiAVObject_FindBhkCollisionObjectRecursive(v14); /*0x6712a9*/
          if ( BhkCollisionObjectRecursive ) /*0x6712b3*/
          {
            v16 = BhkCollisionObjectRecursive[4]; /*0x6712b9*/
            if ( v16 ) /*0x6712be*/
            {
              v17 = *(_DWORD *)(v16 + 8); /*0x6712c4*/
              if ( v17 ) /*0x6712c9*/
              {
                if ( *(_DWORD *)(v17 + 8) ) /*0x6712cf*/
                {
                  v18 = sub_89DA90((float *)*(_DWORD *)(v17 + 0x50)); /*0x6712dc*/
                  v34 = a4; /*0x6712e1*/
                  ((void (__thiscall *)(TESObjectREFR *, _DWORD))a1->vtbl[1].Unk_38)(a1, 0); /*0x6712f1*/
                  if ( v34 <= *GameSetting_GetSafeFloatPointer(&MEMORY[0xB37A58][0x40]) * v18 ) /*0x671312*/
                  {
                    sub_66D120((int)a1, a2, a3, a4, v13, 1, flt_A342A4); /*0x671327*/
                    v13->vtbl->super.MarkAsModified((TESForm *)v13, 8); /*0x671335*/
                    if ( *(_DWORD *)a1[0xF].member.baseExtraList.members.m_presenceBitfield ) /*0x671337*/
                    {
                      if ( TESObjectREFR_GetOwner(v13) ) /*0x671346*/
                      {
                        if ( !TESObjectREFR_IsOwnedBy(v13, (TESObjectREFR *)reference, 1) ) /*0x67135e*/
                        {
                          if ( Shared_GetDwordAtOffset40(reference) ) /*0x671371*/
                          {
                            DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(reference); /*0x671384*/
                            if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x67138b*/
                            {
                              TESWeightForm_GetWeightForForm_Fast((int)v13); /*0x671399*/
                              v35 = a4; /*0x67139e*/
                              v36 = *GameSetting_GetSafeFloatPointer(&unk_B36C98) * v35; /*0x6713c0*/
                              v20 = v36; /*0x6713c5*/
                              (*((void (__stdcall **)(_DWORD))a1[1].vtbl->super.super.InitializeComponent + 0xD5))(LODWORD(v36)); /*0x6713cc*/
                              switch ( v13->vtbl->GetBaseForm(v13)->member.type ) /*0x6713f1*/
                              {
                                case kFormType_Activator: /*0x6713f1*/
                                case kFormType_Container: /*0x6713f1*/
                                case kFormType_Door: /*0x6713f1*/
                                case kFormType_Grass: /*0x6713f1*/
                                case kFormType_Tree: /*0x6713f1*/
                                case kFormType_Flora: /*0x6713f1*/
                                case kFormType_Furniture: /*0x6713f1*/
                                  vtbl = a1->vtbl; /*0x6713f8*/
                                  Owner = TESObjectREFR_GetOwner(v13); /*0x6713fe*/
                                  ((void (__thiscall *)(TESObjectREFR *, PlayerCharacter *, TESForm *))vtbl[1].super.Unk_28)( /*0x671413*/
                                    a1,
                                    reference,
                                    Owner);
                                  break; /*0x67141b*/
                                case kFormType_Apparatus: /*0x6713f1*/
                                case kFormType_Armor: /*0x6713f1*/
                                case kFormType_Book: /*0x6713f1*/
                                case kFormType_Clothing: /*0x6713f1*/
                                case kFormType_Ingredient: /*0x6713f1*/
                                case kFormType_Misc: /*0x6713f1*/
                                case kFormType_Weapon: /*0x6713f1*/
                                case kFormType_Ammo: /*0x6713f1*/
                                case kFormType_SoulGem: /*0x6713f1*/
                                case kFormType_Key: /*0x6713f1*/
                                case kFormType_AlchemyItem: /*0x6713f1*/
                                case kFormType_SigilStone: /*0x6713f1*/
                                  v28 = a1->vtbl; /*0x671484*/
                                  v29 = TESObjectREFR_GetOwner(v13); /*0x671488*/
                                  v30 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, int, _DWORD, TESForm *, double@<st0>, double@<st1>, double@<st2>))v13->vtbl->GetBaseForm)( /*0x67149c*/
                                          v13,
                                          1,
                                          0,
                                          v29,
                                          v20,
                                          a3,
                                          a2);
                                  ((void (__thiscall *)(TESObjectREFR *, TESObjectREFR *, int))v28[1].super.SetFromActiveFile)( /*0x6714a8*/
                                    a1,
                                    v13,
                                    v30);
                                  break; /*0x6714a8*/
                                case kFormType_Light: /*0x6713f1*/
                                  v23 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))v13->vtbl->GetBaseForm)( /*0x671428*/
                                          v13,
                                          v20,
                                          a3,
                                          a2);
                                  v24 = a1->vtbl; /*0x67142d*/
                                  if ( (*(_DWORD *)(v23 + 0x7C) & 2) != 0 ) /*0x671436*/
                                  {
                                    v25 = TESObjectREFR_GetOwner(v13); /*0x671438*/
                                    v26 = ((int (__thiscall *)(TESObjectREFR *, int, _DWORD, TESForm *))v13->vtbl->GetBaseForm)( /*0x67144c*/
                                            v13,
                                            1,
                                            0,
                                            v25);
                                    ((void (__thiscall *)(TESObjectREFR *, TESObjectREFR *, int))v24[1].super.SetFromActiveFile)( /*0x671458*/
                                      a1,
                                      v13,
                                      v26);
                                  }
                                  else
                                  {
                                    v27 = TESObjectREFR_GetOwner(v13); /*0x671465*/
                                    ((void (__thiscall *)(TESObjectREFR *, PlayerCharacter *, TESForm *))v24[1].super.Unk_28)( /*0x671479*/
                                      a1,
                                      reference,
                                      v27);
                                  }
                                  break; /*0x671460*/
                                default:
                                  return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
