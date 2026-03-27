0x6D98F0: mov     eax, [esp+arg_4]
0x6D98F4: push    ebx
0x6D98F5: push    esi
0x6D98F6: push    edi
0x6D98F7: mov     edi, [esp+0Ch+arg_0]
0x6D98FB: push    eax
0x6D98FC: push    edi
0x6D98FD: mov     esi, ecx
0x6D98FF: call    sub_6EC2A0
0x6D9904: mov     ecx, [esi+0Ch]
0x6D9907: mov     [edi+0Ch], ecx
0x6D990A: mov     edx, [esi+10h]
0x6D990D: mov     [edi+10h], edx
0x6D9910: mov     eax, [esi+14h]
0x6D9913: mov     [edi+14h], eax
0x6D9916: mov     ecx, [esi+18h]
0x6D9919: mov     [edi+18h], ecx
0x6D991C: mov     ebx, [edi+1Ch]
0x6D991F: cmp     ebx, [esi+1Ch]
0x6D9922: jz      short loc_6D9970
0x6D9924: test    ebx, ebx
0x6D9926: jz      short loc_6D9944
0x6D9928: lea     edx, [ebx+4]
0x6D992B: push    edx; lpAddend
0x6D992C: call    dword ptr ds:0A2807Ch
0x6D9932: test    eax, eax
0x6D9934: jnz     short loc_6D9944
0x6D9936: test    ebx, ebx
0x6D9938: jz      short loc_6D9944
0x6D993A: mov     eax, [ebx]
0x6D993C: mov     edx, [eax]
0x6D993E: push    1
0x6D9940: mov     ecx, ebx
0x6D9942: call    edx
0x6D9944: mov     eax, [esi+1Ch]
0x6D9947: test    eax, eax
0x6D9949: mov     [edi+1Ch], eax
0x6D994C: jz      short loc_6D9964
0x6D994E: add     eax, 4
0x6D9951: push    eax; lpAddend
0x6D9952: call    dword ptr ds:0A28078h
0x6D9958: mov     eax, [esi+20h]
0x6D995B: mov     [edi+20h], eax
0x6D995E: pop     edi
0x6D995F: pop     esi
0x6D9960: pop     ebx
0x6D9961: retn    8
0x6D9964: mov     ecx, [esi+20h]
0x6D9967: mov     [edi+20h], ecx
0x6D996A: pop     edi
0x6D996B: pop     esi
0x6D996C: pop     ebx
0x6D996D: retn    8
0x6D9970: mov     edx, [esi+20h]
0x6D9973: mov     [edi+20h], edx
0x6D9976: pop     edi
0x6D9977: pop     esi
0x6D9978: pop     ebx
0x6D9979: retn    8
