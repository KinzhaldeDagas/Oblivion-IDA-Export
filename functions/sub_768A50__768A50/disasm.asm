0x768A50: mov     eax, [esp+arg_4]
0x768A54: push    ebx
0x768A55: mov     ebx, [esp+4+arg_0]
0x768A59: push    ebp
0x768A5A: mov     ebp, ds:0A2807Ch
0x768A60: push    esi
0x768A61: push    edi
0x768A62: mov     edi, [esp+10h+arg_8]
0x768A66: mov     [ebx+4], eax
0x768A69: mov     esi, [ebx+8]
0x768A6C: cmp     esi, edi
0x768A6E: jz      short loc_768A9D
0x768A70: test    esi, esi
0x768A72: jz      short loc_768A8C
0x768A74: lea     ecx, [esi+4]
0x768A77: push    ecx; lpAddend
0x768A78: call    ebp ; InterlockedDecrement
0x768A7A: test    eax, eax
0x768A7C: jnz     short loc_768A8C
0x768A7E: test    esi, esi
0x768A80: jz      short loc_768A8C
0x768A82: mov     edx, [esi]
0x768A84: mov     eax, [edx]
0x768A86: push    1
0x768A88: mov     ecx, esi
0x768A8A: call    eax
0x768A8C: test    edi, edi
0x768A8E: mov     [ebx+8], edi
0x768A91: jz      short loc_768AB5
0x768A93: lea     ecx, [edi+4]
0x768A96: push    ecx; lpAddend
0x768A97: call    dword ptr ds:0A28078h
0x768A9D: test    edi, edi
0x768A9F: jz      short loc_768AB5
0x768AA1: lea     edx, [edi+4]
0x768AA4: push    edx; lpAddend
0x768AA5: call    ebp ; InterlockedDecrement
0x768AA7: test    eax, eax
0x768AA9: jnz     short loc_768AB5
0x768AAB: mov     eax, [edi]
0x768AAD: mov     edx, [eax]
0x768AAF: push    1
0x768AB1: mov     ecx, edi
0x768AB3: call    edx
0x768AB5: pop     edi
0x768AB6: pop     esi
0x768AB7: pop     ebp
0x768AB8: pop     ebx
0x768AB9: retn    0Ch
