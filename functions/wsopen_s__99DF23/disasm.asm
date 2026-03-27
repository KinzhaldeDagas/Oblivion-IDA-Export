0x99DF23: push    ebp
0x99DF24: mov     ebp, esp
0x99DF26: push    1; int
0x99DF28: push    [ebp+arg_0]; int
0x99DF2B: push    [ebp+arg_10]; int
0x99DF2E: push    [ebp+arg_C]; int
0x99DF31: push    [ebp+arg_8]; int
0x99DF34: push    [ebp+lpFileName]; lpFileName
0x99DF37: call    __wsopen_helper
0x99DF3C: add     esp, 18h
0x99DF3F: pop     ebp
0x99DF40: retn
