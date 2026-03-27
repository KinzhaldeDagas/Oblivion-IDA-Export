0x68B240: push    esi
0x68B241: mov     esi, [esp+4+arg_0]
0x68B245: test    esi, esi
0x68B247: push    edi
0x68B248: mov     edi, ecx
0x68B24A: jz      short loc_68B2B3
0x68B24C: mov     al, [edi+4]
0x68B24F: push    ebx
0x68B250: movsx   ebx, byte ptr [esi+4]
0x68B254: movsx   ecx, al
0x68B257: cmp     ecx, ebx
0x68B259: jz      short loc_68B273
0x68B25B: cmp     al, 1
0x68B25D: jnz     short loc_68B26A
0x68B25F: mov     edx, [edi]
0x68B261: push    edx
0x68B262: call    FormHeapFree
0x68B267: add     esp, 4
0x68B26A: mov     dword ptr [edi], 0
0x68B270: mov     [edi+4], bl
0x68B273: mov     cl, [esi+4]
0x68B276: movsx   eax, cl
0x68B279: sub     eax, 0
0x68B27C: pop     ebx
0x68B27D: jz      short loc_68B2A1
0x68B27F: sub     eax, 1
0x68B282: jnz     short loc_68B2B3
0x68B284: cmp     cl, 1
0x68B287: jnz     short loc_68B28F
0x68B289: mov     esi, [esi]
0x68B28B: test    esi, esi
0x68B28D: jnz     short loc_68B294
0x68B28F: mov     esi, offset Vector3_InitValue?
0x68B294: push    esi
0x68B295: mov     ecx, edi
0x68B297: call    sub_68B200
0x68B29C: pop     edi
0x68B29D: pop     esi
0x68B29E: retn    4
0x68B2A1: test    cl, cl
0x68B2A3: jnz     short loc_68B2A9
0x68B2A5: mov     esi, [esi]
0x68B2A7: jmp     short loc_68B2AB
0x68B2A9: xor     esi, esi
0x68B2AB: cmp     byte ptr [edi+4], 0
0x68B2AF: jnz     short loc_68B2B3
0x68B2B1: mov     [edi], esi
0x68B2B3: pop     edi
0x68B2B4: pop     esi
0x68B2B5: retn    4
