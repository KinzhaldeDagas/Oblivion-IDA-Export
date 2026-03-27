0x681D90: push    edi
0x681D91: mov     edi, [esp+4+arg_0]
0x681D95: test    edi, edi
0x681D97: jz      short loc_681DE5
0x681D99: cmp     byte ptr ds:0BA7A04h, 0
0x681DA0: jnz     short loc_681DE5
0x681DA2: push    ebx
0x681DA3: xor     eax, eax
0x681DA5: push    esi
0x681DA6: lea     esi, [ecx+28h]
0x681DA9: mov     [esi], eax
0x681DAB: mov     [esi+4], eax
0x681DAE: mov     ecx, edi; this
0x681DB0: mov     [esi+8], eax
0x681DB3: xor     bl, bl
0x681DB5: call    MobileObject_GetCharProxy
0x681DBA: test    eax, eax
0x681DBC: jz      short loc_681DDD
0x681DBE: lea     ecx, [eax+1E0h]
0x681DC4: call    sub_88D370
0x681DC9: test    eax, eax
0x681DCB: jnz     short loc_681DDD
0x681DCD: push    esi
0x681DCE: push    edi
0x681DCF: call    sub_681A60
0x681DD4: add     esp, 8
0x681DD7: test    al, al
0x681DD9: jz      short loc_681DDD
0x681DDB: mov     bl, 1
0x681DDD: pop     esi
0x681DDE: mov     al, bl
0x681DE0: pop     ebx
0x681DE1: pop     edi
0x681DE2: retn    4
0x681DE5: xor     al, al
0x681DE7: pop     edi
0x681DE8: retn    4
