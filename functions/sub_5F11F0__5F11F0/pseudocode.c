void __userpurge sub_5F11F0(MobileObject *a1@<ecx>, double a2@<st0>, float *a3, float *a4)
{
  int v5; // eax
  int v6; // edx
  int v7; // eax
  float angleZ; // [esp+0h] [ebp-78h]
  float angleZa; // [esp+0h] [ebp-78h]
  NiMatrix33 v10; // [esp+Ch] [ebp-6Ch] BYREF
  NiMatrix33 right; // [esp+30h] [ebp-48h] BYREF
  NiMatrix33 out; // [esp+54h] [ebp-24h] BYREF

  if ( a1 == (MobileObject *)reference && (v5 = MEMORY[0xB3BB0C]) != 0 ) /*0x5f11ff*/
  {
    v6 = *(_DWORD *)(v5 + 0x88); /*0x5f1208*/
    v7 = v5 + 0x88; /*0x5f1212*/
    *(_DWORD *)a3 = v6; /*0x5f1217*/
    a3[1] = *(float *)(v7 + 4); /*0x5f121c*/
    a3[2] = *(float *)(v7 + 8); /*0x5f1222*/
  }
  else
  {
    *a3 = a1->super.pos[0]; /*0x5f122e*/
    a3[1] = a1->super.pos[1]; /*0x5f1233*/
    a3[2] = a1->super.pos[2]; /*0x5f123b*/
    a3[2] = sub_5E40C0(a1) + a3[2]; /*0x5f1246*/
  }
  a1->vtbl->GetZRotation(a1); /*0x5f1253*/
  angleZ = a2; /*0x5f125a*/
  NiMatrix33_InitRotationZ(&v10, angleZ); /*0x5f125d*/
  if ( a1 == (MobileObject *)reference ) /*0x5f1268*/
  {
    angleZa = Actor_GetAimPitch((Actor *)a1); /*0x5f1276*/
    NiMatrix33_InitRotationXTransposed(&right, angleZa); /*0x5f1279*/
    qmemcpy(&v10, NiMAtrix33_Multiply(&v10, &out, &right), sizeof(v10)); /*0x5f129c*/
  }
  *a4 = v10.data[0][1]; /*0x5f12a6*/
  a4[1] = v10.data[1][1]; /*0x5f12ac*/
  a4[2] = v10.data[2][1]; /*0x5f12b3*/
  Vector3_NormalizeInPlace(a4); /*0x5f12b6*/
}
