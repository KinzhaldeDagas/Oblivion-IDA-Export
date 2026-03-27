0x948DF0: mov     eax, [esi+4]
0x948DF3: test    eax, eax
0x948DF5: push    ebx
0x948DF6: push    edi
0x948DF7: jle     short loc_948DFF
0x948DF9: mov     ebx, [esi]
0x948DFB: add     ebx, eax
0x948DFD: jmp     short loc_948E4B
0x948DFF: mov     ecx, [esi+8]
0x948E02: and     ecx, 3FFFFFFFh
0x948E08: cmp     eax, ecx
0x948E0A: jnz     short loc_948E17
0x948E0C: push    1
0x948E0E: push    esi
0x948E0F: call    sub_8A6EE0
0x948E14: add     esp, 8
0x948E17: mov     eax, [esi+4]
0x948E1A: mov     ebx, [esi]
0x948E1C: add     ebx, eax
0x948E1E: inc     eax
0x948E1F: mov     [esi+4], eax
0x948E22: mov     eax, [esi+8]
0x948E25: and     eax, 3FFFFFFFh
0x948E2A: jge     short loc_948E44
0x948E2C: add     eax, eax
0x948E2E: xor     edx, edx
0x948E30: test    eax, eax
0x948E32: setle   dl
0x948E35: push    1
0x948E37: dec     edx
0x948E38: and     eax, edx
0x948E3A: push    eax
0x948E3B: push    esi
0x948E3C: call    sub_8A6E40
0x948E41: add     esp, 0Ch
0x948E44: mov     dword ptr [esi+4], 0
0x948E4B: mov     eax, [esi+4]
0x948E4E: mov     ecx, [esp+8+arg_0]
0x948E52: lea     edi, [ecx+eax+6]
0x948E56: mov     eax, [esi+8]
0x948E59: and     eax, 3FFFFFFFh
0x948E5E: cmp     eax, edi
0x948E60: jge     short loc_948E76
0x948E62: add     eax, eax
0x948E64: cmp     edi, eax
0x948E66: jl      short loc_948E6A
0x948E68: mov     eax, edi
0x948E6A: push    1
0x948E6C: push    eax
0x948E6D: push    esi
0x948E6E: call    sub_8A6E40
0x948E73: add     esp, 0Ch
0x948E76: mov     [esi+4], edi
0x948E79: pop     edi
0x948E7A: mov     eax, ebx
0x948E7C: pop     ebx
0x948E7D: retn
