0x731BF0: push    ebx
0x731BF1: mov     ebx, [esp+4+arg_4]
0x731BF5: mov     ecx, [ebx+0B0h]
0x731BFB: push    esi
0x731BFC: mov     esi, [esp+8+arg_0]
0x731C00: mov     eax, [esi]
0x731C02: test    eax, eax
0x731C04: jz      short loc_731C54
0x731C06: mov     edx, [eax+4]
0x731C09: mov     edx, [edx+0B0h]
0x731C0F: cmp     ecx, edx
0x731C11: jl      short loc_731C54
0x731C13: jz      short loc_731C51
0x731C15: mov     esi, [eax]
0x731C17: test    esi, esi
0x731C19: push    edi
0x731C1A: mov     edi, eax
0x731C1C: jz      short loc_731C3F
0x731C1E: mov     edi, edi
0x731C20: mov     eax, [esi+4]
0x731C23: cmp     ecx, [eax+0B0h]
0x731C29: jle     short loc_731C35
0x731C2B: mov     edi, esi
0x731C2D: mov     esi, [esi]
0x731C2F: test    esi, esi
0x731C31: jnz     short loc_731C20
0x731C33: jmp     short loc_731C3F
0x731C35: mov     edx, eax
0x731C37: cmp     ecx, [edx+0B0h]
0x731C3D: jz      short loc_731C50
0x731C3F: push    8; Size
0x731C41: call    FormHeapAlloc
0x731C46: mov     [eax+4], ebx
0x731C49: mov     [eax], esi
0x731C4B: add     esp, 4
0x731C4E: mov     [edi], eax
0x731C50: pop     edi
0x731C51: pop     esi
0x731C52: pop     ebx
0x731C53: retn
0x731C54: push    8; Size
0x731C56: call    FormHeapAlloc
0x731C5B: mov     [eax+4], ebx
0x731C5E: mov     ecx, [esi]
0x731C60: add     esp, 4
0x731C63: mov     [eax], ecx
0x731C65: mov     [esi], eax
0x731C67: pop     esi
0x731C68: pop     ebx
0x731C69: retn
