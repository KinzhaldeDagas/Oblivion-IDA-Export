0x4FCF10: push    ecx
0x4FCF11: mov     eax, [esp+4+arg_0]
0x4FCF15: push    ebx
0x4FCF16: push    ebp
0x4FCF17: mov     ebp, [eax+4]
0x4FCF1A: add     ebp, [eax]
0x4FCF1C: push    esi
0x4FCF1D: mov     esi, [esp+10h+arg_4]
0x4FCF21: push    edi
0x4FCF22: xor     edi, edi
0x4FCF24: mov     [esp+14h+var_1], 1
0x4FCF29: lea     esp, [esp+0]
0x4FCF30: mov     bl, [edi+ebp]
0x4FCF33: add     edi, 1
0x4FCF36: test    bl, bl
0x4FCF38: jz      short loc_4FCFAE
0x4FCF3A: cmp     bl, 0Dh
0x4FCF3D: jz      short loc_4FCFA1
0x4FCF3F: cmp     bl, 3Bh ; ';'
0x4FCF42: jz      short loc_4FCF90
0x4FCF44: mov     eax, [esi+204h]
0x4FCF4A: add     eax, 1
0x4FCF4D: cmp     eax, 200h
0x4FCF52: jnb     loc_4FD030
0x4FCF58: movzx   ecx, bl
0x4FCF5B: push    ecx; C
0x4FCF5C: call    _isalnum
0x4FCF61: add     esp, 4
0x4FCF64: test    eax, eax
0x4FCF66: jnz     short loc_4FCF6D
0x4FCF68: cmp     bl, 22h ; '"'
0x4FCF6B: jnz     short loc_4FCF74
0x4FCF6D: mov     [esp+14h+var_1], 0
0x4FCF72: jmp     short loc_4FCF7B
0x4FCF74: cmp     [esp+14h+var_1], 0
0x4FCF79: jnz     short loc_4FCF30
0x4FCF7B: mov     edx, [esi+204h]
0x4FCF81: mov     [edx+esi+4], bl
0x4FCF85: add     dword ptr [esi+204h], 1
0x4FCF8C: jmp     short loc_4FCF30
0x4FCF8E: align 10h
0x4FCF90: cmp     bl, 0Ah
0x4FCF93: jz      short loc_4FCFA1
0x4FCF95: mov     bl, [edi+ebp]
0x4FCF98: add     edi, 1
0x4FCF9B: test    bl, bl
0x4FCF9D: jnz     short loc_4FCF90
0x4FCF9F: jmp     short loc_4FCFAE
0x4FCFA1: test    bl, bl
0x4FCFA3: jz      short loc_4FCFAE
0x4FCFA5: cmp     byte ptr [edi+ebp], 0Ah
0x4FCFA9: jnz     short loc_4FCFAE
0x4FCFAB: add     edi, 1
0x4FCFAE: cmp     [esp+14h+var_1], 0
0x4FCFB3: jnz     short loc_4FD007
0x4FCFB5: cmp     dword ptr [esi+204h], 0
0x4FCFBC: jz      short loc_4FD00B
0x4FCFBE: mov     edi, edi
0x4FCFC0: mov     eax, [esi+204h]
0x4FCFC6: mov     cl, [eax+esi+3]
0x4FCFCA: cmp     cl, 20h ; ' '
0x4FCFCD: jz      short loc_4FCFD4
0x4FCFCF: cmp     cl, 9
0x4FCFD2: jnz     short loc_4FCFEB
0x4FCFD4: add     eax, 0FFFFFFFFh
0x4FCFD7: mov     [esi+204h], eax
0x4FCFDD: mov     byte ptr [eax+esi+4], 0
0x4FCFE2: cmp     dword ptr [esi+204h], 0
0x4FCFE9: jnz     short loc_4FCFC0
0x4FCFEB: cmp     dword ptr [esi+204h], 0
0x4FCFF2: jz      short loc_4FD00B
0x4FCFF4: mov     edx, [esi+204h]
0x4FCFFA: mov     eax, edi
0x4FCFFC: pop     edi
0x4FCFFD: mov     byte ptr [edx+esi+4], 0
0x4FD002: pop     esi
0x4FD003: pop     ebp
0x4FD004: pop     ebx
0x4FD005: pop     ecx
0x4FD006: retn
0x4FD007: test    bl, bl
0x4FD009: jz      short loc_4FD051
0x4FD00B: add     dword ptr [esi], 1
0x4FD00E: push    200h
0x4FD013: lea     eax, [esi+4]
0x4FD016: push    0
0x4FD018: push    eax
0x4FD019: mov     dword ptr [esi+204h], 0
0x4FD023: call    __memset
0x4FD028: add     esp, 0Ch
0x4FD02B: jmp     loc_4FCF30
0x4FD030: mov     ecx, [esp+14h+arg_0]
0x4FD034: push    200h; ArgList
0x4FD039: push    offset aMaxScriptLineL; "Max script line length (%d characters) "...
0x4FD03E: push    ecx; int
0x4FD03F: call    sub_4FCE30
0x4FD044: add     esp, 0Ch
0x4FD047: mov     dword ptr [esi+418h], 10h
0x4FD051: pop     edi
0x4FD052: pop     esi
0x4FD053: pop     ebp
0x4FD054: xor     eax, eax
0x4FD056: pop     ebx
0x4FD057: pop     ecx
0x4FD058: retn
