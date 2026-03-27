0x4DE880: mov     eax, [esp+arg_0]
0x4DE884: push    ebx
0x4DE885: xor     bl, bl
0x4DE887: test    eax, eax
0x4DE889: jnz     short loc_4DE894
0x4DE88B: call    TESObjectREFR_GetOwner
0x4DE890: test    eax, eax
0x4DE892: jz      short loc_4DE8BF
0x4DE894: mov     cl, [eax+4]
0x4DE897: cmp     cl, 6
0x4DE89A: jnz     short loc_4DE8AC
0x4DE89C: movzx   eax, byte ptr [eax+34h]
0x4DE8A0: shr     eax, 1
0x4DE8A2: test    al, 1
0x4DE8A4: jz      short loc_4DE8BF
0x4DE8A6: mov     al, 1
0x4DE8A8: pop     ebx
0x4DE8A9: retn    4
0x4DE8AC: cmp     cl, 23h ; '#'
0x4DE8AF: jnz     short loc_4DE8BF
0x4DE8B1: lea     ecx, [eax+24h]
0x4DE8B4: call    TESActorBaseData_AllFactionsAreEvil
0x4DE8B9: test    al, al
0x4DE8BB: mov     al, 1
0x4DE8BD: jnz     short loc_4DE8C1
0x4DE8BF: mov     al, bl
0x4DE8C1: pop     ebx
0x4DE8C2: retn    4
