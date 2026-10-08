void __thiscall sub_4D5D70(TESObjectCELL *this, float *a2, _DWORD *a3)
{
  char v6; // dl
  TESCELL_CoordOrLight v7; // eax
  SInt32 y; // ecx
  CellCoordinates *coords; // eax
  SInt32 x; // eax
  float v11; // [esp+10h] [ebp-Ch]
  float v12; // [esp+14h] [ebp-8h]

  v6 = this->members.flags0 & 1; /*0x4d5d79*/
  if ( v6 || (v7.coords = (CellCoordinates *)this->members.coordOrLight) == 0 ) /*0x4d5d85*/
    y = 0; /*0x4d5d8c*/
  else
    y = v7.coords->y; /*0x4d5d87*/
  if ( v6 || (coords = this->members.coordOrLight.coords) == 0 ) /*0x4d5d97*/
    x = 0; /*0x4d5d9d*/
  else
    x = coords->x; /*0x4d5d99*/
  v11 = (float)((x << 0xC) + 0x800); /*0x4d5dc4*/
  *a2 = v11; /*0x4d5dd0*/
  v12 = (float)((y << 0xC) + 0x800); /*0x4d5dd2*/
  a2[1] = v12; /*0x4d5ddc*/
  a2[2] = 0.0; /*0x4d5de7*/
  *a3 = LODWORD(g_zeroNiPoint3.x); /*0x4d5def*/
  a3[1] = LODWORD(g_zeroNiPoint3.y); /*0x4d5df7*/
  a3[2] = LODWORD(g_zeroNiPoint3.z); /*0x4d5e00*/
  if ( !byte_B097E0 || (this->members.flags0 & 1) != 0 ) /*0x4d5e10*/
  {
    sub_4D4310(this); /*0x4d5e14*/
    sub_4CEE90(this, (int)a2, *(float *)&a3); /*0x4d5e1d*/
  }
}
