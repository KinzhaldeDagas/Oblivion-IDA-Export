0x56BAF0: push    offset stru_B3A600; lpCriticalSection
0x56BAF5: call    dword ptr ds:0A2806Ch
0x56BAFB: call    dword ptr ds:0A2808Ch
0x56BB01: add     dword ptr ds:0B3A67Ch, 1
0x56BB08: lea     ecx, [esp+a2]
0x56BB0C: mov     ds:0B3A678h, eax
0x56BB11: mov     eax, [esp+a2]
0x56BB15: push    ecx; a2
0x56BB16: mov     ecx, offset dword_B12B9C; this
0x56BB1B: mov     [esp+4+a2], eax
0x56BB1F: call    sub_73A5E0
0x56BB24: sub     dword ptr ds:0B3A67Ch, 1
0x56BB2B: jnz     short loc_56BB37
0x56BB2D: mov     dword ptr ds:0B3A678h, 0
0x56BB37: push    offset stru_B3A600; lpCriticalSection
0x56BB3C: call    dword ptr ds:0A28074h
0x56BB42: retn
