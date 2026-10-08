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
  int v33; // eax
  float v34; // ecx
  float v35; // edx
  float v36; // eax
  NiPoint3 *v37; // eax
  Atmosphere *v38; // ecx
  unsigned int v39; // ebx
  TESObjectREFRVtbl *vtbl; // ebp
  NiAVObject *v41; // eax
  char v42; // al
  double v43; // st7
  TESObjectCELL *v44; // ebx
  TESWorldSpace *v45; // ebp
  int v46; // ebx
  float *v47; // eax
  BSExtraDataVtbl *v48; // [esp-4h] [ebp-70h]
  TESWorldSpace *v49; // [esp+0h] [ebp-6Ch]
  float v50; // [esp+8h] [ebp-64h]
  NiAVObject *PointerAtOffset08; // [esp+20h] [ebp-4Ch]
  float GameHour; // [esp+20h] [ebp-4Ch]
  float v53; // [esp+20h] [ebp-4Ch]
  float v54; // [esp+20h] [ebp-4Ch]
  int v55; // [esp+20h] [ebp-4Ch]
  UInt32 refID; // [esp+24h] [ebp-48h]
  NiPoint3 *v57; // [esp+24h] [ebp-48h]
  float v58; // [esp+24h] [ebp-48h]
  float sourceRef; // [esp+28h] [ebp-44h]
  TESObjectREFR *sourceRefa; // [esp+28h] [ebp-44h]
  TargetData *sourceRef_4; // [esp+2Ch] [ebp-40h]
  int sourceRef_4a; // [esp+2Ch] [ebp-40h]
  NiPoint3 destinationPosition; // [esp+34h] [ebp-38h] BYREF
  float v64[3]; // [esp+40h] [ebp-2Ch] BYREF
  TravelPath v65; // [esp+4Ch] [ebp-20h] BYREF
  unsigned int v66; // [esp+68h] [ebp-4h]
  unsigned int *v67; // [esp+70h] [ebp+4h]

  v12 = (*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>, double@<st7>))(*a1 + 0x184))( /*0x6443cb*/
          a1,
          a9,
          a8,
          a7,
          a6,
          a5,
          a4,
          a3,
          a2);
  if ( !a1[0xB] ) /*0x6443c3*/
    (*(void (__thiscall **)(_DWORD *, TESObjectREFR *))(*a1 + 0x558))(a1, a10); /*0x6443da*/
  PointerAtOffset08 = 0; /*0x6443de*/
  v13 = sub_5E6780(a10); /*0x6443eb*/
  v67 = v13; /*0x6443ef*/
  if ( !v13 ) /*0x6443f3*/
  {
    if ( !a1[0xB] /*0x64441f*/
      || !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)a1[0xB] + 0x190))(a1[0xB])
      && (sub_4D88C0(a10, *(bool (__thiscall **)(BSExtraData *, BSExtraData *))(a1[0xB] + 0xC)), !v14) )
    {
      (*(void (__thiscall **)(_DWORD *, TESObjectREFR *))(*a1 + 0x558))(a1, a10); /*0x64442c*/
      if ( !a1[0xB] /*0x644455*/
        || !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)a1[0xB] + 0x190))(a1[0xB])
        && (sub_4D88C0(a10, *(bool (__thiscall **)(BSExtraData *, BSExtraData *))(a1[0xB] + 0xC)), !v15) )
      {
        (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, int))(*a1 + 0x188))(a1, a10, 1); /*0x644464*/
        return; /*0x644466*/
      }
    }
    v16 = a1[0x11]; /*0x64446b*/
    if ( v16 ) /*0x644470*/
    {
      if ( *(TESObjectREFR **)v16 == a10 ) /*0x644474*/
      {
        v67 = sub_4D8D70(a10, *(TESForm **)(v16 + 4), 0); /*0x644483*/
        v13 = v67; /*0x644487*/
      }
    }
  }
  v17 = *(Atmosphere **)(a1[2] + 0x28); /*0x64448c*/
  if ( v17 ) /*0x644491*/
  {
    if ( Shared_GetPointerAtOffset08(v17) ) /*0x644493*/
      PointerAtOffset08 = Shared_GetPointerAtOffset08(*(Atmosphere **)(a1[2] + 0x28)); /*0x6444a7*/
  }
  if ( !a1[0xB] /*0x6444d2*/
    || !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)a1[0xB] + 0x190))(a1[0xB])
    && (sub_4D88C0(a10, *(bool (__thiscall **)(BSExtraData *, BSExtraData *))(a1[0xB] + 0xC)), !v18) )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, TESObjectREFR *, NiAVObject *))(*a1 + 0x554))( /*0x6444e4*/
            a1,
            a10,
            PointerAtOffset08) )
    {
      (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, int))(*a1 + 0x188))(a1, a10, 1); /*0x6444f7*/
      if ( v13 ) /*0x6444fb*/
      {
        ContainerEntryExtraData_DestroyDataTable(v13, v19); /*0x644503*/
        FormHeapFree((unsigned int)v13); /*0x644509*/
      }
      return; /*0x644509*/
    }
  }
  v20 = TESForm_LookupByFormID(0x3Au); /*0x64451d*/
  GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x644524*/
  if ( sub_6599B0((TESChildCELL *)a10) > GameHour ) /*0x644540*/
    GameHour = GameHour + dbl_A2F920; /*0x64454c*/
  v53 = GameHour - sub_6599B0((TESChildCELL *)a10); /*0x644567*/
  v54 = dbl_A2F938 / *(float *)&v20[1].member.refID * v53; /*0x644580*/
  v21 = sub_566DC0( /*0x644590*/
          (TESPackage *)a1[2],
          kTerrainLODQuadRayDirectionZ,
          a8,
          a7,
          (Actor *)a10,
          0,
          kTerrainLODQuadRayDirectionZ);
  if ( !v22 ) /*0x644597*/
  {
    v43 = sub_5677B0((TESPackage *)a1[2], v21, a10, 2); /*0x644792*/
    v58 = 0.0; /*0x6447a2*/
    sourceRef = 0.0; /*0x6447a6*/
    sourceRef_4a = Double_To_SInt32(v43); /*0x6447aa*/
    if ( !a1[0xB] ) /*0x64479e*/
      goto LABEL_63; /*0x64479e*/
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)a1[0xB] + 0x190))(a1[0xB]) ) /*0x6447bf*/
    {
      sub_566B30((TESPackage *)v12, &destinationPosition.x, (Actor *)a10); /*0x6447d1*/
      v44 = (TESObjectCELL *)sub_566A40((char **)v12, (Actor *)a10); /*0x6447e1*/
      v45 = sub_566940((TESPackage *)v12, (Actor *)a10); /*0x6447ec*/
      PathLow_ctor(&v65); /*0x6447ee*/
      v66 = 0; /*0x6447ff*/
      TravelPath_BuildToDestination(&v65, a10, &destinationPosition, v44, v45); /*0x644807*/
      v58 = TravelPath_ComputeDistance(&v65, a10); /*0x644816*/
      sourceRefa = (TESObjectREFR *)a1[0xB]; /*0x644829*/
      TravelPath_BuildToDestination(&v65, sourceRefa, &destinationPosition, v44, v45); /*0x64482d*/
      sourceRef = TravelPath_ComputeDistance(&v65, sourceRefa); /*0x644840*/
      v66 = 0xFFFFFFFF; /*0x644848*/
      PathLow_dtor(&v65); /*0x644850*/
    }
    if ( !a1[0xB] /*0x644895*/
      || !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)a1[0xB] + 0x190))(a1[0xB])
      || (double)sourceRef_4a > TesObjectREF_GetDistance(a10, (TESObjectREFR *)a1[0xB], 0)
      || sourceRef < (double)v58 )
    {
LABEL_63:
      v46 = *a1; /*0x64489e*/
      v50 = (float)sourceRef_4a; /*0x6448a3*/
      v49 = sub_566940((TESPackage *)a1[2], (Actor *)a10); /*0x6448b7*/
      v48 = sub_566A40((char **)a1[2], (Actor *)a10); /*0x6448c1*/
      v47 = sub_566B30((TESPackage *)a1[2], v64, (Actor *)a10); /*0x6448c8*/
      (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, float *, BSExtraDataVtbl *, TESWorldSpace *, float, _DWORD))(v46 + 0x418))( /*0x6448d7*/
        a1,
        a10,
        v47,
        v48,
        v49,
        COERCE_FLOAT(LODWORD(v54)),
        LODWORD(v50));
    }
    goto LABEL_64; /*0x6448d7*/
  }
  if ( (!a1[0xB] || (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)a1[0xB] + 0x190))(a1[0xB])) /*0x6445b9*/
    && (v23 = (Actor *)a1[0xB]) != 0 )
  {
    sub_566DC0((TESPackage *)a1[2], kTerrainLODQuadRayDirectionZ, a8, a7, v23, 0, kTerrainLODQuadRayDirectionZ); /*0x64476b*/
    if ( !v42 ) /*0x644772*/
      goto LABEL_64; /*0x644772*/
  }
  else if ( v67 ) /*0x6445c5*/
  {
    v24 = (int *)*v67; /*0x6445cb*/
    v25 = 0; /*0x6445cd*/
    v55 = 0; /*0x6445d1*/
    if ( *v67 ) /*0x6445cb*/
    {
      v55 = *v24; /*0x6445d9*/
      v25 = (ExtraDataList *)*v24; /*0x6445dd*/
    }
    refID = 0; /*0x6445e1*/
    if ( v25 ) /*0x6445e9*/
    {
      if ( ExtraDataList_GetReferencePointer(v25) ) /*0x6445ed*/
        refID = ExtraDataList_GetReferencePointer(v25)->member.super.refID; /*0x644600*/
    }
    v26 = (TESObjectREFR *)sub_5697E0(*(_DWORD **)(v12 + 0x24)); /*0x64460c*/
    if ( v26 || (v26 = (TESObjectREFR *)a1[0xC]) != 0 ) /*0x644617*/
    {
      if ( TESObjectREFR_GetContainer(v26) ) /*0x64461b*/
      {
        v27 = *(Atmosphere **)(v12 + 0x28); /*0x64462c*/
        v28 = v67[2]; /*0x64462f*/
        v29 = (unsigned __int16 *)Shared_GetPointerAtOffset08(v27); /*0x644633*/
        sub_5FC6D0((int)a10, a2, a3, a4, a5, a6, a7, a8, v21, v28, v55, v26, v29, refID); /*0x644642*/
        (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, int))(*a1 + 0x188))(a1, a10, 1); /*0x644654*/
        goto LABEL_64; /*0x644656*/
      }
    }
    if ( *v67 ) /*0x64465f*/
      v55 = *(_DWORD *)*v67; /*0x644667*/
    v31 = *(_DWORD **)(v12 + 0x24); /*0x64466b*/
    v57 = 0; /*0x644673*/
    sourceRef_4 = *(TargetData **)(v12 + 0x28); /*0x64467b*/
    if ( v31 ) /*0x64467f*/
    {
      v32 = sub_5697E0(v31); /*0x64468a*/
      if ( (v32 || (v32 = a1[0xC]) != 0) /*0x6446bd*/
        && ((TESForm *)(*(int (__thiscall **)(int))(*(_DWORD *)v32 + 0x170))(v32) == MEMORY[0xB35EAC]
         || (*(int (__thiscall **)(int))(*(_DWORD *)v32 + 0x170))(v32) == MEMORY[0xB35EB0]) )
      {
        v33 = (*(int (__thiscall **)(int))(*(_DWORD *)v32 + 0x174))(v32); /*0x6446c9*/
        v34 = *(float *)v33; /*0x6446cb*/
        v35 = *(float *)(v33 + 4); /*0x6446cd*/
        v36 = *(float *)(v33 + 8); /*0x6446d0*/
        destinationPosition.x = v34; /*0x6446d5*/
        destinationPosition.y = v35; /*0x6446d9*/
        destinationPosition.z = v36; /*0x6446dd*/
        v37 = (NiPoint3 *)FormHeapAlloc(0xCu); /*0x6446e1*/
        if ( v37 ) /*0x6446eb*/
          *v37 = destinationPosition; /*0x6446f1*/
        else
          v37 = 0; /*0x644703*/
        v57 = v37; /*0x644705*/
      }
    }
    if ( !sub_569E60(sourceRef_4).form ) /*0x64470d*/
      Shared_GetPointerAtOffset08(*(Atmosphere **)(v12 + 0x28)); /*0x644719*/
    v38 = *(Atmosphere **)(v12 + 0x28); /*0x644726*/
    v39 = v67[2]; /*0x644729*/
    vtbl = a10->vtbl; /*0x64472c*/
    v41 = Shared_GetPointerAtOffset08(v38); /*0x644731*/
    ((void (__thiscall *)(TESObjectREFR *, unsigned int, int, NiAVObject *, NiPoint3 *, _DWORD))vtbl[1].Unk_48)( /*0x644745*/
      a10,
      v39,
      v55,
      v41,
      v57,
      0);
  }
  (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, int))(*a1 + 0x188))(a1, a10, 1); /*0x644785*/
LABEL_64:
  if ( v67 ) /*0x6448df*/
  {
    ContainerEntryExtraData_DestroyDataTable(v67, v30); /*0x6448e3*/
    FormHeapFree((unsigned int)v67); /*0x6448e9*/
  }
}
