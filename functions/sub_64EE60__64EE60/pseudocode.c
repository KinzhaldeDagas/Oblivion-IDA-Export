char __userpurge sub_64EE60@<al>(_DWORD *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, Actor *a5)
{
  TESPackage *v7; // ebp
  int v8; // eax
  float *v9; // eax
  double v10; // st7
  int v11; // eax
  double v12; // st7
  float *v13; // ebp
  float *v14; // eax
  PlayerCharacter *v15; // eax
  ExtraTeleport *TeleportExtraData; // eax
  _BYTE *v18; // ecx
  float *v19; // eax
  double v20; // st7
  int v21; // ebx
  TESObjectREFR *v22; // ecx
  TESObjectCELL *ParentCell; // eax
  double v24; // st7
  PlayerCharacter *v25; // eax
  TESWorldSpace *WorldSpace; // [esp+Ch] [ebp-2Ch]
  float v27; // [esp+10h] [ebp-28h]
  float v28; // [esp+14h] [ebp-24h]
  float v29; // [esp+2Ch] [ebp-Ch] BYREF
  float v30; // [esp+30h] [ebp-8h]
  float v31; // [esp+34h] [ebp-4h]
  float v32; // [esp+3Ch] [ebp+4h]
  float v33; // [esp+3Ch] [ebp+4h]
  float v34; // [esp+3Ch] [ebp+4h]

  v7 = (TESPackage *)(*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*a1 + 0x184))( /*0x64ee7c*/
                       a1,
                       a4,
                       a3,
                       a2);
  if ( !a1[0xB] ) /*0x64ee79*/
    (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x558))(a1, a5); /*0x64ee8b*/
  v8 = a1[0xB]; /*0x64ee8d*/
  if ( !v8 || (*(_DWORD *)(v8 + 8) & 0x20) != 0 ) /*0x64eea0*/
  {
    ++a1[1]; /*0x64f128*/
    return 0; /*0x64f12f*/
  }
  if ( v7->members.type == 9 ) /*0x64eeaa*/
  {
    v9 = (float *)sub_566B30(v7, (int)&v29, a5); /*0x64eeb4*/
    v10 = TESObjectREFR::GetDistanceToPoint((float *)a1[0xB], v9); /*0x64eebd*/
    v32 = (float)Double_To_SInt32(v10); /*0x64eed1*/
    sub_566DB0(v7); /*0x64eed5*/
    v12 = (double)v11; /*0x64eee0*/
    if ( v11 < 0 ) /*0x64eee4*/
      v12 = v12 + flt_A2FC78; /*0x64eee6*/
    a4 = v12 + dbl_A3DDE0; /*0x64eeec*/
    a3 = v32; /*0x64eef2*/
    if ( v32 > a4 ) /*0x64eefd*/
      (*(void (__thiscall **)(_DWORD *, Actor *, unsigned int))(*a1 + 0x188))(a1, a5, 0xFFFFFFFF); /*0x64ef0c*/
  }
  if ( TESObjectREFR_GetTeleportData((_BYTE *)a1[0xB]) ) /*0x64ef11*/
  {
    v13 = a5->vtbl->super.super.GetPos(a5); /*0x64ef2d*/
    TESObjectREFR_GetLinkedTeleportMarkerPosition((_BYTE *)a1[0xB]); /*0x64ef2f*/
    v29 = *v14 - *v13; /*0x64ef39*/
    v30 = v14[1] - v13[1]; /*0x64ef43*/
    v31 = v14[2] - v13[2]; /*0x64ef4d*/
    a2 = v29 * v29; /*0x64ef65*/
    a3 = v31 * v31; /*0x64ef69*/
    v33 = v30 * v30 + a2 + a3; /*0x64ef6d*/
    v34 = sqrt(v33); /*0x64ef7a*/
    if ( v34 <= (double)flt_A2FFE8 ) /*0x64ef8d*/
      goto LABEL_12; /*0x64ef8d*/
LABEL_17:
    if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 0x36C))(a1) ) /*0x64effb*/
      (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x1B0))(a1, a5); /*0x64f00c*/
    TeleportExtraData = TESObjectREFR_GetTeleportData((_BYTE *)a1[0xB]); /*0x64f011*/
    v18 = (_BYTE *)a1[0xB]; /*0x64f018*/
    if ( TeleportExtraData ) /*0x64f01b*/
      TESObjectREFR_GetLinkedTeleportMarkerPosition(v18); /*0x64f029*/
    else
      v19 = (float *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v18 + 0x174))(v18); /*0x64f025*/
    v20 = kTerrainLODQuadRayDirectionZ; /*0x64f030*/
    v21 = *a1; /*0x64f036*/
    v29 = *v19; /*0x64f038*/
    v22 = (TESObjectREFR *)a1[0xB]; /*0x64f03f*/
    v28 = v20; /*0x64f045*/
    v30 = v19[1]; /*0x64f049*/
    v27 = flt_A71E4C; /*0x64f056*/
    v31 = v19[2]; /*0x64f059*/
    WorldSpace = TESObjectREFR_GetWorldSpace(v22); /*0x64f065*/
    ParentCell = Shared_GetDwordAtOffset40((TESObjectREFR *)a1[0xB]); /*0x64f066*/
    (*(void (__thiscall **)(_DWORD *, Actor *, float *, TESObjectCELL *, TESWorldSpace *, _DWORD, _DWORD))(v21 + 0x418))( /*0x64f07a*/
      a1,
      a5,
      &v29,
      ParentCell,
      WorldSpace,
      LODWORD(v27),
      LODWORD(v28));
    return 0; /*0x64f085*/
  }
  if ( !sub_5687D0((TESPackage *)a1[2], 0, a4, (TESObjectREFR *)a5) ) /*0x64efe8*/
    goto LABEL_17; /*0x64efef*/
LABEL_12:
  if ( (PlayerCharacter *)a1[0xB] == reference && PlayerCharacter::IsSleeping_(reference) ) /*0x64ef9e*/
  {
    v15 = reference; /*0x64efab*/
    if ( !reference->isMovingToNewSpace ) /*0x64efb0*/
    {
      v15->HoursToSleep = 0; /*0x64efbc*/
      v15->isSleeping = 1; /*0x64efc2*/
      (*(void (__thiscall **)(_DWORD *, Actor *, unsigned int))(*a1 + 0x188))(a1, a5, 0xFFFFFFFE); /*0x64efd6*/
      return 0; /*0x64efe1*/
    }
  }
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)a1[0xB] + 0x190))(a1[0xB]) ) /*0x64f093*/
  {
    v24 = ((double (__thiscall *)(_DWORD *, int))*(_DWORD *)(*a1 + 0x394))(a1, 1); /*0x64f0a5*/
    ActivateRef((TESObjectREFR *)a1[0xB], a2, a3, v24, (TESObjectREFR *)a5, 0, 0, 1); /*0x64f0af*/
LABEL_25:
    (*(void (__thiscall **)(_DWORD *, Actor *, int))(*a1 + 0x188))(a1, a5, 1); /*0x64f0b4*/
    return 1; /*0x64f0cc*/
  }
  if ( (PlayerCharacter *)a1[0xB] != reference /*0x64f0e8*/
    || !PlayerCharacter::IsSleeping_(reference)
    || (v25 = reference, reference->isMovingToNewSpace) )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0x394))(a1, 1); /*0x64f124*/
    goto LABEL_25; /*0x64f126*/
  }
  v25->HoursToSleep = 0; /*0x64f0f0*/
  v25->isSleeping = 1; /*0x64f0f6*/
  (*(void (__thiscall **)(_DWORD *, Actor *, unsigned int))(*a1 + 0x188))(a1, a5, 0xFFFFFFFF); /*0x64f10a*/
  return 0; /*0x64efd8*/
}
