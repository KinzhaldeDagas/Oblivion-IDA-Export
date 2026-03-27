0x776C40: push    ebx
0x776C41: mov     ebx, [esp+4+arg_4]
0x776C45: push    esi
0x776C46: push    edi
0x776C47: mov     edi, [esp+0Ch+arg_0]
0x776C4B: mov     esi, [edi+4]
0x776C4E: mov     eax, [esi]
0x776C50: mov     edx, [eax+1Ch]
0x776C53: push    ebx
0x776C54: push    edi
0x776C55: mov     ecx, esi
0x776C57: call    edx
0x776C59: mov     eax, [esi]
0x776C5B: mov     edx, [eax+18h]
0x776C5E: push    ebx
0x776C5F: push    edi
0x776C60: mov     ecx, esi
0x776C62: call    edx
0x776C64: test    eax, eax
0x776C66: jz      short loc_776C7B
0x776C68: cmp     ebx, [edi+1Ch]
0x776C6B: jnb     short loc_776C73
0x776C6D: mov     ecx, [edi+24h]
0x776C70: mov     [ecx+ebx*4], eax
0x776C73: pop     edi
0x776C74: pop     esi
0x776C75: mov     al, 1
0x776C77: pop     ebx
0x776C78: retn    8
0x776C7B: pop     edi
0x776C7C: pop     esi
0x776C7D: xor     al, al
0x776C7F: pop     ebx
0x776C80: retn    8
