0x405AD0: push    ecx
0x405AD1: mov     eax, [ecx+100h]
0x405AD7: test    eax, eax
0x405AD9: push    esi
0x405ADA: mov     esi, [esp+8+arg_0]
0x405ADE: mov     [esp+8+var_4], 0
0x405AE6: mov     [esi], eax
0x405AE8: jz      short loc_405AF4
0x405AEA: add     eax, 4
0x405AED: push    eax; lpAddend
0x405AEE: call    ds:InterlockedIncrement
0x405AF4: mov     eax, esi
0x405AF6: pop     esi
0x405AF7: pop     ecx
0x405AF8: retn    4
