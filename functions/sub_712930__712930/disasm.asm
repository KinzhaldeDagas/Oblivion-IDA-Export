0x712930: push    esi
0x712931: push    offset stru_B3FC00; lpCriticalSection
0x712936: mov     esi, ecx
0x712938: call    dword ptr ds:0A2806Ch
0x71293E: call    dword ptr ds:0A2808Ch
0x712944: add     dword ptr ds:0B3FC7Ch, 1
0x71294B: lea     ecx, [esi+204h]
0x712951: mov     ds:0B3FC78h, eax
0x712956: call    sub_8BCC50
0x71295B: sub     dword ptr ds:0B3FC7Ch, 1
0x712962: pop     esi
0x712963: jnz     short loc_71296F
0x712965: mov     dword ptr ds:0B3FC78h, 0
0x71296F: push    offset stru_B3FC00; lpCriticalSection
0x712974: call    dword ptr ds:0A28074h
0x71297A: retn
