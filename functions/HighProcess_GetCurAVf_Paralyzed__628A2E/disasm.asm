0x628A2E: cmp     eax, 30h ; '0'
0x628A31: jnz     short HighProcess_GetCurAVf?___OtherAV
0x628A33: cmp     dword ptr [esi+298h], 0
0x628A3A: jge     short loc_628A52
0x628A3C: mov     edx, [esp+arg_C]
0x628A40: push    edx
0x628A41: push    eax
0x628A42: mov     eax, [esp+8+arg_4]
0x628A46: push    eax
0x628A47: call    MiddleProcess_GetAViCur
0x628A4C: mov     [esi+298h], eax
0x628A52: fild    dword ptr [esi+298h]
0x628A58: pop     esi
0x628A59: retn    0Ch
