0x6F99F0: mov     eax, [esp+arg_0]
0x6F99F4: push    esi
0x6F99F5: push    edi
0x6F99F6: push    2800h
0x6F99FB: push    1
0x6F99FD: push    eax
0x6F99FE: mov     edi, ecx
0x6F9A00: call    NiFile_GetNiFile_Indirect
0x6F9A05: mov     esi, eax
0x6F9A07: add     esp, 0Ch
0x6F9A0A: xor     al, al
0x6F9A0C: test    esi, esi
0x6F9A0E: jz      short loc_6F9A28
0x6F9A10: push    ebx
0x6F9A11: push    esi
0x6F9A12: mov     ecx, edi
0x6F9A14: call    sub_712260
0x6F9A19: mov     edx, [esi]
0x6F9A1B: mov     bl, al
0x6F9A1D: mov     eax, [edx]
0x6F9A1F: push    1
0x6F9A21: mov     ecx, esi
0x6F9A23: call    eax
0x6F9A25: mov     al, bl
0x6F9A27: pop     ebx
0x6F9A28: pop     edi
0x6F9A29: pop     esi
0x6F9A2A: retn    4
