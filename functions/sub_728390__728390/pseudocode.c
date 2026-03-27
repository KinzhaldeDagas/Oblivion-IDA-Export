int __thiscall sub_728390(_WORD *this, __int16 a2, int a3, int a4, int a5, int a6, char a7, __int16 a8)
{
  int v9; // eax
  __int16 v10; // dx
  int result; // eax

  *(this + 4) = a2;
  v9 = *(_DWORD *)this;
  *((_DWORD *)this + 7) = a3;
  *((_DWORD *)this + 8) = a4;
  (*(void (__thiscall **)(_WORD *))(v9 + 0x50))(this);
  v10 = *(this + 0x16);
  *((_DWORD *)this + 9) = a5;
  result = a7 & 0x3F;
  *((_DWORD *)this + 0xA) = a6;
  *(this + 0x16) = a8 | result | v10 & 0xFC0;
  return result;
}
