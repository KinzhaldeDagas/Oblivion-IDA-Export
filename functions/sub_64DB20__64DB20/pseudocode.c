void __userpurge sub_64DB20(float *this@<ecx>, double a2@<st1>, TESObjectREFR *a3, float a4, int a5, int a6)
{
  int v7; // eax
  TESPackage *v9; // ebx
  int v10; // eax
  int v11; // ecx
  float *v12; // eax
  TESObjectREFR *v13; // eax
  double Distance; // st7
  TESWorldSpace *WorldSpace; // ebp
  _DWORD *v16; // ecx
  float *v17; // eax
  char *location; // ecx
  char v19; // al
  float *v20; // eax
  _DWORD *v21; // ebp
  TESObjectCELL *v22; // eax
  float *v23; // eax
  TESForm *v24; // ebp
  double v25; // st7
  int v26; // ebp
  TESObjectCELL *ParentCell; // eax
  int v28; // eax
  int v29; // eax
  TESWorldSpace *v30; // [esp+18h] [ebp-30h]
  TESWorldSpace *v31; // [esp+20h] [ebp-28h]
  float v32; // [esp+20h] [ebp-28h]
  float v33; // [esp+34h] [ebp-14h]
  float v34; // [esp+38h] [ebp-10h]
  float v35; // [esp+3Ch] [ebp-Ch]
  float v36; // [esp+40h] [ebp-8h]
  TESObjectREFR *v37; // [esp+44h] [ebp-4h]
  void (__thiscall **retaddr)(_DWORD, _DWORD, _DWORD); // [esp+48h] [ebp+0h]
  float v39; // [esp+4Ch] [ebp+4h]
  float v40; // [esp+4Ch] [ebp+4h]
  float v41; // [esp+50h] [ebp+8h]
  float v42; // [esp+50h] [ebp+8h]
  int v43; // [esp+50h] [ebp+8h]
  float GameHour; // [esp+50h] [ebp+8h]
  float v45; // [esp+50h] [ebp+8h]
  float v46; // [esp+50h] [ebp+8h]

  v7 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x184))(this);
  v9 = (TESPackage *)v7;
  if ( v7 && (*(_BYTE *)(v7 + 0x1E) & 1) != 0 )
  {
    if ( sub_663A60((int)a3) || sub_663A00() >= dword_B36A80 )
      return;
    sub_5668E0(v9, 0);
  }
  v10 = *((_DWORD *)this + 0xB);
  if ( !v10 || (*(_DWORD *)(v10 + 8) & 0x20) != 0 )
  {
    (*(void (__thiscall **)(float *, TESObjectREFR *))(*(_DWORD *)this + 0x558))(this, a3);
    v11 = *((_DWORD *)this + 0xB);
    if ( v11 )
    {
      v12 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x174))(v11);
      *(this + 0x35) = *v12;
      *(this + 0x36) = v12[1];
      *(this + 0x37) = v12[2];
    }
  }
  v13 = *((TESObjectREFR **)this + 0xB);
  if ( !v13 )
  {
    if ( LOBYTE(a4) )
      (*(void (__thiscall **)(float *, TESObjectREFR *, int))(*(_DWORD *)this + 0x188))(this, a3, 1);
    return;
  }
  Distance = TesObjectREF_GetDistance(a3, v13, 0);
  v39 = Distance;
  WorldSpace = TESObjectREFR_GetWorldSpace(a3);
  if ( WorldSpace != TESObjectREFR_GetWorldSpace(*((TESObjectREFR **)this + 0xB)) )
  {
    v16 = *((_DWORD **)this + 0xD);
    if ( v16 )
    {
      sub_68A160(v16);
      Distance = sub_4D7E30((float *)a3, v17);
      v39 = Distance;
    }
  }
  v33 = sub_5677B0(v9, Distance, a3, 2);
  v37 = *((TESObjectREFR **)this + 0xB);
  if ( v37 )
  {
    if ( v9->members.type != 1
      || (location = (char *)v9->members.location) == 0
      || sub_569740(location) >= 2
      || (sub_566DC0(v9, flt_A30634, a2, (Actor *)a3, 0, flt_A30634), !v19) )
    {
      v20 = (float *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0xB) + 0x174))(*((_DWORD *)this + 0xB));
      v34 = *(this + 0x35) - *v20;
      v35 = *(this + 0x36) - v20[1];
      v36 = *(this + 0x37) - v20[2];
      v41 = v35 * v35 + v34 * v34 + v36 * v36;
      v42 = sqrt(v41);
      if ( flt_B36A88 >= (double)v42 )
      {
        if ( v33 >= (double)v39 )
          goto LABEL_26;
        if ( !*((_BYTE *)this + 0xD0) )
        {
LABEL_27:
          v24 = TESForm_LookupByFormID(0x3Au);
          GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
          if ( sub_6599B0((TESChildCELL *)a3) > GameHour )
            GameHour = GameHour + dbl_A2F920;
          v40 = GameHour - sub_6599B0((TESChildCELL *)a3);
          v25 = *(float *)&v24[1].member.refID;
          v26 = *((_DWORD *)this + 0xB);
          v45 = v25;
          v32 = sub_5677B0(v9, v25, a3, 1);
          v46 = dbl_A2F938 / v45 * v40;
          v30 = TESObjectREFR_GetWorldSpace(*((TESObjectREFR **)this + 0xB));
          ParentCell = TESObjectREFR_GetParentCell(*((TESObjectREFR **)this + 0xB));
          v28 = (*(int (__thiscall **)(int, TESObjectCELL *, TESWorldSpace *, _DWORD, _DWORD))(*(_DWORD *)v26 + 0x174))(
                  v26,
                  ParentCell,
                  v30,
                  LODWORD(v46),
                  LODWORD(v32));
          ((void (__thiscall **)(float *, TESObjectREFR *, int))retaddr)[0x106](this, a3, v28);
          goto LABEL_40;
        }
      }
      v43 = *(_DWORD *)this;
      v21 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0xB) + 0x174))(*((_DWORD *)this + 0xB));
      v31 = TESObjectREFR_GetWorldSpace(*((TESObjectREFR **)this + 0xB));
      v22 = TESObjectREFR_GetParentCell(*((TESObjectREFR **)this + 0xB));
      if ( !(*(unsigned __int8 (__thiscall **)(float *, TESObjectREFR *, _DWORD, _DWORD, _DWORD, TESObjectCELL *, TESWorldSpace *))(v43 + 0x3DC))(
              this,
              a3,
              *v21,
              v21[1],
              v21[2],
              v22,
              v31) )
        return;
      v23 = (float *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0xB) + 0x174))(*((_DWORD *)this + 0xB));
      *(this + 0x35) = *v23;
      *(this + 0x36) = v23[1];
      *(this + 0x37) = v23[2];
LABEL_26:
      if ( !*((_BYTE *)this + 0xD0) )
        goto LABEL_27;
LABEL_40:
      if ( v33 > TesObjectREF_GetDistance(a3, v37, 0)
        && !*((_BYTE *)this + 0xD0)
        && (!((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))a3->vtbl[1].GetSleepState)(a3, 1)
         || (v29 = ((int (__thiscall *)(TESObjectREFR *))a3->vtbl[1].IsMobileObject)(a3)) == 0
         || !sub_6163A0(v29, (char)a3)) )
      {
        sub_5E02B0(a3);
      }
      return;
    }
  }
  if ( !LOBYTE(a4) )
    goto LABEL_40;
  (*(void (__thiscall **)(float *, TESObjectREFR *, int))(*(_DWORD *)this + 0x188))(this, a3, 1);
  if ( !sub_5660A0(v9) )
  {
    if ( !*((_BYTE *)this + 0xD0) )
      (*(void (__thiscall **)(float *, TESObjectREFR *))(*(_DWORD *)this + 0x194))(this, a3);
    goto LABEL_40;
  }
  if ( *((_DWORD *)this + 0x30) )
    *(this + 0x30) = 0.0;
  else
    *(this + 2) = 0.0;
  if ( v9 )
    v9->__vftable->super.Destroy((TESForm *)v9, 1);
  a3->vtbl->super.ClearModified((TESForm *)a3, 0x30000);
  (*(void (__thiscall **)(float *, TESObjectREFR *, _DWORD))(*(_DWORD *)this + 0x18))(this, a3, 0);
}
