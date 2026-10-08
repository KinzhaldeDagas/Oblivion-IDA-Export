void __thiscall sub_4EDED0(TESForm *this)
{
  _memset((int)this + 0x68, 0, 0xA0u); /*0x4edede*/
  *((_DWORD *)this + 0x12) = 0; /*0x4edee5*/
  *((_DWORD *)this + 0x13) = 0; /*0x4edee8*/
  *((_DWORD *)this + 0x14) = 0; /*0x4edeeb*/
  *((_WORD *)this + 0x2A) = 0; /*0x4edeee*/
  *((_BYTE *)this + 0x56) = 0; /*0x4edef2*/
  *((_DWORD *)this + 0x16) = 0; /*0x4edef5*/
  *((_DWORD *)this + 0x17) = 0; /*0x4edefa*/
  *((_DWORD *)this + 0x18) = 0; /*0x4edf04*/
  *((_DWORD *)this + 0x19) = 0; /*0x4edf08*/
  _memset((int)this + 0x110, 0, 0x38u); /*0x4edf0b*/
  j_TESForm_InitializeComponents(this); /*0x4edf16*/
}
