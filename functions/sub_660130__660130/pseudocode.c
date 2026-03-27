float *__thiscall sub_660130(TESObjectREFR *this)
{
  BSExtraDataVtbl *AnimData; // esi
  unsigned __int8 AnimGroupFromField8Value; // al
  int v4; // edi
  unsigned __int8 v5; // al
  int v6; // esi
  double v7; // st7
  double v8; // st6
  NiTransform *v9; // eax
  float v10; // ecx
  float v11; // edx
  float *result; // eax
  float v13; // [esp+0h] [ebp-F0h]
  float v14; // [esp+10h] [ebp-E0h]
  float v15; // [esp+10h] [ebp-E0h]
  float v16; // [esp+10h] [ebp-E0h]
  float v17; // [esp+10h] [ebp-E0h]
  float v18; // [esp+10h] [ebp-E0h]
  float v19; // [esp+10h] [ebp-E0h]
  float v20; // [esp+14h] [ebp-DCh]
  NiPoint3 v21; // [esp+18h] [ebp-D8h] BYREF
  float v22; // [esp+24h] [ebp-CCh]
  float v23; // [esp+28h] [ebp-C8h]
  float v24; // [esp+2Ch] [ebp-C4h]
  _BYTE v25[72]; // [esp+30h] [ebp-C0h] BYREF
  NiTransform v26; // [esp+78h] [ebp-78h] BYREF
  float v27[9]; // [esp+CCh] [ebp-24h] BYREF

  v20 = flt_B36BC0;
  AnimData = TESObjectREFR_GetAnimData((Actor *)this);
  AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(AnimData, 3);
  v4 = sub_51AA00(AnimGroupFromField8Value);
  v5 = ActorAnimData_GetAnimGroupFromField8Value(AnimData, 1);
  v6 = sub_51AA00(v5);
  if ( Actor_GetCurrentAction(this) != 3 && (unsigned int)(v4 - 0x11) <= 9
    || Actor_GetCurrentAction(this) != 3 && (unsigned int)(v6 - 0x22) <= 5 )
  {
    v20 = 1.0;
  }
  v7 = flt_B14FB4;
  v8 = v20;
  if ( v20 != v7 )
  {
    v14 = flt_B36BC8;
    if ( 1.0 == v8 )
      v14 = flt_A2FAAC;
    v15 = (v8 - v7) * (flt_B33E9C / v14);
    flt_B14FB4 = v7 + v15;
    if ( v15 >= 0.0 || flt_B14FB4 >= v8 )
    {
      if ( v15 <= 0.0 || v8 >= flt_B14FB4 )
      {
        v20 = flt_B14FB4;
      }
      else
      {
        flt_B14FB4 = v20;
        v20 = flt_B14FB4;
      }
    }
    else
    {
      flt_B14FB4 = v20;
      v20 = flt_B14FB4;
    }
  }
  v16 = ((double (__thiscall *)(TESObjectREFR *))this->vtbl[1].super.Unk_0E)(this);
  if ( ((int (__thiscall *)(TESObjectREFR *))this->vtbl[2].super.Unk_0C)(this) )
  {
    if ( (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x36C))(*((_DWORD *)this + 0x16)) == 4 )
      v16 = *((float *)this + 0x187);
  }
  NiMatrix33_InitRotationTransform((float *)v25, v16);
  v13 = sub_4A9720((Actor *)this);
  NiMatrix33_InitRotationTransposedTransform___(&v26.scale, v13);
  qmemcpy(v25, NiMAtrix33_Multiply((float *)v25, v27, &v26.scale), 0x24u);
  v21.x = 0.0;
  v21.y = 1.0;
  v21.z = 0.0;
  v9 = sub_7101F0((NiTransform *)v25, &v26, &v21);
  v21.x = v9->rot.data[0][0];
  v21.y = v9->rot.data[0][1];
  v21.z = v9->rot.data[0][2];
  v10 = v9->rot.data[0][1];
  v22 = v9->rot.data[0][0];
  v11 = v9->rot.data[0][2];
  v23 = v10;
  v24 = v11;
  v17 = v21.x * v22 + v21.y * v10 + v21.z * dbl_A2FC68;
  if ( v17 >= (double)flt_A30634 )
  {
    if ( v17 > 1.0 )
      v17 = 1.0;
  }
  else
  {
    v17 = flt_A30634;
  }
  v18 = acos(v17);
  v19 = v18 * (1.0 - v20);
  if ( v21.z < 0.0 )
    v19 = v19 * dbl_A3D360;
  NiMatrix33_InitRotationTransposedTransform___(v26.rot.data[1], v19);
  qmemcpy(&v25[0x24], v25, 0x24u);
  result = NiMAtrix33_Multiply((float *)&v25[0x24], v27, v26.rot.data[1]);
  qmemcpy(&v25[0x24], result, 0x24u);
  qmemcpy((void *)(*((_DWORD *)this + 0x174) + 0x30), &v25[0x24], 0x24u);
  return result;
}
