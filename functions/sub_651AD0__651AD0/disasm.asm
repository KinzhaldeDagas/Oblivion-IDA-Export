0x651AD0: push    ecx
0x651AD1: mov     eax, [ecx]
0x651AD3: mov     eax, [eax+18Ch]
0x651AD9: push    ebx
0x651ADA: push    ebp
0x651ADB: push    esi
0x651ADC: lea     edx, [esp+10h+var_4]
0x651AE0: push    edx
0x651AE1: xor     ebp, ebp
0x651AE3: call    eax
0x651AE5: mov     ebx, [eax]
0x651AE7: mov     eax, [esp+10h+var_4]
0x651AEB: test    eax, eax
0x651AED: jz      short loc_651B0D
0x651AEF: mov     esi, eax
0x651AF1: add     eax, 4
0x651AF4: push    eax; lpAddend
0x651AF5: call    dword ptr ds:0A2807Ch
0x651AFB: test    eax, eax
0x651AFD: jnz     short loc_651B0D
0x651AFF: test    esi, esi
0x651B01: jz      short loc_651B0D
0x651B03: mov     edx, [esi]
0x651B05: mov     eax, [edx]
0x651B07: push    1
0x651B09: mov     ecx, esi
0x651B0B: call    eax
0x651B0D: test    ebx, ebx
0x651B0F: jz      short loc_651B73
0x651B11: push    edi
0x651B12: mov     edi, [esp+14h+arg_0]
0x651B16: mov     edx, [edi]
0x651B18: mov     eax, [edx+198h]
0x651B1E: push    0
0x651B20: mov     ecx, edi
0x651B22: call    eax
0x651B24: test    al, al
0x651B26: jnz     short loc_651B7D
0x651B28: test    dword ptr [ebx+1F4h], 800h
0x651B32: mov     esi, 0Ch
0x651B37: jz      short loc_651B3E
0x651B39: mov     esi, 18h
0x651B3E: mov     edx, [edi]
0x651B40: mov     eax, [edx+190h]
0x651B46: mov     ecx, edi
0x651B48: add     esi, 2Ch ; ','
0x651B4B: call    eax
0x651B4D: test    al, al
0x651B4F: jz      short loc_651B56
0x651B51: add     esi, 0Ch
0x651B54: jmp     short loc_651B59
0x651B56: add     esi, 8
0x651B59: mov     ecx, ds:0B33B00h
0x651B5F: cmp     byte ptr [ecx+7Ch], 77h ; 'w'
0x651B63: jb      short loc_651B68
0x651B65: add     esi, 8
0x651B68: pop     edi
0x651B69: mov     ax, si
0x651B6C: pop     esi
0x651B6D: pop     ebp
0x651B6E: pop     ebx
0x651B6F: pop     ecx
0x651B70: retn    4
0x651B73: pop     esi
0x651B74: mov     ax, bp
0x651B77: pop     ebp
0x651B78: pop     ebx
0x651B79: pop     ecx
0x651B7A: retn    4
0x651B7D: pop     edi
0x651B7E: pop     esi
0x651B7F: mov     ax, bp
0x651B82: pop     ebp
0x651B83: pop     ebx
0x651B84: pop     ecx
0x651B85: retn    4
