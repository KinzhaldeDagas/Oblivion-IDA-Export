int __usercall unknown_libname_115@<eax>(
        int a1@<edx>,
        int a2@<ebp>,
        __int16 a3@<fpstat>,
        double _ST6@<st1>,
        double a5@<st0>)
{
  __int16 v5; // bx
  __int16 v7; // fps
  char v9; // cl
  __int16 v10; // cx
  char v13; // ah

  if ( *(_BYTE *)(a1 + 0xE) == 5 ) /*0x990bab*/
  {
    HIBYTE(v5) = HIBYTE(*(_WORD *)(a2 - 0xA4)) & 0xFC | 2; /*0x990bb7*/
    LOBYTE(v5) = 0x3F; /*0x990bba*/
  }
  else
  {
    v5 = 0x133F; /*0x990bbe*/
  }
  *(_WORD *)(a2 - 0xA2) = v5; /*0x990bc2*/
  _EBX = &unk_B319CC; /*0x990bcf*/
  __asm { fxam } /*0x990bd4*/
  *(_DWORD *)(a2 - 0x94) = a1; /*0x990bd6*/
  *(_WORD *)(a2 - 0xA0) = a3; /*0x990bdc*/
  *(_BYTE *)(a2 - 0x90) = 0; /*0x990be3*/
  _ST6 = a5; /*0x990bea*/
  v9 = *(_BYTE *)(a2 - 0x9F); /*0x990bec*/
  __asm { fxam } /*0x990bf2*/
  *(_WORD *)(a2 - 0xA0) = v7; /*0x990bf4*/
  HIBYTE(v10) = __ROL1__((char)(2 * *(_BYTE *)(a2 - 0x9F)) >> 1, 1); /*0x990c07*/
  _AL = HIBYTE(v10) & 0xF; /*0x990c0b*/
  __asm { xlat } /*0x990c0d*/
  v13 = _AL; /*0x990c0e*/
  LOBYTE(v10) = __ROL1__((char)(2 * v9) >> 1, 1); /*0x990c14*/
  _AL = v10 & 0xF; /*0x990c18*/
  __asm { xlat } /*0x990c1a*/
  return (*(int (__thiscall **)(int))((char)((4 * v13) | _AL) + a1 + 0x10))(v10 & 0x404);
}
