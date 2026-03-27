0x46DF80: push    esi
0x46DF81: push    edi
0x46DF82: mov     esi, ecx
0x46DF84: cmp     dword ptr [esi+8], 0
0x46DF88: jnz     short loc_46DF90
0x46DF8A: cmp     dword ptr [esi+4], 0
0x46DF8E: jz      short loc_46DFCB
0x46DF90: mov     eax, [esi+8]
0x46DF93: test    eax, eax
0x46DF95: mov     edi, [esi+4]
0x46DF98: jz      short loc_46DFB9
0x46DF9A: mov     ecx, [eax+4]
0x46DF9D: mov     [esi+8], ecx
0x46DFA0: mov     edx, [eax]
0x46DFA2: push    eax
0x46DFA3: mov     [esi+4], edx
0x46DFA6: call    FormHeapFree
0x46DFAB: add     esp, 4
0x46DFAE: push    edi
0x46DFAF: call    FormHeapFree
0x46DFB4: add     esp, 4
0x46DFB7: jmp     short loc_46DF84
0x46DFB9: push    edi
0x46DFBA: mov     dword ptr [esi+4], 0
0x46DFC1: call    FormHeapFree
0x46DFC6: add     esp, 4
0x46DFC9: jmp     short loc_46DF84
0x46DFCB: pop     edi
0x46DFCC: lea     ecx, [esi+0Ch]
0x46DFCF: pop     esi
0x46DFD0: jmp     sub_46DE10
