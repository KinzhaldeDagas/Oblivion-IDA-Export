0x402DC0: mov     eax, [ecx+4]
0x402DC3: push    esi
0x402DC4: xor     esi, esi
0x402DC6: test    eax, eax
0x402DC8: jz      short loc_402DE8
0x402DCA: fld     dword ptr [eax+24h]
0x402DCD: call    Double_To_SInt32
0x402DD2: movsx   eax, al
0x402DD5: cmp     eax, 0Bh; switch 12 cases
0x402DD8: ja      short def_402DE1; jumptable 00402DE1 default case
0x402DDA: movzx   eax, ds:byte_402E20[eax]
0x402DE1: jmp     ds:jpt_402DE1[eax*4]; switch jump
0x402DE8: mov     eax, 7
0x402DED: jmp     short loc_402DDA
0x402DEF: mov     esi, 3; jumptable 00402DE1 cases 0,1,11
0x402DF4: mov     eax, esi
0x402DF6: pop     esi
0x402DF7: retn
0x402DF8: xor     esi, esi; jumptable 00402DE1 cases 2-4
0x402DFA: mov     eax, esi
0x402DFC: pop     esi
0x402DFD: retn
0x402DFE: mov     esi, 1; jumptable 00402DE1 cases 5-7
0x402E03: mov     eax, esi
0x402E05: pop     esi
0x402E06: retn
0x402E07: mov     esi, 2; jumptable 00402DE1 cases 8-10
0x402E0C: mov     eax, esi; jumptable 00402DE1 default case
0x402E0E: pop     esi
0x402E0F: retn
