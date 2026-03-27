NiCollisionData *__thiscall NiCollisionData::NiCollisionData(NiCollisionData *this)
{
  float v2; // edx

  sub_711D90((NiObject *)this, 0);
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 0;
  *((_BYTE *)this + 0x48) = 0;
  *((_BYTE *)this + 0x49) = 0;
  *(_DWORD *)this = &NiCollisionData::`vftable';
  *((float *)this + 3) = Vector3_InitValue_;
  *((float *)this + 4) = *(&Vector3_InitValue_ + 1);
  *((float *)this + 5) = dword_B3F9B0;
  *((float *)this + 6) = Vector3_InitValue_;
  *((float *)this + 7) = *(&Vector3_InitValue_ + 1);
  v2 = dword_B3F9B0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_WORD *)this + 0x26) = 0;
  *((_DWORD *)this + 0xE) = 0;
  *((_DWORD *)this + 0xF) = 0;
  *((_BYTE *)this + 0x4E) = 0;
  *((float *)this + 8) = v2;
  *((_DWORD *)this + 9) = 2;
  *((_DWORD *)this + 0xA) = 3;
  return this;
}
