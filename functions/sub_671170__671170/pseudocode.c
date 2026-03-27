void __userpurge sub_671170(int *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, int a5)
{
  InputGlobal *input; // esi
  bool v8; // bl
  UInt32 unk090; // eax
  bool v10; // cl
  bool v11; // dl
  InterfaceManager *Singleton; // eax
  UInt32 v13; // eax
  TESObjectREFR *v14; // esi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  double v19; // st4
  TESObjectCELL *ParentCell; // eax
  double v21; // st7
  int v22; // ebx
  BSExtraDataVtbl *Owner; // eax
  int v24; // eax
  int v25; // ebx
  BSExtraDataVtbl *v26; // eax
  int v27; // eax
  BSExtraDataVtbl *v28; // eax
  int v29; // ebx
  BSExtraDataVtbl *v30; // eax
  int v31; // eax
  bool v32; // [esp+19h] [ebp-Bh]
  bool v33; // [esp+1Ah] [ebp-Ah]
  bool v34; // [esp+1Bh] [ebp-9h]
  float v35; // [esp+28h] [ebp+4h]
  float v36; // [esp+28h] [ebp+4h]
  float v37; // [esp+28h] [ebp+4h]

  input = OSGlobals->input;
  v8 = InputGlobals::QueryControlState(input, 0x1C, 1) != 0;
  v32 = InputGlobals::QueryControlState(input, 0x1C, 0) != 0;
  if ( v8 )
    InterfaceManager_GetSingleton(0, 1)->unk090 = 0;
  unk090 = InterfaceManager_GetSingleton(0, 1)->unk090;
  v10 = unk090 == 1;
  v11 = unk090 == 2;
  v33 = unk090 == 1;
  v34 = unk090 == 2;
  if ( unk090 == 1 )
  {
    Singleton = InterfaceManager_GetSingleton(0, 1);
    v10 = v33;
    v11 = v34;
    Singleton->unk090 = 2;
  }
  if ( v8 || v32 )
    goto LABEL_39;
  if ( a1[0x15D] )
    goto LABEL_11;
  if ( v10 || v11 )
  {
LABEL_39:
    if ( a1[0x15D] )
    {
LABEL_11:
      if ( a1[0x15F] == 1 )
      {
        if ( v32 || v11 )
          sub_66D930((TESObjectREFR *)a1, a5);
        else
          sub_66A670((TESObjectREFR *)a1);
      }
      return;
    }
    if ( (v8 || v10) && !a1[0x15F] )
    {
      v13 = sub_579540();
      v14 = (TESObjectREFR *)v13;
      if ( v13 )
      {
        v15 = (*(int (__thiscall **)(UInt32))(*(_DWORD *)v13 + 0x154))(v13);
        if ( v15 )
        {
          v16 = sub_480340(v15);
          if ( v16 )
          {
            v17 = *(_DWORD *)(v16 + 0x10);
            if ( v17 )
            {
              v18 = *(_DWORD *)(v17 + 8);
              if ( v18 )
              {
                if ( *(_DWORD *)(v18 + 8) )
                {
                  v19 = sub_89DA90((float *)*(_DWORD *)(v18 + 0x50));
                  v35 = a4;
                  (*(void (__thiscall **)(int *, _DWORD))(*a1 + 0x288))(a1, 0);
                  if ( v35 <= *(float *)GameSetting_GetSafeFloatPointer((int *)&fGrabPower) * v19 )
                  {
                    sub_66D120((int)a1, a2, a3, a4, v14, 1, flt_A342A4);
                    v14->vtbl->super.MarkAsModified((TESForm *)v14, 8);
                    if ( a1[0x15D] )
                    {
                      if ( TESObjectREFR_GetOwner(v14) )
                      {
                        if ( !TESOBjectREFR_IsOwnedBy(v14, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 1) )
                        {
                          if ( TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef) )
                          {
                            ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
                            if ( TESObjectCELL_IsInterior(ParentCell) )
                            {
                              TESWeightForm_GetWeightForForm_Fast((int)v14);
                              v36 = a4;
                              v37 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36C98) * v36;
                              v21 = v37;
                              (*(void (__stdcall **)(_DWORD))(*(_DWORD *)a1[0x16] + 0x354))(LODWORD(v37));
                              switch ( v14->vtbl->GetBaseForm(v14)->member.type )
                              {
                                case kFormType_Activator:
                                case kFormType_Container:
                                case kFormType_Door:
                                case kFormType_Grass:
                                case kFormType_Tree:
                                case kFormType_Flora:
                                case kFormType_Furniture:
                                  v22 = *a1;
                                  Owner = TESObjectREFR_GetOwner(v14);
                                  (*(void (__thiscall **)(int *, PlayerCharacter *, BSExtraDataVtbl *))(v22 + 0x248))(
                                    a1,
                                    TESDataHandler_g_PlayerRef,
                                    Owner);
                                  break;
                                case kFormType_Apparatus:
                                case kFormType_Armor:
                                case kFormType_Book:
                                case kFormType_Clothing:
                                case kFormType_Ingredient:
                                case kFormType_Misc:
                                case kFormType_Weapon:
                                case kFormType_Ammo:
                                case kFormType_SoulGem:
                                case kFormType_Key:
                                case kFormType_AlchemyItem:
                                case kFormType_SigilStone:
                                  v29 = *a1;
                                  v30 = TESObjectREFR_GetOwner(v14);
                                  v31 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, int, _DWORD, BSExtraDataVtbl *, double@<st0>, double@<st1>, double@<st2>))v14->vtbl->GetBaseForm)(
                                          v14,
                                          1,
                                          0,
                                          v30,
                                          v21,
                                          a3,
                                          a2);
                                  (*(void (__thiscall **)(int *, TESObjectREFR *, int))(v29 + 0x238))(a1, v14, v31);
                                  break;
                                case kFormType_Light:
                                  v24 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))v14->vtbl->GetBaseForm)(
                                          v14,
                                          v21,
                                          a3,
                                          a2);
                                  v25 = *a1;
                                  if ( (*(_DWORD *)(v24 + 0x7C) & 2) != 0 )
                                  {
                                    v26 = TESObjectREFR_GetOwner(v14);
                                    v27 = ((int (__thiscall *)(TESObjectREFR *, int, _DWORD, BSExtraDataVtbl *))v14->vtbl->GetBaseForm)(
                                            v14,
                                            1,
                                            0,
                                            v26);
                                    (*(void (__thiscall **)(int *, TESObjectREFR *, int))(v25 + 0x238))(a1, v14, v27);
                                  }
                                  else
                                  {
                                    v28 = TESObjectREFR_GetOwner(v14);
                                    (*(void (__thiscall **)(int *, PlayerCharacter *, BSExtraDataVtbl *))(v25 + 0x248))(
                                      a1,
                                      TESDataHandler_g_PlayerRef,
                                      v28);
                                  }
                                  break;
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
