0x4F1990: push    ecx
0x4F1991: cmp     [esp+4+arg_8], 0
0x4F1996: push    edi
0x4F1997: mov     edi, ecx
0x4F1999: jz      loc_4F1A51
0x4F199F: push    ebx
0x4F19A0: push    ebp
0x4F19A1: push    esi
0x4F19A2: cmp     byte ptr ds:0B09DB0h, 0
0x4F19A9: mov     [esp+14h+var_1], 0
0x4F19AE: jz      short loc_4F19C9
0x4F19B0: mov     eax, [esp+14h+arg_C]
0x4F19B4: mov     ecx, [esp+14h+arg_8]
0x4F19B8: mov     edx, [esp+14h+arg_10]
0x4F19BC: push    eax
0x4F19BD: push    ecx
0x4F19BE: push    edx
0x4F19BF: call    sub_4D16D0
0x4F19C4: add     esp, 0Ch
0x4F19C7: jmp     short loc_4F1A3F
0x4F19C9: lea     eax, [edi+10h]
0x4F19CC: xor     ebx, ebx
0x4F19CE: test    eax, eax
0x4F19D0: jz      short loc_4F19E1
0x4F19D2: cmp     dword ptr [eax], 0
0x4F19D5: jz      short loc_4F19DA
0x4F19D7: add     ebx, 1
0x4F19DA: mov     eax, [eax+4]
0x4F19DD: test    eax, eax
0x4F19DF: jnz     short loc_4F19D2
0x4F19E1: xor     ebp, ebp
0x4F19E3: test    ebx, ebx
0x4F19E5: jbe     short loc_4F1A43
0x4F19E7: push    ebp; a2
0x4F19E8: mov     ecx, edi; this
0x4F19EA: call    TESForm_GetOverrideFile
0x4F19EF: mov     ecx, eax
0x4F19F1: call    sub_4520F0
0x4F19F6: mov     esi, eax
0x4F19F8: test    esi, esi
0x4F19FA: jz      short loc_4F1A34
0x4F19FC: mov     eax, [esp+14h+arg_4]
0x4F1A00: mov     ecx, [esp+14h+arg_0]
0x4F1A04: push    eax
0x4F1A05: push    ecx
0x4F1A06: push    esi
0x4F1A07: mov     ecx, edi
0x4F1A09: call    TESWorldSpace__FindCellInFile
0x4F1A0E: test    al, al
0x4F1A10: jz      short loc_4F1A34
0x4F1A12: mov     edx, [esp+14h+arg_8]
0x4F1A16: mov     eax, [esp+14h+arg_4]
0x4F1A1A: mov     ecx, [esp+14h+arg_0]
0x4F1A1E: push    edx
0x4F1A1F: push    eax
0x4F1A20: push    ecx
0x4F1A21: push    edi
0x4F1A22: push    esi
0x4F1A23: call    sub_4D43F0
0x4F1A28: add     esp, 14h
0x4F1A2B: test    al, al
0x4F1A2D: jz      short loc_4F1A34
0x4F1A2F: mov     [esp+14h+var_1], 1
0x4F1A34: add     ebp, 1
0x4F1A37: cmp     ebp, ebx
0x4F1A39: jb      short loc_4F19E7
0x4F1A3B: mov     al, [esp+14h+var_1]
0x4F1A3F: test    al, al
0x4F1A41: jnz     short loc_4F1A4E
0x4F1A43: mov     edi, [edi+7Ch]
0x4F1A46: test    edi, edi
0x4F1A48: jnz     loc_4F19A2
0x4F1A4E: pop     esi
0x4F1A4F: pop     ebp
0x4F1A50: pop     ebx
0x4F1A51: pop     edi
0x4F1A52: pop     ecx
0x4F1A53: retn    14h
