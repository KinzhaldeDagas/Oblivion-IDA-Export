0x6F96B0: push    offset stru_B3F400; lpCriticalSection
0x6F96B5: call    dword ptr ds:0A2806Ch
0x6F96BB: call    dword ptr ds:0A2808Ch
0x6F96C1: add     dword ptr ds:0B3F47Ch, 1
0x6F96C8: mov     ecx, offset off_B252E8
0x6F96CD: mov     ds:0B3F478h, eax
0x6F96D2: call    sub_739670
0x6F96D7: cmp     word ptr ds:0B252F2h, 64h ; 'd'
0x6F96DF: jbe     short loc_6F96ED
0x6F96E1: push    64h ; 'd'
0x6F96E3: mov     ecx, offset off_B252E8
0x6F96E8: call    sub_6C4510
0x6F96ED: sub     dword ptr ds:0B3F47Ch, 1
0x6F96F4: jnz     short loc_6F9700
0x6F96F6: mov     dword ptr ds:0B3F478h, 0
0x6F9700: push    offset stru_B3F400; lpCriticalSection
0x6F9705: call    dword ptr ds:0A28074h
0x6F970B: retn
