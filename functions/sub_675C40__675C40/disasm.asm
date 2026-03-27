0x675C40: push    edi
0x675C41: mov     edi, [esp+4+arg_C]
0x675C45: cmp     edi, 6
0x675C48: ja      short loc_675CB2
0x675C4A: push    ebx
0x675C4B: push    ebp
0x675C4C: push    esi
0x675C4D: mov     esi, [ecx+edi*4+28h]
0x675C51: test    esi, esi
0x675C53: jz      short loc_675CA0
0x675C55: mov     ebx, [esp+10h+arg_14]
0x675C59: mov     ebp, [esp+10h+arg_8]
0x675C5D: lea     ecx, [ecx+0]
0x675C60: mov     ecx, [esi]
0x675C62: test    ecx, ecx
0x675C64: jz      short loc_675CA0
0x675C66: cmp     [ecx+4], edi
0x675C69: mov     esi, [esi+4]
0x675C6C: jnz     short loc_675C9C
0x675C6E: mov     eax, [esp+10h+arg_4]
0x675C72: cmp     [ecx+0Ch], eax
0x675C75: jnz     short loc_675C9C
0x675C77: mov     eax, [esp+10h+arg_0]
0x675C7B: cmp     [ecx+8], eax
0x675C7E: jz      short loc_675C84
0x675C80: test    eax, eax
0x675C82: jnz     short loc_675C9C
0x675C84: cmp     ebx, 0FFFFFFFFh
0x675C87: jz      short loc_675C8E
0x675C89: cmp     ebx, [ecx+28h]
0x675C8C: jnz     short loc_675C9C
0x675C8E: test    ebp, ebp
0x675C90: jz      short loc_675CA9
0x675C92: push    ebp
0x675C93: call    sub_605ED0
0x675C98: test    al, al
0x675C9A: jnz     short loc_675CA9
0x675C9C: test    esi, esi
0x675C9E: jnz     short loc_675C60
0x675CA0: pop     esi
0x675CA1: pop     ebp
0x675CA2: pop     ebx
0x675CA3: xor     al, al
0x675CA5: pop     edi
0x675CA6: retn    18h
0x675CA9: pop     esi
0x675CAA: pop     ebp
0x675CAB: pop     ebx
0x675CAC: mov     al, 1
0x675CAE: pop     edi
0x675CAF: retn    18h
0x675CB2: xor     al, al
0x675CB4: pop     edi
0x675CB5: retn    18h
