0x98BAF6: mov     eax, dword_BABC00
0x98BAFB: test    eax, eax
0x98BAFD: push    esi
0x98BAFE: push    14h
0x98BB00: pop     esi
0x98BB01: jnz     short loc_98BB0A
0x98BB03: mov     eax, 200h
0x98BB08: jmp     short loc_98BB10
0x98BB0A: cmp     eax, esi
0x98BB0C: jge     short loc_98BB15
0x98BB0E: mov     eax, esi
0x98BB10: mov     dword_BABC00, eax
0x98BB15: push    4
0x98BB17: push    eax
0x98BB18: call    unknown_libname_74
0x98BB1D: test    eax, eax
0x98BB1F: pop     ecx
0x98BB20: pop     ecx
0x98BB21: mov     dword_BAABE4, eax
0x98BB26: jnz     short loc_98BB46
0x98BB28: push    4
0x98BB2A: push    esi
0x98BB2B: mov     dword_BABC00, esi
0x98BB31: call    unknown_libname_74
0x98BB36: test    eax, eax
0x98BB38: pop     ecx
0x98BB39: pop     ecx
0x98BB3A: mov     dword_BAABE4, eax
0x98BB3F: jnz     short loc_98BB46
0x98BB41: push    1Ah
0x98BB43: pop     eax
0x98BB44: pop     esi
0x98BB45: retn
0x98BB46: xor     edx, edx
0x98BB48: mov     ecx, offset off_B30E28
0x98BB4D: jmp     short loc_98BB54
0x98BB4F: mov     eax, dword_BAABE4
0x98BB54: mov     [edx+eax], ecx
0x98BB57: add     ecx, 20h ; ' '
0x98BB5A: add     edx, 4
0x98BB5D: cmp     ecx, offset dword_B310A8
0x98BB63: jl      short loc_98BB4F
0x98BB65: push    0FFFFFFFEh
0x98BB67: pop     esi
0x98BB68: xor     edx, edx
0x98BB6A: mov     ecx, offset unk_B30E38
0x98BB6F: push    edi
0x98BB70: mov     edi, edx
0x98BB72: and     edi, 1Fh
0x98BB75: imul    edi, 28h ; '('
0x98BB78: mov     eax, edx
0x98BB7A: sar     eax, 5
0x98BB7D: mov     eax, dword_BAAAC0[eax*4]
0x98BB84: mov     eax, [edi+eax]
0x98BB87: cmp     eax, 0FFFFFFFFh
0x98BB8A: jz      short loc_98BB94
0x98BB8C: cmp     eax, esi
0x98BB8E: jz      short loc_98BB94
0x98BB90: test    eax, eax
0x98BB92: jnz     short loc_98BB96
0x98BB94: mov     [ecx], esi
0x98BB96: add     ecx, 20h ; ' '
0x98BB99: inc     edx
0x98BB9A: cmp     ecx, offset unk_B30E98
0x98BBA0: jl      short loc_98BB70
0x98BBA2: pop     edi
0x98BBA3: xor     eax, eax
0x98BBA5: pop     esi
0x98BBA6: retn
