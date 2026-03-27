__int128 *__thiscall sub_8A3270(__int128 *this, float *a2)
{
  int v2; // eax
  int v4; // eax
  float *v5; // eax
  double v6; // st7
  bool v7; // c0
  bool v8; // c3
  __int128 *result; // eax
  __int128 v10; // [esp+10h] [ebp-60h]
  __int128 v11; // [esp+20h] [ebp-50h]
  float v12[15]; // [esp+30h] [ebp-40h] BYREF

  v2 = *(_DWORD *)a2;
  *(float *)this = *a2;
  *((_DWORD *)this + 8) = v2;
  v4 = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 1) = v4;
  *((_DWORD *)this + 9) = v4;
  *(float *)&v10 = a2[8];
  *((float *)&v10 + 1) = a2[9];
  *((float *)&v10 + 2) = a2[0xA];
  *((float *)&v10 + 3) = a2[0xB];
  *(this + 3) = v10;
  *(float *)&v11 = a2[0xC];
  *((float *)&v11 + 1) = a2[0xD];
  *((float *)&v11 + 2) = a2[0xE];
  *((float *)&v11 + 3) = a2[0xF];
  *(this + 4) = v11;
  *(float *)&v10 = a2[0x10];
  *((float *)&v10 + 1) = a2[0x11];
  *((float *)&v10 + 2) = a2[0x12];
  *((float *)&v10 + 3) = a2[0x13];
  *(this + 5) = v10;
  *(float *)&v10 = a2[0x14];
  *((float *)&v10 + 1) = a2[0x15];
  *((float *)&v10 + 2) = a2[0x16];
  *((float *)&v10 + 3) = a2[0x17];
  *(this + 6) = v10;
  v5 = sub_8A1FB0(a2 + 0x18, v12);
  *(this + 7) = *(_OWORD *)v5;
  *(this + 8) = *((_OWORD *)v5 + 1);
  *(this + 9) = *((_OWORD *)v5 + 2);
  *(float *)&v10 = a2[0x24];
  *((float *)&v10 + 1) = a2[0x25];
  *((float *)&v10 + 2) = a2[0x26];
  *((float *)&v10 + 3) = a2[0x27];
  *(this + 0xA) = v10;
  *((float *)this + 0x2C) = a2[0x28];
  *((float *)this + 0x2D) = a2[0x29];
  *((float *)this + 0x2E) = a2[0x2A];
  *((float *)this + 0x2F) = a2[0x2B];
  *((float *)this + 0x30) = a2[0x2C];
  v6 = *((float *)this + 0x31);
  *((_BYTE *)this + 0xD0) = *((_BYTE *)a2 + 0xB4);
  v7 = v6 < dbl_A529C0;
  v8 = v6 == dbl_A529C0;
  *((_BYTE *)this + 0xD1) = *((_BYTE *)a2 + 0xB5);
  result = this;
  if ( !v7 && !v8 )
    *((float *)this + 0x31) = flt_A2FE78;
  return result;
}
