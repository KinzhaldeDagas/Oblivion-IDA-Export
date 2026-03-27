void __userpurge sub_64FBF0(_DWORD *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, TESObjectREFR *a5)
{
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // ebp
  float *v11; // eax
  int v12; // ebp
  char v13; // al
  int v14; // ecx
  BSExtraDataVtbl *Owner; // eax
  void *v16; // eax
  int v17; // eax
  ExtraTeleport *TeleportExtraData; // eax
  int v19; // ebx
  _BYTE *v20; // ecx
  int v21; // eax
  _DWORD *v22; // ebp
  TESObjectCELL *ParentCell; // eax
  TESForm *v24; // ebx
  double v25; // st7
  double v26; // st7
  double v27; // st7
  int v28; // ebx
  int v29; // eax
  double v30; // st7
  int v31; // eax
  TESObjectCELL *v32; // [esp+14h] [ebp-30h]
  TESWorldSpace *v33; // [esp+18h] [ebp-2Ch]
  float *v34; // [esp+20h] [ebp-24h]
  TESWorldSpace *WorldSpace; // [esp+20h] [ebp-24h]
  float v36; // [esp+20h] [ebp-24h]
  TESPackage *v37; // [esp+34h] [ebp-10h]
  double v38; // [esp+38h] [ebp-Ch] BYREF
  float GameHour; // [esp+48h] [ebp+4h]
  float v40; // [esp+48h] [ebp+4h]
  float v41; // [esp+48h] [ebp+4h]

  v37 = (TESPackage *)(*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*a1 + 0x184))(
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
  v9 = (_DWORD *)a1[0x11];
  if ( !v9 )
    return;
  v10 = (_DWORD *)a1[0x11];
  if ( v10[1] == (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v9 + 0x170))(*v9) )
  {
    a1[0xB] = *v10;
    return;
  }
  if ( GetTeleportExtraData((_BYTE *)a1[0xB]) )
  {
    v34 = a5->vtbl->GetPos(a5);
    sub_4D76F0((_BYTE *)a1[0xB]);
    sub_4121A0(v11, (float *)&v38, v34);
    a4 = sub_404C90((float *)&v38);
    if ( a4 <= flt_A2FFE8 )
    {
LABEL_11:
      if ( !*((_BYTE *)a1 + 0xD0) )
        (*(void (__thiscall **)(_DWORD *, TESObjectREFR *))(*a1 + 0x194))(a1, a5);
      if ( !sub_64ADA0((Actor *)a1) )
      {
        v12 = 0;
        v13 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)a1[0x11] + 0x190))(*(_DWORD *)a1[0x11]);
        v14 = a1[0x11];
        if ( v13 )
        {
          v12 = a1[0xB];
          (*(void (__thiscall **)(int, _DWORD, _DWORD, int, _DWORD, _DWORD, TESObjectREFR *, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)v12 + 0x100))(
            v12,
            *(_DWORD *)(v14 + 4),
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
          Owner = TESObjectREFR_GetOwner(*(TESObjectREFR **)v14);
          v16 = OblivionDynamicCast(
                  Owner,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &TESNPC `RTTI Type Descriptor',
                  0);
          if ( v16 )
          {
            a4 = sub_675220(v16);
            v12 = v17;
          }
          ActivateRef(*(TESObjectREFR **)a1[0x11], a2, a3, a4, a5, 0, *(_DWORD *)(a1[0x11] + 4), 1);
        }
        if ( v12 )
        {
          v30 = sub_470520((void *)*(_DWORD *)(a1[0x11] + 4));
          sub_5E4A40((Actor *)a5, a2, a3, v30, (TESForm *)a5, v31 * *(_DWORD *)(a1[0x11] + 0x10));
        }
        Script_AddEventToExtraScript(v12, *(_DWORD *)(a1[0x11] + 0x18), 0x4000);
      }
      if ( a1[0x11] )
        FormHeapFree(a1[0x11]);
      a1[0xB] = 0;
      a1[0x11] = 0;
      *((_BYTE *)a1 + 0xD0) = 0;
      return;
    }
  }
  else if ( sub_5687D0((TESPackage *)a1[2], 0, a4, a5) )
  {
    goto LABEL_11;
  }
  if ( sub_64ADA0((Actor *)a1) )
    goto LABEL_11;
  if ( !*((_BYTE *)a1 + 0xD0) )
    goto LABEL_39;
  TeleportExtraData = GetTeleportExtraData((_BYTE *)a1[0xB]);
  v19 = *a1;
  v20 = (_BYTE *)a1[0xB];
  if ( TeleportExtraData )
    sub_4D76F0(v20);
  else
    v21 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v20 + 0x174))(v20);
  v22 = (_DWORD *)v21;
  WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB]);
  ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a1[0xB]);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, TESObjectREFR *, _DWORD, _DWORD, _DWORD, TESObjectCELL *, TESWorldSpace *))(v19 + 0x3DC))(
         a1,
         a5,
         *v22,
         v22[1],
         v22[2],
         ParentCell,
         WorldSpace) )
  {
LABEL_39:
    if ( !*((_BYTE *)a1 + 0xD0) )
    {
      v24 = TESForm_LookupByFormID(0x3Au);
      GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
      v38 = GameHour;
      v25 = sub_6599B0((TESChildCELL *)a5);
      if ( v25 > v38 )
        GameHour = GameHour + dbl_A2F920;
      v38 = GameHour;
      v26 = sub_6599B0((TESChildCELL *)a5);
      *(float *)&v38 = v38 - v26;
      v27 = *(float *)&v24[1].member.refID;
      v28 = *a1;
      v40 = v27;
      v36 = sub_5677B0(v37, v27, a5, 2);
      v41 = dbl_A2F938 / v40 * *(float *)&v38;
      v33 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB]);
      v32 = TESObjectREFR_GetParentCell((TESObjectREFR *)a1[0xB]);
      sub_4D76F0((_BYTE *)a1[0xB]);
      (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, int, TESObjectCELL *, TESWorldSpace *, _DWORD, _DWORD))(v28 + 0x418))(
        a1,
        a5,
        v29,
        v32,
        v33,
        LODWORD(v41),
        LODWORD(v36));
    }
  }
}
