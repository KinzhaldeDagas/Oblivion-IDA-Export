0x88D070: sub     esp, 1Ch
0x88D073: push    ebx
0x88D074: push    esi
0x88D075: mov     esi, [esp+24h+arg_0]
0x88D079: xor     bl, bl
0x88D07B: test    esi, esi
0x88D07D: jz      short loc_88D0D4
0x88D07F: cmp     [esp+24h+arg_C], bl
0x88D083: jnz     short loc_88D09A
0x88D085: push    esi
0x88D086: call    sub_6FA970
0x88D08B: add     esp, 4
0x88D08E: test    eax, eax
0x88D090: jz      short loc_88D0D4
0x88D092: mov     eax, [eax+0Ch]
0x88D095: and     eax, 2
0x88D098: jz      short loc_88D0D4
0x88D09A: mov     al, [esp+24h+arg_8]
0x88D09E: mov     ecx, [esp+24h+arg_4]
0x88D0A2: mov     [esp+24h+var_18], al
0x88D0A6: mov     eax, ds:0B2E314h
0x88D0AB: test    eax, eax
0x88D0AD: mov     bl, 1
0x88D0AF: mov     [esp+24h+var_1C], 0
0x88D0B7: mov     [esp+24h+var_14], 5
0x88D0BF: mov     [esp+24h+var_10], ecx
0x88D0C3: jz      short loc_88D0D4
0x88D0C5: push    eax
0x88D0C6: lea     edx, [esp+28h+var_1C]
0x88D0CA: push    edx
0x88D0CB: push    esi
0x88D0CC: call    sub_88A7D0
0x88D0D1: add     esp, 0Ch
0x88D0D4: pop     esi
0x88D0D5: mov     al, bl
0x88D0D7: pop     ebx
0x88D0D8: add     esp, 1Ch
0x88D0DB: retn
