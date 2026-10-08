NiCollisionData *__thiscall NiCollisionData::NiCollisionData(NiCollisionData *this)
{
  float z; // edx

  sub_711D90((NiObject *)this, 0); /*0x96d7f7*/
  *((_DWORD *)this + 0x10) = 0; /*0x96d7fc*/
  *((_DWORD *)this + 0x11) = 0; /*0x96d7ff*/
  *((_BYTE *)this + 0x48) = 0; /*0x96d802*/
  *((_BYTE *)this + 0x49) = 0; /*0x96d805*/
  *(_DWORD *)this = &NiCollisionData::`vftable'; /*0x96d808*/
  *((_DWORD *)this + 3) = LODWORD(g_zeroNiPoint3.x); /*0x96d813*/
  *((_DWORD *)this + 4) = LODWORD(g_zeroNiPoint3.y); /*0x96d81c*/
  *((_DWORD *)this + 5) = LODWORD(g_zeroNiPoint3.z); /*0x96d825*/
  *((_DWORD *)this + 6) = LODWORD(g_zeroNiPoint3.x); /*0x96d82d*/
  *((_DWORD *)this + 7) = LODWORD(g_zeroNiPoint3.y); /*0x96d836*/
  z = g_zeroNiPoint3.z; /*0x96d839*/
  *((_DWORD *)this + 0xB) = 0; /*0x96d83f*/
  *((_DWORD *)this + 0xC) = 0; /*0x96d842*/
  *((_DWORD *)this + 0xD) = 0; /*0x96d845*/
  *((_WORD *)this + 0x26) = 0; /*0x96d848*/
  *((_DWORD *)this + 0xE) = 0; /*0x96d84c*/
  *((_DWORD *)this + 0xF) = 0; /*0x96d84f*/
  *((_BYTE *)this + 0x4E) = 0; /*0x96d852*/
  *((float *)this + 8) = z; /*0x96d855*/
  *((_DWORD *)this + 9) = 2; /*0x96d858*/
  *((_DWORD *)this + 0xA) = 3; /*0x96d85f*/
  return this; /*0x96d868*/
}
