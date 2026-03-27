0x67D650: push    ebx
0x67D651: push    ebp
0x67D652: mov     ebp, [esp+8+arg_0]
0x67D656: xor     bl, bl
0x67D658: test    ebp, ebp
0x67D65A: push    esi
0x67D65B: mov     esi, ecx
0x67D65D: jz      loc_67D715
0x67D663: cmp     dword ptr [esi+1Ch], 0
0x67D667: push    edi
0x67D668: jz      short loc_67D6E8
0x67D66A: mov     ecx, [esi+24h]
0x67D66D: test    ecx, ecx
0x67D66F: jz      short loc_67D6E8
0x67D671: fld     dword ptr ds:0A34A80h
0x67D677: push    ecx
0x67D678: fstp    [esp+14h+var_14]; float
0x67D67B: lea     edi, [esi+0Ch]
0x67D67E: call    sub_4BEF40
0x67D683: push    eax; int
0x67D684: push    edi; int
0x67D685: call    sub_480520
0x67D68A: add     esp, 0Ch
0x67D68D: test    eax, eax
0x67D68F: jge     short loc_67D6EB
0x67D691: mov     ecx, [esi+24h]
0x67D694: push    edi
0x67D695: call    sub_4BEF40
0x67D69A: push    eax
0x67D69B: push    ebp
0x67D69C: call    sub_687C30
0x67D6A1: add     esp, 0Ch
0x67D6A4: test    al, al
0x67D6A6: jz      short loc_67D6EB
0x67D6A8: fld     dword ptr ds:0A34A80h
0x67D6AE: push    ecx
0x67D6AF: mov     ecx, [esi+1Ch]
0x67D6B2: fstp    [esp+14h+var_14]; float
0x67D6B5: call    sub_4BEF40
0x67D6BA: push    eax; int
0x67D6BB: push    esi; int
0x67D6BC: call    sub_480520
0x67D6C1: add     esp, 0Ch
0x67D6C4: test    eax, eax
0x67D6C6: jge     short loc_67D6EB
0x67D6C8: mov     ecx, [esi+1Ch]
0x67D6CB: call    sub_4BEF40
0x67D6D0: push    eax
0x67D6D1: push    esi
0x67D6D2: push    ebp
0x67D6D3: call    sub_687C30
0x67D6D8: add     esp, 0Ch
0x67D6DB: test    al, al
0x67D6DD: jz      short loc_67D6EB
0x67D6DF: pop     edi
0x67D6E0: pop     esi
0x67D6E1: pop     ebp
0x67D6E2: mov     al, 1
0x67D6E4: pop     ebx
0x67D6E5: retn    4
0x67D6E8: lea     edi, [esi+0Ch]
0x67D6EB: fld     dword ptr ds:0A34A80h
0x67D6F1: push    ecx
0x67D6F2: fstp    [esp+14h+var_14]; float
0x67D6F5: push    edi; int
0x67D6F6: push    esi; int
0x67D6F7: call    sub_480520
0x67D6FC: add     esp, 0Ch
0x67D6FF: test    eax, eax
0x67D701: jge     short loc_67D71D
0x67D703: push    edi
0x67D704: push    esi
0x67D705: push    ebp
0x67D706: call    sub_687AA0
0x67D70B: add     esp, 0Ch
0x67D70E: pop     edi
0x67D70F: pop     esi
0x67D710: pop     ebp
0x67D711: pop     ebx
0x67D712: retn    4
0x67D715: pop     esi
0x67D716: pop     ebp
0x67D717: mov     al, bl
0x67D719: pop     ebx
0x67D71A: retn    4
0x67D71D: pop     edi
0x67D71E: pop     esi
0x67D71F: pop     ebp
0x67D720: mov     al, bl
0x67D722: pop     ebx
0x67D723: retn    4
