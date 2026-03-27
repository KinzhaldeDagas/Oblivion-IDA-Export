0x468740: push    esi
0x468741: push    edi
0x468742: mov     esi, ecx
0x468744: cmp     dword ptr [esi+8], 0
0x468748: jnz     short loc_468750
0x46874A: cmp     dword ptr [esi+4], 0
0x46874E: jz      short loc_46878B
0x468750: mov     eax, [esi+8]
0x468753: test    eax, eax
0x468755: mov     edi, [esi+4]
0x468758: jz      short loc_468779
0x46875A: mov     ecx, [eax+4]
0x46875D: mov     [esi+8], ecx
0x468760: mov     edx, [eax]
0x468762: push    eax
0x468763: mov     [esi+4], edx
0x468766: call    FormHeapFree
0x46876B: add     esp, 4
0x46876E: push    edi
0x46876F: call    FormHeapFree
0x468774: add     esp, 4
0x468777: jmp     short loc_468744
0x468779: push    edi
0x46877A: mov     dword ptr [esi+4], 0
0x468781: call    FormHeapFree
0x468786: add     esp, 4
0x468789: jmp     short loc_468744
0x46878B: pop     edi
0x46878C: pop     esi
0x46878D: retn
