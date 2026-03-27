0x88AAF0: mov     eax, [esp+arg_0]
0x88AAF4: mov     ecx, [eax+10h]
0x88AAF7: test    ecx, ecx
0x88AAF9: mov     eax, [esp+arg_4]
0x88AAFD: push    esi
0x88AAFE: mov     esi, [eax+10h]
0x88AB01: push    edi
0x88AB02: mov     edi, [eax+0Ch]
0x88AB05: jz      short loc_88AB18
0x88AB07: mov     eax, [ecx+8]
0x88AB0A: test    eax, eax
0x88AB0C: jz      short loc_88AB18
0x88AB0E: add     eax, 14h
0x88AB11: jz      short loc_88AB18
0x88AB13: mov     edx, [eax+1Ch]
0x88AB16: jmp     short loc_88AB1A
0x88AB18: xor     edx, edx
0x88AB1A: mov     eax, edx
0x88AB1C: and     eax, 3Fh
0x88AB1F: cmp     esi, eax
0x88AB21: jz      short loc_88AB53
0x88AB23: test    edi, edi
0x88AB25: jz      short loc_88AB2B
0x88AB27: cmp     edi, eax
0x88AB29: jnz     short loc_88AB53
0x88AB2B: mov     eax, edx
0x88AB2D: xor     eax, esi
0x88AB2F: and     eax, 3Fh
0x88AB32: xor     eax, edx
0x88AB34: test    ecx, ecx
0x88AB36: jz      short loc_88AB47
0x88AB38: mov     edx, [ecx+8]
0x88AB3B: test    edx, edx
0x88AB3D: jz      short loc_88AB47
0x88AB3F: add     edx, 14h
0x88AB42: jz      short loc_88AB47
0x88AB44: mov     [edx+1Ch], eax
0x88AB47: mov     edx, [ecx]
0x88AB49: mov     eax, [edx+80h]
0x88AB4F: pop     edi
0x88AB50: pop     esi
0x88AB51: jmp     eax
0x88AB53: pop     edi
0x88AB54: pop     esi
0x88AB55: retn
