0x728D00: sub     esp, 18h
0x728D03: push    ebx
0x728D04: push    edi
0x728D05: mov     edi, ecx
0x728D07: xor     ebx, ebx
0x728D09: cmp     [edi+3Ch], bl
0x728D0C: jz      loc_728D9A
0x728D12: push    esi
0x728D13: mov     esi, [edi+34h]
0x728D16: cmp     esi, ebx
0x728D18: mov     [esp+24h+var_18], ebx
0x728D1C: mov     [esp+24h+var_C], ebx
0x728D20: mov     [esp+24h+var_14], ebx
0x728D24: jz      short loc_728D85
0x728D26: mov     eax, [esi]
0x728D28: mov     edx, [eax+4Ch]
0x728D2B: mov     ecx, esi
0x728D2D: call    edx
0x728D2F: test    al, al
0x728D31: jz      short loc_728D85
0x728D33: lea     eax, [esp+24h+var_18]
0x728D37: push    eax
0x728D38: lea     ecx, [esp+28h+var_10]
0x728D3C: push    ecx
0x728D3D: lea     edx, [esp+2Ch+var_8]
0x728D41: push    edx
0x728D42: lea     eax, [esp+30h+var_C]
0x728D46: push    eax
0x728D47: mov     eax, [esi+2Ch]
0x728D4A: and     eax, 1
0x728D4D: lea     ecx, [esp+34h+var_4]
0x728D51: push    ecx
0x728D52: lea     edx, [esp+38h+var_14]
0x728D56: add     eax, eax
0x728D58: push    edx
0x728D59: or      eax, 1
0x728D5C: push    eax
0x728D5D: mov     ecx, esi
0x728D5F: mov     [esp+40h+var_10], ebx
0x728D63: call    sub_726320
0x728D68: mov     eax, [esp+24h+arg_0]
0x728D6C: mov     edi, [esp+24h+var_14]
0x728D70: mov     ecx, [esp+24h+var_18]
0x728D74: pop     esi
0x728D75: mov     [eax], edi
0x728D77: pop     edi
0x728D78: mov     [eax+8], bl
0x728D7B: mov     [eax+4], ecx
0x728D7E: pop     ebx
0x728D7F: add     esp, 18h
0x728D82: retn    4
0x728D85: mov     edi, [edi+20h]
0x728D88: mov     eax, [esp+24h+arg_0]
0x728D8C: mov     ecx, 0Ch
0x728D91: mov     [eax], edi
0x728D93: mov     [eax+4], ecx
0x728D96: mov     [eax+8], bl
0x728D99: pop     esi
0x728D9A: pop     edi
0x728D9B: pop     ebx
0x728D9C: add     esp, 18h
0x728D9F: retn    4
