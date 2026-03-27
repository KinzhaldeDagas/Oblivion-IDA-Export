0x402C00: mov     eax, [ecx+10h]
0x402C03: sub     esp, 0Ch
0x402C06: test    eax, eax
0x402C08: jz      short loc_402C0F
0x402C0A: fld     dword ptr [eax+24h]
0x402C0D: jmp     short loc_402C11
0x402C0F: fld1
0x402C11: fstp    [esp+0Ch+var_C]
0x402C14: fld     [esp+0Ch+var_C]
0x402C17: fnstcw  word ptr [esp+0Ch+var_C]
0x402C1A: movzx   eax, word ptr [esp+0Ch+var_C]
0x402C1E: or      eax, 0C00h
0x402C23: mov     dword ptr [esp+0Ch+var_8], eax
0x402C27: fldcw   word ptr [esp+0Ch+var_8]
0x402C2B: fistp   [esp+0Ch+var_8]
0x402C2F: mov     eax, dword ptr [esp+0Ch+var_8]
0x402C33: fldcw   word ptr [esp+0Ch+var_C]
0x402C36: add     esp, 0Ch
0x402C39: retn
