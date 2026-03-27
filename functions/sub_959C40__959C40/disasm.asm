0x959C40: push    ebx
0x959C41: mov     ebx, ds:0A2807Ch
0x959C47: push    esi
0x959C48: push    edi
0x959C49: mov     edi, ecx
0x959C4B: mov     esi, [edi+4]
0x959C4E: test    esi, esi
0x959C50: jz      short loc_959C6A
0x959C52: lea     eax, [esi+4]
0x959C55: push    eax; lpAddend
0x959C56: call    ebx ; InterlockedDecrement
0x959C58: test    eax, eax
0x959C5A: jnz     short loc_959C6A
0x959C5C: test    esi, esi
0x959C5E: jz      short loc_959C6A
0x959C60: mov     edx, [esi]
0x959C62: mov     eax, [edx]
0x959C64: push    1
0x959C66: mov     ecx, esi
0x959C68: call    eax
0x959C6A: mov     esi, [edi]
0x959C6C: test    esi, esi
0x959C6E: jz      short loc_959C88
0x959C70: lea     ecx, [esi+4]
0x959C73: push    ecx; lpAddend
0x959C74: call    ebx ; InterlockedDecrement
0x959C76: test    eax, eax
0x959C78: jnz     short loc_959C88
0x959C7A: test    esi, esi
0x959C7C: jz      short loc_959C88
0x959C7E: mov     edx, [esi]
0x959C80: mov     eax, [edx]
0x959C82: push    1
0x959C84: mov     ecx, esi
0x959C86: call    eax
0x959C88: test    [esp+0Ch+arg_0], 1
0x959C8D: jz      short loc_959C98
0x959C8F: push    edi
0x959C90: call    FormHeapFree
0x959C95: add     esp, 4
0x959C98: mov     eax, edi
0x959C9A: pop     edi
0x959C9B: pop     esi
0x959C9C: pop     ebx
0x959C9D: retn    4
