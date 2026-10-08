void __userpurge sub_688120(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double st7_0@<st0>, Actor *a5)
{
  Actor *v6; // edi
  char *v7; // eax
  float *Head; // ebx
  float *v9; // eax
  double v10; // st7
  double v11; // st6
  char *v12; // ebx
  float *v13; // eax
  const float *v14; // eax
  double v15; // st7
  double v16; // st6
  bhkCharacterProxy *CharProxy; // eax
  double v18; // st7
  char *v19; // eax
  NiDX92DBufferData *v20; // eax
  NiDX92DBufferData *SurfaceData; // eax
  float *v22; // eax
  double v23; // st7
  char v24; // al
  float *v25; // eax
  const char *v26; // eax
  int v27; // ecx
  const char *v28; // eax
  float *v29; // eax
  TESObjectREFR *linkedDoor; // ecx
  float *v31; // eax
  char *v32; // ecx
  TESObjectREFR *v33; // eax
  int v34; // ecx
  int v35; // edi
  int v36; // eax
  char *v37; // ecx
  int v38; // eax
  float *v39; // eax
  double v40; // st7
  float *v41; // eax
  char *v42; // ecx
  char *v43; // eax
  ActorVtbl *vtbl; // edx
  int v45; // eax
  double ScaledCollisionHeight; // st7
  float *v47; // eax
  bhkCharacterProxy *v48; // eax
  NiPoint3 *v49; // eax
  char *v50; // eax
  const NiPoint3 *v51; // eax
  TESPathGridPoint *v52; // eax
  NiPoint3 *Position; // eax
  ActorVtbl *v54; // edi
  char *v55; // eax
  float *v56; // eax
  int v57; // ebx
  int v58; // eax
  const char *v59; // eax
  const char *v60; // eax
  float a4; // [esp+Ch] [ebp-17Ch]
  float *a4a; // [esp+Ch] [ebp-17Ch]
  float a4b; // [esp+Ch] [ebp-17Ch]
  float *a4c; // [esp+Ch] [ebp-17Ch]
  float *a4d; // [esp+Ch] [ebp-17Ch]
  char v66; // [esp+25h] [ebp-163h]
  char v67; // [esp+25h] [ebp-163h]
  char v68; // [esp+26h] [ebp-162h]
  bool v69; // [esp+27h] [ebp-161h]
  char v70; // [esp+27h] [ebp-161h]
  NiDX92DBufferData *v71; // [esp+28h] [ebp-160h]
  float v72; // [esp+28h] [ebp-160h]
  float v73; // [esp+28h] [ebp-160h]
  float v74; // [esp+28h] [ebp-160h]
  char *v75; // [esp+28h] [ebp-160h]
  char v76; // [esp+2Fh] [ebp-159h]
  float v77; // [esp+30h] [ebp-158h]
  float v78; // [esp+30h] [ebp-158h]
  char *v79; // [esp+30h] [ebp-158h]
  __m128 *v80; // [esp+30h] [ebp-158h]
  TESConnectedPoint *NearestReachablePointForActor; // [esp+30h] [ebp-158h]
  char v82; // [esp+37h] [ebp-151h]
  float v83; // [esp+38h] [ebp-150h]
  float v84; // [esp+38h] [ebp-150h]
  TeleportData v85; // [esp+3Ch] [ebp-14Ch] BYREF
  float v86; // [esp+58h] [ebp-130h]
  NiPoint3 v87; // [esp+5Ch] [ebp-12Ch] BYREF
  __int64 v88; // [esp+68h] [ebp-120h] BYREF
  float v89; // [esp+70h] [ebp-118h]
  char Format[260]; // [esp+74h] [ebp-114h] BYREF
  unsigned int v91; // [esp+184h] [ebp-4h]

  v6 = (Actor *)((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->GetMountedHorse)( /*0x688171*/
                  a5,
                  st7_0,
                  a3,
                  a2);
  if ( !v6 || !sub_5E1030(a5) ) /*0x688179*/
    v6 = a5; /*0x688182*/
  if ( !IsWeaponReady(v6) ) /*0x68818d*/
    return; /*0x68818d*/
  sub_5E05F0(v6, 0x30); /*0x688197*/
  sub_68B4F0((int *)a1, a3, (float ***)a5); /*0x68819f*/
  if ( BYTE2(qword_B3BB2C[0x157]) ) /*0x6881a4*/
  {
    if ( !*(_DWORD *)(a1 + 0x28) ) /*0x6881ad*/
      sub_685EA0((_DWORD *)a1, (int)v6); /*0x6881b6*/
  }
  v7 = (char *)sub_42B410((BSExtraData *)(a1 + 0x14)); /*0x6881be*/
  v71 = (NiDX92DBufferData *)v7; /*0x6881c5*/
  if ( !v7 ) /*0x6881c9*/
  {
    ((void (__thiscall *)(Actor *, int))a5->vtbl->super.super.Unk_60)(a5, 1); /*0x688d62*/
    ((void (__thiscall *)(Actor *, int))v6->vtbl->super.super.Unk_60)(v6, 1); /*0x688d70*/
    if ( *(char *)(a1 + 0x2C) < 0 ) /*0x688d76*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x30))(a1, 1); /*0x688d81*/
    goto LABEL_148; /*0x688d81*/
  }
  Head = (float *)EmbeddedList_GetHead(v7); /*0x6881db*/
  v9 = a5->vtbl->super.super.GetPos(a5); /*0x6881e8*/
  v83 = *v9 - *Head; /*0x6881ee*/
  *(float *)&v85.linkedDoor = v9[1] - Head[1]; /*0x6881f8*/
  v77 = v9[2] - Head[2]; /*0x688202*/
  v69 = v77 > 0.0; /*0x688217*/
  v78 = fabs(v77); /*0x68821e*/
  *(float *)&v85.linkedDoor = v83 * v83 + *(float *)&v85.linkedDoor * *(float *)&v85.linkedDoor + 0.0 * 0.0; /*0x688240*/
  *(float *)&v85.linkedDoor = sqrt(*(float *)&v85.linkedDoor); /*0x68824d*/
  v76 = 1; /*0x688255*/
  v84 = *(float *)&v85.linkedDoor; /*0x68825a*/
  v10 = *(float *)&v85.linkedDoor; /*0x68825e*/
  v11 = fCostant_100; /*0x688269*/
  if ( *(float *)(a1 + 0x1C) >= (double)*(float *)&v85.linkedDoor ) /*0x688272*/
  {
    *(float *)(a1 + 0x24) = 0.0; /*0x6882a7*/
  }
  else if ( v11 > v10 || *(float *)(a1 + 0x1C) < v11 ) /*0x688287*/
  {
    v76 = 0; /*0x688297*/
    *(float *)(a1 + 0x24) = v10 - *(float *)(a1 + 0x1C); /*0x68829c*/
  }
  else
  {
    v76 = 0; /*0x68828b*/
  }
  v66 = 0; /*0x6882b1*/
  if ( bSnapToAngle || byte_B1582C ) /*0x6882bc*/
  {
    v12 = (char *)v71; /*0x688361*/
  }
  else
  {
    v12 = (char *)v71; /*0x6882c9*/
    if ( NiDX92DBufferData::GetSurfaceData(v71) ) /*0x6882cf*/
    {
      v72 = flt_A417B4; /*0x6882e4*/
      if ( MobileObject_GetCharProxy((MobileObject *)v6) ) /*0x6882e8*/
      {
        if ( (*((_BYTE *)MobileObject_GetCharProxy((MobileObject *)v6) + 0x1F4) & 1) != 0 ) /*0x688301*/
          v72 = 0.0; /*0x688305*/
      }
      if ( sub_5E0510(v6) ) /*0x68830b*/
        v72 = v72 + dbl_A46E48; /*0x68831e*/
      if ( sub_5E3290(v6) ) /*0x688324*/
        v72 = v72 + dbl_A46E48; /*0x688337*/
      v13 = (float *)EmbeddedList_GetHead(v12); /*0x688347*/
      if ( sub_684B30((MobileObject *)v6, v13, v72, 1) ) /*0x68834e*/
        v66 = 1; /*0x68835a*/
    }
  }
  if ( sub_5E0510(v6) ) /*0x688367*/
  {
    sub_68A160((float ***)a1); /*0x688372*/
    *(float *)&v85.linkedDoor = TESObjectREFR::GetDistanceToPoint((TESObjectREFR *)a5, v14); /*0x68837f*/
    v73 = Actor_CalcFastTravelSpeed((TESObjectREFR *)v6) * unk_B3A450; /*0x688390*/
    if ( v73 > *(float *)&v85.linkedDoor - *(float *)(a1 + 0xC) ) /*0x6883a6*/
    {
      sub_5E05F0(v6, 0x200);                    // MorrowindMovements: AI movement path clears run intent 0x200 through actor movement-flag wrapper/process vfunc +0x2C4. /*0x6883af*/
      sub_5E0610(v6, 0x100);                    // MorrowindMovements: AI movement path sets walk intent 0x100 through actor movement-flag wrapper/process vfunc +0x2C4. /*0x6883bb*/
    }
  }
  v74 = unk_B3A458; /*0x6883c8*/
  if ( NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)v12) || !sub_68A140((_DWORD *)a1) ) /*0x6883d7*/
  {
    if ( !sub_68CA50(v12) || !Actor_IsSwimming(v6) ) /*0x6883f6*/
      goto LABEL_38; /*0x6883fd*/
    v15 = Actor_GetScaledCollisionHeight(v6) * dbl_A31C70; /*0x688406*/
  }
  else
  {
    v15 = sub_6899D0((float *)a1); /*0x6883e2*/
  }
  v74 = v15; /*0x68840c*/
LABEL_38:
  v68 = 0; /*0x688410*/
  v82 = 1; /*0x688417*/
  if ( Actor_IsSwimming(a5) ) /*0x68841c*/
  {
    if ( sub_68CA50(v12) || !NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)v12) ) /*0x688467*/
    {
      if ( v74 <= (double)v78 ) /*0x688488*/
      {
        if ( v84 < (double)v74 ) /*0x68849e*/
          v82 = 0; /*0x6884a0*/
      }
      else
      {
        v68 = 1; /*0x68848c*/
      }
    }
    else
    {
      v68 = 1; /*0x688470*/
    }
  }
  else if ( sub_68CA20(v12) || !NiDX92DBufferData::GetSurfaceData((NiDX92DBufferData *)v12) ) /*0x688432*/
  {
    if ( unk_B3A470 > (double)v78 ) /*0x688453*/
      v68 = 1; /*0x688455*/
  }
  else
  {
    v68 = 1; /*0x68843b*/
  }
  v16 = v74; /*0x6884a9*/
  if ( v74 > (double)v84 || (v16 = unk_B3A478, v16 < *(float *)(a1 + 0x24)) || v66 ) /*0x6884cd*/
  {
    if ( v68 ) /*0x6884d8*/
    {
      v70 = 0; /*0x68854d*/
      if ( sub_68CA20(v12) ) /*0x688552*/
      {
        v70 = 1; /*0x68855d*/
        v19 = EmbeddedList_GetHead(v12); /*0x688562*/
        *(_DWORD *)(a1 + 0x3C) = *(_DWORD *)v19; /*0x688569*/
        *(_DWORD *)(a1 + 0x40) = *((_DWORD *)v19 + 1); /*0x68856f*/
        *(_DWORD *)(a1 + 0x44) = *((_DWORD *)v19 + 2); /*0x688575*/
      }
      sub_68C170((NiSurfaceData **)(a1 + 0x14), (NiDX92DBufferData *)v12); /*0x68857e*/
      v20 = (NiDX92DBufferData *)sub_42B410((BSExtraData *)(a1 + 0x14)); /*0x688585*/
      v12 = (char *)v20; /*0x68858a*/
      v67 = 0; /*0x68858e*/
      if ( !v20 ) /*0x688593*/
        goto LABEL_84; /*0x688593*/
      SurfaceData = (NiDX92DBufferData *)NiDX92DBufferData::GetSurfaceData(v20); /*0x68859b*/
      v79 = (char *)SurfaceData; /*0x6885a2*/
      if ( SurfaceData ) /*0x6885a6*/
      {
        if ( !NiDX92DBufferData::GetSurfaceData(SurfaceData) ) /*0x6885ae*/
        {
          v87 = *(NiPoint3 *)v6->vtbl->super.super.GetPos((TESObjectREFR *)v6); /*0x6885c9*/
          v22 = (float *)EmbeddedList_GetHead(v79); /*0x6885df*/
          v23 = flt_A34A80; /*0x6885e4*/
          v85.yRot = *v22; /*0x6885ec*/
          v85.zRot = v22[1]; /*0x6885f4*/
          a4 = v23; /*0x6885f8*/
          v86 = v22[2]; /*0x688608*/
          if ( sub_480520(&v87.x, &v85.yRot, a4) < 0 && v86 - v87.z < fCostant_100 ) /*0x68862b*/
          {
            if ( v70 ) /*0x688632*/
              v24 = sub_687C30((MobileObject *)v6, (NiPoint3 *)&v85.yRot, &v87.x); /*0x68863f*/
            else
              v24 = sub_687AA0((MobileObject *)v6, (NiPoint3 *)&v85.yRot, &v87); /*0x688651*/
            if ( v24 ) /*0x68865b*/
            {
              sub_68C170((NiSurfaceData **)(a1 + 0x14), (NiDX92DBufferData *)v12); /*0x688661*/
              v12 = (char *)sub_42B410((BSExtraData *)(a1 + 0x14)); /*0x68866e*/
              v67 = 1; /*0x688670*/
            }
          }
        }
      }
      if ( v12 ) /*0x688677*/
      {
        if ( !v67 ) /*0x688682*/
        {
          a4a = (float *)EmbeddedList_GetHead(v12); /*0x688691*/
          v25 = v6->vtbl->super.super.GetPos((TESObjectREFR *)v6); /*0x68869f*/
          sub_4121A0(v25, (float *)&v88, a4a); /*0x6886a3*/
          sub_68CB30(&v85); /*0x6886ac*/
          a4b = flt_A342A4; /*0x6886bc*/
          v91 = 0; /*0x6886c0*/
          if ( sub_47F6F0((float *)&v88, a4b) < 0 && !sub_686F50((MobileObject *)v6, v12, &v85, 0, 0) ) /*0x6886e6*/
          {
            sub_684EC0((int **)a1); /*0x6886f8*/
            (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x30))(a1, 1); /*0x688706*/
            ((void (__thiscall *)(Actor *, int))a5->vtbl->super.super.Unk_60)(a5, 1); /*0x688715*/
            ((void (__thiscall *)(Actor *, int))v6->vtbl->super.super.Unk_60)(v6, 1); /*0x688723*/
            if ( MEMORY[0xB333B4] == (TESChildCELL *)a5 /*0x68873d*/
              && (*(char *)(GetGlobalScriptStateObj__(1) + 0x31) > 0 || unk_B3B908) )
            {
              v26 = v6->vtbl->super.super.super.GetEditorName((TESForm *)v6); /*0x688750*/
              _sprintf(Format, "Actor '%s' stopping path at invalid point.", v26); /*0x68875d*/
              Interface_ConsolePrint(Format); /*0x688767*/
            }
            v91 = 0xFFFFFFFF; /*0x688773*/
            Shared_NoOpVirtual_60D0A0(&v85); /*0x68877e*/
            return; /*0x688783*/
          }
          v91 = 0xFFFFFFFF; /*0x68878c*/
          Shared_NoOpVirtual_60D0A0(&v85); /*0x688797*/
        }
      }
      else
      {
LABEL_84:
        if ( *(char *)(a1 + 0x2C) < 0 ) /*0x6887a5*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x30))(a1, 1); /*0x6887b0*/
        ((void (__thiscall *)(Actor *, int))v6->vtbl->super.super.Unk_60)(v6, 1); /*0x6887be*/
        ((void (__thiscall *)(Actor *, int))a5->vtbl->super.super.Unk_60)(a5, 1); /*0x6887cd*/
        sub_683C20((unsigned int *)a1); /*0x6887d1*/
        v27 = *(_DWORD *)(a1 + 0x30); /*0x6887d6*/
        if ( v27 ) /*0x6887db*/
          sub_680C90(v27); /*0x6887dd*/
        if ( MEMORY[0xB333B4] == (TESChildCELL *)a5 /*0x6887fa*/
          && (*(char *)(GetGlobalScriptStateObj__(1) + 0x31) > 0 || unk_B3B908) )
        {
          v28 = a5->vtbl->super.super.super.GetEditorName(a5); /*0x68880e*/
          _sprintf(Format, "Actor '%s' indicating pathing completed succesfully.", v28); /*0x68881b*/
          Interface_ConsolePrint(Format); /*0x688825*/
        }
      }
      *(float *)(a1 + 0x1C) = flt_A32048; /*0x688835*/
      v76 = 0; /*0x688838*/
      *(float *)(a1 + 0x24) = 0.0; /*0x68883f*/
      *(float *)(a1 + 0x20) = 0.0; /*0x688842*/
      if ( !v12 ) /*0x688845*/
      {
LABEL_148:
        sub_686060((_DWORD *)a1, (int)v6); /*0x688d83*/
        return; /*0x688d86*/
      }
      v85.linkedDoor = (TESObjectREFR *)EmbeddedList_GetHead(v12); /*0x688852*/
      v29 = v6->vtbl->super.super.GetPos((TESObjectREFR *)v6); /*0x688860*/
      linkedDoor = v85.linkedDoor; /*0x688864*/
      *(float *)&v85.linkedDoor = *v29 - *(float *)&v85.linkedDoor->vtbl; /*0x68886a*/
      v85.x = v29[1] - *(float *)&linkedDoor->member.super.type; /*0x688874*/
      v85.y = v29[2] - *(float *)&linkedDoor->member.super.flags; /*0x68888e*/
      v89 = 0.0; /*0x68889c*/
      v88 = *(_QWORD *)&v85.linkedDoor; /*0x6888a0*/
      v84 = NiPoint3_Length((float *)&v88); /*0x6888a9*/
    }
    else if ( !Actor_IsSwimming(v6) && (!sub_5E34B0(v6) || !v69) && v84 < dbl_A3F3D0 ) /*0x68850e*/
    {
      CharProxy = MobileObject_GetCharProxy((MobileObject *)v6); /*0x688516*/
      if ( CharProxy ) /*0x68851d*/
      {
        if ( !hkCharacterContext_GetStateId((_DWORD *)CharProxy + 0x78) ) /*0x688529*/
        {
          v18 = flt_A342A4; /*0x688536*/
          *(_DWORD *)(a1 + 0x48) = 2; /*0x68853c*/
          *(float *)(a1 + 0x20) = v18; /*0x688543*/
        }
      }
    }
  }
  v31 = (float *)EmbeddedList_GetHead(v12); /*0x6888af*/
  if ( sub_43F840(MEMORY[0xB333A0], v31) ) /*0x6888bb*/
  {
    v32 = *(char **)(a1 + 0x30); /*0x6888c4*/
    if ( v32 ) /*0x6888c9*/
    {
      v33 = (TESObjectREFR *)sub_680CB0(v32); /*0x6888cb*/
      v34 = *(_DWORD *)(a1 + 0x30); /*0x6888d0*/
      v85.linkedDoor = v33; /*0x6888d5*/
      sub_681DF0(v34, v16, (MobileObject *)v6, v12); /*0x6888d9*/
      if ( sub_680CB0(*(char **)(a1 + 0x30)) == 6 ) /*0x6888e9*/
      {
        v35 = *(_DWORD *)a1; /*0x6888eb*/
        sub_68A160((float ***)a1); /*0x6888f1*/
        (*(void (__thiscall **)(int, Actor *, int, _DWORD))(v35 + 0x14))(a1, a5, v36, 0); /*0x6888fd*/
        return; /*0x6888ff*/
      }
      if ( !sub_680CB0(*(char **)(a1 + 0x30)) ) /*0x688907*/
      {
        if ( v85.linkedDoor ) /*0x688914*/
        {
          *(float *)(a1 + 0x1C) = flt_A32048; /*0x68891c*/
          *(float *)(a1 + 0x24) = 0.0; /*0x688921*/
          *(float *)(a1 + 0x20) = 0.0; /*0x688924*/
        }
      }
    }
  }
  if ( v82 ) /*0x68892c*/
    sub_686150(a1, v6); /*0x688931*/
  v37 = *(char **)(a1 + 0x30); /*0x688936*/
  if ( !v37 || sub_680CB0(v37) != 7 ) /*0x688945*/
  {
    if ( sub_683DB0((char **)a1) ) /*0x68894d*/
    {
LABEL_113:
      if ( byte_B1582C ) /*0x6889a6*/
      {
        if ( sub_5E05B0(v6) ) /*0x6889b5*/
        {
          sub_5E05D0(v6); /*0x6889c4*/
          sub_46A9C0(v6, 1); /*0x6889cd*/
          a4c = v6->vtbl->super.super.GetPos((TESObjectREFR *)v6); /*0x6889de*/
          v39 = (float *)EmbeddedList_GetHead(v12); /*0x6889e6*/
          sub_4121A0(v39, &v85.yRot, a4c); /*0x6889ed*/
          Vector3_NormalizeInPlace(&v85.yRot); /*0x6889f6*/
          v85.linkedDoor = *(TESObjectREFR **)&MEMORY[0xB33E90][0xC]; /*0x688a05*/
          v40 = sub_5E65B0((TESObjectREFR *)a5);// AI snap/path correction multiplies a normalized path vector by sub_5E65B0(actor), sharing the same run/swim/fly/walk fallback semantics. /*0x688a09*/
          *(float *)&v85.linkedDoor = v40 * *(float *)&v85.linkedDoor; /*0x688a17*/
          NiPoint3::MutliplyByValue((NiPoint3 *)&v85.yRot, *(float *)&v85.linkedDoor); /*0x688a22*/
          v41 = v6->vtbl->super.super.GetPos((TESObjectREFR *)v6); /*0x688a31*/
          v87.x = *v41 + v85.yRot; /*0x688a3c*/
          v87.y = v41[1] + v85.zRot; /*0x688a4b*/
          v87.z = v41[2] + v86; /*0x688a61*/
          TESObjectREFR_SetPosition((TESObjectREFR *)v6, v87.x, v87.y, v87.z); /*0x688a6e*/
        }
      }
      goto LABEL_148; /*0x688a73*/
    }
    v38 = (int)v6->vtbl->super.super.GetAnimData((TESObjectREFR *)v6); /*0x688960*/
    if ( !byte_B1582C && (!v38 || !ActorAnimData_IsLowerBodySequenceDominantAtBip01(v38)) ) /*0x688975*/
    {
      v76 = 0; /*0x688982*/
LABEL_110:
      *(float *)(a1 + 0x1C) = flt_A32048; /*0x688987*/
      *(float *)(a1 + 0x24) = 0.0; /*0x688992*/
      *(float *)(a1 + 0x20) = 0.0; /*0x688995*/
LABEL_111:
      if ( v76 ) /*0x68899d*/
        *(float *)(a1 + 0x1C) = v84; /*0x6889a3*/
      goto LABEL_113; /*0x6889a3*/
    }
    if ( (*(_BYTE *)(a1 + 0x2C) & 0x20) != 0 ) /*0x688a7c*/
      goto LABEL_110; /*0x688a7c*/
    v42 = *(char **)(a1 + 0x30); /*0x688a82*/
    if ( v42 ) /*0x688a87*/
    {
      if ( sub_680CB0(v42) == 5 ) /*0x688a91*/
        goto LABEL_110; /*0x688a91*/
    }
    if ( sub_685880(a1, v84) ) /*0x688aa1*/
      goto LABEL_111; /*0x688aa1*/
    sub_683DF0((float *)a1, v6); /*0x688ab1*/
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 0x2C))(a1) ) /*0x688abd*/
      goto LABEL_111; /*0x688ac1*/
    if ( *(float *)(a1 + 0x3C) == dbl_A3A5B0 && !a5->vtbl->IsInCombat(a5, 1) && !Actor_IsSwimming(a5) ) /*0x688af4*/
    {
      v43 = EmbeddedList_GetHead(v12); /*0x688aff*/
      vtbl = a5->vtbl; /*0x688b07*/
      *(double *)&v85.linkedDoor = *((float *)v43 + 2); /*0x688b0a*/
      v45 = (int)vtbl->super.super.GetPos((TESObjectREFR *)a5); /*0x688b16*/
      *(double *)&v85.linkedDoor = *(double *)&v85.linkedDoor - *(float *)(v45 + 8); /*0x688b21*/
      ScaledCollisionHeight = Actor_GetScaledCollisionHeight(a5); /*0x688b25*/
      if ( ScaledCollisionHeight < *(double *)&v85.linkedDoor ) /*0x688b33*/
      {
        a4d = a5->vtbl->super.super.GetPos(a5); /*0x688b42*/
        v47 = (float *)EmbeddedList_GetHead(v12); /*0x688b4a*/
        sub_4121A0(v47, (float *)&v88, a4d); /*0x688b51*/
        v89 = 0.0; /*0x688b5c*/
        if ( NiPoint3_Length((float *)&v88) < flt_A2FF44 ) /*0x688b70*/
          goto LABEL_134; /*0x688b70*/
      }
    }
    v48 = MobileObject_GetCharProxy((MobileObject *)v6); /*0x688b74*/
    v80 = (__m128 *)v48; /*0x688b7b*/
    if ( v48 ) /*0x688b7f*/
    {
      if ( sub_892D90((__m128 *)v48) /*0x688ba7*/
        || (v49 = (NiPoint3 *)v6->vtbl->super.super.GetPos((TESObjectREFR *)v6), !sub_8949C0(v80, v49, 0, 0, 0)) )
      {
LABEL_134:
        v75 = v12; /*0x688bb6*/
        if ( !sub_68CA20(v12) ) /*0x688bba*/
        {
          v50 = EmbeddedList_GetHead(v12); /*0x688bca*/
          NearestReachablePointForActor = (TESConnectedPoint *)TESPathGrid_FindNearestReachablePointForActor( /*0x688bda*/
                                                                 (const NiPoint3 *)v50,
                                                                 (TESObjectREFR *)v6,
                                                                 0,
                                                                 0);
          if ( NearestReachablePointForActor ) /*0x688bde*/
          {
            v51 = (const NiPoint3 *)v6->vtbl->super.super.GetPos((TESObjectREFR *)v6); /*0x688bef*/
            v52 = TESPathGrid_FindNearestReachablePointForActor(v51, (TESObjectREFR *)v6, 0, 0); /*0x688bf2*/
            if ( !v52 || v52 == (TESPathGridPoint *)NearestReachablePointForActor ) /*0x688c02*/
            {
              Position = PathGraphNode_GetPosition(NearestReachablePointForActor); /*0x688c0a*/
              v75 = (char *)sub_68C280((TeleportData **)(a1 + 0x14), Position, 0); /*0x688c18*/
            }
          }
        }
        if ( v75 ) /*0x688c21*/
        {
          v54 = a5->vtbl; /*0x688c27*/
          v55 = EmbeddedList_GetHead(v75); /*0x688c2a*/
          ((void (__thiscall *)(Actor *, char *))v54->super.Unk_73)(a5, v55); /*0x688c38*/
          *(float *)(a1 + 0x1C) = flt_A32048; /*0x688c40*/
          *(float *)(a1 + 0x24) = 0.0; /*0x688c45*/
          *(float *)(a1 + 0x20) = 0.0; /*0x688c48*/
          return; /*0x688c4b*/
        }
      }
    }
  }
  if ( sub_68CA20(v12) && (v56 = (float *)EmbeddedList_GetHead(v12), sub_6849F0((float *)a1, v56, (TESObjectREFR *)a5)) ) /*0x688c66*/
  {
    v57 = *(_DWORD *)a1; /*0x688c6f*/
    sub_68A160((float ***)a1); /*0x688c75*/
    (*(void (__thiscall **)(int, Actor *, int, int))(v57 + 0x14))(a1, a5, v58, 1); /*0x688c81*/
    if ( MEMORY[0xB333B4] == (TESChildCELL *)a5 && (*(char *)(GetGlobalScriptStateObj__(1) + 0x31) > 0 || unk_B3B908) ) /*0x688c9f*/
    {
      v59 = v6->vtbl->super.super.super.GetEditorName((TESForm *)v6); /*0x688cb6*/
      _sprintf(Format, "Actor '%s' added bad connection for failure. Trying again.", v59); /*0x688cc3*/
      Interface_ConsolePrint(Format); /*0x688ccd*/
    }
  }
  else
  {
    sub_684EC0((int **)a1); /*0x688cdc*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x30))(a1, 1); /*0x688cea*/
    ((void (__thiscall *)(Actor *, int))a5->vtbl->super.super.Unk_60)(a5, 1); /*0x688cf9*/
    ((void (__thiscall *)(Actor *, int))v6->vtbl->super.super.Unk_60)(v6, 1); /*0x688d07*/
    if ( MEMORY[0xB333B4] == (TESChildCELL *)a5 && (*(char *)(GetGlobalScriptStateObj__(1) + 0x31) > 0 || unk_B3B908) ) /*0x688d21*/
    {
      v60 = v6->vtbl->super.super.super.GetEditorName((TESForm *)v6); /*0x688d34*/
      _sprintf(Format, "Actor '%s' indicating pathfinding has failed.", v60); /*0x688d41*/
      Interface_ConsolePrint(Format); /*0x688d4b*/
    }
  }
}
