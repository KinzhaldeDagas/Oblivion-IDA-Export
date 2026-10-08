void __thiscall ChangeCell_____(TESObjectREFR *this, TESObjectCELL *a2)
{
  TESObjectREFR *v2; // edi
  TESObjectCELL *v3; // ebx
  BSExtraData *v4; // esi
  Sky *GlobalObject; // eax
  TESWorldSpace *WorldSpace; // eax
  int v7; // ecx
  void (__thiscall ***v8)(_DWORD, int); // ecx
  double v9; // st5
  BSExtraData *v10; // eax
  _DWORD *v11; // ebx
  TESWorldSpace *v12; // esi
  float **v13; // eax
  char v14; // bl
  float **v15; // esi
  float *v16; // edi
  float v17; // ebx
  TESRegionData *DataByID; // eax
  int *p_bOverride; // esi
  TESObjectREFR *v20; // edi
  TESForm::FormFlags flags; // eax
  TESRegionData *v22; // esi
  TESRegionData *v23; // eax
  unsigned __int8 bOverride; // cl
  float v25; // eax
  _WORD *v26; // eax
  NiTArray_NiTexturingPropertyMap *v27; // esi
  unsigned int end; // ebx
  int v29; // esi
  int v30; // eax
  unsigned int *v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // edx
  unsigned int v34; // eax
  TESForm::FormFlags v35; // eax
  TESRegionData *v36; // eax
  TESForm::FormFlags v37; // edx
  int v38; // ebx
  const char **v39; // eax
  const char *v40; // [esp+8h] [ebp-8Ch]
  char v41; // [esp+23h] [ebp-71h]
  float v43; // [esp+28h] [ebp-6Ch]
  float **v44; // [esp+28h] [ebp-6Ch]
  float v45; // [esp+2Ch] [ebp-68h] BYREF
  float v46; // [esp+30h] [ebp-64h]
  float v47; // [esp+34h] [ebp-60h]
  TESWorldSpace *v48; // [esp+38h] [ebp-5Ch] BYREF
  __int16 v49; // [esp+3Ch] [ebp-58h]
  __int16 v50; // [esp+3Eh] [ebp-56h]
  float v51[2]; // [esp+40h] [ebp-54h] BYREF
  float v52[2]; // [esp+48h] [ebp-4Ch] BYREF
  float v53[2]; // [esp+50h] [ebp-44h] BYREF
  float v54[2]; // [esp+58h] [ebp-3Ch] BYREF
  float v55[2]; // [esp+60h] [ebp-34h] BYREF
  unsigned int v56[3]; // [esp+68h] [ebp-2Ch] BYREF
  TESForm::FormFlags v57; // [esp+74h] [ebp-20h] BYREF
  BSStringT v58; // [esp+78h] [ebp-1Ch] BYREF
  int v59; // [esp+80h] [ebp-14h]
  int v60; // [esp+90h] [ebp-4h]

  v2 = this; /*0x66762c*/
  v47 = 0.0; /*0x667634*/
  v3 = a2; /*0x66763d*/
  if ( a2 != (TESObjectCELL *)Shared_GetDwordAtOffset40(this) )// 3DTheft decode: PlayerCharacter::ChangeCell first compares requested newCell with current parent cell; only changed cells enter the body below. /*0x667642*/
  {
    MobileObject_ChangeCell(v2, (ExtraDataList *)a2); /*0x66764b*/
    if ( !a2 ) /*0x667652*/
    {
      BSSimpleList_Clear(&v2[0x14].member.super.refID); /*0x667bbd*/
      return; /*0x667bbd*/
    }
    if ( !TESObjectCELL_IsInterior(a2) )        // 3DTheft hook site: EBX is non-null changed newCell. Mark exact player cell change, then chain to current TESObjectCELL_IsInterior call target. /*0x66765a*/
      v2[0x14].member.super.flags = 0; /*0x667663*/
    ((void (__thiscall *)(TESObjectREFR *, _DWORD))v2->vtbl->Unk_5E)(v2, 0); /*0x667674*/
    sub_43DF10(MEMORY[0xB33A1C]); /*0x66767c*/
    v4 = TESObjectCELL_GetClimate((int)a2); /*0x667688*/
    if ( v4 || !TESObjectCELL_IsInterior(a2) || TESObjectCELL_HasFlag80(a2) ) /*0x66769b*/
    {
      GlobalObject = Sky_CreateOrGetGlobalObject(); /*0x6676a7*/
      Sky_SetClimateAndRefreshChildren(GlobalObject, (TESClimate *)v4, 0);// Verified: changed-cell transition obtains destination cell Climate through TESObjectCELL_GetClimate, then calls Sky_SetClimateAndRefreshChildren; this is the runtime bridge from cell/worldspace climate selection into Sky. /*0x6676ae*/
    }
    WorldSpace = TESObjectCELL_GetWorldSpace(a2); /*0x6676b5*/
    v7 = *(_DWORD *)&v2[0x14].member.baseExtraList.members.m_presenceBitfield[4]; /*0x6676ba*/
    v48 = WorldSpace; /*0x6676c2*/
    v41 = 0; /*0x6676c6*/
    BYTE2(v2[0x14].member.niNode) = 0; /*0x6676cb*/
    if ( v7 ) /*0x6676d2*/
    {
      sub_65DD90(v7); /*0x6676d4*/
      v8 = *(void (__thiscall ****)(_DWORD, int))&v2[0x14].member.baseExtraList.members.m_presenceBitfield[4]; /*0x6676d9*/
      if ( v8 ) /*0x6676e1*/
        (**v8)(v8, 1); /*0x6676e9*/
      *(_DWORD *)&v2[0x14].member.baseExtraList.members.m_presenceBitfield[4] = 0; /*0x6676eb*/
    }
    LODWORD(v47) = TESObjectCELL_GetXCoordinate(a2) << 0xC; /*0x667708*/
    LODWORD(v45) = TESObjectCELL_GetYCoordinate(a2) << 0xC; /*0x667713*/
    v46 = (float)SLODWORD(v47); /*0x667717*/
    v9 = dbl_A37650; /*0x667728*/
    v47 = v46 + v9; /*0x667732*/
    v45 = (float)SLODWORD(v45); /*0x66773a*/
    v43 = v9 + v45; /*0x667748*/
    sub_4A6970(v52, v46, v45); /*0x667753*/
    sub_4A6970(v53, v46, v43); /*0x66776e*/
    sub_4A6970(v54, v47, v45); /*0x667789*/
    sub_4A6970(v55, v47, v43); /*0x6677a4*/
    BSSimpleList_Clear(&v2[0x14].member.super.refID); /*0x6677af*/
    v10 = sub_4C9B40((ExtraDataList *)a2, 1); /*0x6677b8*/
    if ( v10 ) /*0x6677bf*/
    {
      LODWORD(v46) = &v10->members; /*0x6677c8*/
      if ( v10 != (BSExtraData *)0xFFFFFFFC ) /*0x6677cc*/
      {
        do /*0x6679f5*/
        {
          v11 = *(_DWORD **)LODWORD(v46); /*0x6677d6*/
          v45 = *(float *)LODWORD(v46); /*0x6677da*/
          if ( v45 == 0.0 ) /*0x6677de*/
            break; /*0x6677de*/
          sub_4A6950(v51, v2->member.pos); /*0x6677ec*/
          if ( (v11[2] & 0x20) == 0 ) /*0x6677fa*/
          {
            v12 = (TESWorldSpace *)v11[8]; /*0x667800*/
            if ( !v12 || v12 == TESObjectREFR_GetWorldSpace(v2) ) /*0x667810*/
            {
              v13 = (float **)v11[7]; /*0x667816*/
              if ( v13 ) /*0x66781b*/
              {
                if ( v13[1] || *v13 ) /*0x667827*/
                {
                  v14 = 0; /*0x667830*/
                  v44 = v13; /*0x667832*/
                  while ( 1 ) /*0x667844*/
                  {
                    v15 = v44; /*0x667844*/
                    if ( !v44 ) /*0x66784a*/
                      break; /*0x66784a*/
                    v16 = *v44; /*0x667850*/
                    if ( !*v44 ) /*0x667850*/
                      goto LABEL_48; /*0x667850*/
                    if ( sub_4A7330(v16, v51) ) /*0x667861*/
                    {
                      v17 = v45; /*0x66786e*/
                      DataByID = TESRegion_FindDataByID(*(TESRegionDataList **)(LODWORD(v45) + 0x18), 7); /*0x667877*/
                      if ( DataByID ) /*0x66787e*/
                      {
                        p_bOverride = (int *)&DataByID[1].bOverride; /*0x667880*/
                        if ( DataByID != (TESRegionData *)0xFFFFFFF4 ) /*0x667885*/
                        {
                          do /*0x6678a2*/
                          {
                            if ( !*p_bOverride ) /*0x667887*/
                              break; /*0x66788b*/
                            BSSimpleList_PushFront((_DWORD *)this + 0x1BB, *p_bOverride); /*0x667898*/
                            p_bOverride = (int *)p_bOverride[1]; /*0x66789d*/
                          }
                          while ( p_bOverride ); /*0x6678a2*/
                        }
                      }
                      if ( (*(_DWORD *)(LODWORD(v17) + 8) & 0x40) != 0 /*0x6678eb*/
                        && (v41 = 1, sub_4A7330(v16, v52))
                        && sub_4A7330(v16, v53)
                        && sub_4A7330(v16, v54)
                        && sub_4A7330(v16, v55) )
                      {
                        v20 = this; /*0x6678f4*/
                        *((_BYTE *)this + 0x71E) = 1; /*0x6678f8*/
                      }
                      else
                      {
                        v20 = this; /*0x667901*/
                      }
                      flags = v20[0x14].member.super.flags; /*0x667905*/
                      if ( !flags /*0x667945*/
                        || (v22 = TESRegion_FindDataByID(*(TESRegionDataList **)(flags + 0x18), 3),
                            (v23 = TESRegion_FindDataByID(*(TESRegionDataList **)(LODWORD(v17) + 0x18), 3)) != 0)
                        && (!v22
                         || (bOverride = v23->bOverride) != 0 && !v22->bOverride
                         || bOverride == v22->bOverride && v23->priority > v22->priority) )
                      {
                        *(float *)&v20[0x14].member.super.flags = v17; /*0x667947*/
                      }
                      v15 = v44; /*0x66794d*/
                      v14 = 1; /*0x667951*/
                    }
                    v44 = (float **)v15[1]; /*0x667958*/
                    if ( v14 ) /*0x66795c*/
                    {
LABEL_48:
                      v2 = this; /*0x667962*/
                      break; /*0x667962*/
                    }
                    v2 = this; /*0x667840*/
                  }
                  if ( (*(_DWORD *)(LODWORD(v45) + 8) & 0x40) != 0 ) /*0x667973*/
                  {
                    if ( !*(_DWORD *)&v2[0x14].member.baseExtraList.members.m_presenceBitfield[4] ) /*0x667975*/
                    {
                      v25 = COERCE_FLOAT(FormHeapAlloc(0x10u)); /*0x667980*/
                      v47 = v25; /*0x667988*/
                      v60 = 0; /*0x66798e*/
                      if ( v25 == 0.0 ) /*0x667999*/
                        v26 = 0; /*0x6679a8*/
                      else
                        v26 = sub_65DD30((_WORD *)LODWORD(v25), 1u, 1); /*0x6679a1*/
                      v60 = 0xFFFFFFFF; /*0x6679aa*/
                      *(_DWORD *)&v2[0x14].member.baseExtraList.members.m_presenceBitfield[4] = v26; /*0x6679b5*/
                    }
                    v27 = *(NiTArray_NiTexturingPropertyMap **)&v2[0x14].member.baseExtraList.members.m_presenceBitfield[4]; /*0x6679bb*/
                    end = v27->end; /*0x6679c1*/
                    if ( end >= v27->capacity ) /*0x6679cb*/
                      NiTArray_SetSize((unsigned __int16 *)v27, end + v27->growSize); /*0x6679d6*/
                    NiTArray_SetAt(v27, end, &v45); /*0x6679e3*/
                  }
                }
              }
            }
          }
          v46 = *(float *)(LODWORD(v46) + 4); /*0x6679f1*/
        }
        while ( v46 != 0.0 ); /*0x6679f5*/
        v3 = a2; /*0x6679fb*/
      }
    }
    if ( !byte_B14F58 || !v48 || !sub_4EF160(v48) || MEMORY[0xB333A0]->unk51 || MEMORY[0xB333A0]->unk52 || v41 ) /*0x667a3a*/
      goto LABEL_72; /*0x667a3a*/
    v29 = *(_DWORD *)v2[0x14].member.baseExtraList.members.m_presenceBitfield; /*0x667a3c*/
    if ( v29 ) /*0x667a44*/
    {
      v30 = *(unsigned __int8 *)(v29 + 4); /*0x667a46*/
      if ( v30 == 0x30 ) /*0x667a4d*/
      {
        if ( (TESObjectCELL *)v29 != v3 ) /*0x667ac8*/
          goto LABEL_71; /*0x667ac8*/
      }
      else if ( v30 == 0x35 && (TESWorldSpace *)v29 != TESObjectCELL_GetWorldSpace(v3) ) /*0x667a5d*/
      {
        goto LABEL_71; /*0x667a5d*/
      }
    }
    v31 = (unsigned int *)v2->vtbl->GetPos(v2); /*0x667a69*/
    v32 = *v31; /*0x667a6b*/
    v33 = v31[1]; /*0x667a6d*/
    v34 = v31[2]; /*0x667a70*/
    v56[0] = v32; /*0x667a73*/
    v56[1] = v33; /*0x667a82*/
    v56[2] = v34; /*0x667a86*/
    sub_43F320((float *)v56, (float *)&v2[0x14].member.parentCell); /*0x667a8a*/
    if ( NiPoint3_Length((float *)v56) <= flt_A2FF44 ) /*0x667aa3*/
    {
LABEL_72:
      v35 = v2[0x14].member.super.flags; /*0x667aac*/
      if ( v35 ) /*0x667ab6*/
        v36 = TESRegion_FindDataByID(*(TESRegionDataList **)(v35 + 0x18), 4); /*0x667abf*/
      else
        v36 = 0; /*0x667acc*/
      v58.m_data = 0; /*0x667ace*/
      v58.m_dataLen = 0; /*0x667ad2*/
      v58.m_bufLen = 0; /*0x667ad7*/
      v37 = v2[0x14].member.super.flags; /*0x667ade*/
      v38 = 1; /*0x667ae4*/
      v60 = 1; /*0x667ae9*/
      LOBYTE(v59) = 1; /*0x667af0*/
      v57 = v37; /*0x667af4*/
      if ( v36 ) /*0x667af8*/
      {
        v39 = (const char **)((int (__thiscall *)(TESRegionData *, unsigned int *))v36->vtable[1].loadRegionDataHeader)( /*0x667b06*/
                               v36,
                               v56);
        LOBYTE(v60) = 2; /*0x667b08*/
      }
      else
      {
        FormHeapFree(0); /*0x667b13*/
        v48 = 0; /*0x667b1b*/
        v50 = 0; /*0x667b1f*/
        v49 = 0; /*0x667b24*/
        v39 = (const char **)&v48; /*0x667b29*/
        v60 = 3; /*0x667b2d*/
        v38 = 2; /*0x667b38*/
      }
      v40 = *v39; /*0x667b41*/
      v47 = *(float *)&v38; /*0x667b46*/
      BSStringT_Set(&v58, v40, 0); /*0x667b4a*/
      if ( (v38 & 2) != 0 ) /*0x667b52*/
      {
        LOBYTE(v38) = v38 & 0xFD; /*0x667b59*/
        FormHeapFree((unsigned int)v48); /*0x667b5c*/
      }
      v60 = 1; /*0x667b67*/
      if ( (v38 & 1) != 0 ) /*0x667b72*/
        FormHeapFree(v56[0]); /*0x667b79*/
      sub_5A64B0((int)&v57); /*0x667b86*/
      sub_65E860(v2); /*0x667b90*/
      FormHeapFree((unsigned int)v58.m_data); /*0x667b9a*/
      return; /*0x667bb4*/
    }
LABEL_71:
    HIBYTE(v2[0x14].member.niNode) = 1; /*0x667aa5*/
    goto LABEL_72; /*0x667aa5*/
  }
}
