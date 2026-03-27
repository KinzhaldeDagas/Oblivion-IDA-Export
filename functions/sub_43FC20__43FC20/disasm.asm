0x43FC20: cmp     byte ptr ds:0B350D5h, 0
0x43FC27: push    esi
0x43FC28: mov     esi, ecx
0x43FC2A: jz      short loc_43FC39
0x43FC2C: call    nullsub_returnTrue_0arg
0x43FC31: test    al, al
0x43FC33: jz      loc_43FCC5
0x43FC39: push    3
0x43FC3B: call    nullsub_returnTrue_0arg
0x43FC40: add     esp, 4
0x43FC43: push    offset CriticalSection; lpCriticalSection
0x43FC48: call    dword ptr ds:0A2806Ch
0x43FC4E: call    dword ptr ds:0A2808Ch
0x43FC54: add     dword ptr ds:0B353FCh, 1
0x43FC5B: push    1
0x43FC5D: mov     ds:0B353F8h, eax
0x43FC62: call    sub_55E390
0x43FC67: add     esp, 4
0x43FC6A: call    sub_7B84E0
0x43FC6F: mov     ecx, ds:0B35300h
0x43FC75: test    ecx, ecx
0x43FC77: jz      short loc_43FC8E
0x43FC79: cmp     byte ptr [esi+0A9h], 0
0x43FC80: jnz     short loc_43FC89
0x43FC82: cmp     [esp+4+a2], 0
0x43FC87: jz      short loc_43FC8E
0x43FC89: call    sub_4A25F0
0x43FC8E: call    MemoryHeap_FreeUnusedPagesStart
0x43FC93: push    1
0x43FC95: call    sub_55E390
0x43FC9A: add     esp, 4
0x43FC9D: sub     dword ptr ds:0B353FCh, 1
0x43FCA4: jnz     short loc_43FCB0
0x43FCA6: mov     dword ptr ds:0B353F8h, 0
0x43FCB0: push    offset CriticalSection; lpCriticalSection
0x43FCB5: call    dword ptr ds:0A28074h
0x43FCBB: push    2
0x43FCBD: call    nullsub_returnTrue_0arg
0x43FCC2: add     esp, 4
0x43FCC5: pop     esi
0x43FCC6: retn    4
