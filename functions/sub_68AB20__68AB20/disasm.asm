0x68AB20: sub     esp, 8
0x68AB23: push    ebx
0x68AB24: push    esi
0x68AB25: push    edi
0x68AB26: mov     esi, ecx
0x68AB28: xor     bl, bl
0x68AB2A: call    sub_689A00
0x68AB2F: mov     eax, [esp+14h+arg_0]
0x68AB33: mov     edi, [esp+14h+arg_C]
0x68AB37: xor     edx, edx
0x68AB39: cmp     eax, edx
0x68AB3B: jz      short loc_68AB82
0x68AB3D: mov     ecx, [esp+14h+arg_8]
0x68AB41: cmp     ecx, edx
0x68AB43: jz      short loc_68AB82
0x68AB45: mov     [esp+14h+var_8], edx
0x68AB49: mov     [esp+14h+var_4], edx
0x68AB4D: mov     edx, [esp+14h+arg_10]
0x68AB51: push    edx
0x68AB52: lea     edx, [esp+18h+var_8]
0x68AB56: push    edx
0x68AB57: push    edi
0x68AB58: push    ecx
0x68AB59: mov     ecx, [esp+24h+arg_4]
0x68AB5D: push    ecx
0x68AB5E: push    eax
0x68AB5F: call    sub_680110
0x68AB64: mov     bl, al
0x68AB66: add     esp, 18h
0x68AB69: test    bl, bl
0x68AB6B: jz      short loc_68AB79
0x68AB6D: lea     edx, [esp+14h+var_8]
0x68AB71: push    edx
0x68AB72: mov     ecx, esi
0x68AB74: call    sub_689A60
0x68AB79: lea     ecx, [esp+14h+var_8]
0x68AB7D: call    BSSimpleList_Clear
0x68AB82: mov     ecx, esi
0x68AB84: call    sub_689C60
0x68AB89: test    bl, bl
0x68AB8B: jz      short loc_68AB95
0x68AB8D: push    edi
0x68AB8E: mov     ecx, esi
0x68AB90: call    sub_68A280
0x68AB95: pop     edi
0x68AB96: pop     esi
0x68AB97: mov     al, bl
0x68AB99: pop     ebx
0x68AB9A: add     esp, 8
0x68AB9D: retn    14h
