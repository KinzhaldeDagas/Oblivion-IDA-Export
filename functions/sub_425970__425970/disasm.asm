0x425970: push    esi
0x425971: push    59h ; 'Y'; a2
0x425973: xor     esi, esi
0x425975: call    BaseExtraList_GetExtraData
0x42597A: test    eax, eax
0x42597C: jz      short loc_4259A8
0x42597E: mov     esi, [eax+0Ch]
0x425981: test    esi, esi
0x425983: jz      short loc_4259A8
0x425985: mov     ecx, esi
0x425987: call    sub_422DF0
0x42598C: test    al, al
0x42598E: jz      short loc_4259A8
0x425990: mov     eax, [esp+4+arg_0]
0x425994: mov     ecx, [esi+18h]
0x425997: mov     edx, [esi+24h]
0x42599A: push    eax
0x42599B: mov     eax, [esi+14h]
0x42599E: push    ecx
0x42599F: push    edx
0x4259A0: push    eax
0x4259A1: mov     ecx, esi
0x4259A3: call    sub_6B8CF0
0x4259A8: mov     eax, esi
0x4259AA: pop     esi
0x4259AB: retn    4
