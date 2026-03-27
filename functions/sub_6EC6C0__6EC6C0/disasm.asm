0x6EC6C0: push    ebx
0x6EC6C1: push    edi
0x6EC6C2: mov     edi, ecx
0x6EC6C4: mov     eax, [edi+4]
0x6EC6C7: test    eax, eax
0x6EC6C9: jz      short loc_6EC6DB
0x6EC6CB: push    eax
0x6EC6CC: call    FormHeapFree
0x6EC6D1: add     esp, 4
0x6EC6D4: mov     dword ptr [edi+4], 0
0x6EC6DB: mov     ebx, [esp+8+Src]
0x6EC6DF: test    ebx, ebx
0x6EC6E1: jz      short loc_6EC70C
0x6EC6E3: mov     eax, ebx
0x6EC6E5: lea     edx, [eax+1]
0x6EC6E8: mov     cl, [eax]
0x6EC6EA: add     eax, 1
0x6EC6ED: test    cl, cl
0x6EC6EF: jnz     short loc_6EC6E8
0x6EC6F1: sub     eax, edx
0x6EC6F3: push    esi
0x6EC6F4: lea     esi, [eax+1]
0x6EC6F7: push    esi; Size
0x6EC6F8: call    FormHeapAlloc
0x6EC6FD: push    ebx; Src
0x6EC6FE: push    esi; SizeInBytes
0x6EC6FF: push    eax; Dst
0x6EC700: mov     [edi+4], eax
0x6EC703: call    _strcpy_s
0x6EC708: add     esp, 10h
0x6EC70B: pop     esi
0x6EC70C: pop     edi
0x6EC70D: pop     ebx
0x6EC70E: retn    4
