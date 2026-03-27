0x89FA50: push    0FFFFFFFFh
0x89FA52: push    offset SEH_89FA50
0x89FA57: mov     eax, large fs:0
0x89FA5D: push    eax
0x89FA5E: sub     esp, 30h
0x89FA61: push    ebx
0x89FA62: push    esi
0x89FA63: push    edi
0x89FA64: mov     eax, ds:0B30AACh
0x89FA69: xor     eax, esp
0x89FA6B: push    eax
0x89FA6C: lea     eax, [esp+4Ch+var_C]
0x89FA70: mov     large fs:0, eax
0x89FA76: mov     esi, ecx
0x89FA78: mov     edi, [esp+4Ch+arg_0]
0x89FA7C: push    edi
0x89FA7D: call    sub_89D6F0
0x89FA82: xor     ebx, ebx
0x89FA84: cmp     al, bl
0x89FA86: mov     byte ptr [esp+4Ch+arg_0], al
0x89FA8A: jz      loc_89FB54
0x89FA90: mov     [esp+4Ch+var_30], ebx
0x89FA94: mov     [esp+4Ch+var_2C], ebx
0x89FA98: mov     [esp+4Ch+var_28], 80000000h
0x89FAA0: mov     [esp+4Ch+var_3C], ebx
0x89FAA4: mov     [esp+4Ch+var_38], ebx
0x89FAA8: mov     [esp+4Ch+var_34], 1
0x89FAAD: lea     eax, [esp+4Ch+var_3C]
0x89FAB1: push    eax
0x89FAB2: mov     ecx, esi
0x89FAB4: mov     [esp+50h+var_4], ebx
0x89FAB8: mov     [esp+50h+var_18], ebx
0x89FABC: mov     [esp+50h+var_10], 80000000h
0x89FAC4: call    sub_89F580
0x89FAC9: lea     ecx, [esp+4Ch+var_24]
0x89FACD: push    ecx
0x89FACE: mov     ecx, edi
0x89FAD0: call    sub_89F580
0x89FAD5: mov     eax, [esp+4Ch+var_10]
0x89FAD9: test    eax, eax
0x89FADB: mov     esi, ds:0BA9DE4h
0x89FAE1: mov     edi, large fs:2Ch
0x89FAE8: js      short loc_89FB15
0x89FAEA: mov     edx, [edi+esi*4]
0x89FAED: mov     ecx, [edx+19Ch]
0x89FAF3: cmp     ecx, ebx
0x89FAF5: jnz     short loc_89FAFD
0x89FAF7: mov     ecx, ds:0BA7D9Ch
0x89FAFD: and     eax, 3FFFFFFFh
0x89FB02: add     eax, eax
0x89FB04: add     eax, eax
0x89FB06: push    14h
0x89FB08: add     eax, eax
0x89FB0A: push    eax
0x89FB0B: mov     eax, [esp+54h+var_18]
0x89FB0F: push    eax
0x89FB10: call    sub_8A75D0
0x89FB15: mov     eax, [esp+4Ch+var_28]
0x89FB19: test    eax, eax
0x89FB1B: mov     [esp+4Ch+var_4], 0FFFFFFFFh
0x89FB23: js      short loc_89FB50
0x89FB25: mov     ecx, [edi+esi*4]
0x89FB28: mov     ecx, [ecx+19Ch]
0x89FB2E: cmp     ecx, ebx
0x89FB30: jnz     short loc_89FB38
0x89FB32: mov     ecx, ds:0BA7D9Ch
0x89FB38: mov     edx, [esp+4Ch+var_30]
0x89FB3C: and     eax, 3FFFFFFFh
0x89FB41: add     eax, eax
0x89FB43: add     eax, eax
0x89FB45: push    14h
0x89FB47: add     eax, eax
0x89FB49: push    eax
0x89FB4A: push    edx
0x89FB4B: call    sub_8A75D0
0x89FB50: mov     al, byte ptr [esp+4Ch+arg_0]
0x89FB54: mov     ecx, [esp+4Ch+var_C]
0x89FB58: mov     large fs:0, ecx
0x89FB5F: pop     ecx
0x89FB60: pop     edi
0x89FB61: pop     esi
0x89FB62: pop     ebx
0x89FB63: add     esp, 3Ch
0x89FB66: retn    4
