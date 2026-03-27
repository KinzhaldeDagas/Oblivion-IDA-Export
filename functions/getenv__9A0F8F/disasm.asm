0x9A0F8F: cmp     dword_BABC08, 0
0x9A0F96: push    esi
0x9A0F97: mov     esi, dword_BA9DB4
0x9A0F9D: jnz     short loc_9A0FA3
0x9A0F9F: xor     eax, eax
0x9A0FA1: pop     esi
0x9A0FA2: retn
0x9A0FA3: test    esi, esi
0x9A0FA5: push    ebx
0x9A0FA6: push    edi
0x9A0FA7: jnz     short loc_9A0FC4
0x9A0FA9: cmp     dword_BA9DBC, esi
0x9A0FAF: jz      short loc_9A1002
0x9A0FB1: call    ___wtomb_environ
0x9A0FB6: test    eax, eax
0x9A0FB8: jnz     short loc_9A1002
0x9A0FBA: mov     esi, dword_BA9DB4
0x9A0FC0: test    esi, esi
0x9A0FC2: jz      short loc_9A1002
0x9A0FC4: mov     ebx, [esp+0Ch+VarName]
0x9A0FC8: test    ebx, ebx
0x9A0FCA: jz      short loc_9A1002
0x9A0FCC: push    ebx; Str
0x9A0FCD: call    _strlen
0x9A0FD2: pop     ecx
0x9A0FD3: mov     edi, eax
0x9A0FD5: jmp     short loc_9A0FFC
0x9A0FD7: push    eax; Str
0x9A0FD8: call    _strlen
0x9A0FDD: cmp     eax, edi
0x9A0FDF: pop     ecx
0x9A0FE0: jbe     short loc_9A0FF9
0x9A0FE2: mov     eax, [esi]
0x9A0FE4: cmp     byte ptr [eax+edi], 3Dh ; '='
0x9A0FE8: jnz     short loc_9A0FF9
0x9A0FEA: push    edi; size_t
0x9A0FEB: push    ebx; unsigned __int8 *
0x9A0FEC: push    eax; unsigned __int8 *
0x9A0FED: call    __mbsnbicoll
0x9A0FF2: add     esp, 0Ch
0x9A0FF5: test    eax, eax
0x9A0FF7: jz      short loc_9A1008
0x9A0FF9: add     esi, 4
0x9A0FFC: mov     eax, [esi]
0x9A0FFE: test    eax, eax
0x9A1000: jnz     short loc_9A0FD7
0x9A1002: xor     eax, eax
0x9A1004: pop     edi
0x9A1005: pop     ebx
0x9A1006: pop     esi
0x9A1007: retn
0x9A1008: mov     eax, [esi]
0x9A100A: lea     eax, [eax+edi+1]
0x9A100E: jmp     short loc_9A1004
