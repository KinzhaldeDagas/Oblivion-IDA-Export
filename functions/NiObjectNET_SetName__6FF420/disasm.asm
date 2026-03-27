0x6FF420: push    ebx
0x6FF421: push    edi
0x6FF422: mov     edi, ecx
0x6FF424: mov     eax, [edi+8]
0x6FF427: push    eax
0x6FF428: call    FormHeapFree
0x6FF42D: mov     ebx, [esp+0Ch+Src]
0x6FF431: add     esp, 4
0x6FF434: test    ebx, ebx
0x6FF436: jz      short loc_6FF469
0x6FF438: mov     eax, ebx
0x6FF43A: lea     edx, [eax+1]
0x6FF43D: lea     ecx, [ecx+0]
0x6FF440: mov     cl, [eax]
0x6FF442: add     eax, 1
0x6FF445: test    cl, cl
0x6FF447: jnz     short loc_6FF440
0x6FF449: sub     eax, edx
0x6FF44B: push    esi
0x6FF44C: lea     esi, [eax+1]
0x6FF44F: push    esi; Size
0x6FF450: call    FormHeapAlloc
0x6FF455: push    ebx; Src
0x6FF456: push    esi; SizeInBytes
0x6FF457: push    eax; Dst
0x6FF458: mov     [edi+8], eax
0x6FF45B: call    _strcpy_s
0x6FF460: add     esp, 10h
0x6FF463: pop     esi
0x6FF464: pop     edi
0x6FF465: pop     ebx
0x6FF466: retn    4
0x6FF469: mov     dword ptr [edi+8], 0
0x6FF470: pop     edi
0x6FF471: pop     ebx
0x6FF472: retn    4
