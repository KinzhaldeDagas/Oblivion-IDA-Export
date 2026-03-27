0x982BBF: push    ebp
0x982BC0: mov     ebp, esp
0x982BC2: cmp     dword ptr ds:0BA9E10h, 0
0x982BC9: push    1; int
0x982BCB: push    [ebp+Radix]; int
0x982BCE: push    [ebp+EndPtr]; char **
0x982BD1: push    [ebp+Str]; char *
0x982BD4: jnz     short loc_982BDD
0x982BD6: push    offset off_B319A0
0x982BDB: jmp     short loc_982BDF
0x982BDD: push    0; struct localeinfo_struct *
0x982BDF: call    ?strtoxl@@YAKPAUlocaleinfo_struct@@PBDPAPBDHH@Z
0x982BE4: add     esp, 14h
0x982BE7: pop     ebp
0x982BE8: retn
