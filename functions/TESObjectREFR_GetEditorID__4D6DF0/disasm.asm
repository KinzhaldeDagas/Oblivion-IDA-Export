0x4D6DF0: cmp     byte ptr ds:0B333F4h, 0
0x4D6DF7: push    esi
0x4D6DF8: mov     esi, ecx
0x4D6DFA: jnz     short loc_4D6E2F
0x4D6DFC: mov     byte ptr ds:0B333F4h, 1
0x4D6E03: mov     eax, [esi]
0x4D6E05: mov     edx, [eax+0D4h]
0x4D6E0B: call    edx
0x4D6E0D: test    eax, eax
0x4D6E0F: mov     byte ptr ds:0B333F4h, 0
0x4D6E16: jz      short loc_4D6E2F
0x4D6E18: lea     edx, [eax+1]
0x4D6E1B: jmp     short loc_4D6E20
0x4D6E1D: align 10h
0x4D6E20: mov     cl, [eax]
0x4D6E22: add     eax, 1
0x4D6E25: test    cl, cl
0x4D6E27: jnz     short loc_4D6E20
0x4D6E29: sub     eax, edx
0x4D6E2B: test    eax, eax
0x4D6E2D: jnz     short loc_4D6E51
0x4D6E2F: cmp     dword ptr [esi+1Ch], 0
0x4D6E33: jz      short loc_4D6E51
0x4D6E35: mov     eax, ds:0B33A98h
0x4D6E3A: cmp     byte ptr [eax+0CD4h], 0
0x4D6E41: jnz     short loc_4D6E51
0x4D6E43: mov     ecx, [esi+1Ch]
0x4D6E46: mov     edx, [ecx]
0x4D6E48: mov     eax, [edx+0D4h]
0x4D6E4E: pop     esi
0x4D6E4F: jmp     eax
0x4D6E51: mov     eax, offset EmptyString
0x4D6E56: pop     esi
0x4D6E57: retn
