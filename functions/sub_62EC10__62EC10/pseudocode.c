void __userpurge sub_62EC10(_DWORD *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, TESObjectREFR *a5)
{
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  double v11; // st7
  _DWORD *v12; // ebp
  float *v13; // eax
  double v14; // st7
  ExtraTeleport *TeleportExtraData; // eax
  int v16; // ebp
  _BYTE *v17; // ecx
  int v18; // eax
  _DWORD *v19; // ebx
  UInt32 DwordAtOffset40; // eax
  double v21; // st7
  int v22; // ebp
  int v23; // ebx
  UInt32 v24; // eax
  int v25; // eax
  TESForm *v26; // ebp
  BSExtraDataVtbl *Owner; // eax
  BSExtraDataVtbl *v28; // eax
  ExtraDataList *v29; // ebx
  TESForm *v30; // eax
  double v31; // st7
  signed int v32; // eax
  TESWorldSpace *v33; // [esp+20h] [ebp-28h]
  float *v34; // [esp+24h] [ebp-24h]
  TESWorldSpace *WorldSpace; // [esp+24h] [ebp-24h]
  float v36; // [esp+24h] [ebp-24h]
  TESPackage *v37; // [esp+38h] [ebp-10h]
  float v38[3]; // [esp+3Ch] [ebp-Ch] BYREF
  float v39; // [esp+4Ch] [ebp+4h]

  v37 = (TESPackage *)(*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*a1 + 0x184))( /*0x62ec2b*/
                        a1,
                        a4,
                        a3,
                        a2);
  if ( !a1[0xB] ) /*0x62ec23*/
    (*(void (__thiscall **)(_DWORD *, TESObjectREFR *))(*a1 + 0x558))(a1, a5); /*0x62ec3c*/
  v7 = a1[0xB]; /*0x62ec3e*/
  if ( !v7 || (v8 = *(_DWORD *)(v7 + 8), (v8 & 0x20) != 0) || (v8 & 0x800) != 0 ) /*0x62ec5f*/
  {
    (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, int))(*a1 + 0x188))(a1, a5, 1); /*0x62ef6c*/
    return; /*0x62ef6c*/
  }
  if ( !a1[0x11] ) /*0x62ec69*/
    return; /*0x62ec69*/
  v9 = a1[0x11]; /*0x62ec6f*/
  TESForm_GetValue(*(void **)(v9 + 4)); /*0x62ec76*/
  v11 = (double)(*(_DWORD *)(v9 + 0x10) * v10); /*0x62ec8a*/
  v39 = v11; /*0x62ec8e*/
  if ( !a1[0xB] ) /*0x62ec86*/
  {
    v9 = *(_DWORD *)v9; /*0x62ec94*/
    v12 = (_DWORD *)a1[0x11]; /*0x62ec9e*/
    if ( v12[1] == (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 0x170))(v9) ) /*0x62eca8*/
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0xD0))(a1, *v12); /*0x62ecb8*/
      return; /*0x62ecc1*/
    }
  }
  LOBYTE(v9) = 0; /*0x62ecc7*/
  if ( TESObjectREFR_GetTeleportData((_BYTE *)a1[0xB]) ) /*0x62ecc9*/
  {
    v34 = a5->vtbl->GetPos(a5); /*0x62ece1*/
    TESObjectREFR_GetLinkedTeleportMarkerPosition((_BYTE *)a1[0xB]); /*0x62ece7*/
    sub_4121A0(v13, v38, v34); /*0x62ecee*/
    v14 = NiPoint3_Length(v38); /*0x62ecf7*/
    a3 = (double)stru_B36B28; /*0x62ecfc*/
    if ( a3 >= v14 ) /*0x62ed09*/
    {
      LOBYTE(v9) = 1; /*0x62ed0b*/
LABEL_13:
      if ( !*((_BYTE *)a1 + 0xD0) ) /*0x62ed0d*/
        (*(void (__thiscall **)(_DWORD *, TESObjectREFR *))(*a1 + 0x194))(a1, a5); /*0x62ed21*/
      if ( !sub_64ADA0((Actor *)a1) || (_BYTE)v9 ) /*0x62ed34*/
      {
        v26 = 0; /*0x62ee63*/
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)a1[0x11] + 0x190))(*(_DWORD *)a1[0x11]) ) /*0x62ee65*/
        {
          v26 = (TESForm *)a1[0xB]; /*0x62eee6*/
          Script_AddEventToExtraScript(v26, *(_DWORD *)(a1[0x11] + 0x18), 0x4000); /*0x62eef0*/
          ((void (__thiscall *)(TESForm *, _DWORD, _DWORD, int, _DWORD, _DWORD, TESObjectREFR *, _DWORD, _DWORD, int, _DWORD))v26->vtbl[1].Unk_09)( /*0x62ef1b*/
            v26,
            *(_DWORD *)(a1[0x11] + 4),
            0,
            1,
            0,
            0,
            a5,
            0,
            0,
            1,
            0);
        }
        else
        {
          Owner = TESObjectREFR_GetOwner(*(TESObjectREFR **)a1[0x11]); /*0x62ee70*/
          if ( Owner ) /*0x62ee77*/
          {
            if ( LOBYTE(Owner->CompareTo) == 0x23 ) /*0x62ee7d*/
            {
              v28 = TESObjectREFR_GetOwner(*(TESObjectREFR **)a1[0x11]); /*0x62ee84*/
              if ( v28 ) /*0x62ee8b*/
                v26 = (TESForm *)sub_675220((int)&qword_B3BB2C[0x75], (int)v28); /*0x62ee98*/
            }
          }
          v29 = (ExtraDataList *)(*(_DWORD *)a1[0x11] + 0x44); /*0x62eea9*/
          v30 = a5->vtbl->GetBaseForm(a5); /*0x62eeac*/
          ExtraDataList::SetOrRemoveExtraOwnership(v29, v30); /*0x62eeb1*/
          v31 = Script_AddEventToExtraScript(v26, *(_DWORD *)(a1[0x11] + 0x18), 0x4000); /*0x62eec3*/
          ActivateRef(*(TESObjectREFR **)a1[0x11], a2, a3, v31, a5, 0, *(_DWORD *)(a1[0x11] + 4), 1); /*0x62eed9*/
        }
        if ( v26 ) /*0x62ef1f*/
        {
          if ( v26 != (TESForm *)a5 ) /*0x62ef23*/
          {
            v32 = Double_To_SInt32(v39); /*0x62ef29*/
            sub_5E4A40((Actor *)a5, a2, a3, v39, v26, v32); /*0x62ef32*/
          }
        }
      }
      else
      {
        a1[0xB] = 0; /*0x62ed3a*/
      }
      if ( a1[0x11] ) /*0x62ef37*/
        FormHeapFree(a1[0x11]); /*0x62ef3f*/
      a1[0x11] = 0; /*0x62ef47*/
      *((_BYTE *)a1 + 0xD0) = 0; /*0x62ef4e*/
      return; /*0x62ef5c*/
    }
  }
  else
  {
    LOBYTE(v9) = sub_5687D0(v37, v9, v11, a5); /*0x62ed50*/
    if ( (_BYTE)v9 ) /*0x62ed54*/
      goto LABEL_13; /*0x62ed54*/
  }
  if ( sub_64ADA0((Actor *)a1) ) /*0x62ed58*/
    goto LABEL_13; /*0x62ed5f*/
  if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 0x36C))(a1) ) /*0x62ed6b*/
  {
    a5->vtbl[1].Unk_5E(a5); /*0x62ed7b*/
  }
  else
  {
    if ( !*((_BYTE *)a1 + 0xD0) ) /*0x62ed87*/
      goto LABEL_28; /*0x62ed87*/
    TeleportExtraData = TESObjectREFR_GetTeleportData((_BYTE *)a1[0xB]); /*0x62ed93*/
    v16 = *a1; /*0x62ed9a*/
    v17 = (_BYTE *)a1[0xB]; /*0x62ed9c*/
    if ( TeleportExtraData ) /*0x62ed9f*/
      TESObjectREFR_GetLinkedTeleportMarkerPosition(v17); /*0x62edad*/
    else
      v18 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v17 + 0x174))(v17); /*0x62eda9*/
    v19 = (_DWORD *)v18; /*0x62edb5*/
    WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB]); /*0x62edbf*/
    DwordAtOffset40 = Shared_GetDwordAtOffset40((void *)a1[0xB]); /*0x62edc0*/
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, TESObjectREFR *, _DWORD, _DWORD, _DWORD, UInt32, TESWorldSpace *))(v16 + 0x3DC))( /*0x62ede4*/
           a1,
           a5,
           *v19,
           v19[1],
           v19[2],
           DwordAtOffset40,
           WorldSpace) )
    {
      if ( !*((_BYTE *)a1 + 0xD0) ) /*0x62edee*/
      {
LABEL_28:
        v21 = ((double (__thiscall *)(_DWORD *, TESObjectREFR *, int))*(_DWORD *)(*a1 + 0x238))(a1, a5, 0x101); /*0x62ee0b*/
        v22 = *a1; /*0x62ee11*/
        v23 = a1[0xB]; /*0x62ee13*/
        v36 = sub_5677B0(v37, v21, a5, 2); /*0x62ee22*/
        v33 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB]); /*0x62ee2d*/
        v24 = Shared_GetDwordAtOffset40((void *)a1[0xB]); /*0x62ee2e*/
        v25 = (*(int (__thiscall **)(int, UInt32, TESWorldSpace *, _DWORD))(*(_DWORD *)v23 + 0x174))( /*0x62ee3e*/
                v23,
                v24,
                v33,
                LODWORD(v36));
        (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, int))(v22 + 0x414))(a1, a5, v25); /*0x62ee4a*/
      }
    }
  }
}
