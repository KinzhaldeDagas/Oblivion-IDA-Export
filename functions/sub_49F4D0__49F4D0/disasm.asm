0x49F4D0: push    ebx
0x49F4D1: push    edi
0x49F4D2: mov     edi, ecx
0x49F4D4: mov     eax, [edi+5Ch]
0x49F4D7: push    eax
0x49F4D8: call    FormHeapFree
0x49F4DD: mov     ebx, [esp+0Ch+Src]
0x49F4E1: add     esp, 4
0x49F4E4: test    ebx, ebx
0x49F4E6: mov     dword ptr [edi+5Ch], 0
0x49F4ED: jz      short loc_49F518
0x49F4EF: mov     eax, ebx
0x49F4F1: lea     edx, [eax+1]
0x49F4F4: mov     cl, [eax]
0x49F4F6: add     eax, 1
0x49F4F9: test    cl, cl
0x49F4FB: jnz     short loc_49F4F4
0x49F4FD: sub     eax, edx
0x49F4FF: push    esi
0x49F500: lea     esi, [eax+1]
0x49F503: push    esi; Size
0x49F504: call    FormHeapAlloc
0x49F509: push    ebx; Src
0x49F50A: push    esi; SizeInBytes
0x49F50B: push    eax; Dst
0x49F50C: mov     [edi+5Ch], eax
0x49F50F: call    _strcpy_s
0x49F514: add     esp, 10h
0x49F517: pop     esi
0x49F518: pop     edi
0x49F519: pop     ebx
0x49F51A: retn    4
