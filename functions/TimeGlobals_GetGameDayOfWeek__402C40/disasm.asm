0x402C40: mov     eax, [ecx+10h]
0x402C43: sub     esp, 0Ch
0x402C46: test    eax, eax
0x402C48: jz      short loc_402C4F
0x402C4A: fld     dword ptr [eax+24h]
0x402C4D: jmp     short loc_402C51
0x402C4F: fld1
0x402C51: fstp    [esp+0Ch+var_C]
0x402C54: xor     edx, edx
0x402C56: fld     [esp+0Ch+var_C]
0x402C59: mov     ecx, 7
0x402C5E: fnstcw  word ptr [esp+0Ch+var_C]
0x402C61: movzx   eax, word ptr [esp+0Ch+var_C]
0x402C65: or      eax, 0C00h
0x402C6A: mov     dword ptr [esp+0Ch+var_8], eax
0x402C6E: fldcw   word ptr [esp+0Ch+var_8]
0x402C72: fistp   [esp+0Ch+var_8]
0x402C76: mov     eax, dword ptr [esp+0Ch+var_8]
0x402C7A: div     ecx
0x402C7C: fldcw   word ptr [esp+0Ch+var_C]
0x402C7F: mov     eax, edx
0x402C81: add     esp, 0Ch
0x402C84: retn
