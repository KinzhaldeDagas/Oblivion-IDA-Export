// Middle/low FLEE procedure: dynamic-casts current package to FleePackage, resolves target, chooses flee point through FleePackage helpers, and sends movement/path request via process vfuncs +0x3DC/+0x418. Package AlwaysSneak is handled separately by Actor update bit 0x20000 -> movement flag 0x400.
void __thiscall sub_64D710(float *this, TESObjectREFR *a2)
{
  void *v3; // eax
  _DWORD *v4; // edi
  ObjectType v5; // ebx
  char *v7; // eax
  TESForm::ModReferenceList *p_modlist; // eax
  int v9; // eax
  char *v10; // eax
  TargetData *v11; // ecx
  double v12; // st7
  double v13; // st7
  double v14; // st6
  char *v15; // eax
  char *v16; // eax
  TESObjectCELL *DwordAtOffset40; // ebx
  double Distance; // st7
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  float *SafeFloatPointer; // eax
  TESObjectREFR *v23; // ebx
  float *v24; // eax
  int v25; // ebx
  char v26; // al
  float *(__thiscall *GetPos)(TESObjectREFR *); // eax
  double v28; // st7
  TESForm *v29; // edi
  double v30; // st7
  double v31; // st7
  double v32; // st7
  int v33; // edi
  TESWorldSpace *WorldSpace; // eax
  double v35; // st7
  UInt32 v36; // [esp+20h] [ebp-40h]
  TESWorldSpace *v37; // [esp+24h] [ebp-3Ch]
  TESWorldSpace *v38; // [esp+24h] [ebp-3Ch]
  float v39; // [esp+24h] [ebp-3Ch]
  int v40; // [esp+28h] [ebp-38h]
  char v41; // [esp+3Bh] [ebp-25h]
  TESObjectREFR *v42; // [esp+3Ch] [ebp-24h]
  TESObjectCELL *v43; // [esp+40h] [ebp-20h]
  float v44; // [esp+44h] [ebp-1Ch]
  double v45; // [esp+48h] [ebp-18h] BYREF
  int v46; // [esp+54h] [ebp-Ch] BYREF
  int v47; // [esp+58h] [ebp-8h]
  int v48; // [esp+5Ch] [ebp-4h]
  float v49; // [esp+64h] [ebp+4h]
  TESChildCELL *v50; // [esp+64h] [ebp+4h]
  float GameHour; // [esp+64h] [ebp+4h]
  float v52; // [esp+64h] [ebp+4h]
  float v53; // [esp+64h] [ebp+4h]

  v3 = (void *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x184))(this); /*0x64d72f*/
  v4 = OblivionDynamicCast( /*0x64d737*/
         v3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
         &FleePackage `RTTI Type Descriptor',
         0);
  v5.objectCode = 0; /*0x64d73e*/
  v41 = 0; /*0x64d745*/
  if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x50))(this) ) /*0x64d749*/
  {
    v7 = (char *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x50))(this); /*0x64d75a*/
    if ( !sub_419CF0(v7) ) /*0x64d765*/
    {
      v15 = (char *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x50))(this); /*0x64d83b*/
      if ( !sub_419E50(v15) ) /*0x64d83f*/
      {
        v16 = (char *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x50))(this); /*0x64d855*/
        MagicItem_LoadVFXModels(v16, 0); /*0x64d859*/
      }
      return; /*0x64d865*/
    }
    if ( a2 ) /*0x64d76d*/
      p_modlist = &a2[1].member.super.modlist; /*0x64d76f*/
    else
      p_modlist = 0; /*0x64d774*/
    v9 = (*(int (__thiscall **)(float *, TESForm::ModReferenceList *))(*(_DWORD *)this + 0x50))(this, p_modlist); /*0x64d780*/
    MagicCaster_CastMagicItem(&a2[1].member, v9, 0, v40); /*0x64d786*/
    v10 = (char *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x50))(this); /*0x64d794*/
    MagicItem_UnloadVFXModels(v10, 0); /*0x64d798*/
    (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 0x54))(this, 0); /*0x64d7a6*/
  }
  if ( v4 ) /*0x64d7aa*/
  {
    sub_626DE0((char *)v4); /*0x64d7b2*/
    v11 = (TargetData *)v4[0xA]; /*0x64d7b7*/
    if ( v11 ) /*0x64d7bc*/
    {
      if ( sub_569E60(v11).form ) /*0x64d7be*/
        v5.form = sub_569E60((TargetData *)v4[0xA]).form; /*0x64d7cf*/
    }
    if ( *((_BYTE *)v4 + 0x65) ) /*0x64d7d1*/
    {
      if ( a2->vtbl->GetSleepState(a2) != kSitSleep_Sitting ) /*0x64d7e7*/
        (*(void (__thiscall **)(float *, TESObjectREFR *))(*(_DWORD *)this + 0x560))(this, a2); /*0x64d7f4*/
    }
    if ( v5.objectCode ) /*0x64d7f8*/
    {
      v44 = *((float *)v4 + 0x13); /*0x64d804*/
      v42 = sub_628140(v4, a2); /*0x64d80f*/
      if ( !v42 ) /*0x64d813*/
      {
        v12 = *((float *)v4 + 0x13); /*0x64d815*/
        *((_BYTE *)v4 + 0x50) = 1; /*0x64d818*/
        *((float *)v4 + 0x13) = v12 + *(float *)&MEMORY[0xB33E90][0xC]; /*0x64d822*/
        v13 = v44; /*0x64d825*/
        v14 = unk_B36C58; /*0x64d829*/
        goto LABEL_43; /*0x64d82f*/
      }
      DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a2); /*0x64d86f*/
      v43 = DwordAtOffset40; /*0x64d873*/
      if ( !DwordAtOffset40 ) /*0x64d877*/
        return; /*0x64d877*/
      *((float *)v4 + 0x13) = *((float *)v4 + 0x13) - *(float *)&MEMORY[0xB33E90][0xC]; /*0x64d88f*/
      Distance = TesObjectREF_GetDistance(a2, v42, 0); /*0x64d892*/
      v19 = v4[0x10]; /*0x64d897*/
      *(float *)&v45 = Distance; /*0x64d89a*/
      v20 = v4[0x11]; /*0x64d89e*/
      v21 = v4[0x12]; /*0x64d8a1*/
      v46 = v19; /*0x64d8a4*/
      v47 = v20; /*0x64d8aa*/
      v48 = v21; /*0x64d8ae*/
      if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x64d8b2*/
      {
        SafeFloatPointer = GameSetting_GetSafeFloatPointer(&g_GameSettingStringPointers_B36CD8[0xD6]); /*0x64d8c0*/
        v41 = 1; /*0x64d8c5*/
      }
      else
      {
        SafeFloatPointer = GameSetting_GetSafeFloatPointer(&g_GameSettingStringPointers_B36CD8[0xD4]); /*0x64d8d1*/
      }
      v49 = *SafeFloatPointer; /*0x64d8d8*/
      if ( v49 <= (double)*(float *)&v45 ) /*0x64d8eb*/
        goto LABEL_38; /*0x64d8eb*/
      if ( !*((_BYTE *)this + 0xD0) ) /*0x64d8f8*/
      {
LABEL_39:
        v29 = TESForm_LookupByFormID(0x3Au); /*0x64da30*/
        GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x64da46*/
        v45 = GameHour; /*0x64da50*/
        v30 = sub_6599B0((TESChildCELL *)a2); /*0x64da54*/
        if ( v30 > v45 ) /*0x64da62*/
          GameHour = GameHour + dbl_A2F920; /*0x64da6e*/
        v45 = GameHour; /*0x64da78*/
        v31 = sub_6599B0((TESChildCELL *)a2); /*0x64da7c*/
        *(float *)&v45 = v45 - v31; /*0x64da8a*/
        v32 = *(float *)&v29[1].member.refID; /*0x64da8e*/
        v33 = *(_DWORD *)this; /*0x64da91*/
        v52 = v32; /*0x64da93*/
        v39 = kTerrainLODQuadRayDirectionZ; /*0x64da9d*/
        v53 = dbl_A2F938 / v52 * *(float *)&v45; /*0x64daaf*/
        WorldSpace = TESObjectREFR_GetWorldSpace(a2); /*0x64daba*/
        (*(void (__thiscall **)(float *, TESObjectREFR *, int *, TESObjectCELL *, TESWorldSpace *, _DWORD, _DWORD))(v33 + 0x418))( /*0x64dacf*/
          this,
          a2,
          &v46,
          DwordAtOffset40,
          WorldSpace,
          LODWORD(v53),
          LODWORD(v39));
        return; /*0x64dad8*/
      }
      if ( ((double (__thiscall *)(TESObjectREFR *))a2->vtbl[1].super.Unk_2A)(a2) == *(float *)&SrcStr ) /*0x64d916*/
        sub_627FF0(v4, (Actor *)a2); /*0x64d91b*/
      v23 = (TESObjectREFR *)v4[0x18]; /*0x64d922*/
      LOBYTE(v49) = 0; /*0x64d92b*/
      if ( *(this + 0x22) > 0.0 ) /*0x64d935*/
        *(this + 0x22) = *(this + 0x22) - *(float *)&MEMORY[0xB33E90][0xC]; /*0x64d94a*/
      else
        LOBYTE(v49) = 1; /*0x64d937*/
      if ( v23 ) /*0x64d952*/
      {
        GetPos = v23->vtbl->GetPos; /*0x64d9c0*/
        *(float *)&v45 = *this; /*0x64d9c6*/
        v50 = (TESChildCELL *)GetPos(v23); /*0x64d9d0*/
        v38 = TESObjectREFR_GetWorldSpace(v23); /*0x64d9d9*/
        v36 = Shared_GetDwordAtOffset40(v23); /*0x64d9e7*/
        v26 = (*(int (__thiscall **)(float *, TESObjectREFR *, void *, void *, void *, UInt32, TESWorldSpace *))(LODWORD(v45) + 0x3DC))( /*0x64da08*/
                this,
                a2,
                v50->vtbl,
                v50[1].vtbl,
                v50[2].vtbl,
                v36,
                v38);
      }
      else
      {
        if ( v41 ) /*0x64d96a*/
          v24 = sub_627680((TESPackage *)v4, (float *)&v45, a2, (int)v42, v49); /*0x64d96c*/
        else
          v24 = sub_6279A0((TESPackage *)v4, (float *)&v45, (TESChildCELL *)a2, (int)v42, v49); /*0x64d973*/
        v25 = *(_DWORD *)this; /*0x64d97a*/
        v46 = *(_DWORD *)v24; /*0x64d97c*/
        v47 = *((_DWORD *)v24 + 1); /*0x64d983*/
        v48 = *((_DWORD *)v24 + 2); /*0x64d98c*/
        v37 = TESObjectREFR_GetWorldSpace(a2); /*0x64d99d*/
        v26 = (*(int (__thiscall **)(float *, TESObjectREFR *, int, int, int, TESObjectCELL *, TESWorldSpace *))(v25 + 0x3DC))( /*0x64d9ba*/
                this,
                a2,
                v46,
                v47,
                v48,
                v43,
                v37);
      }
      if ( v26 ) /*0x64da0c*/
      {
        DwordAtOffset40 = v43; /*0x64da15*/
        v28 = *((float *)v4 + 0x13) - *((float *)v4 + 0x13); /*0x64da19*/
        *((_BYTE *)v4 + 0x50) = 0; /*0x64da1c*/
        *((float *)v4 + 0x13) = v28; /*0x64da20*/
LABEL_38:
        if ( *((_BYTE *)this + 0xD0) ) /*0x64da23*/
        {
          v35 = *((float *)v4 + 0x13); /*0x64dadb*/
          *((_BYTE *)v4 + 0x50) = 1; /*0x64dade*/
          *((float *)v4 + 0x13) = v35 + *(float *)&MEMORY[0xB33E90][0xC]; /*0x64daed*/
          v13 = v44; /*0x64daf5*/
          v14 = *GameSetting_GetSafeFloatPointer(&unk_B36C58); /*0x64daf9*/
LABEL_43:
          if ( v14 <= v13 ) /*0x64db02*/
            (*(void (__thiscall **)(float *, TESObjectREFR *, int))(*(_DWORD *)this + 0x188))(this, a2, 1); /*0x64db11*/
          return; /*0x64db11*/
        }
        goto LABEL_39; /*0x64da2a*/
      }
    }
  }
}
