char __thiscall bhkSphereShapeProbeCollector_CastAlongVector(float *this, float *a2, float *a3, float a4)
{
  _DWORD *v5; // ebx
  double v6; // rt0
  double v7; // st6
  int v8; // edi
  double v10; // st7
  float v11; // [esp+8h] [ebp-4Ch]
  float v12; // [esp+Ch] [ebp-48h]
  float v13; // [esp+10h] [ebp-44h]
  float v14; // [esp+14h] [ebp-40h] BYREF
  float v15; // [esp+18h] [ebp-3Ch]
  float v16; // [esp+1Ch] [ebp-38h]
  float v17[5]; // [esp+24h] [ebp-30h] BYREF
  float v18; // [esp+38h] [ebp-1Ch]

  v14 = a4 * *a3; /*0x535564*/
  v15 = a3[1] * a4; /*0x53556f*/
  v16 = a4 * a3[2]; /*0x535576*/
  v11 = *a2 + v14; /*0x535580*/
  v12 = v15 + a2[1]; /*0x53558b*/
  v13 = a2[2] + v16; /*0x535596*/
  bhkShapeProbe_ConfigureLayer1CWideMask();     // TES4 authoritative: sphere probe path reasserts the wider layer 0x1C mask before casting a shape phantom along a vector. /*0x53559a*/
  v5 = *((_DWORD **)this + 0x68); /*0x53559f*/
  if ( v5 ) /*0x5355a9*/
  {
    v18 = flt_A34BA0; /*0x5355b5*/
    v17[4] = v18; /*0x5355b9*/
    v6 = hkFactor; /*0x5355c7*/
    v14 = *a2 * v6; /*0x5355c9*/
    v15 = a2[1] * v6; /*0x5355d2*/
    v7 = a2[2]; /*0x5355d6*/
    *(this + 5) = 0.0; /*0x5355d9*/
    v16 = v7 * v6; /*0x5355de*/
    v17[0] = v11 * v6; /*0x5355e8*/
    v17[1] = v12 * v6; /*0x5355f2*/
    v17[2] = v6 * v13; /*0x5355fa*/
    *(this + 1) = flt_A562B0; /*0x535604*/
    v8 = v5[2]; /*0x535607*/
    if ( v8 ) /*0x53560c*/
    {
      bhkRefObject_UpdateHavokObject(v5); /*0x535610*/
      (*(void (__thiscall **)(int, float *, float *, float *, _DWORD))(*(_DWORD *)v8 + 0x30))(v8, &v14, v17, this, 0);// TES4 authoritative: shape phantom linear cast via hk object vfunc +0x30(start,end,collector,0), using TES/world inputs scaled by hkFactor. /*0x535629*/
      bhkRefObject_UpdateHavokObject(v5); /*0x53562d*/
    }
    if ( *((int *)this + 5) > 0 ) /*0x535636*/
    {
      hkpCdPointCollector_SortHitsByDistance((int *)this); /*0x53563a*/
      return 1; /*0x535652*/
    }
  }
  else
  {
    v10 = flt_A562B0; /*0x535655*/
    *(this + 5) = 0.0; /*0x53565b*/
    *(this + 1) = v10; /*0x53565e*/
  }
  return 0; /*0x535644*/
}
