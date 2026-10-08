int __thiscall sub_4CCE20(ExtraDataList *this, float *a2, _DWORD *a3, float a4)
{
  double v4; // st7
  float *v5; // eax
  int result; // eax
  float v7; // [esp+Ch] [ebp-34h]
  float v8[3]; // [esp+10h] [ebp-30h] BYREF
  float v9[9]; // [esp+1Ch] [ebp-24h] BYREF
  float v10; // [esp+4Ch] [ebp+Ch]
  float v11; // [esp+4Ch] [ebp+Ch]

  if ( LOBYTE(a4) ) /*0x4cce28*/
    v4 = kTerrainLODQuadRayDirectionZ; /*0x4cce2a*/
  else
    v4 = 1.0; /*0x4cce32*/
  v10 = v4; /*0x4cce38*/
  v7 = 0.0; /*0x4cce3e*/
  if ( (*((_BYTE *)this + 0x24) & 1) != 0 ) /*0x4cce41*/
    v7 = ExtraDataList_GetNorthRotation(this + 2); /*0x4cce4b*/
  v11 = v10 * v7; /*0x4cce55*/
  if ( v11 == 0.0 ) /*0x4cce68*/
  {
    v5 = a2; /*0x4ccea4*/
  }
  else
  {
    qmemcpy(v9, &stru_B26AF0[0xA].unk2C, sizeof(v9)); /*0x4cce7a*/
    NiMatrix33_InitRotationZ(v9, v11); /*0x4cce84*/
    v5 = NiPoint3_MultiplyMatrix3(v8, a2, v9); /*0x4cce98*/
  }
  *a3 = *(_DWORD *)v5; /*0x4cceb0*/
  a3[1] = *((_DWORD *)v5 + 1); /*0x4cceb5*/
  result = *((_DWORD *)v5 + 2); /*0x4cceb8*/
  a3[2] = result; /*0x4ccebb*/
  return result; /*0x4ccebe*/
}
