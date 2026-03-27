0x4E0CF0: mov     eax, [esp+arg_0]
0x4E0CF4: push    esi
0x4E0CF5: xor     esi, esi
0x4E0CF7: test    eax, eax
0x4E0CF9: jz      short loc_4E0D58
0x4E0CFB: push    eax
0x4E0CFC: call    sub_4DC270
0x4E0D01: add     esp, 4
0x4E0D04: test    eax, eax
0x4E0D06: jz      short loc_4E0D58
0x4E0D08: mov     edx, [eax]
0x4E0D0A: mov     ecx, eax
0x4E0D0C: mov     eax, [edx+170h]
0x4E0D12: call    eax
0x4E0D14: movzx   eax, byte ptr [eax+4]
0x4E0D18: add     eax, 0FFFFFFEEh; switch 22 cases
0x4E0D1B: cmp     eax, 15h
0x4E0D1E: ja      short def_4E0D27; jumptable 004E0D27 default case, cases 19,21,26,29-31,37,38
0x4E0D20: movzx   ecx, ds:byte_4E0D74[eax]
0x4E0D27: jmp     ds:jpt_4E0D27[ecx*4]; switch jump
0x4E0D2E: mov     eax, 1; jumptable 004E0D27 cases 18,24,28
0x4E0D33: pop     esi
0x4E0D34: retn
0x4E0D35: mov     eax, 2; jumptable 004E0D27 cases 23,32
0x4E0D3A: pop     esi
0x4E0D3B: retn
0x4E0D3C: mov     eax, 3; jumptable 004E0D27 cases 35,36
0x4E0D41: pop     esi
0x4E0D42: retn
0x4E0D43: mov     eax, 4; jumptable 004E0D27 cases 20,22,33,34
0x4E0D48: pop     esi
0x4E0D49: retn
0x4E0D4A: mov     eax, 5; jumptable 004E0D27 cases 25,27,39
0x4E0D4F: pop     esi
0x4E0D50: retn
0x4E0D51: mov     eax, 6; jumptable 004E0D27 default case, cases 19,21,26,29-31,37,38
0x4E0D56: pop     esi
0x4E0D57: retn
0x4E0D58: mov     eax, esi
0x4E0D5A: pop     esi
0x4E0D5B: retn
