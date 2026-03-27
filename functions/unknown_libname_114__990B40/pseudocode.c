int __usercall unknown_libname_114@<eax>(
        int a1@<edx>,
        __int16 a2@<cx>,
        int a3@<ebp>,
        __int16 a4@<fpstat>,
        double _ST7@<st0>)
{
  __int16 v5; // bx

  if ( *(_BYTE *)(a1 + 0xE) == 5 )
  {
    HIBYTE(v5) = HIBYTE(*(_WORD *)(a3 - 0xA4)) & 0xFC | 2;
    LOBYTE(v5) = 0x3F;
  }
  else
  {
    v5 = 0x133F;
  }
  *(_WORD *)(a3 - 0xA2) = v5;
  _EBX = &unk_B319CC;
  __asm { fxam }
  *(_DWORD *)(a3 - 0x94) = a1;
  *(_WORD *)(a3 - 0xA0) = a4;
  *(_BYTE *)(a3 - 0x90) = 0;
  LOBYTE(a2) = __ROL1__((char)(2 * *(_BYTE *)(a3 - 0x9F)) >> 1, 1);
  _AL = a2 & 0xF;
  __asm { xlat }
  return (*(int (__thiscall **)(int))(_AL + a1 + 0x10))(a2 & 0x404);
}
