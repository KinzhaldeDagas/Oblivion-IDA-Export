char __thiscall sub_70C340(float *this, float *a2, NiPoint3 *a3)
{
  int v5; // eax
  void (__thiscall *v6)(float *); // edx
  float v7; // [esp+4h] [ebp-7Ch]
  float v8; // [esp+4h] [ebp-7Ch]
  float v9; // [esp+4h] [ebp-7Ch]
  NiPoint3 rhs; // [esp+8h] [ebp-78h] BYREF
  NiPoint3 out; // [esp+14h] [ebp-6Ch] BYREF
  NiPoint3 v12; // [esp+20h] [ebp-60h] BYREF
  float v13[3]; // [esp+2Ch] [ebp-54h] BYREF
  float v14[9]; // [esp+38h] [ebp-48h] BYREF
  float v15[9]; // [esp+5Ch] [ebp-24h] BYREF

  rhs.x = *(this + 0x22) - *a2; /*0x70c355*/
  rhs.y = *(this + 0x23) - a2[1]; /*0x70c362*/
  rhs.z = *(this + 0x24) - a2[2]; /*0x70c36f*/
  v7 = rhs.x * rhs.x + rhs.y * rhs.y + rhs.z * rhs.z; /*0x70c38f*/
  if ( v7 < dbl_A7E548 ) /*0x70c3a2*/
    return 0; /*0x70c3a2*/
  Vector3_NormalizeInPlace(&rhs.x); /*0x70c3b1*/
  NiPoint3__NormalizedCrossProduct(a3, &out, &rhs); /*0x70c3c9*/
  v8 = out.y * out.y + out.x * out.x + out.z * out.z; /*0x70c3ea*/
  if ( v8 < (double)kHeadBodyNormalMatchRadius ) /*0x70c3fd*/
    return 0; /*0x70c3fd*/
  NiPoint3__NormalizedCrossProduct(&rhs, &v12, &out); /*0x70c40d*/
  v9 = v12.y * v12.y + v12.x * v12.x + v12.z * v12.z; /*0x70c42e*/
  if ( v9 < (double)kHeadBodyNormalMatchRadius ) /*0x70c441*/
    return 0; /*0x70c3a4*/
  v13[0] = -rhs.x; /*0x70c44f*/
  v13[1] = -rhs.y; /*0x70c462*/
  v13[2] = -rhs.z; /*0x70c476*/
  sub_70FCC0(v14, v13, &v12.x, &out.x); /*0x70c47a*/
  v5 = *((_DWORD *)this + 7); /*0x70c47f*/
  if ( v5 ) /*0x70c484*/
    qmemcpy(v14, sub_710490((float *)(v5 + 0x64), v15, v14), sizeof(v14)); /*0x70c4a3*/
  v6 = *(void (__thiscall **)(float *))(*(_DWORD *)this + 0x74); /*0x70c4a7*/
  qmemcpy(this + 0xC, v14, 0x24u); /*0x70c4b6*/
  v6(this); /*0x70c4ba*/
  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 0x78))(this); /*0x70c4c3*/
  return 1; /*0x70c3a6*/
}
