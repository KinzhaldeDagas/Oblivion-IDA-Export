0x88CD50: sub     esp, 1Ch
0x88CD53: push    esi
0x88CD54: mov     esi, [esp+20h+arg_0]
0x88CD58: xor     al, al
0x88CD5A: test    esi, esi
0x88CD5C: jz      short loc_88CDB7
0x88CD5E: push    ebx
0x88CD5F: mov     bl, [esp+24h+arg_8]
0x88CD63: test    bl, bl
0x88CD65: jnz     short loc_88CD7C
0x88CD67: push    esi
0x88CD68: call    sub_6FA970
0x88CD6D: add     esp, 4
0x88CD70: test    eax, eax
0x88CD72: jz      short loc_88CDB4
0x88CD74: mov     eax, [eax+0Ch]
0x88CD77: and     eax, 2
0x88CD7A: jz      short loc_88CDB4
0x88CD7C: mov     al, [esp+24h+arg_4]
0x88CD80: mov     [esp+24h+var_18], al
0x88CD84: mov     eax, ds:0B2E304h
0x88CD89: test    eax, eax
0x88CD8B: mov     [esp+24h+var_1C], 0
0x88CD93: mov     [esp+24h+var_14], 1
0x88CD9B: jz      short loc_88CDAC
0x88CD9D: push    eax
0x88CD9E: lea     ecx, [esp+28h+var_1C]
0x88CDA2: push    ecx
0x88CDA3: push    esi
0x88CDA4: call    sub_88A7D0
0x88CDA9: add     esp, 0Ch
0x88CDAC: mov     al, bl
0x88CDAE: pop     ebx
0x88CDAF: pop     esi
0x88CDB0: add     esp, 1Ch
0x88CDB3: retn
0x88CDB4: xor     al, al
0x88CDB6: pop     ebx
0x88CDB7: pop     esi
0x88CDB8: add     esp, 1Ch
0x88CDBB: retn
