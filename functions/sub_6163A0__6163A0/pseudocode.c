bool __thiscall sub_6163A0(int this)
{
  float x; // eax
  float z; // edx
  _DWORD *CurrentTarget; // eax
  int v6; // eax
  int v7; // eax
  float *v8; // eax
  TESObjectREFR *v9; // edi
  TESObjectREFR *v10; // eax
  bool v11; // al
  TESObjectREFR *v12; // ecx
  double DistanceToPoint; // st7
  float *v14; // eax
  float v16; // [esp+4h] [ebp-30h]
  float v17; // [esp+4h] [ebp-30h]
  float v18; // [esp+8h] [ebp-2Ch]
  float v19; // [esp+8h] [ebp-2Ch]
  float v20; // [esp+8h] [ebp-2Ch]
  float v21; // [esp+Ch] [ebp-28h]
  float v22; // [esp+10h] [ebp-24h] BYREF
  float y; // [esp+14h] [ebp-20h]
  float v24; // [esp+18h] [ebp-1Ch]
  float pointXYZ; // [esp+1Ch] [ebp-18h] BYREF
  float v26; // [esp+20h] [ebp-14h]
  float v27; // [esp+24h] [ebp-10h]
  float v28; // [esp+28h] [ebp-Ch]
  float v29; // [esp+2Ch] [ebp-8h]
  float v30; // [esp+30h] [ebp-4h]

  x = g_zeroNiPoint3.x; /*0x6163a3*/
  z = g_zeroNiPoint3.z; /*0x6163a8*/
  y = g_zeroNiPoint3.y; /*0x6163b7*/
  v22 = x; /*0x6163bd*/
  v24 = z; /*0x6163c1*/
  if ( !CombatController_GetCurrentTarget(this) ) /*0x6163c5*/
    return 0; /*0x6163c5*/
  CurrentTarget = (_DWORD *)CombatController_GetCurrentTarget(this); /*0x6163d4*/
  if ( !sub_5E05B0(CurrentTarget) ) /*0x6163db*/
    return 0; /*0x61651c*/
  v6 = CombatController_GetCurrentTarget(this); /*0x6163ea*/
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)v6 + 0x1D0))(v6, &v22); /*0x6163fe*/
  v24 = 0.0; /*0x616404*/
  v7 = CombatController_GetCurrentTarget(this); /*0x616408*/
  v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 0x174))(v7); /*0x616417*/
  v16 = v8[1] + y; /*0x616420*/
  v18 = v8[2] + v24; /*0x61642b*/
  pointXYZ = *v8 + v22; /*0x616435*/
  v26 = v16; /*0x61643d*/
  v27 = v18; /*0x616445*/
  if ( *(float *)(this + 0x184) < 0.0 ) /*0x616456*/
  {
    v9 = *(TESObjectREFR **)(this + 0x3C); /*0x616459*/
    v10 = (TESObjectREFR *)CombatController_GetCurrentTarget(this); /*0x616460*/
    *(float *)(this + 0x184) = TESObjectREFR_GetSurfaceDistance(v9, v10, 0); /*0x61646c*/
  }
  v21 = *(float *)(this + 0x184); /*0x61647f*/
  v11 = sub_5E05B0(*(_DWORD **)(this + 0x3C)); /*0x616483*/
  v12 = *(TESObjectREFR **)(this + 0x3C); /*0x61648a*/
  if ( v11 ) /*0x61648d*/
  {
    v14 = v12->vtbl->GetPos(v12); /*0x6164a3*/
    v28 = *v14 - pointXYZ; /*0x6164ab*/
    v29 = v14[1] - v26; /*0x6164b6*/
    v30 = v14[2] - v27; /*0x6164c1*/
    v19 = v29 * v29 + v28 * v28 + v30 * v30; /*0x6164e1*/
    v20 = sqrt(v19); /*0x6164ee*/
    DistanceToPoint = v20; /*0x6164f2*/
  }
  else
  {
    DistanceToPoint = TESObjectREFR::GetDistanceToPoint(v12, &pointXYZ); /*0x616494*/
  }
  v17 = DistanceToPoint; /*0x6164f6*/
  return v21 <= (double)v17; /*0x616510*/
}
