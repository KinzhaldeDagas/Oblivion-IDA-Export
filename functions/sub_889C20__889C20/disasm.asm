0x889C20: mov     ecx, [esp+arg_0]
0x889C24: push    ebx
0x889C25: xor     bl, bl
0x889C27: test    ecx, ecx
0x889C29: push    esi
0x889C2A: jz      short loc_889C3D
0x889C2C: mov     eax, [ecx+8]
0x889C2F: test    eax, eax
0x889C31: jz      short loc_889C3D
0x889C33: add     eax, 14h
0x889C36: jz      short loc_889C3D
0x889C38: mov     edx, [eax+1Ch]
0x889C3B: jmp     short loc_889C3F
0x889C3D: xor     edx, edx
0x889C3F: mov     esi, [esp+8+arg_4]
0x889C43: mov     eax, edx
0x889C45: shr     eax, 10h
0x889C48: cmp     dword ptr [esi+10h], 0
0x889C4C: jnz     short loc_889C92
0x889C4E: test    eax, eax
0x889C50: jnz     short loc_889C80
0x889C52: and     edx, 3Fh
0x889C55: mov     eax, ds:0BA7EB0h[edx*4]
0x889C5C: test    eax, eax
0x889C5E: jnz     short loc_889C7E
0x889C60: mov     eax, ds:0B2EB3Ch
0x889C65: add     eax, 1
0x889C68: and     eax, 0FFFFh
0x889C6D: mov     ds:0B2EB3Ch, eax
0x889C72: jnz     short loc_889C7E
0x889C74: mov     eax, 0Ah
0x889C79: mov     ds:0B2EB3Ch, eax
0x889C7E: mov     bl, 1
0x889C80: test    bl, bl
0x889C82: mov     [esi+10h], eax
0x889C85: jz      short loc_889C8D
0x889C87: push    eax
0x889C88: call    sub_89F4D0
0x889C8D: pop     esi
0x889C8E: mov     al, bl
0x889C90: pop     ebx
0x889C91: retn
0x889C92: mov     eax, [esi+10h]
0x889C95: push    eax
0x889C96: mov     bl, 1
0x889C98: call    sub_89F4D0
0x889C9D: pop     esi
0x889C9E: mov     al, bl
0x889CA0: pop     ebx
0x889CA1: retn
