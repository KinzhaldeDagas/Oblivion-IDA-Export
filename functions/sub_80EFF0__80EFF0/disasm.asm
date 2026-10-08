0x80EFF0: push    esi; SpeedTreeBranchShader load dispatch virtual +0x8C. Calls inherited thunk +0xA8, which loads branch 1x vertex/pixel programs through +0xAC/+0xB0; ShaderPackage>=2 also calls inherited +0xC4/+0xC8 loaders.
0x80EFF1: mov     esi, ecx
0x80EFF3: mov     eax, [esi]
0x80EFF5: mov     edx, [eax+0A8h]
0x80EFFB: call    edx
0x80EFFD: mov     eax, [esi]
0x80EFFF: mov     edx, [eax+0C4h]
0x80F005: mov     ecx, esi
0x80F007: call    edx
0x80F009: cmp     dword ptr ds:0B42F48h, 2
0x80F010: jl      short loc_80F01F
0x80F012: mov     eax, [esi]
0x80F014: mov     edx, [eax+0C8h]
0x80F01A: mov     ecx, esi
0x80F01C: pop     esi
0x80F01D: jmp     edx
0x80F01F: pop     esi
0x80F020: retn
