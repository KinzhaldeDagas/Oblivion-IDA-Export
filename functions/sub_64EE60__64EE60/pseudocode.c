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

  v7 = (TESPackage *)(*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*a1 + 0x184))(
                       a1,
                       a4,
                       a3,
                       a2);
  if ( !a1[0xB] )
    (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x558))(a1, a5);
  v8 = a1[0xB];
  if ( !v8 || (*(_DWORD *)(v8 + 8) & 0x20) != 0 )
  {
    ++a1[1];
    return 0;
  }
  if ( v7->members.type == 9 )
  {
    v9 = (float *)sub_566B30(v7, (int)&v29, a5);
    v10 = sub_4D7E30((float *)a1[0xB], v9);
    v32 = (float)Double_To_SInt32(v10);
    sub_566DB0(v7);
    v12 = (double)v11;
    if ( v11 < 0 )
      v12 = v12 + flt_A2FC78;
    a4 = v12 + dbl_A3DDE0;
    a3 = v32;
    if ( v32 > a4 )
      (*(void (__thiscall **)(_DWORD *, Actor *, unsigned int))(*a1 + 0x188))(a1, a5, 0xFFFFFFFF);
  }
  if ( GetTeleportExtraData((_BYTE *)a1[0xB]) )
  {
    v13 = a5->vtbl->super.super.GetPos(a5);
    sub_4D76F0((_BYTE *)a1[0xB]);
    v29 = *v14 - *v13;
    v30 = v14[1] - v13[1];
    v31 = v14[2] - v13[2];
    a2 = v29 * v29;
    a3 = v31 * v31;
    v33 = v30 * v30 + a2 + a3;
    v34 = sqrt(v33);
    if ( v34 <= (double)flt_A2FFE8 )
      goto LABEL_12;
LABEL_17:
    if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 0x36C))(a1) )
      (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x1B0))(a1, a5);
    TeleportExtraData = GetTeleportExtraData((_BYTE *)a1[0xB]);
    v18 = (_BYTE *)a1[0xB];
    if ( TeleportExtraData )
      sub_4D76F0(v18);
    else
      v19 = (float *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v18 + 0x174))(v18);
    v20 = flt_A30634;
    v21 = *a1;
    v29 = *v19;
    v22 = (TESObjectREFR *)a1[0xB];
    v28 = v20;
    v30 = v19[1];
    v27 = flt_A71E4C;
    v31 = v19[2];
    WorldSpace = TESObjectREFR_GetWorldSpace(v22);
    ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a1[0xB]);
    (*(void (__thiscall **)(_DWORD *, Actor *, float *, TESObjectCELL *, TESWorldSpace *, _DWORD, _DWORD))(v21 + 0x418))(
      a1,
      a5,
      &v29,
      ParentCell,
      WorldSpace,
      LODWORD(v27),
      LODWORD(v28));
    return 0;
  }
  if ( !sub_5687D0((TESPackage *)a1[2], 0, a4, (TESObjectREFR *)a5) )
    goto LABEL_17;
LABEL_12:
  if ( (PlayerCharacter *)a1[0xB] == TESDataHandler_g_PlayerRef
    && PlayerCharacter::IsSleeping_(TESDataHandler_g_PlayerRef) )
  {
    v15 = TESDataHandler_g_PlayerRef;
    if ( !TESDataHandler_g_PlayerRef->isMovingToNewSpace )
    {
      v15->HoursToSleep = 0;
      v15->isSleeping = 1;
      (*(void (__thiscall **)(_DWORD *, Actor *, unsigned int))(*a1 + 0x188))(a1, a5, 0xFFFFFFFE);
      return 0;
    }
  }
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)a1[0xB] + 0x190))(a1[0xB]) )
  {
    v24 = ((double (__thiscall *)(_DWORD *, int))*(_DWORD *)(*a1 + 0x394))(a1, 1);
    ActivateRef((TESObjectREFR *)a1[0xB], a2, a3, v24, (TESObjectREFR *)a5, 0, 0, 1);
LABEL_25:
    (*(void (__thiscall **)(_DWORD *, Actor *, int))(*a1 + 0x188))(a1, a5, 1);
    return 1;
  }
  if ( (PlayerCharacter *)a1[0xB] != TESDataHandler_g_PlayerRef
    || !PlayerCharacter::IsSleeping_(TESDataHandler_g_PlayerRef)
    || (v25 = TESDataHandler_g_PlayerRef, TESDataHandler_g_PlayerRef->isMovingToNewSpace) )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0x394))(a1, 1);
    goto LABEL_25;
  }
  v25->HoursToSleep = 0;
  v25->isSleeping = 1;
  (*(void (__thiscall **)(_DWORD *, Actor *, unsigned int))(*a1 + 0x188))(a1, a5, 0xFFFFFFFF);
  return 0;
}
