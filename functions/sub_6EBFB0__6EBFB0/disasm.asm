0x6EBFB0: push    offset stru_B3EC80; lpCriticalSection
0x6EBFB5: call    dword ptr ds:0A2806Ch
0x6EBFBB: call    dword ptr ds:0A2808Ch
0x6EBFC1: add     dword ptr ds:0B3ECFCh, 1
0x6EBFC8: lea     ecx, [esp+a2]
0x6EBFCC: mov     ds:0B3ECF8h, eax
0x6EBFD1: mov     eax, [esp+a2]
0x6EBFD5: push    ecx; a2
0x6EBFD6: mov     ecx, offset dword_B24FE8; this
0x6EBFDB: mov     [esp+4+a2], eax
0x6EBFDF: call    sub_73A5E0
0x6EBFE4: sub     dword ptr ds:0B3ECFCh, 1
0x6EBFEB: jnz     short loc_6EBFF7
0x6EBFED: mov     dword ptr ds:0B3ECF8h, 0
0x6EBFF7: push    offset stru_B3EC80; lpCriticalSection
0x6EBFFC: call    dword ptr ds:0A28074h
0x6EC002: retn
