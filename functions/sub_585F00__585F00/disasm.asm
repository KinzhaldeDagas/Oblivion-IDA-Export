0x585F00: push    esi
0x585F01: push    edi
0x585F02: push    10h; Size
0x585F04: call    FormHeapAlloc
0x585F09: xor     edi, edi
0x585F0B: add     esp, 4
0x585F0E: cmp     eax, edi
0x585F10: jz      short loc_585F21
0x585F12: mov     [eax+8], edi
0x585F15: mov     [eax+0Ch], di
0x585F19: mov     [eax+0Eh], di
0x585F1D: mov     esi, eax
0x585F1F: jmp     short loc_585F23
0x585F21: xor     esi, esi
0x585F23: mov     eax, [esi+8]
0x585F26: push    eax
0x585F27: call    FormHeapFree
0x585F2C: add     esp, 4
0x585F2F: mov     [esi+8], edi
0x585F32: mov     [esi+0Eh], di
0x585F36: mov     [esi+0Ch], di
0x585F3A: pop     edi
0x585F3B: mov     eax, esi
0x585F3D: pop     esi
0x585F3E: retn
