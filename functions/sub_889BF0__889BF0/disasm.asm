0x889BF0: cmp     [esp+arg_0], 0
0x889BF5: push    esi
0x889BF6: mov     esi, ecx
0x889BF8: jz      short loc_889C1A
0x889BFA: mov     eax, [esi+0Ch]
0x889BFD: test    eax, eax
0x889BFF: jz      short loc_889C13
0x889C01: lea     ecx, [eax-0A0h]
0x889C07: test    ecx, ecx
0x889C09: jz      short loc_889C13
0x889C0B: mov     eax, [ecx]
0x889C0D: mov     edx, [eax]
0x889C0F: push    1
0x889C11: call    edx
0x889C13: mov     dword ptr [esi+0Ch], 0
0x889C1A: pop     esi
0x889C1B: retn    4
