int __thiscall sub_9600B0(float *this)
{
  double v1; // st6
  double v2; // rt2
  float v4; // [esp+0h] [ebp-1Ch]
  float v5; // [esp+4h] [ebp-18h]
  float v6; // [esp+4h] [ebp-18h]
  float v7; // [esp+8h] [ebp-14h]
  float v8; // [esp+8h] [ebp-14h]
  float v9; // [esp+Ch] [ebp-10h]
  float v10; // [esp+Ch] [ebp-10h]
  float v11; // [esp+10h] [ebp-Ch]
  float v12; // [esp+10h] [ebp-Ch]
  float v13; // [esp+14h] [ebp-8h]
  float v14; // [esp+14h] [ebp-8h]
  float v15; // [esp+18h] [ebp-4h]
  float v16; // [esp+18h] [ebp-4h]

  v4 = *(this + 7) - *(this + 0xE); /*0x9600b9*/
  v5 = *(this + 4) * v4; /*0x9600ce*/
  v7 = *(this + 5) * v4; /*0x9600d7*/
  v9 = v4 * *(this + 6); /*0x9600de*/
  v11 = *(this + 1) - v5; /*0x9600e9*/
  v13 = *(this + 2) - v7; /*0x9600f8*/
  v1 = *(this + 3); /*0x960100*/
  *(this + 8) = v11; /*0x960103*/
  *(this + 9) = v13; /*0x96010a*/
  v15 = v1 - v9; /*0x96010d*/
  *(this + 0xA) = v15; /*0x960115*/
  v12 = *(this + 4) * v4; /*0x960127*/
  v14 = *(this + 5) * v4; /*0x960130*/
  v16 = v4 * *(this + 6); /*0x960137*/
  v2 = dbl_A3D0C0; /*0x960147*/
  v6 = v12 * v2; /*0x960149*/
  *(this + 0xB) = v6; /*0x960155*/
  v8 = v14 * v2; /*0x96015a*/
  *(this + 0xC) = v8; /*0x960162*/
  v10 = v2 * v16; /*0x960169*/
  *(this + 0xD) = v10; /*0x960171*/
  return LODWORD(v8); /*0x960174*/
}
