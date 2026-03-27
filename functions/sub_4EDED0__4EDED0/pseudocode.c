void __thiscall sub_4EDED0(TESForm *this)
{
  _memset((char *)this + 0x68, 0, 0xA0);
  *((_DWORD *)this + 0x12) = 0;
  *((_DWORD *)this + 0x13) = 0;
  *((_DWORD *)this + 0x14) = 0;
  *((_WORD *)this + 0x2A) = 0;
  *((_BYTE *)this + 0x56) = 0;
  *((_DWORD *)this + 0x16) = 0;
  *((_DWORD *)this + 0x17) = 0;
  *((_DWORD *)this + 0x18) = 0;
  *((_DWORD *)this + 0x19) = 0;
  _memset((char *)this + 0x110, 0, 0x38);
  j_TESForm_InitializeComponents(this);
}
