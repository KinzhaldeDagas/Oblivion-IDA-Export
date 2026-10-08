// RadiantAI: action code 18 from Alarm row. Handles alarm/spectator-distance path; package Alarm does not use action code 8.
void __thiscall sub_62A350(Actor *this, TESObjectREFR *a2)
{
  int v3; // eax
  int v4; // ebp
  UInt32 DwordAtOffset40; // eax
  TESObjectREFR ****v7; // ecx
  TESForm *v8; // ebx
  double v9; // st7
  double v10; // st6
  char v11; // al
  TESWorldSpace *v12; // eax
  TESWorldSpace *v13; // eax
  float *v14; // eax
  ActorVtbl *vtbl; // ebp
  TESWorldSpace *WorldSpace; // eax
  float v17; // [esp+20h] [ebp-54h]
  int v18; // [esp+24h] [ebp-50h]
  float DistanceToPoint; // [esp+34h] [ebp-40h]
  float v20; // [esp+38h] [ebp-3Ch]
  float v21; // [esp+40h] [ebp-34h]
  float pointXYZ[3]; // [esp+44h] [ebp-30h] BYREF
  float v23[3]; // [esp+50h] [ebp-24h] BYREF
  _DWORD v24[3]; // [esp+5Ch] [ebp-18h] BYREF
  _DWORD v25[3]; // [esp+68h] [ebp-Ch] BYREF
  char v26; // [esp+78h] [ebp+4h]
  TESChildCELL *v27; // [esp+78h] [ebp+4h]

  v3 = ((int (__thiscall *)(Actor *))this->vtbl->super.super.Unk_61)(this); /*0x62a361*/
  v4 = v3; /*0x62a363*/
  if ( v3 && *(_BYTE *)(v3 + 0x20) == 0x13 ) /*0x62a371*/
  {
    sub_67C830(v3, pointXYZ); /*0x62a386*/
    DistanceToPoint = TESObjectREFR::GetDistanceToPoint(a2, pointXYZ); /*0x62a39b*/
    DwordAtOffset40 = Shared_GetDwordAtOffset40(a2); /*0x62a3a1*/
    v7 = *(TESObjectREFR *****)(v4 + 0x3C); /*0x62a3a6*/
    v8 = (TESForm *)DwordAtOffset40; /*0x62a3ab*/
    v26 = 0; /*0x62a3ad*/
    if ( !v7 || !sub_67CC60(v7) ) /*0x62a3b8*/
    {
      sub_67BFD0((int **)&qword_B3BB2C[0xA1], (int)this, *(int **)(v4 + 0x3C)); /*0x62a63c*/
      sub_5EAE70((Actor *)a2, (int)v8, (int)this, v18); /*0x62a643*/
      return; /*0x62a643*/
    }
    if ( v8 && TESObjectCELL_IsInterior((TESObjectCELL *)v8) ) /*0x62a3cb*/
    {
      v20 = *GameSetting_GetSafeFloatPointer(&unk_B36B20); /*0x62a3e5*/
      v21 = *GameSetting_GetSafeFloatPointer(unk_B36B18); /*0x62a3f0*/
      v9 = DistanceToPoint; /*0x62a3f4*/
      v10 = v20; /*0x62a3f8*/
    }
    else
    {
      v20 = unk_B36B10; /*0x62a404*/
      v21 = unk_B36B08; /*0x62a40e*/
      v9 = DistanceToPoint; /*0x62a412*/
      v10 = v21; /*0x62a416*/
    }
    if ( v10 > v9 ) /*0x62a421*/
      v26 = 1; /*0x62a423*/
    if ( !LOBYTE(this->members.templateForm) ) /*0x62a42f*/
      goto LABEL_18; /*0x62a42f*/
    if ( !v26 ) /*0x62a43a*/
    {
LABEL_17:
      if ( LOBYTE(this->members.templateForm) ) /*0x62a4dc*/
      {
        if ( Actor_IsNPC((Actor *)a2) ) /*0x62a5f2*/
        {
          sub_67C7F0((_DWORD *)v4, (int)a2, 1); /*0x62a600*/
          sub_67C6E0((float *)v4, (Actor *)a2, 1); /*0x62a60a*/
        }
        goto LABEL_33; /*0x62a60a*/
      }
LABEL_18:
      v14 = (float *)sub_67C660((float **)v4, v25, a2); /*0x62a4e9*/
      v23[0] = *v14; /*0x62a4f8*/
      v23[1] = v14[1]; /*0x62a4ff*/
      v23[2] = v14[2]; /*0x62a50d*/
      TESObjectREFR::GetDistanceToPoint(a2, v23); /*0x62a511*/
      if ( v20 * dbl_A432F0 >= DistanceToPoint /*0x62a55b*/
        && ((unsigned __int16 (__thiscall *)(Actor *))this->vtbl->Unk_B0)(this) == 0x201
        || ((unsigned __int16 (__thiscall *)(Actor *))this->vtbl->Unk_B0)(this) == 0x101 )
      {
        ((void (__thiscall *)(Actor *, TESObjectREFR *, int))this->vtbl->Unk_8E)(this, a2, 0x101); /*0x62a549*/
      }
      else
      {
        if ( Actor_IsNPC((Actor *)a2) ) /*0x62a569*/
        {
          if ( v8 ) /*0x62a574*/
          {
            if ( !TESObjectCELL_IsInterior((TESObjectCELL *)v8) /*0x62a5a0*/
              && (((unsigned __int16 (__thiscall *)(Actor *))this->vtbl->Unk_B0)(this) == 0x102 || !sub_5E05B0(a2))
              && !sub_64ADA0(this) )
            {
              TESObjectREFR::GetDistanceToPoint(a2, pointXYZ); /*0x62a5b0*/
            }
          }
        }
        ((void (__thiscall *)(Actor *, TESObjectREFR *, int))this->vtbl->Unk_8E)(this, a2, 0x201); /*0x62a5c7*/
      }
      vtbl = this->vtbl; /*0x62a5cf*/
      v17 = kTerrainLODQuadRayDirectionZ; /*0x62a5d4*/
      WorldSpace = TESObjectREFR_GetWorldSpace(a2); /*0x62a5d7*/
      ((void (__thiscall *)(Actor *, TESObjectREFR *, float *, TESForm *, TESWorldSpace *, _DWORD))vtbl[1].super.super.super.Unk_16)( /*0x62a5ec*/
        this,
        a2,
        v23,
        v8,
        WorldSpace,
        LODWORD(v17));
LABEL_33:
      if ( v21 + v21 <= DistanceToPoint ) /*0x62a620*/
        sub_5EAE70((Actor *)a2, (int)v8, (int)this, v18); /*0x62a624*/
      return; /*0x62a630*/
    }
    v11 = sub_64ADA0(this); /*0x62a442*/
    sub_67C4A0((float **)v4, (int)v24, a2, v11); /*0x62a450*/
    if ( !TESObjectCELL_IsInterior((TESObjectCELL *)v8) ) /*0x62a457*/
    {
      v12 = TESObjectREFR_GetWorldSpace(a2); /*0x62a464*/
      v8 = sub_44A270((TESWorldSpace **)g_TESDataHandler, pointXYZ[0], pointXYZ[1], v12, 0); /*0x62a487*/
    }
    v27 = (TESChildCELL *)this->vtbl; /*0x62a48d*/
    v13 = TESObjectREFR_GetWorldSpace(a2); /*0x62a491*/
    if ( ((unsigned __int8 (__thiscall *)(Actor *, TESObjectREFR *, _DWORD, _DWORD, _DWORD, TESForm *, TESWorldSpace *))v27[0xF7].vtbl)( /*0x62a4be*/
           this,
           a2,
           v24[0],
           v24[1],
           v24[2],
           v8,
           v13) )
    {
      sub_67C7F0((_DWORD *)v4, (int)a2, 0); /*0x62a4cd*/
      sub_67C6E0((float *)v4, (Actor *)a2, 0); /*0x62a4d7*/
      goto LABEL_17; /*0x62a4d7*/
    }
  }
}
