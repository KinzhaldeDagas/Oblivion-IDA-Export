void __usercall sub_5806D0(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  unsigned int *OpenMenuTile; // ebp
  int v6; // eax
  bool v7; // zf
  float *v8; // eax
  PlayerCharacter *v9; // ecx
  PlayerCharacterVtbl *vtbl; // edx
  unsigned int v11; // edi
  PlayerCharacter *v12; // esi
  bhkCharacterProxy *CharProxy; // eax
  int *SafeFloatPointer; // eax
  TESObjectREFR *v15; // ecx
  TESObjectCELL *ParentCell; // eax
  int v17; // eax
  TESObjectCELL *v18; // eax
  int *v19; // eax
  PlayerCharacter *v20; // ecx
  int vtbl_high; // eax
  _DWORD *v22; // ecx
  PlayerCharacter *v23; // ecx
  double v24; // st7
  double v25; // st6
  double v26; // st6
  PlayerCharacter *v27; // eax
  double v28; // st6
  double v29; // st7
  double v30; // st7
  double v31; // st7
  float v32; // [esp+4h] [ebp-ECh]
  float v33; // [esp+Ch] [ebp-E4h]
  float v34; // [esp+Ch] [ebp-E4h]
  int v35; // [esp+24h] [ebp-CCh] BYREF
  float firstPersonNiNodeTranslateZ; // [esp+28h] [ebp-C8h]
  PlayerCharacter *v37; // [esp+2Ch] [ebp-C4h]
  int v38; // [esp+30h] [ebp-C0h] BYREF
  float v39; // [esp+34h] [ebp-BCh]
  float v40; // [esp+38h] [ebp-B8h]
  PlayerCharacter *v41; // [esp+3Ch] [ebp-B4h]
  NiMatrix33 *v42; // [esp+40h] [ebp-B0h] BYREF
  TESForm::FormFlags flags; // [esp+44h] [ebp-ACh] BYREF
  TESForm::ModReferenceList *next; // [esp+48h] [ebp-A8h]
  float x; // [esp+4Ch] [ebp-A4h]
  float v46; // [esp+50h] [ebp-A0h]
  float v47; // [esp+54h] [ebp-9Ch]
  float v48; // [esp+58h] [ebp-98h]
  float v49; // [esp+5Ch] [ebp-94h]
  float v50; // [esp+60h] [ebp-90h]
  float v51; // [esp+64h] [ebp-8Ch]
  TESObjectREFR v52; // [esp+68h] [ebp-88h] BYREF
  float v53[9]; // [esp+C0h] [ebp-30h] BYREF
  unsigned int v54; // [esp+ECh] [ebp-4h]

  OpenMenuTile = (unsigned int *)Menu_GetOpenMenuTile(0x3ED);
  if ( !OpenMenuTile )
    OpenMenuTile = sub_5A4840(0, a2, a4, a3);
  v6 = CameraP1;
  v7 = CameraP1 == 0;
  v41 = 0;
  v37 = 0;
  if ( v7 )
  {
    v8 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
    v38 = *(int *)v8;
    v9 = TESDataHandler_g_PlayerRef;
    v39 = v8[1];
    v40 = v8[2];
    vtbl = v9->vtbl;
    firstPersonNiNodeTranslateZ = v9->firstPersonNiNodeTranslateZ;
    v40 = ((double (*)(void))vtbl->super.super.super.GetScale)() * firstPersonNiNodeTranslateZ + v40;
  }
  else
  {
    v38 = *(int *)(v6 + 0x88);
    v39 = *(float *)(v6 + 0x8C);
    v40 = *(float *)(v6 + 0x90);
  }
  v33 = TESDataHandler_g_PlayerRef->vtbl->super.super.GetZRotation((MobileObject *)TESDataHandler_g_PlayerRef);
  NiMatrix33_InitRotationTransform((float *)&v52.member, v33);
  v34 = sub_4A9720((Actor *)TESDataHandler_g_PlayerRef);
  NiMatrix33_InitRotationTransposedTransform___(v53, v34);
  qmemcpy(&v52.member, NiMAtrix33_Multiply((float *)&v52.member, &v52.member.rot.z, v53), 0x24u);
  flags = v52.member.super.flags;
  next = v52.member.super.modlist.next;
  x = v52.member.rot.x;
  firstPersonNiNodeTranslateZ = (float)*(int *)(a1 + 0x10);
  if ( TESDataHandler_g_PlayerRef->pad6E6[0] )
  {
    *(float *)&v35 = COERCE_FLOAT(
                       TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
                         (Actor *)TESDataHandler_g_PlayerRef,
                         kActorVal_Telekinesis));
    firstPersonNiNodeTranslateZ = (double)v35 + firstPersonNiNodeTranslateZ;
  }
  v11 = 0;
  if ( OpenMenuTile )
  {
    v12 = 0;
    v7 = bActivateGamebyroPicks == 0;
    *(float *)&v35 = 0.0;
    dword_B3A6E4 = 1;
    if ( !v7 || preventHavokAddClutter || preventHavokAddAll )
    {
      sub_959BC0(&v52.member.rot.z);
      v23 = TESDataHandler_g_PlayerRef;
      v54 = 0;
      sub_65ABE0(v23, (TESObjectREFR *)&v42);
      if ( sub_442E70(TES, (int)&v52.member.rot.z, (int)&v38, (int)&flags, SLODWORD(firstPersonNiNodeTranslateZ), 0x1F)
        && HIWORD(v52.member.baseExtraList.members.m_data) )
      {
        while ( 1 )
        {
          v12 = sub_4DC270(*(_DWORD *)v52.member.baseExtraList.vtbl[v11]);
          if ( v12 != TESDataHandler_g_PlayerRef )
            break;
          ++v11;
          v12 = 0;
          if ( v11 >= HIWORD(v52.member.baseExtraList.members.m_data) )
            goto LABEL_29;
        }
        v35 = *((int *)v52.member.baseExtraList.vtbl[v11] + 5);
      }
LABEL_29:
      v54 = 0xFFFFFFFF;
      sub_959EC0(&v52.member.rot.z);
    }
    else
    {
      dword_B3A6E4 = 2;
      if ( !TESAIForm_GetAggression(*(_BYTE **)(a1 + 0x108)) )
      {
        if ( TESDataHandler_g_PlayerRef )
        {
          CharProxy = MobileObject_GetCharProxy((MobileObject *)TESDataHandler_g_PlayerRef);
          if ( CharProxy )
          {
            sub_57E270(CharProxy, &v42);
            SafeFloatPointer = GameSetting_GetSafeFloatPointer(&dword_B135A0);
            sub_538D10(*(bhkRefObject ***)(a1 + 0x108), *(float *)SafeFloatPointer, (unsigned int)v42 >> 0x10);
          }
        }
      }
      dword_B3A6E4 = 3;
      if ( TESAIForm_GetAggression(*(_BYTE **)(a1 + 0x108)) )
      {
        v15 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
        dword_B3A6E4 = 0x21;
        if ( TESObjectREFR_GetParentCell(v15) )
        {
          ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
          sub_4440C0(ParentCell);
          if ( sub_531F10(*(int **)(a1 + 0x108)) != v17 )
          {
            v18 = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
            sub_4440C0(v18);
            sub_538AE0(*(int **)(a1 + 0x108), v19);
          }
        }
        v20 = TESDataHandler_g_PlayerRef;
        dword_B3A6E4 = 0x22;
        vtbl_high = HIWORD(sub_65ABE0(v20, &v52)->vtbl);
        v22 = *(_DWORD **)(a1 + 0x108);
        if ( v22[2] != vtbl_high )
          sub_538A90(v22, vtbl_high);
        v32 = firstPersonNiNodeTranslateZ;
        dword_B3A6E4 = 0x23;
        v12 = sub_538EC0(
                *(_DWORD **)(a1 + 0x108),
                (float *)&v38,
                (float *)&flags,
                v32,
                (float *)&v35,
                (_BYTE *)(a1 + 0xDC));
      }
    }
    dword_B3A6E4 = 4;
    if ( v12 )
    {
      if ( v12->vtbl->super.super.super.IsActor((TESObjectREFR *)v12) )
        Player_UpdateHUDHealthBarTarget_(v12);
      v24 = *(float *)&v35;
      if ( !TESDataHandler_g_PlayerRef->pad6E6[0] || (v25 = (double)*(int *)(a1 + 0x10), v41 = v12, v25 >= v24) )
        v37 = v12;
    }
    else
    {
      v24 = *(float *)&v35;
      v37 = 0;
      v41 = 0;
    }
    v26 = *(float *)&flags * v24;
    v27 = v37;
    *(_DWORD *)(a1 + 0xCC) = v41;
    *(_DWORD *)(a1 + 0xC8) = v27;
    v46 = v26;
    v28 = *(float *)&next * v24;
    v47 = v28;
    v48 = v24 * x;
    v49 = *(float *)&v38 + v46;
    v29 = v39;
    *(float *)(a1 + 0xD0) = v49;
    v50 = v29 + v47;
    v30 = v48;
    *(float *)(a1 + 0xD4) = v50;
    v31 = v30 + v40;
    v51 = v31;
    *(float *)(a1 + 0xD8) = v51;
    dword_B3A6E4 = 5;
    if ( sub_5A4980(a2, v28, v31, (TESObjectREFR *)v12, *(_DWORD *)(a1 + 0xC8) == 0, 0) )
      sub_578D50((TESObjectREFR *)v12);
    else
      sub_578D30(0);
  }
}
