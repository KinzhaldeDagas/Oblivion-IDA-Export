0x88CF90: sub     esp, 1Ch
0x88CF93: push    ebx
0x88CF94: push    esi
0x88CF95: mov     esi, [esp+24h+arg_0]
0x88CF99: xor     bl, bl
0x88CF9B: test    esi, esi
0x88CF9D: jz      short loc_88CFF5
0x88CF9F: cmp     [esp+24h+arg_C], bl
0x88CFA3: jnz     short loc_88CFBA
0x88CFA5: push    esi
0x88CFA6: call    sub_6FA970
0x88CFAB: add     esp, 4
0x88CFAE: test    eax, eax
0x88CFB0: jz      short loc_88CFF5
0x88CFB2: mov     eax, [eax+0Ch]
0x88CFB5: and     eax, 2
0x88CFB8: jz      short loc_88CFF5
0x88CFBA: mov     al, [esp+24h+arg_8]
0x88CFBE: movzx   ecx, [esp+24h+arg_4]
0x88CFC3: mov     [esp+24h+var_18], al
0x88CFC7: mov     eax, ds:0B2E330h
0x88CFCC: test    eax, eax
0x88CFCE: mov     bl, 1
0x88CFD0: mov     [esp+24h+var_1C], 0
0x88CFD8: mov     [esp+24h+var_14], 0Ch
0x88CFE0: mov     [esp+24h+var_10], ecx
0x88CFE4: jz      short loc_88CFF5
0x88CFE6: push    eax
0x88CFE7: lea     edx, [esp+28h+var_1C]
0x88CFEB: push    edx
0x88CFEC: push    esi
0x88CFED: call    sub_88A7D0
0x88CFF2: add     esp, 0Ch
0x88CFF5: pop     esi
0x88CFF6: mov     al, bl
0x88CFF8: pop     ebx
0x88CFF9: add     esp, 1Ch
0x88CFFC: retn
