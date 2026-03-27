0x75E370: push    offset stru_B41D80; lpCriticalSection
0x75E375: call    dword ptr ds:0A2806Ch
0x75E37B: call    dword ptr ds:0A2808Ch
0x75E381: add     dword ptr ds:0B41DFCh, 1
0x75E388: lea     ecx, [esp+a2]
0x75E38C: mov     ds:0B41DF8h, eax
0x75E391: mov     eax, [esp+a2]
0x75E395: push    ecx; a2
0x75E396: mov     ecx, offset dword_B28C5C; this
0x75E39B: mov     [esp+4+a2], eax
0x75E39F: call    sub_73A5E0
0x75E3A4: sub     dword ptr ds:0B41DFCh, 1
0x75E3AB: jnz     short loc_75E3B7
0x75E3AD: mov     dword ptr ds:0B41DF8h, 0
0x75E3B7: push    offset stru_B41D80; lpCriticalSection
0x75E3BC: call    dword ptr ds:0A28074h
0x75E3C2: retn
