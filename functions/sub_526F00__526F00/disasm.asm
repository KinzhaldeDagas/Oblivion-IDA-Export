0x526F00: push    esi
0x526F01: mov     esi, ecx
0x526F03: movzx   eax, word ptr [esi+1FAh]
0x526F0A: test    ax, ax
0x526F0D: jbe     loc_526F99
0x526F13: mov     edx, [esi+0E8h]
0x526F19: mov     ecx, [esi+1F4h]
0x526F1F: push    ebx
0x526F20: movzx   eax, ax
0x526F23: push    edi
0x526F24: mov     edi, [ecx+eax*4-4]
0x526F28: add     edx, 29Ch
0x526F2E: push    edx
0x526F2F: push    edi
0x526F30: call    sub_5528F0
0x526F35: mov     eax, [esi]
0x526F37: mov     edx, [eax+128h]
0x526F3D: add     esp, 8
0x526F40: push    45h ; 'E'
0x526F42: mov     ecx, esi
0x526F44: call    edx
0x526F46: test    eax, eax
0x526F48: lea     eax, [esi+168h]
0x526F4E: jnz     short loc_526F56
0x526F50: lea     eax, [esi+108h]
0x526F56: push    eax
0x526F57: lea     eax, [edi+60h]
0x526F5A: push    eax
0x526F5B: call    sub_5528F0
0x526F60: movzx   ecx, word ptr [esi+1FAh]
0x526F67: sub     ecx, 1
0x526F6A: add     esp, 8
0x526F6D: lea     ebx, [esi+1F0h]
0x526F73: push    ecx
0x526F74: mov     ecx, ebx
0x526F76: call    sub_405020
0x526F7B: test    edi, edi
0x526F7D: jz      short loc_526F8F
0x526F7F: mov     ecx, edi
0x526F81: call    sub_526E70
0x526F86: push    edi
0x526F87: call    FormHeapFree
0x526F8C: add     esp, 4
0x526F8F: pop     edi
0x526F90: mov     ecx, ebx
0x526F92: pop     ebx
0x526F93: pop     esi
0x526F94: jmp     sub_521BE0
0x526F99: pop     esi
0x526F9A: retn
