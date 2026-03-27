0x70BE00: push    ebx
0x70BE01: mov     ebx, [esp+4+arg_0]
0x70BE05: test    ebx, ebx
0x70BE07: push    edi
0x70BE08: jz      short loc_70BE5C
0x70BE0A: mov     edi, [esp+8+arg_4]
0x70BE0E: test    edi, edi
0x70BE10: jz      short loc_70BE5C
0x70BE12: mov     ecx, [ebx+10h]
0x70BE15: test    ecx, ecx
0x70BE17: jz      short loc_70BE22
0x70BE19: mov     eax, [ecx]
0x70BE1B: mov     edx, [eax+0Ch]
0x70BE1E: call    edx
0x70BE20: jmp     short loc_70BE24
0x70BE22: xor     eax, eax
0x70BE24: mov     edx, [edi]
0x70BE26: push    esi
0x70BE27: push    eax
0x70BE28: mov     eax, [edx+98h]
0x70BE2E: mov     ecx, edi
0x70BE30: call    eax
0x70BE32: mov     esi, eax
0x70BE34: test    esi, esi
0x70BE36: jnz     short loc_70BE3C
0x70BE38: pop     esi
0x70BE39: pop     edi
0x70BE3A: pop     ebx
0x70BE3B: retn
0x70BE3C: mov     eax, [ebx+0Ch]
0x70BE3F: mov     ecx, [ebx+8]
0x70BE42: push    esi
0x70BE43: push    edi
0x70BE44: push    eax
0x70BE45: push    ecx
0x70BE46: call    sub_70BC70
0x70BE4B: push    esi
0x70BE4C: mov     edi, eax
0x70BE4E: call    FormHeapFree
0x70BE53: add     esp, 14h
0x70BE56: pop     esi
0x70BE57: mov     eax, edi
0x70BE59: pop     edi
0x70BE5A: pop     ebx
0x70BE5B: retn
0x70BE5C: pop     edi
0x70BE5D: xor     eax, eax
0x70BE5F: pop     ebx
0x70BE60: retn
