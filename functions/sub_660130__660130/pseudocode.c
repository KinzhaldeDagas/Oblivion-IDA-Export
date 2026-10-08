NiMatrix33 *__thiscall sub_660130(TESObjectREFR *this)
{
  ActorAnimData *AnimData; // esi
  unsigned __int8 AnimGroupFromField8Value; // al
  int GroupID; // edi
  unsigned __int8 v5; // al
  int v6; // esi
  double v7; // st7
  double v8; // st6
  NiTransform *v9; // eax
  float v10; // ecx
  float v11; // edx
  NiMatrix33 *result; // eax
  float angleZ; // [esp+0h] [ebp-F0h]
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
  NiMatrix33 v25; // [esp+30h] [ebp-C0h] BYREF
  NiMatrix33 v26; // [esp+54h] [ebp-9Ch] BYREF
  char v27; // [esp+78h] [ebp-78h] BYREF
  NiMatrix33 v28; // [esp+84h] [ebp-6Ch] BYREF
  NiMatrix33 right; // [esp+A8h] [ebp-48h] BYREF
  NiMatrix33 out; // [esp+CCh] [ebp-24h] BYREF

  v20 = unk_B36BC0; /*0x66013e*/
  AnimData = TESObjectREFR_GetAnimData(this); /*0x66014a*/
  AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(AnimData, 3); /*0x660150*/
  GroupID = AnimKey_GetGroupID(AnimGroupFromField8Value); /*0x660165*/
  v5 = ActorAnimData_GetAnimGroupFromField8Value(AnimData, 1); /*0x660167*/
  v6 = AnimKey_GetGroupID(v5); /*0x66017a*/
  if ( Actor_GetCurrentAction(this) != 3 && (unsigned int)(GroupID - 0x11) <= 9 /*0x6601a0*/
    || Actor_GetCurrentAction(this) != 3 && (unsigned int)(v6 - 0x22) <= 5 )
  {
    v20 = 1.0; /*0x6601a4*/
  }
  v7 = flt_B14FB4; /*0x6601a8*/
  v8 = v20; /*0x6601ba*/
  if ( v20 != v7 ) /*0x6601c1*/
  {
    v14 = unk_B36BC8; /*0x6601cd*/
    if ( 1.0 == v8 ) /*0x6601da*/
      v14 = kFaceEarNormalMatchRadius; /*0x6601e2*/
    v15 = (v8 - v7) * (*(float *)&MEMORY[0xB33E90][0xC] / v14); /*0x6601f6*/
    flt_B14FB4 = v7 + v15; /*0x660204*/
    if ( v15 >= 0.0 || flt_B14FB4 >= v8 ) /*0x660220*/
    {
      if ( v15 <= 0.0 || v8 >= flt_B14FB4 ) /*0x66024e*/
      {
        v20 = flt_B14FB4; /*0x66026c*/
      }
      else
      {
        flt_B14FB4 = v20; /*0x660250*/
        v20 = flt_B14FB4; /*0x66025c*/
      }
    }
    else
    {
      flt_B14FB4 = v20; /*0x660228*/
      v20 = flt_B14FB4; /*0x660234*/
    }
  }
  v16 = ((double (__thiscall *)(TESObjectREFR *))this->vtbl[1].super.Unk_0E)(this); /*0x660284*/
  if ( ((int (__thiscall *)(TESObjectREFR *))this->vtbl[2].super.Unk_0C)(this) ) /*0x660292*/
  {
    if ( (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x36C))(*((_DWORD *)this + 0x16)) == 4 ) /*0x6602a8*/
      v16 = *((float *)this + 0x187); /*0x6602b0*/
  }
  NiMatrix33_InitRotationZ(&v25, v16); /*0x6602c0*/
  angleZ = Actor_GetAimPitch((Actor *)this); /*0x6602d4*/
  NiMatrix33_InitRotationXTransposed(&right, angleZ); /*0x6602d7*/
  qmemcpy(&v25, NiMAtrix33_Multiply(&v25, &out, &right), sizeof(v25)); /*0x660302*/
  v21.x = 0.0; /*0x660304*/
  v21.y = 1.0; /*0x66030a*/
  v21.z = 0.0; /*0x66030e*/
  v9 = sub_7101F0((NiTransform *)&v25, (NiTransform *)&v27, &v21); /*0x660320*/
  v21.x = v9->rot.data[0][0]; /*0x660327*/
  v21.y = v9->rot.data[0][1]; /*0x660332*/
  v21.z = v9->rot.data[0][2]; /*0x660339*/
  v10 = v9->rot.data[0][1]; /*0x66033f*/
  v22 = v9->rot.data[0][0]; /*0x660342*/
  v11 = v9->rot.data[0][2]; /*0x66034a*/
  v23 = v10; /*0x660351*/
  v24 = v11; /*0x660359*/
  v17 = v21.x * v22 + v21.y * v10 + v21.z * dbl_A2FC68; /*0x66036b*/
  if ( v17 >= (double)kTerrainLODQuadRayDirectionZ ) /*0x660380*/
  {
    if ( v17 > 1.0 ) /*0x660397*/
      v17 = 1.0; /*0x660399*/
  }
  else
  {
    v17 = kTerrainLODQuadRayDirectionZ; /*0x660384*/
  }
  v18 = acos(v17); /*0x6603aa*/
  v19 = v18 * (1.0 - v20); /*0x6603bc*/
  if ( v21.z < 0.0 ) /*0x6603cb*/
    v19 = v19 * dbl_A3D360; /*0x6603d7*/
  NiMatrix33_InitRotationXTransposed(&v28, v19); /*0x6603ea*/
  qmemcpy(&v26, &v25, sizeof(v26)); /*0x6603fc*/
  result = NiMAtrix33_Multiply(&v26, &out, &v28); /*0x660412*/
  qmemcpy(&v26, result, sizeof(v26)); /*0x660422*/
  qmemcpy((void *)(*((_DWORD *)this + 0x174) + 0x30), &v26, 0x24u); /*0x660436*/
  return result; /*0x660439*/
}
