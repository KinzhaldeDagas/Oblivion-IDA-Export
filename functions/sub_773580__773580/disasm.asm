0x773580: mov     eax, ds:0B42838h
0x773585: test    eax, eax
0x773587: push    edi
0x773588: mov     edi, eax
0x77358A: jz      short loc_7735D6
0x77358C: push    esi
0x77358D: mov     esi, [edi+14h]
0x773590: test    esi, esi
0x773592: mov     dword ptr [eax+8], 0
0x773599: jz      short loc_7735C4
0x77359B: mov     eax, [esi]
0x77359D: test    eax, eax
0x77359F: jz      short loc_7735AD
0x7735A1: add     eax, 0FFFFFFFCh
0x7735A4: push    eax
0x7735A5: call    FormHeapFree
0x7735AA: add     esp, 4
0x7735AD: mov     ecx, [esi+8]
0x7735B0: test    ecx, ecx
0x7735B2: jz      short loc_7735BB
0x7735B4: push    1
0x7735B6: call    sub_7733B0
0x7735BB: push    esi
0x7735BC: call    FormHeapFree
0x7735C1: add     esp, 4
0x7735C4: mov     eax, [edi]
0x7735C6: push    eax
0x7735C7: call    FormHeapFree
0x7735CC: push    edi
0x7735CD: call    FormHeapFree
0x7735D2: add     esp, 8
0x7735D5: pop     esi
0x7735D6: pop     edi
0x7735D7: retn
