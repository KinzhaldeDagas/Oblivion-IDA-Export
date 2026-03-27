0x65BE10: push    esi
0x65BE11: mov     esi, ecx
0x65BE13: push    8; Size
0x65BE15: mov     dword ptr [esi], 0
0x65BE1B: mov     dword ptr [esi+4], 0
0x65BE22: call    FormHeapAlloc
0x65BE27: add     esp, 4
0x65BE2A: test    eax, eax
0x65BE2C: jz      short loc_65BE38
0x65BE2E: fldz
0x65BE30: mov     byte ptr [eax], 0Ah
0x65BE33: fstp    dword ptr [eax+4]
0x65BE36: jmp     short loc_65BE3A
0x65BE38: xor     eax, eax
0x65BE3A: push    8; Size
0x65BE3C: mov     [esi+0Ch], eax
0x65BE3F: call    FormHeapAlloc
0x65BE44: add     esp, 4
0x65BE47: test    eax, eax
0x65BE49: jz      short loc_65BE61
0x65BE4B: fldz
0x65BE4D: mov     byte ptr [eax], 9
0x65BE50: fstp    dword ptr [eax+4]
0x65BE53: mov     [esi+8], eax
0x65BE56: mov     dword ptr [esi+10h], 0
0x65BE5D: mov     eax, esi
0x65BE5F: pop     esi
0x65BE60: retn
0x65BE61: xor     eax, eax
0x65BE63: mov     [esi+8], eax
0x65BE66: mov     [esi+10h], eax
0x65BE69: mov     eax, esi
0x65BE6B: pop     esi
0x65BE6C: retn
