0x5053B0: mov     eax, [esp+arg_8]
0x5053B4: test    eax, eax
0x5053B6: jnz     short loc_5053BB
0x5053B8: xor     al, al
0x5053BA: retn
0x5053BB: mov     ecx, [esp+arg_18]
0x5053BF: push    ecx
0x5053C0: push    0
0x5053C2: push    0
0x5053C4: push    eax
0x5053C5: call    sub_4F56D0
0x5053CA: add     esp, 10h
0x5053CD: retn
