TESAnimGroup *__thiscall TESAnimGroup::TESAnimGroup(TESAnimGroup *this, __int16 a2)
{
  *(_DWORD *)this = &NiRefObject::`vftable';
  *((_DWORD *)this + 1) = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  *(_DWORD *)this = &TESAnimGroup::`vftable';
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 0x20) = 0;
  *((_BYTE *)this + 0x21) = 0;
  *((float *)this + 5) = Vector3_InitValue_;
  *((float *)this + 6) = *(&Vector3_InitValue_ + 1);
  *((float *)this + 7) = dword_B3F9B0;
  sub_51AA10(this, a2);
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 9) = 0;
  return this;
}
