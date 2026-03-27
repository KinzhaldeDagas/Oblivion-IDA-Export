0x8B03E0: push    ebx
0x8B03E1: mov     ebx, [esp+4+arg_0]
0x8B03E5: test    bl, bl
0x8B03E7: push    edi
0x8B03E8: mov     edi, ecx
0x8B03EA: jz      short loc_8B0420
0x8B03EC: test    edi, edi
0x8B03EE: jz      short loc_8B03FC
0x8B03F0: mov     eax, [edi+8]
0x8B03F3: test    eax, eax
0x8B03F5: jz      short loc_8B03FC
0x8B03F7: mov     eax, [eax+0Ch]
0x8B03FA: jmp     short loc_8B03FE
0x8B03FC: xor     eax, eax
0x8B03FE: test    eax, eax
0x8B0400: jz      short loc_8B0457
0x8B0402: mov     eax, [eax+8]
0x8B0405: test    eax, eax
0x8B0407: jz      short loc_8B0457
0x8B0409: add     eax, 4
0x8B040C: push    eax; lpAddend
0x8B040D: call    dword ptr ds:0A28078h
0x8B0413: push    ebx
0x8B0414: mov     ecx, edi
0x8B0416: call    sub_8A26C0
0x8B041B: pop     edi
0x8B041C: pop     ebx
0x8B041D: retn    4
0x8B0420: test    edi, edi
0x8B0422: jz      short loc_8B0430
0x8B0424: mov     eax, [edi+8]
0x8B0427: test    eax, eax
0x8B0429: jz      short loc_8B0430
0x8B042B: mov     eax, [eax+0Ch]
0x8B042E: jmp     short loc_8B0432
0x8B0430: xor     eax, eax
0x8B0432: test    eax, eax
0x8B0434: jz      short loc_8B0457
0x8B0436: push    esi
0x8B0437: mov     esi, [eax+8]
0x8B043A: test    esi, esi
0x8B043C: jz      short loc_8B0456
0x8B043E: lea     eax, [esi+4]
0x8B0441: push    eax; lpAddend
0x8B0442: call    dword ptr ds:0A2807Ch
0x8B0448: test    eax, eax
0x8B044A: jnz     short loc_8B0456
0x8B044C: mov     edx, [esi]
0x8B044E: mov     eax, [edx]
0x8B0450: push    1
0x8B0452: mov     ecx, esi
0x8B0454: call    eax
0x8B0456: pop     esi
0x8B0457: push    ebx
0x8B0458: mov     ecx, edi
0x8B045A: call    sub_8A26C0
0x8B045F: pop     edi
0x8B0460: pop     ebx
0x8B0461: retn    4
