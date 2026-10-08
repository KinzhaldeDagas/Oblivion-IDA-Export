void __userpurge sub_64DB20(
        float *this@<ecx>,
        double a2@<st1>,
        double a3@<st2>,
        double a4@<st0>,
        TESObjectREFR *a5,
        float a6,
        int a7,
        int a8)
{
  int v9; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // ecx
  float *v14; // eax
  TESObjectREFR *v15; // eax
  double Distance; // st7
  TESWorldSpace *WorldSpace; // ebp
  float ***v18; // ecx
  const float *v19; // eax
  char *v20; // ecx
  char v21; // al
  float *v22; // eax
  _DWORD *v23; // ebp
  UInt32 v24; // eax
  float *v25; // eax
  TESForm *v26; // ebp
  double v27; // st7
  int v28; // ebp
  UInt32 DwordAtOffset40; // eax
  int v30; // eax
  int v31; // eax
  TESWorldSpace *v32; // [esp+18h] [ebp-30h]
  TESWorldSpace *v33; // [esp+20h] [ebp-28h]
  float v34; // [esp+20h] [ebp-28h]
  float v35; // [esp+34h] [ebp-14h]
  float v36; // [esp+38h] [ebp-10h]
  float v37; // [esp+3Ch] [ebp-Ch]
  float v38; // [esp+40h] [ebp-8h]
  TESObjectREFR *v39; // [esp+44h] [ebp-4h]
  void (__thiscall **retaddr)(_DWORD, _DWORD, _DWORD); // [esp+48h] [ebp+0h]
  float v41; // [esp+4Ch] [ebp+4h]
  float v42; // [esp+4Ch] [ebp+4h]
  float v43; // [esp+50h] [ebp+8h]
  float v44; // [esp+50h] [ebp+8h]
  int v45; // [esp+50h] [ebp+8h]
  float GameHour; // [esp+50h] [ebp+8h]
  float v47; // [esp+50h] [ebp+8h]
  float v48; // [esp+50h] [ebp+8h]

  v9 = (*(int (__usercall **)@<eax>(float *@<ecx>, double@<st0>))(*(_DWORD *)this + 0x184))(this, a4); /*0x64db31*/
  v11 = v9; /*0x64db37*/
  if ( v9 && (*(_BYTE *)(v9 + 0x1E) & 1) != 0 ) /*0x64db41*/
  {
    if ( sub_663A60((int)a5) || sub_663A00() >= (int)stru_B36A80.value ) /*0x64db68*/
      return; /*0x64db68*/
    sub_5668E0((_DWORD *)v11, 0); /*0x64db72*/
  }
  v12 = *((_DWORD *)this + 0xB); /*0x64db77*/
  if ( !v12 || (*(_DWORD *)(v12 + 8) & 0x20) != 0 ) /*0x64db86*/
  {
    (*(void (__thiscall **)(float *, TESObjectREFR *))(*(_DWORD *)this + 0x558))(this, a5); /*0x64db93*/
    v13 = *((_DWORD *)this + 0xB); /*0x64db95*/
    if ( v13 ) /*0x64db9a*/
    {
      v14 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 0x174))(v13); /*0x64dba4*/
      *(this + 0x35) = *v14; /*0x64dba8*/
      *(this + 0x36) = v14[1]; /*0x64dbb1*/
      *(this + 0x37) = v14[2]; /*0x64dbba*/
    }
  }
  v15 = *((TESObjectREFR **)this + 0xB); /*0x64dbc0*/
  if ( !v15 ) /*0x64dbc5*/
  {
    if ( LOBYTE(a6) ) /*0x64dbcb*/
      (*(void (__thiscall **)(float *, TESObjectREFR *, int))(*(_DWORD *)this + 0x188))(this, a5, 1); /*0x64dbde*/
    return; /*0x64dbe7*/
  }
  Distance = TesObjectREF_GetDistance(a5, v15, 0); /*0x64dbef*/
  v41 = Distance; /*0x64dbf4*/
  WorldSpace = TESObjectREFR_GetWorldSpace(a5); /*0x64dc02*/
  if ( WorldSpace != TESObjectREFR_GetWorldSpace(*((TESObjectREFR **)this + 0xB)) ) /*0x64dc0b*/
  {
    v18 = *((float ****)this + 0xD); /*0x64dc0d*/
    if ( v18 ) /*0x64dc12*/
    {
      sub_68A160(v18); /*0x64dc14*/
      Distance = TESObjectREFR::GetDistanceToPoint(a5, v19); /*0x64dc1c*/
      v41 = Distance; /*0x64dc21*/
    }
  }
  v35 = sub_5677B0((TESPackage *)v11, Distance, a5, 2); /*0x64dc2f*/
  v39 = *((TESObjectREFR **)this + 0xB); /*0x64dc3a*/
  if ( v39 ) /*0x64dc3e*/
  {
    if ( *(_BYTE *)(v11 + 0x20) != 1 /*0x64dc70*/
      || (v20 = *(char **)(v11 + 0x24)) == 0
      || sub_569740(v20) >= 2
      || (sub_566DC0(
            (TESPackage *)v11,
            kTerrainLODQuadRayDirectionZ,
            a2,
            a3,
            (Actor *)a5,
            0,
            kTerrainLODQuadRayDirectionZ),
          !v21) )
    {
      v22 = (float *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0xB) + 0x174))(*((_DWORD *)this + 0xB)); /*0x64dc81*/
      v36 = *(this + 0x35) - *v22; /*0x64dc8b*/
      v37 = *(this + 0x36) - v22[1]; /*0x64dc98*/
      v38 = *(this + 0x37) - v22[2]; /*0x64dca5*/
      v43 = v37 * v37 + v36 * v36 + v38 * v38; /*0x64dcc5*/
      v44 = sqrt(v43); /*0x64dcd2*/
      if ( flt_B36A88[0] >= (double)v44 ) /*0x64dce7*/
      {
        if ( v35 >= (double)v41 ) /*0x64dcf8*/
          goto LABEL_26; /*0x64dcf8*/
        if ( !*((_BYTE *)this + 0xD0) ) /*0x64dd05*/
        {
LABEL_27:
          v26 = TESForm_LookupByFormID(0x3Au); /*0x64dd93*/
          GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x64dda9*/
          if ( sub_6599B0((TESChildCELL *)a5) > GameHour ) /*0x64ddc5*/
            GameHour = GameHour + dbl_A2F920; /*0x64ddd1*/
          v42 = GameHour - sub_6599B0((TESChildCELL *)a5); /*0x64dded*/
          v27 = *(float *)&v26[1].member.refID; /*0x64ddf3*/
          v28 = *((_DWORD *)this + 0xB); /*0x64ddf6*/
          v47 = v27; /*0x64ddf9*/
          v34 = sub_5677B0((TESPackage *)v11, v27, a5, 1); /*0x64de09*/
          v48 = dbl_A2F938 / v47 * v42; /*0x64de1e*/
          v32 = TESObjectREFR_GetWorldSpace(*((TESObjectREFR **)this + 0xB)); /*0x64de31*/
          DwordAtOffset40 = Shared_GetDwordAtOffset40(*((void **)this + 0xB)); /*0x64de32*/
          v30 = (*(int (__thiscall **)(int, UInt32, TESWorldSpace *, _DWORD, _DWORD))(*(_DWORD *)v28 + 0x174))( /*0x64de43*/
                  v28,
                  DwordAtOffset40,
                  v32,
                  LODWORD(v48),
                  LODWORD(v34));
          ((void (__thiscall **)(float *, TESObjectREFR *, int))retaddr)[0x106](this, a5, v30); /*0x64de53*/
          goto LABEL_40; /*0x64de55*/
        }
      }
      v45 = *(_DWORD *)this; /*0x64dd0d*/
      v23 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0xB) + 0x174))(*((_DWORD *)this + 0xB)); /*0x64dd21*/
      v33 = TESObjectREFR_GetWorldSpace(*((TESObjectREFR **)this + 0xB)); /*0x64dd2b*/
      v24 = Shared_GetDwordAtOffset40(*((void **)this + 0xB)); /*0x64dd2c*/
      if ( !(*(unsigned __int8 (__thiscall **)(float *, TESObjectREFR *, _DWORD, _DWORD, _DWORD, UInt32, TESWorldSpace *))(v45 + 0x3DC))( /*0x64dd59*/
              this,
              a5,
              *v23,
              v23[1],
              v23[2],
              v24,
              v33) )
        return; /*0x64dd59*/
      v25 = (float *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0xB) + 0x174))(*((_DWORD *)this + 0xB)); /*0x64dd6a*/
      *(this + 0x35) = *v25; /*0x64dd6e*/
      *(this + 0x36) = v25[1]; /*0x64dd77*/
      *(this + 0x37) = v25[2]; /*0x64dd80*/
LABEL_26:
      if ( !*((_BYTE *)this + 0xD0) ) /*0x64dd86*/
        goto LABEL_27; /*0x64dd8d*/
LABEL_40:
      if ( v35 > TesObjectREF_GetDistance(a5, v39, 0) /*0x64df1b*/
        && !*((_BYTE *)this + 0xD0)
        && (!((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))a5->vtbl[1].GetSleepState)(a5, 1)
         || (v31 = ((int (__thiscall *)(TESObjectREFR *))a5->vtbl[1].IsMobileObject)(a5)) == 0
         || !sub_6163A0(v31)) )
      {
        sub_5E02B0(a5); /*0x64df26*/
      }
      return; /*0x64df26*/
    }
  }
  if ( !LOBYTE(a6) ) /*0x64de5c*/
    goto LABEL_40; /*0x64de5c*/
  (*(void (__thiscall **)(float *, TESObjectREFR *, int))(*(_DWORD *)this + 0x188))(this, a5, 1); /*0x64de6b*/
  if ( !TESPackage_IsRuntimePackage((TESPackage *)v11) ) /*0x64de76*/
  {
    if ( !*((_BYTE *)this + 0xD0) ) /*0x64debd*/
      (*(void (__thiscall **)(float *, TESObjectREFR *))(*(_DWORD *)this + 0x194))(this, a5); /*0x64ded1*/
    goto LABEL_40; /*0x64ded1*/
  }
  if ( *((_DWORD *)this + 0x30) ) /*0x64de78*/
    *(this + 0x30) = 0.0; /*0x64de80*/
  else
    *(this + 2) = 0.0; /*0x64de88*/
  if ( v11 ) /*0x64de8d*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 0x10))(v11, 1); /*0x64de98*/
  a5->vtbl->super.ClearModified((TESForm *)a5, 0x30000); /*0x64dea6*/
  (*(void (__thiscall **)(float *, TESObjectREFR *, _DWORD))(*(_DWORD *)this + 0x18))(this, a5, 0); /*0x64deb1*/
}
