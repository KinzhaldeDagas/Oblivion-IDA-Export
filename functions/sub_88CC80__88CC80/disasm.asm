0x88CC80: sub     esp, 1Ch
0x88CC83: push    ebx
0x88CC84: push    esi
0x88CC85: push    edi
0x88CC86: mov     edi, [esp+28h+arg_0]
0x88CC8A: xor     ebx, ebx
0x88CC8C: cmp     edi, ebx
0x88CC8E: mov     esi, ecx
0x88CC90: jz      loc_88CD45
0x88CC96: cmp     [esp+28h+arg_10], bl
0x88CC9A: jnz     short loc_88CCBB
0x88CC9C: push    edi
0x88CC9D: call    sub_6FA970
0x88CCA2: add     esp, 4
0x88CCA5: cmp     eax, ebx
0x88CCA7: jz      loc_88CD45
0x88CCAD: mov     eax, [eax+0Ch]
0x88CCB0: and     eax, 2
0x88CCB3: cmp     eax, ebx
0x88CCB5: jz      loc_88CD45
0x88CCBB: mov     al, [esp+28h+arg_4]
0x88CCBF: mov     byte ptr [esi+18h], 1
0x88CCC3: cmp     ds:0BA7908h, bl
0x88CCC9: mov     [esp+28h+var_1C], esi
0x88CCCD: mov     [esp+28h+var_18], al
0x88CCD1: jz      short loc_88CCF3
0x88CCD3: mov     eax, ds:0B2E328h
0x88CCD8: cmp     eax, ebx
0x88CCDA: mov     [esp+28h+var_14], 0Ah
0x88CCE2: jz      short loc_88CCF3
0x88CCE4: push    eax
0x88CCE5: lea     ecx, [esp+2Ch+var_1C]
0x88CCE9: push    ecx
0x88CCEA: push    edi
0x88CCEB: call    sub_88A7D0
0x88CCF0: add     esp, 0Ch
0x88CCF3: xor     eax, eax
0x88CCF5: cmp     [esp+28h+arg_8], bl
0x88CCF9: setnz   al
0x88CCFC: cmp     [edi+0A8h], ebx
0x88CD02: jnz     short loc_88CD06
0x88CD04: xor     eax, eax
0x88CD06: mov     edx, [esp+28h+arg_C]
0x88CD0A: mov     [esp+28h+var_10], eax
0x88CD0E: mov     eax, ds:0B2E300h
0x88CD13: cmp     eax, ebx
0x88CD15: mov     [esp+28h+var_14], ebx
0x88CD19: mov     [esp+28h+var_C], edx
0x88CD1D: mov     [esp+28h+var_8], ebx
0x88CD21: mov     [esp+28h+var_4], 1
0x88CD29: jz      short loc_88CD3A
0x88CD2B: push    eax
0x88CD2C: lea     eax, [esp+2Ch+var_1C]
0x88CD30: push    eax
0x88CD31: push    edi
0x88CD32: call    sub_88A7D0
0x88CD37: add     esp, 0Ch
0x88CD3A: pop     edi
0x88CD3B: pop     esi
0x88CD3C: mov     al, 1
0x88CD3E: pop     ebx
0x88CD3F: add     esp, 1Ch
0x88CD42: retn    14h
0x88CD45: pop     edi
0x88CD46: pop     esi
0x88CD47: mov     al, bl
0x88CD49: pop     ebx
0x88CD4A: add     esp, 1Ch
0x88CD4D: retn    14h
