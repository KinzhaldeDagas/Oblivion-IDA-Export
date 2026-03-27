0x402B40: mov     eax, [ecx]
0x402B42: sub     esp, 0Ch
0x402B45: test    eax, eax
0x402B47: jz      short loc_402B4E
0x402B49: fld     dword ptr [eax+24h]
0x402B4C: jmp     short loc_402B54
0x402B4E: fld     ds:flt_A2F940
0x402B54: fstp    [esp+0Ch+var_C]
0x402B57: fld     [esp+0Ch+var_C]
0x402B5A: fnstcw  word ptr [esp+0Ch+var_C]
0x402B5D: movzx   eax, word ptr [esp+0Ch+var_C]
0x402B61: or      eax, 0C00h
0x402B66: mov     dword ptr [esp+0Ch+var_8], eax
0x402B6A: fldcw   word ptr [esp+0Ch+var_8]
0x402B6E: fistp   [esp+0Ch+var_8]
0x402B72: mov     eax, dword ptr [esp+0Ch+var_8]
0x402B76: fldcw   word ptr [esp+0Ch+var_C]
0x402B79: add     esp, 0Ch
0x402B7C: retn
