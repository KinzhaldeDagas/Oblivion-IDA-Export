// [Controller decode 2026-07-10] Uses fActivatePickSphereRadius:Interface through GameSetting_GetSafeFloatPointer; this is not a live reference to fXenonMenuDpadRepeatSpeed.
void __usercall sub_5806D0(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  BSStringT *OpenMenuTile; // ebp
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
  MobileObject *v20; // ecx
  int vtbl_high; // eax
  _DWORD *v22; // ecx
  MobileObject *v23; // ecx
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

  OpenMenuTile = (BSStringT *)Menu_GetOpenMenuTile(0x3ED); /*0x580709*/
  if ( !OpenMenuTile ) /*0x580712*/
    OpenMenuTile = sub_5A4840(a4, a3); /*0x580719*/
  v6 = MEMORY[0xB3BB0C]; /*0x58071b*/
  v7 = MEMORY[0xB3BB0C] == 0; /*0x580720*/
  v41 = 0; /*0x580722*/
  v37 = 0; /*0x580726*/
  if ( v7 ) /*0x58072a*/
  {
    v8 = reference->vtbl->super.super.super.GetPos(reference); /*0x58075a*/
    v38 = *(int *)v8; /*0x58075e*/
    v9 = reference; /*0x580765*/
    v39 = v8[1]; /*0x58076b*/
    v40 = v8[2]; /*0x580772*/
    vtbl = v9->vtbl; /*0x58077c*/
    firstPersonNiNodeTranslateZ = v9->firstPersonNiNodeTranslateZ; /*0x58077e*/
    v40 = ((double (*)(void))vtbl->super.super.super.GetScale)() * firstPersonNiNodeTranslateZ + v40; /*0x580792*/
  }
  else
  {
    v38 = *(int *)(v6 + 0x88); /*0x580732*/
    v39 = *(float *)(v6 + 0x8C); /*0x58073c*/
    v40 = *(float *)(v6 + 0x90); /*0x580746*/
  }
  v33 = reference->vtbl->super.super.GetZRotation((MobileObject *)reference); /*0x5807ab*/
  NiMatrix33_InitRotationZ((float *)&v52.member, v33); /*0x5807ae*/
  v34 = Actor_GetAimPitch((Actor *)reference); /*0x5807c6*/
  NiMatrix33_InitRotationXTransposed(v53, v34); /*0x5807c9*/
  qmemcpy(&v52.member, NiMAtrix33_Multiply((float *)&v52.member, &v52.member.rot.z, v53), 0x24u); /*0x5807f2*/
  flags = v52.member.super.flags; /*0x5807f8*/
  next = v52.member.super.modlist.next; /*0x580800*/
  x = v52.member.rot.x; /*0x580808*/
  firstPersonNiNodeTranslateZ = (float)*(int *)(a1 + 0x10); /*0x58080f*/
  if ( reference->pad6E6[0] ) /*0x580819*/
  {
    *(float *)&v35 = COERCE_FLOAT(reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Telekinesis)); /*0x58082e*/
    firstPersonNiNodeTranslateZ = (double)v35 + firstPersonNiNodeTranslateZ; /*0x58083a*/
  }
  v11 = 0; /*0x58083e*/
  if ( OpenMenuTile ) /*0x580842*/
  {
    v12 = 0; /*0x58084a*/
    v7 = bActivateGamebyroPicks == 0; /*0x58084c*/
    *(float *)&v35 = 0.0; /*0x580853*/
    unk_B3A6E4 = 1; /*0x580857*/
    if ( !v7 || preventHavokAddClutter || preventHavokAddAll ) /*0x580874*/
    {
      NiPickContext_ctor(&v52.member.rot.z); /*0x5809c3*/
      v23 = (MobileObject *)reference; /*0x5809c8*/
      v54 = 0; /*0x5809d3*/
      MobileObject_GetCollisionFilterInfo(v23, (TESObjectREFR *)&v42); /*0x5809da*/
      if ( sub_442E70( /*0x580a13*/
             MEMORY[0xB333A0],
             (int)&v52.member.rot.z,
             (int)&v38,
             (int)&flags,
             SLODWORD(firstPersonNiNodeTranslateZ),
             0x1F)
        && HIWORD(v52.member.baseExtraList.members.m_data) )
      {
        while ( 1 ) /*0x580a32*/
        {
          v12 = sub_4DC270(*(_DWORD *)v52.member.baseExtraList.vtbl[v11]); /*0x580a32*/
          if ( v12 != reference ) /*0x580a3d*/
            break; /*0x580a3d*/
          ++v11; /*0x580a47*/
          v12 = 0; /*0x580a4a*/
          if ( v11 >= HIWORD(v52.member.baseExtraList.members.m_data) ) /*0x580a4e*/
            goto LABEL_29; /*0x580a4e*/
        }
        v35 = *((int *)v52.member.baseExtraList.vtbl[v11] + 5); /*0x580a5f*/
      }
LABEL_29:
      v54 = 0xFFFFFFFF; /*0x580a63*/
      NiPickContext_dtor(&v52.member.rot.z); /*0x580a75*/
    }
    else
    {
      unk_B3A6E4 = 2; /*0x580881*/
      if ( !TESAIForm_GetAggression(*(_BYTE **)(a1 + 0x108)) ) /*0x580891*/
      {
        if ( reference ) /*0x58089a*/
        {
          CharProxy = MobileObject_GetCharProxy((MobileObject *)reference); /*0x5808a4*/
          if ( CharProxy ) /*0x5808ab*/
          {
            bhkCharacterProxy_GetCollisionFilterInfo(CharProxy, &v42); /*0x5808b4*/
            SafeFloatPointer = GameSetting_GetSafeFloatPointer(&fActivatePickSphereRadius); /*0x5808be*/
            sub_538D10(*(bhkRefObject ***)(a1 + 0x108), *(float *)SafeFloatPointer, (unsigned int)v42 >> 0x10); /*0x5808d7*/
          }
        }
      }
      unk_B3A6E4 = 3; /*0x5808dc*/
      if ( TESAIForm_GetAggression(*(_BYTE **)(a1 + 0x108)) ) /*0x5808ec*/
      {
        v15 = (TESObjectREFR *)reference; /*0x5808f9*/
        unk_B3A6E4 = 0x21; /*0x5808ff*/
        if ( Shared_GetDwordAtOffset40(v15) ) /*0x580909*/
        {
          ParentCell = Shared_GetDwordAtOffset40((TESObjectREFR *)reference); /*0x580918*/
          sub_4440C0(ParentCell); /*0x58091f*/
          if ( sub_531F10(*(int **)(a1 + 0x108)) != v17 ) /*0x580933*/
          {
            v18 = Shared_GetDwordAtOffset40((TESObjectREFR *)reference); /*0x58093b*/
            sub_4440C0(v18); /*0x580942*/
            sub_538AE0(*(int **)(a1 + 0x108), v19); /*0x58094e*/
          }
        }
        v20 = (MobileObject *)reference; /*0x580953*/
        unk_B3A6E4 = 0x22; /*0x58095e*/
        vtbl_high = HIWORD(MobileObject_GetCollisionFilterInfo(v20, &v52)->vtbl); /*0x58096d*/
        v22 = *(_DWORD **)(a1 + 0x108); /*0x580971*/
        if ( v22[2] != vtbl_high ) /*0x58097a*/
          sub_538A90(v22, vtbl_high); /*0x58097d*/
        v32 = firstPersonNiNodeTranslateZ; /*0x580993*/
        unk_B3A6E4 = 0x23; /*0x58099f*/
        v12 = sub_538EC0( /*0x5809b5*/
                *(_DWORD **)(a1 + 0x108),
                (float *)&v38,
                (float *)&flags,
                v32,
                (float *)&v35,
                (_BYTE *)(a1 + 0xDC));
      }
    }
    unk_B3A6E4 = 4; /*0x580a7e*/
    if ( v12 ) /*0x580a88*/
    {
      if ( v12->vtbl->super.super.super.IsActor((TESObjectREFR *)v12) ) /*0x580a94*/
        Player_UpdateHUDHealthBarTarget_((Actor *)v12); /*0x580a9b*/
      v24 = *(float *)&v35; /*0x580aa9*/
      if ( !reference->pad6E6[0] || (v25 = (double)*(int *)(a1 + 0x10), v41 = v12, v25 >= v24) ) /*0x580ac4*/
        v37 = v12; /*0x580ac6*/
    }
    else
    {
      v24 = *(float *)&v35; /*0x580acc*/
      v37 = 0; /*0x580ad0*/
      v41 = 0; /*0x580ad4*/
    }
    v26 = *(float *)&flags * v24; /*0x580ae0*/
    v27 = v37; /*0x580ae2*/
    *(_DWORD *)(a1 + 0xCC) = v41; /*0x580ae6*/
    *(_DWORD *)(a1 + 0xC8) = v27; /*0x580aec*/
    v46 = v26; /*0x580af2*/
    v28 = *(float *)&next * v24; /*0x580afb*/
    v47 = v28; /*0x580afd*/
    v48 = v24 * x; /*0x580b05*/
    v49 = *(float *)&v38 + v46; /*0x580b11*/
    v29 = v39; /*0x580b19*/
    *(float *)(a1 + 0xD0) = v49; /*0x580b1d*/
    v50 = v29 + v47; /*0x580b27*/
    v30 = v48; /*0x580b2f*/
    *(float *)(a1 + 0xD4) = v50; /*0x580b33*/
    v31 = v30 + v40; /*0x580b39*/
    v51 = v31; /*0x580b3d*/
    *(float *)(a1 + 0xD8) = v51; /*0x580b45*/
    unk_B3A6E4 = 5; /*0x580b4b*/
    if ( sub_5A4980(a2, v28, v31, (TESObjectREFR *)v12, *(_DWORD *)(a1 + 0xC8) == 0, 0) ) /*0x580b60*/
      sub_578D50((TESObjectREFR *)v12); /*0x580b6d*/
    else
      sub_578D30(0); /*0x580b75*/
  }
}
