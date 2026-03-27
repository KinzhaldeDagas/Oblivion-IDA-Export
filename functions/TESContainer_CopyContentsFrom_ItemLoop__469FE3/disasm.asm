0x469FE3: mov     eax, [esi]
0x469FE5: test    eax, eax
0x469FE7: jz      short TESContainer_CopyContentsFrom___ItemLoop_next
0x469FE9: mov     ecx, [eax]
0x469FEB: mov     edx, [eax+4]
0x469FEE: push    0; a4
0x469FF0: push    ecx; a3
0x469FF1: push    edx; a2
0x469FF2: mov     ecx, edi; this
0x469FF4: call    TESContainer_AddValidatedForm
