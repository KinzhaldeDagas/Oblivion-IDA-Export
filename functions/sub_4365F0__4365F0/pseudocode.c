__int64 __thiscall sub_4365F0(_DWORD *this)
{
  unsigned __int16 v2; // bp
  unsigned __int8 v3; // bl

  v2 = InterlockedIncrement(&unk_B33A14); /*0x436606*/
  v3 = BYTE2(*(this + 4)); /*0x436618*/
  *((_QWORD *)this + 2) = v2 + ((v3 + (((unsigned int)InterlockedIncrement(&unk_B33A18) | 0x200000000LL) << 8)) << 0x10); /*0x43665b*/
  return v2; /*0x43665a*/
}
