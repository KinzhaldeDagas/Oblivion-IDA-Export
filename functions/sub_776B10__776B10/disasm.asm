0x776B10: sub     esp, 0Ch
0x776B13: push    esi
0x776B14: push    edi
0x776B15: mov     edi, ecx
0x776B17: mov     edx, [edi+4]
0x776B1A: xor     eax, eax
0x776B1C: test    edx, edx
0x776B1E: jbe     short loc_776B38
0x776B20: mov     esi, [edi+8]
0x776B23: mov     ecx, esi
0x776B25: cmp     dword ptr [ecx], 0
0x776B28: jnz     loc_776BF0
0x776B2E: add     eax, 1
0x776B31: add     ecx, 4
0x776B34: cmp     eax, edx
0x776B36: jb      short loc_776B25
0x776B38: xor     eax, eax
0x776B3A: test    eax, eax
0x776B3C: mov     [esp+14h+var_8], eax
0x776B40: jz      loc_776BEA
0x776B46: push    ebx
0x776B47: push    ebp
0x776B48: jmp     short loc_776B50
0x776B4A: align 10h
0x776B50: lea     eax, [esp+1Ch+var_C]
0x776B54: push    eax
0x776B55: lea     ecx, [esp+20h+var_4]
0x776B59: push    ecx
0x776B5A: lea     edx, [esp+24h+var_8]
0x776B5E: push    edx
0x776B5F: mov     ecx, edi
0x776B61: mov     [esp+28h+var_C], 0
0x776B69: call    sub_452600
0x776B6E: mov     ebp, [esp+1Ch+var_C]
0x776B72: test    ebp, ebp
0x776B74: jz      short loc_776BDD
0x776B76: mov     eax, [edi+20h]
0x776B79: mov     edx, [ebp+6Ch]
0x776B7C: mov     ecx, [eax]
0x776B7E: push    0
0x776B80: push    edx
0x776B81: push    eax
0x776B82: mov     eax, [ecx+0D4h]
0x776B88: call    eax
0x776B8A: mov     esi, dword ptr [esp+1Ch+var_4]
0x776B8E: push    esi
0x776B8F: mov     ecx, edi
0x776B91: mov     byte ptr [ebp+71h], 0
0x776B95: call    NiTMap_RemoveAt
0x776B9A: mov     eax, [edi+14h]
0x776B9D: test    eax, eax
0x776B9F: lea     ebx, [edi+10h]
0x776BA2: jz      short loc_776BB4
0x776BA4: cmp     esi, [eax+8]
0x776BA7: lea     edx, [eax+8]
0x776BAA: mov     ecx, eax
0x776BAC: mov     eax, [eax]
0x776BAE: jz      short loc_776BB6
0x776BB0: test    eax, eax
0x776BB2: jnz     short loc_776BA4
0x776BB4: xor     ecx, ecx
0x776BB6: test    ecx, ecx
0x776BB8: mov     [esp+1Ch+var_C], ecx
0x776BBC: jz      short loc_776BCA
0x776BBE: lea     ecx, [esp+1Ch+var_C]
0x776BC2: push    ecx
0x776BC3: mov     ecx, ebx
0x776BC5: call    sub_7AA860
0x776BCA: push    ebp
0x776BCB: mov     dword ptr [esi+104h], 0
0x776BD5: call    FormHeapFree
0x776BDA: add     esp, 4
0x776BDD: cmp     [esp+1Ch+var_8], 0
0x776BE2: jnz     loc_776B50
0x776BE8: pop     ebp
0x776BE9: pop     ebx
0x776BEA: pop     edi
0x776BEB: pop     esi
0x776BEC: add     esp, 0Ch
0x776BEF: retn
0x776BF0: mov     eax, [esi+eax*4]
0x776BF3: jmp     loc_776B3A
