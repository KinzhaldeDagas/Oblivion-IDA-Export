0x8B9BE0: push    ebx
0x8B9BE1: push    ebp
0x8B9BE2: push    edi
0x8B9BE3: mov     edi, ecx
0x8B9BE5: test    edi, edi
0x8B9BE7: jz      short loc_8B9BEE
0x8B9BE9: mov     ebp, [edi+8]
0x8B9BEC: jmp     short loc_8B9BF0
0x8B9BEE: xor     ebp, ebp
0x8B9BF0: mov     ebx, [esp+0Ch+arg_0]
0x8B9BF4: test    bl, bl
0x8B9BF6: jz      short loc_8B9C23
0x8B9BF8: test    edi, edi
0x8B9BFA: jz      short loc_8B9C11
0x8B9BFC: mov     ecx, [edi+8]
0x8B9BFF: test    ecx, ecx
0x8B9C01: jz      short loc_8B9C11
0x8B9C03: call    sub_8AC0C0
0x8B9C08: test    eax, eax
0x8B9C0A: jz      short loc_8B9C11
0x8B9C0C: mov     eax, [eax+0Ch]
0x8B9C0F: jmp     short loc_8B9C13
0x8B9C11: xor     eax, eax
0x8B9C13: test    eax, eax
0x8B9C15: jz      short loc_8B9C5C
0x8B9C17: add     eax, 4
0x8B9C1A: push    eax; lpAddend
0x8B9C1B: call    dword ptr ds:0A28078h
0x8B9C21: jmp     short loc_8B9C5C
0x8B9C23: test    edi, edi
0x8B9C25: push    esi
0x8B9C26: jz      short loc_8B9C3D
0x8B9C28: mov     ecx, [edi+8]
0x8B9C2B: test    ecx, ecx
0x8B9C2D: jz      short loc_8B9C3D
0x8B9C2F: call    sub_8AC0C0
0x8B9C34: test    eax, eax
0x8B9C36: jz      short loc_8B9C3D
0x8B9C38: mov     esi, [eax+0Ch]
0x8B9C3B: jmp     short loc_8B9C3F
0x8B9C3D: xor     esi, esi
0x8B9C3F: test    esi, esi
0x8B9C41: jz      short loc_8B9C5B
0x8B9C43: lea     eax, [esi+4]
0x8B9C46: push    eax; lpAddend
0x8B9C47: call    dword ptr ds:0A2807Ch
0x8B9C4D: test    eax, eax
0x8B9C4F: jnz     short loc_8B9C5B
0x8B9C51: mov     edx, [esi]
0x8B9C53: mov     eax, [edx]
0x8B9C55: push    1
0x8B9C57: mov     ecx, esi
0x8B9C59: call    eax
0x8B9C5B: pop     esi
0x8B9C5C: test    ebp, ebp
0x8B9C5E: jz      short loc_8B9C6E
0x8B9C60: mov     cl, bl
0x8B9C62: neg     cl
0x8B9C64: sbb     ecx, ecx
0x8B9C66: and     ecx, edi
0x8B9C68: mov     [ebp+0B0h], ecx
0x8B9C6E: push    ebx
0x8B9C6F: mov     ecx, edi
0x8B9C71: call    sub_89D430
0x8B9C76: pop     edi
0x8B9C77: pop     ebp
0x8B9C78: pop     ebx
0x8B9C79: retn    4
