0x7734A0: push    18h; Size
0x7734A2: call    FormHeapAlloc
0x7734A7: xor     ecx, ecx
0x7734A9: add     esp, 4
0x7734AC: cmp     eax, ecx
0x7734AE: jz      short loc_7734CC
0x7734B0: mov     edx, 8
0x7734B5: mov     [eax], ecx
0x7734B7: mov     [eax+4], ecx
0x7734BA: mov     [eax+8], ecx
0x7734BD: mov     [eax+0Ch], edx
0x7734C0: mov     [eax+10h], edx
0x7734C3: mov     [eax+14h], ecx
0x7734C6: mov     ds:0B42838h, eax
0x7734CB: retn
0x7734CC: mov     ds:0B42838h, ecx
0x7734D2: retn
