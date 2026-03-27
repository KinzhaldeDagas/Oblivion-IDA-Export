0x47E020: cmp     byte ptr ds:0B069C3h, 0
0x47E027: jz      short loc_47E040
0x47E029: push    0; Time
0x47E02B: call    __time64
0x47E030: push    eax; Seed
0x47E031: call    _srand
0x47E036: add     esp, 8
0x47E039: mov     byte ptr ds:0B069C3h, 0
0x47E040: call    _rand
0x47E045: mov     ecx, eax
0x47E047: imul    ecx, [esp+arg_0]
0x47E04C: mov     eax, 80010003h
0x47E051: imul    ecx
0x47E053: add     edx, ecx
0x47E055: sar     edx, 0Eh
0x47E058: mov     eax, edx
0x47E05A: shr     eax, 1Fh
0x47E05D: add     eax, edx
0x47E05F: retn
