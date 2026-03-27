0x7AF510: push    ebx
0x7AF511: push    ebp
0x7AF512: push    esi
0x7AF513: mov     ebx, ecx
0x7AF515: mov     esi, [ebx+94h]
0x7AF51B: mov     ebp, [ebx+98h]
0x7AF521: add     esi, 58h ; 'X'
0x7AF524: push    edi
0x7AF525: mov     edi, [esi]
0x7AF527: cmp     edi, ebp
0x7AF529: jz      short loc_7AF55B
0x7AF52B: test    edi, edi
0x7AF52D: jz      short loc_7AF54B
0x7AF52F: lea     eax, [edi+4]
0x7AF532: push    eax; lpAddend
0x7AF533: call    dword ptr ds:0A2807Ch
0x7AF539: test    eax, eax
0x7AF53B: jnz     short loc_7AF54B
0x7AF53D: test    edi, edi
0x7AF53F: jz      short loc_7AF54B
0x7AF541: mov     edx, [edi]
0x7AF543: mov     eax, [edx]
0x7AF545: push    1
0x7AF547: mov     ecx, edi
0x7AF549: call    eax
0x7AF54B: test    ebp, ebp
0x7AF54D: mov     [esi], ebp
0x7AF54F: jz      short loc_7AF55B
0x7AF551: add     ebp, 4
0x7AF554: push    ebp; lpAddend
0x7AF555: call    dword ptr ds:0A28078h
0x7AF55B: mov     edi, [ebx+9Ch]
0x7AF561: mov     ebx, [ebx+94h]
0x7AF567: mov     esi, [ebx+44h]
0x7AF56A: add     ebx, 44h ; 'D'
0x7AF56D: cmp     esi, edi
0x7AF56F: jz      short loc_7AF5A1
0x7AF571: test    esi, esi
0x7AF573: jz      short loc_7AF591
0x7AF575: lea     ecx, [esi+4]
0x7AF578: push    ecx; lpAddend
0x7AF579: call    dword ptr ds:0A2807Ch
0x7AF57F: test    eax, eax
0x7AF581: jnz     short loc_7AF591
0x7AF583: test    esi, esi
0x7AF585: jz      short loc_7AF591
0x7AF587: mov     edx, [esi]
0x7AF589: mov     eax, [edx]
0x7AF58B: push    1
0x7AF58D: mov     ecx, esi
0x7AF58F: call    eax
0x7AF591: test    edi, edi
0x7AF593: mov     [ebx], edi
0x7AF595: jz      short loc_7AF5A1
0x7AF597: add     edi, 4
0x7AF59A: push    edi; lpAddend
0x7AF59B: call    dword ptr ds:0A28078h
0x7AF5A1: pop     edi
0x7AF5A2: pop     esi
0x7AF5A3: pop     ebp
0x7AF5A4: pop     ebx
0x7AF5A5: retn
