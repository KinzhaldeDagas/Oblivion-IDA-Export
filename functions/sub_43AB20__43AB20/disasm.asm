0x43AB20: push    ebx
0x43AB21: mov     ebx, [esp+4+arg_0]
0x43AB25: push    esi
0x43AB26: push    edi
0x43AB27: mov     edi, [ebx+4]
0x43AB2A: test    edi, edi
0x43AB2C: mov     esi, ecx
0x43AB2E: jz      short loc_43AB53
0x43AB30: lea     eax, [edi+8]
0x43AB33: push    eax; lpAddend
0x43AB34: call    ds:InterlockedDecrement
0x43AB3A: test    eax, eax
0x43AB3C: jnz     short loc_43AB4C
0x43AB3E: test    edi, edi
0x43AB40: jz      short loc_43AB4C
0x43AB42: mov     edx, [edi]
0x43AB44: mov     eax, [edx]
0x43AB46: push    1
0x43AB48: mov     ecx, edi
0x43AB4A: call    eax
0x43AB4C: mov     dword ptr [ebx+4], 0
0x43AB53: mov     ecx, [esi+1Ch]
0x43AB56: mov     [ebx+4], ecx
0x43AB59: add     dword ptr [esi+20h], 1
0x43AB5D: mov     eax, [esi+20h]
0x43AB60: mov     edx, [esi]
0x43AB62: mov     [esi+1Ch], ebx
0x43AB65: cmp     eax, [edx+10h]
0x43AB68: jnz     short loc_43AB71
0x43AB6A: mov     ecx, esi
0x43AB6C: call    sub_43A3F0
0x43AB71: pop     edi
0x43AB72: pop     esi
0x43AB73: pop     ebx
0x43AB74: retn    4
