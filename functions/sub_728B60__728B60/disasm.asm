0x728B60: sub     esp, 18h
0x728B63: push    ebx
0x728B64: push    edi
0x728B65: mov     edi, ecx
0x728B67: xor     ebx, ebx
0x728B69: cmp     [edi+3Ch], bl
0x728B6C: jz      loc_728BF3
0x728B72: push    esi
0x728B73: mov     esi, [edi+34h]
0x728B76: cmp     esi, ebx
0x728B78: mov     [esp+24h+var_14], ebx
0x728B7C: mov     [esp+24h+var_C], ebx
0x728B80: mov     [esp+24h+var_18], ebx
0x728B84: jz      short loc_728BC5
0x728B86: mov     eax, [esi]
0x728B88: mov     edx, [eax+4Ch]
0x728B8B: mov     ecx, esi
0x728B8D: call    edx
0x728B8F: test    al, al
0x728B91: jz      short loc_728BBD
0x728B93: lea     eax, [esp+24h+var_14]
0x728B97: push    eax
0x728B98: lea     ecx, [esp+28h+var_10]
0x728B9C: push    ecx
0x728B9D: lea     edx, [esp+2Ch+var_8]
0x728BA1: push    edx
0x728BA2: lea     eax, [esp+30h+var_C]
0x728BA6: push    eax
0x728BA7: lea     ecx, [esp+34h+var_4]
0x728BAB: push    ecx
0x728BAC: lea     edx, [esp+38h+var_18]
0x728BB0: push    edx
0x728BB1: push    ebx
0x728BB2: mov     ecx, esi
0x728BB4: mov     [esp+40h+var_10], ebx
0x728BB8: call    sub_726320
0x728BBD: mov     ecx, [esp+24h+var_18]
0x728BC1: cmp     ecx, ebx
0x728BC3: jnz     short loc_728BE2
0x728BC5: mov     ecx, [edi+1Ch]
0x728BC8: mov     eax, [esp+24h+arg_0]
0x728BCC: pop     esi
0x728BCD: mov     edx, 0Ch
0x728BD2: pop     edi
0x728BD3: mov     [eax+8], bl
0x728BD6: mov     [eax], ecx
0x728BD8: mov     [eax+4], edx
0x728BDB: pop     ebx
0x728BDC: add     esp, 18h
0x728BDF: retn    4
0x728BE2: mov     eax, [esp+24h+arg_0]
0x728BE6: mov     edx, [esp+24h+var_14]
0x728BEA: mov     [eax], ecx
0x728BEC: mov     [eax+4], edx
0x728BEF: mov     [eax+8], bl
0x728BF2: pop     esi
0x728BF3: pop     edi
0x728BF4: pop     ebx
0x728BF5: add     esp, 18h
0x728BF8: retn    4
