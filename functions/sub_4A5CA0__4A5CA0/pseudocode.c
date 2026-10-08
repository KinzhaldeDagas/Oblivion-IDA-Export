// Verified: called via TESRegionGrassObject vtable +0x08; this is the Grass region object's cell-placement evaluation callback. Receives coordinates/worldspace/position-style values and returns a double-like density/eligibility result. Detailed caller-visible parameter names remain Candidate.
double __thiscall sub_4A5CA0(_DWORD *this, float a2, float a3, int a4, int a5, int a6)
{
  int v7; // ebx
  TESForm *v8; // eax
  TESObjectCELL *v9; // edi
  int (__thiscall *v10)(_DWORD *); // eax
  TESObjectCELL **v11; // eax
  int v12; // eax
  int v13; // ebx
  TESObjectLAND *v14; // eax
  double v15; // st7
  double v16; // st6
  bool v17; // c0
  bool v18; // c3
  double v20; // st7
  double v21; // st6
  TESObjectCELL **v22; // eax
  float WaterHeight; // [esp+1Ch] [ebp-30h]
  float v24; // [esp+20h] [ebp-2Ch]
  double v25; // [esp+20h] [ebp-2Ch]
  double v26; // [esp+20h] [ebp-2Ch]
  float v27; // [esp+28h] [ebp-24h]
  float v28[2]; // [esp+2Ch] [ebp-20h] BYREF
  float v29[3]; // [esp+34h] [ebp-18h] BYREF
  _DWORD v30[3]; // [esp+40h] [ebp-Ch] BYREF

  sub_4A6920(v28); /*0x4a5cac*/
  v7 = *(this + 1); /*0x4a5cb1*/
  if ( !v7 ) /*0x4a5cb6*/
    goto LABEL_32; /*0x4a5cb6*/
  v8 = sub_44A270((TESWorldSpace **)g_TESDataHandler, a2, a3, (TESWorldSpace *)a5, 0); /*0x4a5cdb*/
  v9 = (TESObjectCELL *)v8; /*0x4a5ce0*/
  if ( !v8 ) /*0x4a5ce4*/
    goto LABEL_32; /*0x4a5ce4*/
  if ( TESObjectCELL_IsInterior((TESObjectCELL *)v8) ) /*0x4a5cec*/
    goto LABEL_32; /*0x4a5cec*/
  a5 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 0x120))(v7); /*0x4a5d08*/
  v10 = *(int (__thiscall **)(_DWORD *))(*this + 0xC); /*0x4a5d12*/
  v27 = (double)a5 / fCostant_100; /*0x4a5d1d*/
  v28[0] = a2; /*0x4a5d25*/
  v28[1] = a3; /*0x4a5d2d*/
  if ( v10(this) ) /*0x4a5d31*/
  {
    v11 = (TESObjectCELL **)sub_4CE3C0(v9); /*0x4a5d3e*/
    v12 = sub_4C5AA0(v11, &a2); /*0x4a5d45*/
    if ( !v12 /*0x4a5d61*/
      || (v13 = *(_DWORD *)(v12 + 0xC), v13 != *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 0xC))(this) + 0xC)) )
    {
LABEL_32:
      JUMPOUT(0x4A5DD4); /*0x4a5dd4*/
    }
  }
  v24 = (float)(*(unsigned __int16 (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 1) + 0x140))(*(this + 1)); /*0x4a5d7d*/
  WaterHeight = TESObjectCELL_GetWaterHeight((ExtraDataList *)v9); /*0x4a5d8a*/
  v14 = sub_4CE3C0(v9); /*0x4a5d96*/
  sub_4C5B50(v14, &a2, (float *)&a5); /*0x4a5d9d*/
  switch ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 1) + 0x148))(*(this + 1)) ) /*0x4a5db4*/
  {
    case 0: /*0x4a5db4*/
      v15 = *(float *)&a5; /*0x4a5dbb*/
      v16 = WaterHeight + v24; /*0x4a5dc3*/
      goto LABEL_9; /*0x4a5dc3*/
    case 1: /*0x4a5db4*/
      if ( WaterHeight > (double)*(float *)&a5 ) /*0x4a5dee*/
        return 0.0; /*0x4a5dee*/
      if ( WaterHeight + v24 >= *(float *)&a5 ) /*0x4a5dfb*/
        goto LABEL_26; /*0x4a5dfb*/
      return 0.0; /*0x4a5e09*/
    case 2: /*0x4a5db4*/
      if ( WaterHeight - v24 >= *(float *)&a5 ) /*0x4a5e2e*/
        goto LABEL_26; /*0x4a5e2e*/
      return 0.0; /*0x4a5e3c*/
    case 3: /*0x4a5db4*/
      v20 = *(float *)&a5; /*0x4a5e3f*/
      if ( WaterHeight < (double)*(float *)&a5 ) /*0x4a5e4e*/
        return 0.0; /*0x4a5e18*/
      v21 = WaterHeight - v24; /*0x4a5e50*/
      v17 = v21 < v20; /*0x4a5e54*/
      v18 = v21 == v20; /*0x4a5e54*/
LABEL_10:
      if ( !v17 && !v18 ) /*0x4a5dcb*/
        return def_4A5DB4(SLODWORD(a2), SLODWORD(a3), a4, a5, a6); /*0x4a5dcf*/
LABEL_26:
      v22 = (TESObjectCELL **)sub_4CE3C0(v9); /*0x4a5ee9*/
      if ( sub_4C3C00(v22, &a2, (int)v29, v30) ) /*0x4a5f01*/
      {
        *(float *)&a5 = sub_4A6810(v29[0], v29[1], v29[2]); /*0x4a5f28*/
        v25 = *(float *)&a5; /*0x4a5f35*/
        if ( ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)*(this + 1) + 0x13C))(*(this + 1)) < v25 ) /*0x4a5f4d*/
          goto LABEL_32; /*0x4a5f4d*/
        v26 = *(float *)&a5; /*0x4a5f5c*/
        if ( ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)*(this + 1) + 0x138))(*(this + 1)) > v26 ) /*0x4a5f71*/
          goto LABEL_32; /*0x4a5f71*/
      }
      if ( (_BYTE)a6 ) /*0x4a5f7c*/
        return (float)(sub_4CC1A0((ExtraDataList *)v9, v28, 6, (int)this) * v27); /*0x4a5f91*/
      return v27;
    case 4: /*0x4a5db4*/
      *(float *)&a5 = WaterHeight - *(float *)&a5; /*0x4a5e63*/
      *(float *)&a5 = fabs(*(float *)&a5); /*0x4a5e6d*/
      v15 = *(float *)&a5; /*0x4a5e71*/
      v16 = v24; /*0x4a5e75*/
LABEL_9:
      v17 = v16 < v15; /*0x4a5dc7*/
      v18 = v16 == v15; /*0x4a5dc7*/
      goto LABEL_10; /*0x4a5dc7*/
    case 5: /*0x4a5db4*/
      *(float *)&a5 = WaterHeight - *(float *)&a5; /*0x4a5e86*/
      *(float *)&a5 = fabs(*(float *)&a5); /*0x4a5e90*/
      if ( v24 >= (double)*(float *)&a5 ) /*0x4a5ea3*/
        goto LABEL_26; /*0x4a5ea3*/
      return 0.0; /*0x4a5ead*/
    case 6: /*0x4a5db4*/
      if ( WaterHeight + v24 >= *(float *)&a5 ) /*0x4a5ec3*/
        goto LABEL_26; /*0x4a5ec3*/
      return 0.0; /*0x4a5ecd*/
    case 7: /*0x4a5db4*/
      if ( WaterHeight - v24 <= *(float *)&a5 ) /*0x4a5ee3*/
        goto LABEL_26; /*0x4a5ee3*/
      goto LABEL_32; /*0x4a5ee3*/
    default:
      goto LABEL_32;
  }
}
