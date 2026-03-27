bool __userpurge sub_649340@<al>(
        float *a1@<ecx>,
        int a2@<ebx>,
        double st6_0@<st1>,
        double a4@<st0>,
        TESChildCELL *arg0,
        char a6)
{
  double GameHour; // st5
  TESPackage *v9; // ebp
  _BYTE *v12; // ecx
  TESChildCELL *v13; // ebx
  void (__thiscall *v14)(float *, _DWORD); // edx
  UInt32 duration; // ecx
  double v16; // st7
  UInt8 type; // al
  signed __int8 time; // al
  int v19; // ebx
  char v20; // al
  char v21; // al
  TESPackage *v22; // eax
  TESObjectCELL *v23; // ebx
  TESObjectCELL *ParentCell; // eax
  TESPackage *v25; // ecx
  TESObjectCELL *v26; // eax
  TESPackage *v27; // eax
  int v28; // ecx
  char v29; // al
  TESWorldSpace *WorldSpace; // eax
  int (__thiscall *v31)(float *); // eax
  int v32; // eax
  int *i; // esi
  int v34; // edi
  float *v35; // [esp+0h] [ebp-30h]
  float *v36; // [esp+0h] [ebp-30h]
  float a3; // [esp+4h] [ebp-2Ch]
  float a3a; // [esp+4h] [ebp-2Ch]
  float *v39; // [esp+8h] [ebp-28h]
  float *v40; // [esp+8h] [ebp-28h]
  float a5; // [esp+Ch] [ebp-24h]
  float a5a; // [esp+Ch] [ebp-24h]
  unsigned __int8 (__cdecl *v43)(TESObjectREFR *, int); // [esp+10h] [ebp-20h]
  unsigned __int8 (__cdecl *v44)(TESObjectREFR *, int); // [esp+10h] [ebp-20h]
  TESChildCELL *v45; // [esp+14h] [ebp-1Ch]
  TESChildCELL *v46; // [esp+14h] [ebp-1Ch]
  TESObjectCELL *v47; // [esp+14h] [ebp-1Ch]
  int v48; // [esp+18h] [ebp-18h]
  _DWORD *v49; // [esp+18h] [ebp-18h]
  float v50; // [esp+1Ch] [ebp-14h]
  float v51; // [esp+28h] [ebp-8h]
  bool v52; // [esp+34h] [ebp+4h]

  GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
  v51 = a4;
  v9 = *((TESPackage **)a1 + 2);
  if ( !a6
    && (sub_5E6BA0((Actor *)arg0)
     || (*((unsigned __int8 (__thiscall **)(TESChildCELL *, int))arg0->vtbl + 0xCD))(arg0, 1)) )
  {
    return 0;
  }
  v12 = *((_BYTE **)a1 + 2);
  v48 = a2;
  v13 = 0;
  if ( v12 )
  {
    if ( !sub_565DB0(v12) )
      sub_565DC0(*((_BYTE **)a1 + 2));
  }
  v52 = 0;
  if ( !v9 )
  {
    sub_648E40((int)a1, GameHour, st6_0, arg0);
    v9 = *((TESPackage **)a1 + 2);
    v52 = v9 != 0;
    v14 = *(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0x394);
    a1[3] = v51;
    a1[1] = 0.0;
    a1[0xB] = 0.0;
    v14(a1, 0);
    goto LABEL_10;
  }
  if ( v9->members.procedureArrayIndex == 0xFFFFFFFF )
    sub_5672A0(v9);
  duration = v9->members.time.duration;
  v16 = v51;
  if ( !duration || (v9->members.packageFlags & 4) == 0 )
  {
    if ( (v9->members.packageFlags & 4) != 0 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(4 * v9->members.procedureArrayIndex + 0xB152B0) + 4 * *((_DWORD *)a1 + 1)) != 0x2C )
        return 0;
    }
    else if ( (v9->members.packageFlags & 2) != 0 )
    {
      sub_566DC0(v9, flt_A30634, st6_0, (Actor *)arg0, 0, flt_A30634);
      if ( !v21
        && *(_DWORD *)(*(_DWORD *)(4 * v9->members.procedureArrayIndex + 0xB152B0) + 4 * *((_DWORD *)a1 + 1)) != 0x2C )
      {
        return v52;
      }
      v52 = 1;
      goto LABEL_50;
    }
    v52 = 1;
    goto LABEL_50;
  }
  type = v9->members.type;
  if ( type != 5
    && type != 4
    && type != 3
    && *(_DWORD *)(*(_DWORD *)(4 * *(_DWORD *)(*((_DWORD *)a1 + 2) + 0x18) + 0xB152B0) + 4 * *((_DWORD *)a1 + 1)) != 0x2C )
  {
    goto LABEL_93;
  }
  time = v9->members.time.time;
  if ( time == (signed __int8)0xFF )
  {
    st6_0 = a1[3];
    v19 = v9->members.time.duration + Double_To_SInt32(v16);
  }
  else
  {
    v19 = duration + time;
  }
  if ( v19 <= 0x17 )
  {
    st6_0 = (double)(char)v9->members.time.time;
    if ( st6_0 > v16 )
      v52 = 1;
  }
  else
  {
    v19 -= 0x17;
  }
  if ( Double_To_SInt32(v16) < v19 )
  {
    if ( !v52 )
    {
      if ( a6 )
        a6 = 0;
    }
  }
  else
  {
    v52 = 1;
  }
  v13 = arg0 + 0x11;
  Script_AddEventToExtraScript(v9, &arg0[0x11], 0x400);
  if ( sub_565DF0(v9) )
  {
    TimeGlobals_GetGameDay(&TimeGlobals);
    sub_41FFC0((ExtraDataList *)&arg0[0x11], (int)v9, v20);
  }
  if ( !v52 )
  {
LABEL_93:
    if ( !a6 || sub_5660B0(v9) )
      return v52;
  }
LABEL_50:
  if ( sub_5660A0(v9) )
  {
    sub_5EAE70((Actor *)arg0, (int)v13, (int)arg0, v48);
    v22 = *((TESPackage **)a1 + 2);
    if ( v22 )
    {
      if ( v9 == v22 )
        v9->__vftable->super.Destroy((TESForm *)v9, 1);
    }
    v9 = 0;
  }
  sub_648E40((int)a1, GameHour, st6_0, arg0);
  if ( !v9 || v9 == *((TESPackage **)a1 + 2) )
    return 0;
  if ( (v9->members.packageFlags & 0x200) == 0
    || (v23 = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef),
        v23 != TESObjectREFR_GetParentCell((TESObjectREFR *)arg0)) )
  {
    a1[3] = v51;
    a1[1] = 0.0;
LABEL_10:
    if ( v52 )
    {
      if ( v9 && *((TESPackage **)a1 + 2) != v9 )
      {
        if ( sub_565DB0(v9) )
        {
          v45 = arg0;
          v43 = (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_645A30;
LABEL_66:
          a5 = flt_A5B6C0;
          v39 = (float *)(*((int (__thiscall **)(TESChildCELL *))arg0->vtbl + 0x5D))(arg0);
          a3 = flt_A5B6C0;
          v35 = (float *)(*((int (__thiscall **)(TESChildCELL *))arg0->vtbl + 0x5D))(arg0);
          ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)arg0);
          sub_446B90(ParentCell, v35, a3, v39, a5, v43, (int)v45);
          goto LABEL_67;
        }
        if ( sub_565DC0(v9) )
        {
          v45 = arg0;
          v43 = (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_645AF0;
          goto LABEL_66;
        }
      }
LABEL_67:
      v25 = *((TESPackage **)a1 + 2);
      if ( !v25 || v25 == v9 )
        goto LABEL_74;
      if ( sub_4BF150(v25) )
      {
        v46 = arg0;
        v44 = (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_645A30;
      }
      else
      {
        if ( !sub_565DA0(*((TESPackage **)a1 + 2)) )
        {
LABEL_74:
          v27 = *((TESPackage **)a1 + 2);
          if ( v27 )
          {
            if ( v9 != v27 || !sub_5EAE10((TESObjectREFR *)arg0) )
            {
              if ( sub_567CA0(*((TargetData ***)a1 + 2)) )
              {
                v28 = *((_DWORD *)a1 + 2);
                if ( *(_BYTE *)(v28 + 0x20) )
                  sub_568BB0(v28, (TESObjectREFR *)arg0);
              }
            }
          }
          sub_566DC0(*((TESPackage **)a1 + 2), flt_A30634, st6_0, (Actor *)arg0, 0, flt_A30634);
          if ( v29 )
            sub_5E6E00((Actor *)arg0, (int)arg0, st6_0);
          *((_BYTE *)a1 + 0x84) = 0;
          v49 = (_DWORD *)(*((int (__thiscall **)(TESChildCELL *, _DWORD, int))arg0->vtbl + 0x5D))(
                            arg0,
                            *(float *)&arg0[0xA].vtbl,
                            v48);
          v47 = TESObjectREFR_GetParentCell((TESObjectREFR *)arg0);
          WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)arg0);
          sub_4D7A20(arg0, (BSExtraDataVtbl *)WorldSpace, (BSExtraDataVtbl *)v47, v49, v50);
          (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0x38C))(a1, 0);
          v31 = *(int (__thiscall **)(float *))(*(_DWORD *)a1 + 0x174);
          a1[0xB] = 0.0;
          v32 = v31(a1);
          if ( v32 )
          {
            if ( *(_BYTE *)(v32 + 0x20) != 0x15 )
              (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0x178))(a1, 0);
          }
          (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0xBC))(a1, 0);
          (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0x394))(a1, 0);
          for ( i = (int *)(a1 + 0xF); i[1] || *i; BSSimpleList_Remove(i, v34) )
          {
            v34 = *i;
            if ( *i )
              FormHeapFree(*i);
          }
          return v52;
        }
        v46 = arg0;
        v44 = (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_645AF0;
      }
      a5a = flt_A5B6C0;
      v40 = (float *)(*((int (__thiscall **)(TESChildCELL *))arg0->vtbl + 0x5D))(arg0);
      a3a = flt_A5B6C0;
      v36 = (float *)(*((int (__thiscall **)(TESChildCELL *))arg0->vtbl + 0x5D))(arg0);
      v26 = TESObjectREFR_GetParentCell((TESObjectREFR *)arg0);
      sub_446B90(v26, v36, a3a, v40, a5a, v44, (int)v46);
      goto LABEL_74;
    }
    return v52;
  }
  if ( *((_DWORD *)a1 + 1) )
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)a1 + 0x38C))(a1, 1);
  *((_DWORD *)a1 + 2) = v9;
  return 0;
}
