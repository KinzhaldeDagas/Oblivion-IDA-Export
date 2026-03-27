0x644D30: push    ecx
0x644D31: mov     eax, [ecx+8]
0x644D34: push    esi
0x644D35: mov     esi, [eax+28h]
0x644D38: test    esi, esi
0x644D3A: jnz     short loc_644D43
0x644D3C: xor     al, al
0x644D3E: pop     esi
0x644D3F: pop     ecx
0x644D40: retn    8
0x644D43: push    edi
0x644D44: mov     ecx, esi
0x644D46: call    TargetData__GetTargetType
0x644D4B: mov     ecx, esi
0x644D4D: mov     edi, eax
0x644D4F: call    TargetData__GetTargetType
0x644D54: test    eax, eax
0x644D56: jnz     short loc_644D91
0x644D58: mov     ecx, esi
0x644D5A: call    sub_569E60
0x644D5F: mov     ecx, esi
0x644D61: mov     edi, eax
0x644D63: call    sub_569E60
0x644D68: mov     eax, [eax+0Ch]
0x644D6B: mov     edx, [edi]
0x644D6D: lea     ecx, [esp+0Ch+var_4]
0x644D71: push    ecx
0x644D72: push    eax
0x644D73: mov     eax, [edx+170h]
0x644D79: push    1
0x644D7B: push    0
0x644D7D: mov     ecx, edi
0x644D7F: call    eax
0x644D81: mov     ecx, [esp+1Ch+arg_0]
0x644D85: push    eax
0x644D86: call    sub_5E4A00
0x644D8B: pop     edi
0x644D8C: pop     esi
0x644D8D: pop     ecx
0x644D8E: retn    8
0x644D91: cmp     edi, 1
0x644D94: jnz     short loc_644DBB
0x644D96: mov     edx, [esp+0Ch+arg_4]
0x644D9A: lea     ecx, [esp+0Ch+var_4]
0x644D9E: push    ecx
0x644D9F: push    0
0x644DA1: push    edx
0x644DA2: push    0
0x644DA4: mov     ecx, esi
0x644DA6: call    sub_569E70
0x644DAB: mov     ecx, [esp+1Ch+arg_0]
0x644DAF: push    eax
0x644DB0: call    sub_5E4A00
0x644DB5: pop     edi
0x644DB6: pop     esi
0x644DB7: pop     ecx
0x644DB8: retn    8
0x644DBB: mov     ecx, [esp+0Ch+arg_4]
0x644DBF: lea     eax, [esp+0Ch+var_4]
0x644DC3: push    eax
0x644DC4: push    0
0x644DC6: push    ecx
0x644DC7: mov     ecx, esi
0x644DC9: call    sub_569E80
0x644DCE: mov     ecx, [esp+18h+arg_0]
0x644DD2: push    eax
0x644DD3: push    0
0x644DD5: call    sub_5E4A00
0x644DDA: pop     edi
0x644DDB: pop     esi
0x644DDC: pop     ecx
0x644DDD: retn    8
