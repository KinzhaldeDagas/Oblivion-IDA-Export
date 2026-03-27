0x982B96: push    ebp
0x982B97: mov     ebp, esp
0x982B99: xor     eax, eax
0x982B9B: cmp     ds:0BA9E10h, eax
0x982BA1: push    eax; int
0x982BA2: push    [ebp+Radix]; int
0x982BA5: push    [ebp+EndPtr]; char **
0x982BA8: push    [ebp+Str]; char *
0x982BAB: jnz     short loc_982BB4
0x982BAD: push    offset off_B319A0
0x982BB2: jmp     short loc_982BB5
0x982BB4: push    eax; struct localeinfo_struct *
0x982BB5: call    ?strtoxl@@YAKPAUlocaleinfo_struct@@PBDPAPBDHH@Z
0x982BBA: add     esp, 14h
0x982BBD: pop     ebp
0x982BBE: retn
