0x4400A0: mov     eax, ds:0B051DCh
0x4400A5: push    ebx
0x4400A6: mov     ebx, [esp+4+a1]
0x4400AA: push    esi
0x4400AB: push    edi
0x4400AC: mov     edi, ecx
0x4400AE: xor     esi, esi
0x4400B0: cmp     esi, eax
0x4400B2: jnb     short loc_4400F0
0x4400B4: mov     ecx, [edi+3Ch]
0x4400B7: cmp     ebx, [ecx+esi*4]
0x4400BA: jz      short loc_4400C1
0x4400BC: add     esi, 1
0x4400BF: jmp     short loc_4400B0
0x4400C1: mov     ecx, [edi+8]
0x4400C4: push    ebx
0x4400C5: call    sub_482530
0x4400CA: cmp     [esp+0Ch+arg_4], 0
0x4400CF: jz      short loc_4400DD
0x4400D1: mov     ecx, ds:0B33A98h
0x4400D7: push    ebx; a1
0x4400D8: call    sub_447BA0
0x4400DD: mov     edx, [edi+3Ch]
0x4400E0: mov     dword ptr [edx+esi*4], 0
0x4400E7: mov     eax, ds:0B051DCh
0x4400EC: lea     esp, [esp+0]
0x4400F0: mov     edx, [edi+3Ch]
0x4400F3: lea     ecx, [eax-1]
0x4400F6: cmp     esi, ecx
0x4400F8: jnb     short loc_440108
0x4400FA: mov     ecx, [edx+esi*4+4]
0x4400FE: lea     eax, [edx+esi*4]
0x440101: mov     [eax], ecx
0x440103: add     esi, 1
0x440106: jmp     short loc_4400E7
0x440108: mov     dword ptr [edx+eax*4-4], 0
0x440110: mov     byte ptr [edi+69h], 1
0x440114: pop     edi
0x440115: pop     esi
0x440116: pop     ebx
0x440117: retn    8
