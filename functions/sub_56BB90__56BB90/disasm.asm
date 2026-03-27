0x56BB90: push    offset stru_B3A600; lpCriticalSection
0x56BB95: call    dword ptr ds:0A2806Ch
0x56BB9B: call    dword ptr ds:0A2808Ch
0x56BBA1: add     dword ptr ds:0B3A67Ch, 1
0x56BBA8: cmp     dword ptr ds:0B12BA4h, 0
0x56BBAF: mov     ds:0B3A678h, eax
0x56BBB4: jnz     short loc_56BBD5
0x56BBB6: mov     eax, ds:0B12BA8h
0x56BBBB: push    eax
0x56BBBC: mov     ecx, offset dword_B12B9C
0x56BBC1: call    sub_56BA20
0x56BBC6: mov     ecx, ds:0B12BA8h
0x56BBCC: lea     edx, [ecx+ecx]
0x56BBCF: mov     ds:0B12BA8h, edx
0x56BBD5: mov     ecx, ds:0B12BA4h
0x56BBDB: mov     eax, ds:0B12B9Ch
0x56BBE0: sub     ecx, 1
0x56BBE3: push    esi
0x56BBE4: mov     esi, [eax]
0x56BBE6: mov     ds:0B12BA4h, ecx
0x56BBEC: mov     ecx, [eax+ecx*4]
0x56BBEF: mov     [eax], ecx
0x56BBF1: sub     dword ptr ds:0B3A67Ch, 1
0x56BBF8: jnz     short loc_56BC04
0x56BBFA: mov     dword ptr ds:0B3A678h, 0
0x56BC04: push    offset stru_B3A600; lpCriticalSection
0x56BC09: call    dword ptr ds:0A28074h
0x56BC0F: mov     eax, esi
0x56BC11: pop     esi
0x56BC12: retn
