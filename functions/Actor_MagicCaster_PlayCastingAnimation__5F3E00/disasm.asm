0x5F3E00: push    0FFFFFFFFh
0x5F3E02: push    offset SEH_5BF7D0
0x5F3E07: mov     eax, large fs:0
0x5F3E0D: push    eax
0x5F3E0E: sub     esp, 10h
0x5F3E11: push    ebx
0x5F3E12: push    ebp
0x5F3E13: push    esi
0x5F3E14: push    edi
0x5F3E15: mov     eax, ds:0B30AACh
0x5F3E1A: xor     eax, esp
0x5F3E1C: push    eax
0x5F3E1D: lea     eax, [esp+30h+var_C]
0x5F3E21: mov     large fs:0, eax
0x5F3E27: mov     edi, ecx
0x5F3E29: mov     ecx, ds:0B333C4h; this
0x5F3E2F: lea     ebx, [edi-5Ch]
0x5F3E32: cmp     ebx, ecx
0x5F3E34: mov     [esp+30h+var_14], ebx
0x5F3E38: jnz     short loc_5F3E43
0x5F3E3A: push    0; a2
0x5F3E3C: call    Player_GetAnimData
0x5F3E41: jmp     short loc_5F3E51
0x5F3E43: mov     eax, [edi-5Ch]
0x5F3E46: mov     edx, [eax+164h]
0x5F3E4C: lea     ecx, [edi-5Ch]
0x5F3E4F: call    edx
0x5F3E51: mov     esi, [edi]
0x5F3E53: mov     edx, [esi+30h]
0x5F3E56: mov     [esp+30h+var_1C], eax
0x5F3E5A: push    0
0x5F3E5C: lea     eax, [esp+34h+var_18]
0x5F3E60: push    eax
0x5F3E61: push    0
0x5F3E63: mov     ecx, edi
0x5F3E65: call    edx
0x5F3E67: push    eax
0x5F3E68: mov     eax, [esi+1Ch]
0x5F3E6B: mov     ecx, edi
0x5F3E6D: call    eax
0x5F3E6F: test    al, al
0x5F3E71: jnz     Actor_MagicCaster_PlayCastingAnimation___GetCasterAnimData
