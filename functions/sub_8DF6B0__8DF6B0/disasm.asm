0x8DF6B0: push    ebp
0x8DF6B1: mov     ebp, esp
0x8DF6B3: and     esp, 0FFFFFFF0h
0x8DF6B6: mov     eax, 3074h
0x8DF6BB: call    __alloca_probe
0x8DF6C0: push    ebx
0x8DF6C1: mov     ebx, [ebp+arg_0]
0x8DF6C4: push    esi
0x8DF6C5: push    edi
0x8DF6C6: lea     edi, [ecx+0C0h]
0x8DF6CC: mov     ecx, [ebx+8]
0x8DF6CF: lea     eax, [esp+3080h+var_3074]
0x8DF6D3: push    eax; int
0x8DF6D4: push    ecx; int
0x8DF6D5: mov     ecx, edi; lpCriticalSection
0x8DF6D7: mov     [esp+3088h+lpCriticalSection], edi
0x8DF6DB: call    sub_926090
0x8DF6E0: test    eax, eax
0x8DF6E2: jnz     loc_8DF9DF
0x8DF6E8: jmp     short def_8DF6FA; jumptable 008DF6FA default case, cases 1-3
