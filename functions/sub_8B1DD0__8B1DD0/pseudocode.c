// Converts a quaternion into a 3x3 basis matrix. 0x896000 uses this during per-frame movement basis refresh.
int __thiscall hkMatrix3_SetFromQuaternion(float *this, float *a2)
{
  double v3; // st7
  double v4; // st6
  double v5; // st7
  double v6; // st6
  float v8; // [esp+0h] [ebp-1Ch]
  float v9; // [esp+4h] [ebp-18h]
  float v10; // [esp+8h] [ebp-14h]
  float v11; // [esp+Ch] [ebp-10h]
  float v12; // [esp+10h] [ebp-Ch]
  float v13; // [esp+14h] [ebp-8h]
  float v14; // [esp+18h] [ebp-4h]
  float v15; // [esp+20h] [ebp+4h]

  v3 = *a2 + *a2; /*0x8b1dd9*/
  v4 = a2[1] + a2[1]; /*0x8b1dde*/
  v15 = a2[2] + a2[2]; /*0x8b1de5*/
  v14 = v3 * *a2; /*0x8b1ded*/
  v8 = v4 * *a2; /*0x8b1df5*/
  v10 = v15 * *a2; /*0x8b1dfe*/
  v13 = v4 * a2[1]; /*0x8b1e07*/
  v11 = v15 * a2[1]; /*0x8b1e12*/
  v9 = v15 * a2[2]; /*0x8b1e1d*/
  v12 = v3 * a2[3]; /*0x8b1e26*/
  v5 = v4 * a2[3]; /*0x8b1e2a*/
  v6 = v15 * a2[3]; /*0x8b1e31*/
  *this = fConstant_1 - (v9 + v13); /*0x8b1e44*/
  *(this + 1) = v8 + v6; /*0x8b1e4b*/
  *(this + 2) = v10 - v5; /*0x8b1e54*/
  *(this + 3) = 0.0; /*0x8b1e57*/
  *(this + 4) = v8 - v6; /*0x8b1e5f*/
  *(this + 5) = fConstant_1 - (v9 + v14); /*0x8b1e72*/
  *(this + 6) = v12 + v11; /*0x8b1e7d*/
  *(this + 7) = 0.0; /*0x8b1e80*/
  *(this + 8) = v5 + v10; /*0x8b1e87*/
  *(this + 9) = v11 - v12; /*0x8b1e92*/
  *(this + 0xA) = fConstant_1 - (v13 + v14); /*0x8b1ea3*/
  *(this + 0xB) = 0.0; /*0x8b1ea6*/
  return 0; /*0x8b1ea9*/
}
