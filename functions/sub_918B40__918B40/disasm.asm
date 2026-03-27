0x918B40: push    esi
0x918B41: push    edi
0x918B42: mov     edi, ds:0BA950Ch
0x918B48: mov     eax, [edi+10h]
0x918B4B: add     edi, 0Ch
0x918B4E: xor     esi, esi
0x918B50: test    eax, eax
0x918B52: jle     short loc_918B7C
0x918B54: push    ebx
0x918B55: push    ebp
0x918B56: lea     ebp, [ecx+8]
0x918B59: xor     ebx, ebx
0x918B5B: jmp     short loc_918B60
0x918B5D: align 10h
0x918B60: mov     ecx, [edi]
0x918B62: mov     edx, [ecx+ebx]
0x918B65: mov     eax, [ebp+0]
0x918B68: push    esi
0x918B69: push    edx
0x918B6A: mov     ecx, ebp
0x918B6C: call    dword ptr [eax+4]
0x918B6F: mov     eax, [edi+4]
0x918B72: inc     esi
0x918B73: add     ebx, 0Ch
0x918B76: cmp     esi, eax
0x918B78: jl      short loc_918B60
0x918B7A: pop     ebp
0x918B7B: pop     ebx
0x918B7C: pop     edi
0x918B7D: xor     eax, eax
0x918B7F: pop     esi
0x918B80: retn
