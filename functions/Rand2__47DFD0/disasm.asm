0x47DFD0: cmp     byte ptr ds:0B069C3h, 0
0x47DFD7: jz      short loc_47DFF0
0x47DFD9: push    0; Time
0x47DFDB: call    __time64
0x47DFE0: push    eax; Seed
0x47DFE1: call    _srand
0x47DFE6: add     esp, 8
0x47DFE9: mov     byte ptr ds:0B069C3h, 0
0x47DFF0: push    esi
0x47DFF1: call    _rand
0x47DFF6: mov     esi, [esp+4+arg_0]
0x47DFFA: mov     ecx, eax
0x47DFFC: mov     eax, [esp+4+arg_4]
0x47E000: sub     eax, esi
0x47E002: imul    ecx, eax
0x47E005: mov     eax, 80010003h
0x47E00A: imul    ecx
0x47E00C: add     edx, ecx
0x47E00E: sar     edx, 0Eh
0x47E011: mov     eax, edx
0x47E013: shr     eax, 1Fh
0x47E016: add     eax, edx
0x47E018: add     eax, esi
0x47E01A: pop     esi
0x47E01B: retn
