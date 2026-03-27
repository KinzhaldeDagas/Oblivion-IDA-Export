0x9A55C0: push    ebx
0x9A55C1: push    esi
0x9A55C2: xor     esi, esi
0x9A55C4: cmp     dword_B32588, esi
0x9A55CA: push    edi
0x9A55CB: jbe     short loc_9A55F5
0x9A55CD: mov     ebx, [esp+0Ch+Str1]
0x9A55D1: mov     edi, offset unk_B328F0
0x9A55D6: mov     eax, [edi+4]
0x9A55D9: push    eax; Str2
0x9A55DA: push    ebx; Str1
0x9A55DB: call    __strcmp
0x9A55E0: add     esp, 8
0x9A55E3: test    eax, eax
0x9A55E5: jz      short loc_9A55FB
0x9A55E7: add     esi, 1
0x9A55EA: add     edi, 8
0x9A55ED: cmp     esi, dword_B32588
0x9A55F3: jb      short loc_9A55D6
0x9A55F5: pop     edi
0x9A55F6: pop     esi
0x9A55F7: xor     al, al
0x9A55F9: pop     ebx
0x9A55FA: retn
0x9A55FB: mov     ecx, [edi]
0x9A55FD: mov     edx, [esp+0Ch+arg_4]
0x9A5601: pop     edi
0x9A5602: pop     esi
0x9A5603: mov     [edx], ecx
0x9A5605: mov     al, 1
0x9A5607: pop     ebx
0x9A5608: retn
