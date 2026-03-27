0x75A680: push    ebx
0x75A681: push    esi
0x75A682: mov     esi, [esp+8+arg_0]
0x75A686: push    edi
0x75A687: push    esi
0x75A688: mov     edi, ecx
0x75A68A: call    sub_752CB0
0x75A68F: mov     ecx, esi
0x75A691: call    sub_7124A0
0x75A696: mov     esi, [edi+18h]
0x75A699: mov     ebx, eax
0x75A69B: cmp     esi, ebx
0x75A69D: jz      short loc_75A6D0
0x75A69F: test    esi, esi
0x75A6A1: jz      short loc_75A6BF
0x75A6A3: lea     eax, [esi+4]
0x75A6A6: push    eax; lpAddend
0x75A6A7: call    dword ptr ds:0A2807Ch
0x75A6AD: test    eax, eax
0x75A6AF: jnz     short loc_75A6BF
0x75A6B1: test    esi, esi
0x75A6B3: jz      short loc_75A6BF
0x75A6B5: mov     edx, [esi]
0x75A6B7: mov     eax, [edx]
0x75A6B9: push    1
0x75A6BB: mov     ecx, esi
0x75A6BD: call    eax
0x75A6BF: test    ebx, ebx
0x75A6C1: mov     [edi+18h], ebx
0x75A6C4: jz      short loc_75A6D0
0x75A6C6: add     ebx, 4
0x75A6C9: push    ebx; lpAddend
0x75A6CA: call    dword ptr ds:0A28078h
0x75A6D0: pop     edi
0x75A6D1: pop     esi
0x75A6D2: pop     ebx
0x75A6D3: retn    4
