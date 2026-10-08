__int128 *__thiscall sub_8A3270(__int128 *this, float *a2)
{
  int v2; // eax
  int v4; // eax
  __int128 *v5; // eax
  double v6; // st7
  bool v7; // c0
  bool v8; // c3
  __int128 *result; // eax
  __int128 v10; // [esp+10h] [ebp-60h]
  __int128 v11; // [esp+20h] [ebp-50h]
  float v12[15]; // [esp+30h] [ebp-40h] BYREF

  v2 = *(_DWORD *)a2; /*0x8a3288*/
  *(float *)this = *a2; /*0x8a328d*/
  *((_DWORD *)this + 8) = v2; /*0x8a328f*/
  v4 = *((_DWORD *)a2 + 1); /*0x8a3292*/
  *((_DWORD *)this + 1) = v4; /*0x8a3295*/
  *((_DWORD *)this + 9) = v4; /*0x8a3298*/
  *(float *)&v10 = a2[8]; /*0x8a329e*/
  *((float *)&v10 + 1) = a2[9]; /*0x8a32aa*/
  *((float *)&v10 + 2) = a2[0xA]; /*0x8a32b4*/
  *((float *)&v10 + 3) = a2[0xB]; /*0x8a32bb*/
  *(this + 3) = v10; /*0x8a32c4*/
  *(float *)&v11 = a2[0xC]; /*0x8a32cb*/
  *((float *)&v11 + 1) = a2[0xD]; /*0x8a32d2*/
  *((float *)&v11 + 2) = a2[0xE]; /*0x8a32d9*/
  *((float *)&v11 + 3) = a2[0xF]; /*0x8a32e0*/
  *(this + 4) = v11; /*0x8a32e9*/
  *(float *)&v10 = a2[0x10]; /*0x8a32f0*/
  *((float *)&v10 + 1) = a2[0x11]; /*0x8a32f7*/
  *((float *)&v10 + 2) = a2[0x12]; /*0x8a32fe*/
  *((float *)&v10 + 3) = a2[0x13]; /*0x8a3305*/
  *(this + 5) = v10; /*0x8a330e*/
  *(float *)&v10 = a2[0x14]; /*0x8a3315*/
  *((float *)&v10 + 1) = a2[0x15]; /*0x8a331c*/
  *((float *)&v10 + 2) = a2[0x16]; /*0x8a3323*/
  *((float *)&v10 + 3) = a2[0x17]; /*0x8a332a*/
  *(this + 6) = v10; /*0x8a3333*/
  v5 = (__int128 *)sub_8A1FB0(a2 + 0x18, v12); /*0x8a3337*/
  *(this + 7) = *v5; /*0x8a333f*/
  *(this + 8) = v5[1]; /*0x8a3347*/
  *(this + 9) = v5[2]; /*0x8a3352*/
  *(float *)&v10 = a2[0x24]; /*0x8a335f*/
  *((float *)&v10 + 1) = a2[0x25]; /*0x8a3369*/
  *((float *)&v10 + 2) = a2[0x26]; /*0x8a3373*/
  *((float *)&v10 + 3) = a2[0x27]; /*0x8a337d*/
  *(this + 0xA) = v10; /*0x8a3386*/
  *((float *)this + 0x2C) = a2[0x28]; /*0x8a3393*/
  *((float *)this + 0x2D) = a2[0x29]; /*0x8a339f*/
  *((float *)this + 0x2E) = a2[0x2A]; /*0x8a33ab*/
  *((float *)this + 0x2F) = a2[0x2B]; /*0x8a33b7*/
  *((float *)this + 0x30) = a2[0x2C]; /*0x8a33c3*/
  v6 = *((float *)this + 0x31); /*0x8a33cf*/
  *((_BYTE *)this + 0xD0) = *((_BYTE *)a2 + 0xB4); /*0x8a33d5*/
  v7 = v6 < dbl_A529C0; /*0x8a33db*/
  v8 = v6 == dbl_A529C0; /*0x8a33db*/
  *((_BYTE *)this + 0xD1) = *((_BYTE *)a2 + 0xB5); /*0x8a33e7*/
  result = this; /*0x8a33f2*/
  if ( !v7 && !v8 ) /*0x8a33ef*/
    *((float *)this + 0x31) = flt_A2FE78; /*0x8a33fc*/
  return result; /*0x8a3402*/
}
