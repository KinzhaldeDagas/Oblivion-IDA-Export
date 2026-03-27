0x4A49F0: push    ebp
0x4A49F1: mov     ebp, esp
0x4A49F3: push    ecx
0x4A49F4: mov     eax, ds:0B30AACh
0x4A49F9: xor     eax, ebp
0x4A49FB: mov     [ebp+var_4], eax
0x4A49FE: push    ebx
0x4A49FF: push    esi
0x4A4A00: push    edi
0x4A4A01: mov     edi, [ebp+a1]
0x4A4A04: test    edi, edi
0x4A4A06: mov     ebx, ecx
0x4A4A08: jz      short loc_4A4A3E
0x4A4A0A: mov     ecx, edi
0x4A4A0C: call    TESFile_GetChunkType
0x4A4A11: cmp     eax, 504D4452h
0x4A4A16: jnz     short loc_4A4A3E
0x4A4A18: mov     eax, [edi+254h]
0x4A4A1E: call    __alloca?
0x4A4A23: mov     esi, esp
0x4A4A25: push    0; a4
0x4A4A27: push    esi; Dst
0x4A4A28: mov     ecx, edi; a1
0x4A4A2A: call    TESFile_GetChunkData
0x4A4A2F: push    0; a3
0x4A4A31: push    esi; a2
0x4A4A32: lea     ecx, [ebx+8]; this
0x4A4A35: call    BSStringT_Set
0x4A4A3A: mov     al, 1
0x4A4A3C: jmp     short loc_4A4A40
0x4A4A3E: xor     al, al
0x4A4A40: lea     esp, [ebp-10h]
0x4A4A43: pop     edi
0x4A4A44: pop     esi
0x4A4A45: pop     ebx
0x4A4A46: mov     ecx, [ebp+var_4]
0x4A4A49: xor     ecx, ebp
0x4A4A4B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4A4A50: mov     esp, ebp
0x4A4A52: pop     ebp
0x4A4A53: retn    4
