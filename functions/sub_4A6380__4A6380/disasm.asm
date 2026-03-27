0x4A6380: push    esi
0x4A6381: mov     esi, ecx
0x4A6383: push    edi
0x4A6384: mov     edi, [esi+4]
0x4A6387: test    edi, edi
0x4A6389: jz      short loc_4A63D0
0x4A638B: jmp     short loc_4A6390
0x4A638D: align 10h
0x4A6390: mov     eax, [esi+8]
0x4A6393: test    eax, eax
0x4A6395: jz      short loc_4A63AD
0x4A6397: mov     ecx, [eax+4]
0x4A639A: mov     [esi+8], ecx
0x4A639D: mov     edx, [eax]
0x4A639F: push    eax
0x4A63A0: mov     [esi+4], edx
0x4A63A3: call    FormHeapFree
0x4A63A8: add     esp, 4
0x4A63AB: jmp     short loc_4A63B4
0x4A63AD: mov     dword ptr [esi+4], 0
0x4A63B4: cmp     byte ptr [esi+0Ch], 0
0x4A63B8: jz      short loc_4A63C9
0x4A63BA: test    edi, edi
0x4A63BC: jz      short loc_4A63C9
0x4A63BE: mov     eax, [edi]
0x4A63C0: mov     edx, [eax+10h]
0x4A63C3: push    1
0x4A63C5: mov     ecx, edi
0x4A63C7: call    edx
0x4A63C9: mov     edi, [esi+4]
0x4A63CC: test    edi, edi
0x4A63CE: jnz     short loc_4A6390
0x4A63D0: pop     edi
0x4A63D1: pop     esi
0x4A63D2: retn
