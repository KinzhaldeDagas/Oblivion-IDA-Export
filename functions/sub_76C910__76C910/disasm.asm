0x76C910: push    ebx
0x76C911: push    esi
0x76C912: mov     ebx, ecx
0x76C914: mov     esi, [ebx+4]
0x76C917: push    edi
0x76C918: mov     edi, [esp+0Ch+a2]
0x76C91C: cmp     esi, edi
0x76C91E: jz      short loc_76C951
0x76C920: test    esi, esi
0x76C922: jz      short loc_76C940
0x76C924: lea     eax, [esi+4]
0x76C927: push    eax; lpAddend
0x76C928: call    dword ptr ds:0A2807Ch
0x76C92E: test    eax, eax
0x76C930: jnz     short loc_76C940
0x76C932: test    esi, esi
0x76C934: jz      short loc_76C940
0x76C936: mov     edx, [esi]
0x76C938: mov     eax, [edx]
0x76C93A: push    1
0x76C93C: mov     ecx, esi
0x76C93E: call    eax
0x76C940: test    edi, edi
0x76C942: mov     [ebx+4], edi
0x76C945: jz      short loc_76C951
0x76C947: add     edi, 4
0x76C94A: push    edi; lpAddend
0x76C94B: call    dword ptr ds:0A28078h
0x76C951: pop     edi
0x76C952: pop     esi
0x76C953: pop     ebx
0x76C954: retn    4
