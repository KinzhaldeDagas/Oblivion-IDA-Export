NiAVObject *__thiscall sub_4A1780(
        NiAVObject *this,
        __int16 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        char a7,
        __int16 a8,
        __int16 a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  sub_7174B0(this, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  *((_DWORD *)this + 0x30) = a11;
  *((_DWORD *)this + 0x33) = a14;
  this->vtbl = (NiAVObjectVtbl *)&BSScissorTriShape::`vftable';
  *((_DWORD *)this + 0x31) = a12;
  *((_DWORD *)this + 0x32) = a13;
  return this;
}
