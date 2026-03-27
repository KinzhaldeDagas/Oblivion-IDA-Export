void __userpurge sub_644390(
        _DWORD *a1@<ecx>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>,
        TESObjectREFR *a10)
{
  int v12; // ebp
  unsigned int *v13; // ebx
  char v14; // al
  char v15; // al
  int v16; // eax
  Atmosphere *v17; // ecx
  char v18; // al
  int v19; // edx
  TESForm *v20; // ebx
  double v21; // st7
  char v22; // al
  Actor *v23; // eax
  int *v24; // eax
  ExtraDataList *v25; // ebx
  TESObjectREFR *v26; // ebx
  Atmosphere *v27; // ecx
  int v28; // ebp
  unsigned __int16 *v29; // eax
  int v30; // edx
  _DWORD *v31; // ecx
  int v32; // ebx
  float *v33; // eax
  float v34; // ecx
  float v35; // edx
  float v36; // eax
  float *v37; // eax
  Atmosphere *v38; // ecx
  unsigned int v39; // ebx
  TESObjectREFRVtbl *vtbl; // ebp
  NiAVObject *v41; // eax
  char v42; // al
  double v43; // st7
  TESObjectCELL *v44; // ebx
  TESWorldSpace *v45; // ebp
  double v46; // st7
  int v47; // ebx
  int v48; // eax
  TESObjectCELL *v49; // [esp-4h] [ebp-70h]
  TESWorldSpace *v50; // [esp+0h] [ebp-6Ch]
  float v51; // [esp+8h] [ebp-64h]
  NiAVObject *v52; // [esp+20h] [ebp-4Ch]
  float GameHour; // [esp+20h] [ebp-4Ch]
  float v54; // [esp+20h] [ebp-4Ch]
  float v55; // [esp+20h] [ebp-4Ch]
  int v56; // [esp+20h] [ebp-4Ch]
  bool (__thiscall *CompareTo)(BSExtraData *, BSExtraData *); // [esp+24h] [ebp-48h]
  float *v58; // [esp+24h] [ebp-48h]
  float v59; // [esp+24h] [ebp-48h]
  float v60; // [esp+28h] [ebp-44h]
  _DWORD *v61; // [esp+28h] [ebp-44h]
  TargetData *v62; // [esp+2Ch] [ebp-40h]
  int v63; // [esp+2Ch] [ebp-40h]
  float v64; // [esp+34h] [ebp-38h] BYREF
  float v65; // [esp+38h] [ebp-34h]
  float v66; // [esp+3Ch] [ebp-30h]
  _BYTE v67[12]; // [esp+40h] [ebp-2Ch] BYREF
  int v68[5]; // [esp+4Ch] [ebp-20h] BYREF
  unsigned int v69; // [esp+68h] [ebp-4h]
  unsigned int *v70; // [esp+70h] [ebp+4h]

  v12 = (*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>))(*a1 + 0x184))(
          a1,
          a9,
          a8,
          a7,
          a6,
          a5,
          a4,
          a3);
  if ( !a1[0xB] )
    (*(void (__thiscall **)(_DWORD *, TESObjectREFR *))(*a1 + 0x558))(a1, a10);
  v52 = 0;
  v13 = sub_5E6780(a10);
  v70 = v13;
  if ( !v13 )
  {
    if ( !a1[0xB]
      || !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)a1[0xB] + 0x190))(a1[0xB])
      && (sub_4D88C0(a10, *(bool (__thiscall **)(BSExtraData *, BSExtraData *))(a1[0xB] + 0xC)), !v14) )
    {
      (*(void (__thiscall **)(_DWORD *, TESObjectREFR *))(*a1 + 0x558))(a1, a10);
      if ( !a1[0xB]
        || !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)a1[0xB] + 0x190))(a1[0xB])
        && (sub_4D88C0(a10, *(bool (__thiscall **)(BSExtraData *, BSExtraData *))(a1[0xB] + 0xC)), !v15) )
      {
        (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, int))(*a1 + 0x188))(a1, a10, 1);
        return;
      }
    }
    v16 = a1[0x11];
    if ( v16 )
    {
      if ( *(TESObjectREFR **)v16 == a10 )
      {
        v70 = sub_4D8D70(a10, *(TESForm **)(v16 + 4), 0);
        v13 = v70;
      }
    }
  }
  v17 = *(Atmosphere **)(a1[2] + 0x28);
  if ( v17 )
  {
    if ( sub_452A60(v17) )
      v52 = sub_452A60(*(Atmosphere **)(a1[2] + 0x28));
  }
  if ( !a1[0xB]
    || !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)a1[0xB] + 0x190))(a1[0xB])
    && (sub_4D88C0(a10, *(bool (__thiscall **)(BSExtraData *, BSExtraData *))(a1[0xB] + 0xC)), !v18) )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, TESObjectREFR *, NiAVObject *))(*a1 + 0x554))(a1, a10, v52) )
    {
      (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, int))(*a1 + 0x188))(a1, a10, 1);
      if ( v13 )
      {
        ContainerEntryExtraData_DestroyDataTable(v13, v19);
        FormHeapFree((unsigned int)v13);
      }
      return;
    }
  }
  v20 = TESForm_LookupByFormID(0x3Au);
  GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
  if ( sub_6599B0((TESChildCELL *)a10) > GameHour )
    GameHour = GameHour + dbl_A2F920;
  v54 = GameHour - sub_6599B0((TESChildCELL *)a10);
  v55 = dbl_A2F938 / *(float *)&v20[1].member.refID * v54;
  v21 = sub_566DC0((TESPackage *)a1[2], flt_A30634, a8, (Actor *)a10, 0, flt_A30634);
  if ( !v22 )
  {
    v43 = sub_5677B0((TESPackage *)a1[2], v21, a10, 2);
    v59 = 0.0;
    v60 = 0.0;
    v63 = Double_To_SInt32(v43);
    if ( !a1[0xB] )
      goto LABEL_63;
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)a1[0xB] + 0x190))(a1[0xB]) )
    {
      sub_566B30((TESPackage *)v12, (int)&v64, (Actor *)a10);
      v44 = sub_566A40((char **)v12, (Actor *)a10);
      v45 = sub_566940((TESPackage *)v12, (Actor *)a10);
      sub_68A9F0(v68);
      v69 = 0;
      sub_68B030(v68, 0.0, a10, &v64, v44, v45);
      v46 = sub_68A760((char *)v68, (int)a10);
      v59 = v46;
      v61 = (_DWORD *)a1[0xB];
      sub_68B030(v68, v46, v61, &v64, v44, v45);
      v60 = sub_68A760((char *)v68, (int)v61);
      v69 = 0xFFFFFFFF;
      sub_68AA10(v68);
    }
    if ( !a1[0xB]
      || !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)a1[0xB] + 0x190))(a1[0xB])
      || (double)v63 > TesObjectREF_GetDistance(a10, (TESObjectREFR *)a1[0xB], 0)
      || v60 < (double)v59 )
    {
LABEL_63:
      v47 = *a1;
      v51 = (float)v63;
      v50 = sub_566940((TESPackage *)a1[2], (Actor *)a10);
      v49 = sub_566A40((char **)a1[2], (Actor *)a10);
      v48 = sub_566B30((TESPackage *)a1[2], (int)v67, (Actor *)a10);
      (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, int, TESObjectCELL *, TESWorldSpace *, float, _DWORD))(v47 + 0x418))(
        a1,
        a10,
        v48,
        v49,
        v50,
        COERCE_FLOAT(LODWORD(v55)),
        LODWORD(v51));
    }
    goto LABEL_64;
  }
  if ( (!a1[0xB] || (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)a1[0xB] + 0x190))(a1[0xB]))
    && (v23 = (Actor *)a1[0xB]) != 0 )
  {
    sub_566DC0((TESPackage *)a1[2], flt_A30634, a8, v23, 0, flt_A30634);
    if ( !v42 )
      goto LABEL_64;
  }
  else if ( v70 )
  {
    v24 = (int *)*v70;
    v25 = 0;
    v56 = 0;
    if ( *v70 )
    {
      v56 = *v24;
      v25 = (ExtraDataList *)*v24;
    }
    CompareTo = 0;
    if ( v25 )
    {
      if ( ExtraDataList_GetReferencePointer(v25) )
        CompareTo = ExtraDataList_GetReferencePointer(v25)[1].CompareTo;
    }
    v26 = (TESObjectREFR *)sub_5697E0(*(_DWORD **)(v12 + 0x24));
    if ( v26 || (v26 = (TESObjectREFR *)a1[0xC]) != 0 )
    {
      if ( TESObjectREFR_GetContainer(v26) )
      {
        v27 = *(Atmosphere **)(v12 + 0x28);
        v28 = v70[2];
        v29 = (unsigned __int16 *)sub_452A60(v27);
        sub_5FC6D0((int)a10, a2, a3, a4, a5, a6, a7, a8, v21, v28, v56, v26, v29, (int)CompareTo);
        (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, int))(*a1 + 0x188))(a1, a10, 1);
        goto LABEL_64;
      }
    }
    if ( *v70 )
      v56 = *(_DWORD *)*v70;
    v31 = *(_DWORD **)(v12 + 0x24);
    v58 = 0;
    v62 = *(TargetData **)(v12 + 0x28);
    if ( v31 )
    {
      v32 = sub_5697E0(v31);
      if ( (v32 || (v32 = a1[0xC]) != 0)
        && ((TESForm *)(*(int (__thiscall **)(int))(*(_DWORD *)v32 + 0x170))(v32) == TESDataHandler_g_XMarker
         || (*(int (__thiscall **)(int))(*(_DWORD *)v32 + 0x170))(v32) == TESDataHandler_g_XMarkerHeading) )
      {
        v33 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v32 + 0x174))(v32);
        v34 = *v33;
        v35 = v33[1];
        v36 = v33[2];
        v64 = v34;
        v65 = v35;
        v66 = v36;
        v37 = (float *)FormHeapAlloc(0xCu);
        if ( v37 )
        {
          *v37 = v64;
          v37[1] = v65;
          v37[2] = v66;
        }
        else
        {
          v37 = 0;
        }
        v58 = v37;
      }
    }
    if ( !sub_569E60(v62).form )
      sub_452A60(*(Atmosphere **)(v12 + 0x28));
    v38 = *(Atmosphere **)(v12 + 0x28);
    v39 = v70[2];
    vtbl = a10->vtbl;
    v41 = sub_452A60(v38);
    ((void (__thiscall *)(TESObjectREFR *, unsigned int, int, NiAVObject *, float *, _DWORD))vtbl[1].Unk_48)(
      a10,
      v39,
      v56,
      v41,
      v58,
      0);
  }
  (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, int))(*a1 + 0x188))(a1, a10, 1);
LABEL_64:
  if ( v70 )
  {
    ContainerEntryExtraData_DestroyDataTable(v70, v30);
    FormHeapFree((unsigned int)v70);
  }
}
