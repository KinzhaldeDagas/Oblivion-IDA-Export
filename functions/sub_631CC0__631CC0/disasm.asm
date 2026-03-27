0x631CC0: push    ecx
0x631CC1: fld     dword ptr ds:0A3D8F0h
0x631CC7: push    ebx
0x631CC8: mov     ebx, [esp+8+arg_0]
0x631CCC: fstp    [esp+8+var_4]
0x631CD0: push    esi
0x631CD1: push    edi
0x631CD2: mov     edi, ecx
0x631CD4: mov     ecx, ebx
0x631CD6: call    sub_5E32D0
0x631CDB: test    al, al
0x631CDD: mov     esi, [esp+10h+arg_4]
0x631CE1: jz      short loc_631D2C
0x631CE3: test    esi, esi
0x631CE5: jnz     short loc_631D30
0x631CE7: cmp     [edi+2Ch], esi
0x631CEA: jz      short loc_631D59
0x631CEC: mov     ecx, [edi+2Ch]
0x631CEF: mov     eax, [ecx]
0x631CF1: mov     edx, [eax+190h]
0x631CF7: call    edx
0x631CF9: test    al, al
0x631CFB: jz      short loc_631D59
0x631CFD: mov     edi, [edi+2Ch]
0x631D00: mov     eax, [edi+8]
0x631D03: shr     eax, 0Bh
0x631D06: test    al, 1
0x631D08: jnz     short loc_631D59
0x631D0A: mov     edx, [ebx]
0x631D0C: mov     eax, [edx+224h]
0x631D12: push    edi
0x631D13: mov     ecx, ebx
0x631D15: call    eax
0x631D17: mov     [esp+10h+arg_4], eax
0x631D1B: fild    [esp+10h+arg_4]
0x631D1F: pop     edi
0x631D20: pop     esi
0x631D21: pop     ebx
0x631D22: fstp    [esp+4+var_4]
0x631D25: fld     [esp+4+var_4]
0x631D28: pop     ecx
0x631D29: retn    8
0x631D2C: test    esi, esi
0x631D2E: jz      short loc_631D59
0x631D30: mov     edx, [esi]
0x631D32: mov     eax, [edx+190h]
0x631D38: mov     ecx, esi
0x631D3A: call    eax
0x631D3C: test    al, al
0x631D3E: jz      short loc_631D59
0x631D40: mov     edx, [ebx]
0x631D42: mov     eax, [edx+224h]
0x631D48: push    esi
0x631D49: mov     ecx, ebx
0x631D4B: call    eax
0x631D4D: mov     [esp+10h+arg_4], eax
0x631D51: fild    [esp+10h+arg_4]
0x631D55: fstp    [esp+10h+var_4]
0x631D59: fld     [esp+10h+var_4]
0x631D5D: pop     edi
0x631D5E: pop     esi
0x631D5F: pop     ebx
0x631D60: pop     ecx
0x631D61: retn    8
