int __usercall unknown_libname_114@<eax>(
        int a1@<edx>,
        __int16 a2@<cx>,
        int a3@<ebp>,
        __int16 a4@<fpstat>,
        double _ST7@<st0>)
{
  __int16 v5; // bx

  if ( *(_BYTE *)(a1 + 0xE) == 5 ) /*0x990b44*/
  {
    HIBYTE(v5) = HIBYTE(*(_WORD *)(a3 - 0xA4)) & 0xFC | 2; /*0x990b50*/
    LOBYTE(v5) = 0x3F; /*0x990b53*/
  }
  else
  {
    v5 = 0x133F; /*0x990b57*/
  }
  *(_WORD *)(a3 - 0xA2) = v5; /*0x990b5b*/
  _EBX = &unk_B319CC; /*0x990b68*/
  __asm { fxam } /*0x990b6d*/
  *(_DWORD *)(a3 - 0x94) = a1; /*0x990b6f*/
  *(_WORD *)(a3 - 0xA0) = a4; /*0x990b75*/
  *(_BYTE *)(a3 - 0x90) = 0; /*0x990b7c*/
  LOBYTE(a2) = __ROL1__((char)(2 * *(_BYTE *)(a3 - 0x9F)) >> 1, 1); /*0x990b8e*/
  _AL = a2 & 0xF; /*0x990b92*/
  __asm { xlat } /*0x990b94*/
  return (*(int (__thiscall **)(int))(_AL + a1 + 0x10))(a2 & 0x404);
}
