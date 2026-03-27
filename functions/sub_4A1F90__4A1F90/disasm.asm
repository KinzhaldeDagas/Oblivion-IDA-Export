0x4A1F90: push    ecx
0x4A1F91: push    esi
0x4A1F92: push    offset CriticalSection; lpCriticalSection
0x4A1F97: mov     esi, ecx
0x4A1F99: call    dword ptr ds:0A2806Ch
0x4A1F9F: call    dword ptr ds:0A2808Ch
0x4A1FA5: add     dword ptr ds:0B353FCh, 1
0x4A1FAC: mov     ds:0B353F8h, eax
0x4A1FB1: mov     eax, [esp+8+arg_4]
0x4A1FB5: test    eax, eax
0x4A1FB7: push    ecx
0x4A1FB8: mov     ecx, esp
0x4A1FBA: mov     [esp+0Ch+var_4], esp
0x4A1FBE: mov     [ecx], eax
0x4A1FC0: jz      short loc_4A1FCC
0x4A1FC2: add     eax, 4
0x4A1FC5: push    eax; lpAddend
0x4A1FC6: call    dword ptr ds:0A28078h
0x4A1FCC: mov     eax, [esp+0Ch+arg_0]
0x4A1FD0: mov     ecx, [esi+8]
0x4A1FD3: push    eax
0x4A1FD4: call    sub_6AA3B0
0x4A1FD9: sub     dword ptr ds:0B353FCh, 1
0x4A1FE0: jnz     short loc_4A1FEC
0x4A1FE2: mov     dword ptr ds:0B353F8h, 0
0x4A1FEC: push    offset CriticalSection; lpCriticalSection
0x4A1FF1: call    dword ptr ds:0A28074h
0x4A1FF7: pop     esi
0x4A1FF8: pop     ecx
0x4A1FF9: retn    8
