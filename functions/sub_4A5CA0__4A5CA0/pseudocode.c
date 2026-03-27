double __thiscall sub_4A5CA0(_DWORD *this, float a2, float a3, int a4, int a5, int a6)
{
  int v7; // ebx
  TESForm *v8; // eax
  TESObjectCELL *v9; // edi
  int (__thiscall *v10)(_DWORD *); // eax
  TESObjectLAND *v11; // eax
  int v12; // eax
  int v13; // ebx
  TESObjectLAND *v14; // eax
  double v15; // st7
  double v16; // st6
  bool v17; // c0
  bool v18; // c3
  double v20; // st7
  double v21; // st6
  TESObjectLAND *v22; // eax
  float WaterHeight; // [esp+1Ch] [ebp-30h]
  float v24; // [esp+20h] [ebp-2Ch]
  double v25; // [esp+20h] [ebp-2Ch]
  double v26; // [esp+20h] [ebp-2Ch]
  float v27; // [esp+28h] [ebp-24h]
  float v28[2]; // [esp+2Ch] [ebp-20h] BYREF
  int v29[3]; // [esp+34h] [ebp-18h] BYREF
  _DWORD v30[3]; // [esp+40h] [ebp-Ch] BYREF

  sub_4A6920(v28);
  v7 = *(this + 1);
  if ( !v7 )
    goto LABEL_32;
  v8 = sub_44A270((TESWorldSpace **)TESDataHandler, a2, a3, (TESWorldSpace *)a5, 0);
  v9 = (TESObjectCELL *)v8;
  if ( !v8 )
    goto LABEL_32;
  if ( TESObjectCELL_IsInterior((TESObjectCELL *)v8) )
    goto LABEL_32;
  a5 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 0x120))(v7);
  v10 = *(int (__thiscall **)(_DWORD *))(*this + 0xC);
  v27 = (double)a5 / fCostant_100;
  v28[0] = a2;
  v28[1] = a3;
  if ( v10(this) )
  {
    v11 = sub_4CE3C0(v9);
    v12 = sub_4C5AA0(v11, &a2);
    if ( !v12
      || (v13 = *(_DWORD *)(v12 + 0xC), v13 != *(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*this + 0xC))(this) + 0xC)) )
    {
LABEL_32:
      JUMPOUT(0x4A5DD4);
    }
  }
  v24 = (float)(*(unsigned __int16 (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 1) + 0x140))(*(this + 1));
  WaterHeight = TESObjectCELL_GetWaterHeight(v9);
  v14 = sub_4CE3C0(v9);
  sub_4C5B50(v14, &a2, (float *)&a5);
  switch ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 1) + 0x148))(*(this + 1)) )
  {
    case 0:
      v15 = *(float *)&a5;
      v16 = WaterHeight + v24;
      goto LABEL_9;
    case 1:
      if ( WaterHeight > (double)*(float *)&a5 )
        return 0.0;
      if ( WaterHeight + v24 >= *(float *)&a5 )
        goto LABEL_26;
      return 0.0;
    case 2:
      if ( WaterHeight - v24 >= *(float *)&a5 )
        goto LABEL_26;
      return 0.0;
    case 3:
      v20 = *(float *)&a5;
      if ( WaterHeight < (double)*(float *)&a5 )
        return 0.0;
      v21 = WaterHeight - v24;
      v17 = v21 < v20;
      v18 = v21 == v20;
LABEL_10:
      if ( !v17 && !v18 )
        return def_4A5DB4(LODWORD(a2), LODWORD(a3), a4, a5, a6);
LABEL_26:
      v22 = sub_4CE3C0(v9);
      if ( sub_4C3C00(v22, &a2, (int)v29, v30) )
      {
        *(float *)&a5 = sub_4A6810(v29[0], v29[1], *(float *)&v29[2]);
        v25 = *(float *)&a5;
        if ( ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)*(this + 1) + 0x13C))(*(this + 1)) < v25 )
          goto LABEL_32;
        v26 = *(float *)&a5;
        if ( ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)*(this + 1) + 0x138))(*(this + 1)) > v26 )
          goto LABEL_32;
      }
      if ( (_BYTE)a6 )
        return (float)(sub_4CC1A0(v9, (int)v28, 6, (int)this) * v27);
      return v27;
    case 4:
      *(float *)&a5 = WaterHeight - *(float *)&a5;
      *(float *)&a5 = fabs(*(float *)&a5);
      v15 = *(float *)&a5;
      v16 = v24;
LABEL_9:
      v17 = v16 < v15;
      v18 = v16 == v15;
      goto LABEL_10;
    case 5:
      *(float *)&a5 = WaterHeight - *(float *)&a5;
      *(float *)&a5 = fabs(*(float *)&a5);
      if ( v24 >= (double)*(float *)&a5 )
        goto LABEL_26;
      return 0.0;
    case 6:
      if ( WaterHeight + v24 >= *(float *)&a5 )
        goto LABEL_26;
      return 0.0;
    case 7:
      if ( WaterHeight - v24 <= *(float *)&a5 )
        goto LABEL_26;
      goto LABEL_32;
    default:
      goto LABEL_32;
  }
}
