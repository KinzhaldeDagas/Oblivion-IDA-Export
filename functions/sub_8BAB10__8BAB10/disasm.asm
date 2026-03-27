0x8BAB10: mov     eax, [esp+arg_4]
0x8BAB14: push    esi
0x8BAB15: mov     esi, ecx
0x8BAB17: mov     ecx, [esp+4+arg_0]
0x8BAB1B: mov     byte ptr [esi+10h], 1
0x8BAB1F: mov     edx, [esi]
0x8BAB21: mov     [esi+4], eax
0x8BAB24: mov     [esi+8], ecx
0x8BAB27: mov     ecx, [edx+8]
0x8BAB2A: mov     eax, [ecx]
0x8BAB2C: push    edi
0x8BAB2D: call    dword ptr [eax+10h]
0x8BAB30: mov     eax, [esi+104h]
0x8BAB36: xor     edi, edi
0x8BAB38: test    eax, eax
0x8BAB3A: jle     short loc_8BAB58
0x8BAB3C: push    ebx
0x8BAB3D: lea     ebx, [esi+24h]
0x8BAB40: push    1; lReleaseCount
0x8BAB42: mov     ecx, ebx
0x8BAB44: call    ReleaseSemaphore_0
0x8BAB49: mov     eax, [esi+104h]
0x8BAB4F: inc     edi
0x8BAB50: add     ebx, 28h ; '('
0x8BAB53: cmp     edi, eax
0x8BAB55: jl      short loc_8BAB40
0x8BAB57: pop     ebx
0x8BAB58: pop     edi
0x8BAB59: pop     esi
0x8BAB5A: retn    8
