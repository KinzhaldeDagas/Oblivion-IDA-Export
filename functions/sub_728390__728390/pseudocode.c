int __thiscall sub_728390(_WORD *this, __int16 a2, int a3, int a4, int a5, int a6, char a7, __int16 a8)
{
  int v9; // eax
  __int16 v10; // dx
  int result; // eax

  *(this + 4) = a2; /*0x7283a0*/
  v9 = *(_DWORD *)this; /*0x7283a4*/
  *((_DWORD *)this + 7) = a3; /*0x7283a6*/
  *((_DWORD *)this + 8) = a4; /*0x7283a9*/
  (*(void (__thiscall **)(_WORD *))(v9 + 0x50))(this); /*0x7283b1*/
  v10 = *(this + 0x16); /*0x7283b7*/
  *((_DWORD *)this + 9) = a5; /*0x7283bf*/
  result = a7 & 0x3F; /*0x7283cc*/
  *((_DWORD *)this + 0xA) = a6; /*0x7283d7*/
  *(this + 0x16) = a8 | result | v10 & 0xFC0; /*0x7283da*/
  return result; /*0x7283de*/
}
