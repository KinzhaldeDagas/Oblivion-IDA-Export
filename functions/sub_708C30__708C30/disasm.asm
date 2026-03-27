0x708C30: push    ebx
0x708C31: mov     ebx, [esp+4+arg_0]
0x708C35: push    edi
0x708C36: push    ebx
0x708C37: mov     edi, ecx
0x708C39: call    sub_707B50
0x708C3E: test    al, al
0x708C40: jnz     short loc_708C49
0x708C42: pop     edi
0x708C43: xor     al, al
0x708C45: pop     ebx
0x708C46: retn    4
0x708C49: mov     eax, [edi+0C8h]
0x708C4F: cmp     eax, [ebx+0C8h]
0x708C55: jnz     short loc_708C42
0x708C57: test    eax, eax
0x708C59: push    esi
0x708C5A: jbe     short loc_708C96
0x708C5C: mov     eax, [edi+0C0h]
0x708C62: test    eax, eax
0x708C64: mov     ecx, [ebx+0C0h]
0x708C6A: jz      short loc_708C96
0x708C6C: lea     esp, [esp+0]
0x708C70: lea     edx, [eax+8]
0x708C73: mov     edx, [edx]
0x708C75: test    edx, edx
0x708C77: mov     eax, [eax]
0x708C79: lea     esi, [ecx+8]
0x708C7C: mov     ecx, [ecx]
0x708C7E: mov     esi, [esi]
0x708C80: jz      short loc_708C8E
0x708C82: test    esi, esi
0x708C84: jnz     short loc_708C92
0x708C86: pop     esi
0x708C87: pop     edi
0x708C88: xor     al, al
0x708C8A: pop     ebx
0x708C8B: retn    4
0x708C8E: test    esi, esi
0x708C90: jnz     short loc_708C86
0x708C92: test    eax, eax
0x708C94: jnz     short loc_708C70
0x708C96: mov     eax, [edi+0D8h]
0x708C9C: cmp     eax, [ebx+0D8h]
0x708CA2: jnz     short loc_708C86
0x708CA4: test    eax, eax
0x708CA6: jbe     short loc_708CD8
0x708CA8: mov     eax, [edi+0D0h]
0x708CAE: test    eax, eax
0x708CB0: mov     ecx, [ebx+0D0h]
0x708CB6: jz      short loc_708CD8
0x708CB8: lea     edx, [eax+8]
0x708CBB: mov     edx, [edx]
0x708CBD: test    edx, edx
0x708CBF: mov     eax, [eax]
0x708CC1: lea     esi, [ecx+8]
0x708CC4: mov     ecx, [ecx]
0x708CC6: mov     esi, [esi]
0x708CC8: jz      short loc_708CD0
0x708CCA: test    esi, esi
0x708CCC: jz      short loc_708C86
0x708CCE: jmp     short loc_708CD4
0x708CD0: test    esi, esi
0x708CD2: jnz     short loc_708C86
0x708CD4: test    eax, eax
0x708CD6: jnz     short loc_708CB8
0x708CD8: pop     esi
0x708CD9: pop     edi
0x708CDA: mov     al, 1
0x708CDC: pop     ebx
0x708CDD: retn    4
