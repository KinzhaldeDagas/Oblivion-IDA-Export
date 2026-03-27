void __userpurge sub_4D5D70(TESObjectCELL *this@<ecx>, double a2@<st2>, double a3@<st1>, float *a4, _DWORD *a5)
{
  char v6; // dl
  TESCELL_CoordOrLight v7; // eax
  SInt32 y; // ecx
  CellCoordinates *coords; // eax
  SInt32 x; // eax
  float v11; // [esp+10h] [ebp-Ch]
  float v12; // [esp+14h] [ebp-8h]

  v6 = this->members.flags0 & 1;
  if ( v6 || (v7.coords = (CellCoordinates *)this->members.coordOrLight) == 0 )
    y = 0;
  else
    y = v7.coords->y;
  if ( v6 || (coords = this->members.coordOrLight.coords) == 0 )
    x = 0;
  else
    x = coords->x;
  v11 = (float)((x << 0xC) + 0x800);
  *a4 = v11;
  v12 = (float)((y << 0xC) + 0x800);
  a4[1] = v12;
  a4[2] = 0.0;
  *a5 = LODWORD(Vector3_InitValue_);
  a5[1] = *((_DWORD *)&Vector3_InitValue_ + 1);
  a5[2] = LODWORD(dword_B3F9B0);
  if ( !byte_B097E0 || (this->members.flags0 & 1) != 0 )
  {
    sub_4D4310(this, a2, a3, 0.0);
    sub_4CEE90(this, (int)a4, *(float *)&a5);
  }
}
