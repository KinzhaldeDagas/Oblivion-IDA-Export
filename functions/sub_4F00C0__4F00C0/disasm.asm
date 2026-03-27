0x4F00C0: mov     ecx, [esp+arg_0]
0x4F00C4: push    ebx
0x4F00C5: xor     bl, bl
0x4F00C7: test    ecx, ecx
0x4F00C9: jz      short def_4F00E8; jumptable 004F00E8 default case, cases 11-17,19-22,25-27,29,33-36,38-40
0x4F00CB: mov     eax, [ecx]
0x4F00CD: mov     edx, [eax+170h]
0x4F00D3: call    edx
0x4F00D5: movzx   eax, byte ptr [eax+4]
0x4F00D9: add     eax, 0FFFFFFF6h; switch 32 cases
0x4F00DC: cmp     eax, 1Fh
0x4F00DF: ja      short def_4F00E8; jumptable 004F00E8 default case, cases 11-17,19-22,25-27,29,33-36,38-40
0x4F00E1: movzx   eax, ds:byte_4F0100[eax]
0x4F00E8: jmp     ds:jpt_4F00E8[eax*4]; switch jump
0x4F00EF: mov     bl, 1; jumptable 004F00E8 cases 10,18,23,24,28,30-32,37,41
0x4F00F1: mov     al, bl; jumptable 004F00E8 default case, cases 11-17,19-22,25-27,29,33-36,38-40
0x4F00F3: pop     ebx
0x4F00F4: retn
