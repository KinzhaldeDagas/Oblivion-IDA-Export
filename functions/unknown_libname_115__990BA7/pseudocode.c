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

  if ( *(_BYTE *)(a1 + 0xE) == 5 )
  {
    HIBYTE(v5) = HIBYTE(*(_WORD *)(a2 - 0xA4)) & 0xFC | 2;
    LOBYTE(v5) = 0x3F;
  }
  else
  {
    v5 = 0x133F;
  }
  *(_WORD *)(a2 - 0xA2) = v5;
  _EBX = &unk_B319CC;
  __asm { fxam }
  *(_DWORD *)(a2 - 0x94) = a1;
  *(_WORD *)(a2 - 0xA0) = a3;
  *(_BYTE *)(a2 - 0x90) = 0;
  _ST6 = a5;
  v9 = *(_BYTE *)(a2 - 0x9F);
  __asm { fxam }
  *(_WORD *)(a2 - 0xA0) = v7;
  HIBYTE(v10) = __ROL1__((char)(2 * *(_BYTE *)(a2 - 0x9F)) >> 1, 1);
  _AL = HIBYTE(v10) & 0xF;
  __asm { xlat }
  v13 = _AL;
  LOBYTE(v10) = __ROL1__((char)(2 * v9) >> 1, 1);
  _AL = v10 & 0xF;
  __asm { xlat }
  return (*(int (__thiscall **)(int))((char)((4 * v13) | _AL) + a1 + 0x10))(v10 & 0x404);
}
