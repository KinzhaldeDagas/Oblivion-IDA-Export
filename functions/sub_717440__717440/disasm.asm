0x717440: push    ebp
0x717441: mov     ebp, esp
0x717443: push    ecx
0x717444: movzx   eax, byte ptr ds:0B3FCCCh
0x71744B: test    eax, eax
0x71744D: jnz     short loc_717454
0x71744F: call    sub_7170D0
0x717454: push    offset sub_717280
0x717459: call    sub_716F30
0x71745E: add     esp, 4
0x717461: push    offset sub_717370
0x717466: call    sub_716F20
0x71746B: add     esp, 4
0x71746E: mov     ecx, ds:0B3FCC8h
0x717474: mov     [ebp+var_4], ecx
0x717477: cmp     [ebp+var_4], 0
0x71747B: jle     short loc_7174A1
0x71747D: cmp     [ebp+var_4], 6
0x717481: jle     short loc_717487
0x717483: jmp     short loc_7174A1
0x717485: jmp     short loc_7174A1
0x717487: push    offset sub_716FC0
0x71748C: call    sub_716F30
0x717491: add     esp, 4
0x717494: push    offset sub_716F40
0x717499: call    sub_716F20
0x71749E: add     esp, 4
0x7174A1: mov     esp, ebp
0x7174A3: pop     ebp
0x7174A4: retn
