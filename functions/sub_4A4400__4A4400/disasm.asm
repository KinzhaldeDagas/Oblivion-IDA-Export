0x4A4400: push    esi
0x4A4401: mov     esi, ecx
0x4A4403: call    BSSimpleList_Count
0x4A4408: test    eax, eax
0x4A440A: jz      short loc_4A4454
0x4A440C: push    edi
0x4A440D: lea     ecx, [ecx+0]
0x4A4410: mov     eax, [esi+4]
0x4A4413: test    eax, eax
0x4A4415: mov     edi, [esi]
0x4A4417: jz      short loc_4A442E
0x4A4419: mov     ecx, [eax+4]
0x4A441C: mov     [esi+4], ecx
0x4A441F: mov     edx, [eax]
0x4A4421: push    eax
0x4A4422: mov     [esi], edx
0x4A4424: call    FormHeapFree
0x4A4429: add     esp, 4
0x4A442C: jmp     short loc_4A4434
0x4A442E: mov     dword ptr [esi], 0
0x4A4434: cmp     byte ptr [esi+8], 0
0x4A4438: jz      short loc_4A4448
0x4A443A: test    edi, edi
0x4A443C: jz      short loc_4A4448
0x4A443E: mov     eax, [edi]
0x4A4440: mov     edx, [eax]
0x4A4442: push    1
0x4A4444: mov     ecx, edi
0x4A4446: call    edx
0x4A4448: mov     ecx, esi
0x4A444A: call    BSSimpleList_Count
0x4A444F: test    eax, eax
0x4A4451: jnz     short loc_4A4410
0x4A4453: pop     edi
0x4A4454: pop     esi
0x4A4455: retn
