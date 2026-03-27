0x402C90: mov     eax, [ecx+10h]
0x402C93: sub     esp, 0Ch
0x402C96: test    eax, eax
0x402C98: jz      short loc_402C9F
0x402C9A: fld     dword ptr [eax+24h]
0x402C9D: jmp     short loc_402CA1
0x402C9F: fld1
0x402CA1: fstp    [esp+0Ch+var_C]
0x402CA4: xor     edx, edx
0x402CA6: fld     [esp+0Ch+var_C]
0x402CA9: mov     ecx, 7
0x402CAE: fnstcw  word ptr [esp+0Ch+var_C]
0x402CB1: movzx   eax, word ptr [esp+0Ch+var_C]
0x402CB5: or      eax, 0C00h
0x402CBA: mov     dword ptr [esp+0Ch+var_8], eax
0x402CBE: fldcw   word ptr [esp+0Ch+var_8]
0x402CC2: fistp   [esp+0Ch+var_8]
0x402CC6: mov     eax, dword ptr [esp+0Ch+var_8]
0x402CCA: div     ecx
0x402CCC: fldcw   word ptr [esp+0Ch+var_C]
0x402CCF: cmp     edx, 0FFFFFFFFh
0x402CD2: jz      short loc_402CEF
0x402CD4: cmp     edx, ecx
0x402CD6: jge     short loc_402CEF
0x402CD8: mov     edx, off_B06FD4[edx*4]
0x402CDF: test    edx, edx
0x402CE1: jz      short loc_402CE9
0x402CE3: mov     eax, [edx]
0x402CE5: add     esp, 0Ch
0x402CE8: retn
0x402CE9: xor     eax, eax
0x402CEB: add     esp, 0Ch
0x402CEE: retn
0x402CEF: mov     eax, offset aBadDay; "Bad Day"
0x402CF4: add     esp, 0Ch
0x402CF7: retn
