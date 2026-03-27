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
  TESObjectCELL *ParentCell; // eax
  double v21; // st7
  int v22; // ebp
  int v23; // ebx
  TESObjectCELL *v24; // eax
  int v25; // eax
  TESForm *v26; // ebp
  BSExtraDataVtbl *Owner; // eax
  BSExtraDataVtbl *v28; // eax
  TESForm *v29; // eax
  ExtraDataList *v30; // ebx
  TESForm *v31; // eax
  double v32; // st7
  signed int v33; // eax
  TESWorldSpace *v34; // [esp+20h] [ebp-28h]
  float *v35; // [esp+24h] [ebp-24h]
  TESWorldSpace *WorldSpace; // [esp+24h] [ebp-24h]
  float v37; // [esp+24h] [ebp-24h]
  TESPackage *v38; // [esp+38h] [ebp-10h]
  float v39[3]; // [esp+3Ch] [ebp-Ch] BYREF
  float v40; // [esp+4Ch] [ebp+4h]

  v38 = (TESPackage *)(*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*a1 + 0x184))(
                        a1,
                        a4,
                        a3,
                        a2);
  if ( !a1[0xB] )
    (*(void (__thiscall **)(_DWORD *, TESObjectREFR *))(*a1 + 0x558))(a1, a5);
  v7 = a1[0xB];
  if ( !v7 || (v8 = *(_DWORD *)(v7 + 8), (v8 & 0x20) != 0) || (v8 & 0x800) != 0 )
  {
    (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, int))(*a1 + 0x188))(a1, a5, 1);
    return;
  }
  if ( !a1[0x11] )
    return;
  v9 = a1[0x11];
  sub_470520(*(void **)(v9 + 4));
  v11 = (double)(*(_DWORD *)(v9 + 0x10) * v10);
  v40 = v11;
  if ( !a1[0xB] )
  {
    v9 = *(_DWORD *)v9;
    v12 = (_DWORD *)a1[0x11];
    if ( v12[1] == (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 0x170))(v9) )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0xD0))(a1, *v12);
      return;
    }
  }
  LOBYTE(v9) = 0;
  if ( GetTeleportExtraData((_BYTE *)a1[0xB]) )
  {
    v35 = a5->vtbl->GetPos(a5);
    sub_4D76F0((_BYTE *)a1[0xB]);
    sub_4121A0(v13, v39, v35);
    v14 = sub_404C90(v39);
    a3 = (double)dword_B36B28;
    if ( a3 >= v14 )
    {
      LOBYTE(v9) = 1;
LABEL_13:
      if ( !*((_BYTE *)a1 + 0xD0) )
        (*(void (__thiscall **)(_DWORD *, TESObjectREFR *))(*a1 + 0x194))(a1, a5);
      if ( !sub_64ADA0((Actor *)a1) || (_BYTE)v9 )
      {
        v26 = 0;
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)a1[0x11] + 0x190))(*(_DWORD *)a1[0x11]) )
        {
          v26 = (TESForm *)a1[0xB];
          Script_AddEventToExtraScript(v26, *(_DWORD *)(a1[0x11] + 0x18), 0x4000);
          ((void (__thiscall *)(TESForm *, _DWORD, _DWORD, int, _DWORD, _DWORD, TESObjectREFR *, _DWORD, _DWORD, int, _DWORD))v26->vtbl[1].Unk_09)(
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
          Owner = TESObjectREFR_GetOwner(*(TESObjectREFR **)a1[0x11]);
          if ( Owner )
          {
            if ( LOBYTE(Owner->CompareTo) == 0x23 )
            {
              v28 = TESObjectREFR_GetOwner(*(TESObjectREFR **)a1[0x11]);
              if ( v28 )
              {
                sub_675220(v28);
                v26 = v29;
              }
            }
          }
          v30 = (ExtraDataList *)(*(_DWORD *)a1[0x11] + 0x44);
          v31 = a5->vtbl->GetBaseForm(a5);
          ExtraDataList::SetOrRemoveExtraOwnership(v30, v31);
          v32 = Script_AddEventToExtraScript(v26, *(_DWORD *)(a1[0x11] + 0x18), 0x4000);
          ActivateRef(*(TESObjectREFR **)a1[0x11], a2, a3, v32, a5, 0, *(_DWORD *)(a1[0x11] + 4), 1);
        }
        if ( v26 )
        {
          if ( v26 != (TESForm *)a5 )
          {
            v33 = Double_To_SInt32(v40);
            sub_5E4A40((Actor *)a5, a2, a3, v40, v26, v33);
          }
        }
      }
      else
      {
        a1[0xB] = 0;
      }
      if ( a1[0x11] )
        FormHeapFree(a1[0x11]);
      a1[0x11] = 0;
      *((_BYTE *)a1 + 0xD0) = 0;
      return;
    }
  }
  else
  {
    LOBYTE(v9) = sub_5687D0(v38, v9, v11, a5);
    if ( (_BYTE)v9 )
      goto LABEL_13;
  }
  if ( sub_64ADA0((Actor *)a1) )
    goto LABEL_13;
  if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 0x36C))(a1) )
  {
    a5->vtbl[1].Unk_5E(a5);
  }
  else
  {
    if ( !*((_BYTE *)a1 + 0xD0) )
      goto LABEL_28;
    TeleportExtraData = GetTeleportExtraData((_BYTE *)a1[0xB]);
    v16 = *a1;
    v17 = (_BYTE *)a1[0xB];
    if ( TeleportExtraData )
      sub_4D76F0(v17);
    else
      v18 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v17 + 0x174))(v17);
    v19 = (_DWORD *)v18;
    WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB]);
    ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a1[0xB]);
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, TESObjectREFR *, _DWORD, _DWORD, _DWORD, TESObjectCELL *, TESWorldSpace *))(v16 + 0x3DC))(
           a1,
           a5,
           *v19,
           v19[1],
           v19[2],
           ParentCell,
           WorldSpace) )
    {
      if ( !*((_BYTE *)a1 + 0xD0) )
      {
LABEL_28:
        v21 = ((double (__thiscall *)(_DWORD *, TESObjectREFR *, int))*(_DWORD *)(*a1 + 0x238))(a1, a5, 0x101);
        v22 = *a1;
        v23 = a1[0xB];
        v37 = sub_5677B0(v38, v21, a5, 2);
        v34 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB]);
        v24 = TESObjectREFR_GetParentCell((TESObjectREFR *)a1[0xB]);
        v25 = (*(int (__thiscall **)(int, TESObjectCELL *, TESWorldSpace *, _DWORD))(*(_DWORD *)v23 + 0x174))(
                v23,
                v24,
                v34,
                LODWORD(v37));
        (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, int))(v22 + 0x414))(a1, a5, v25);
      }
    }
  }
}
