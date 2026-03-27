0x500280: push    0FFFFFFFFh
0x500282: push    offset SEH_500280
0x500287: mov     eax, large fs:0
0x50028D: push    eax
0x50028E: sub     esp, 58h
0x500291: push    ebx
0x500292: push    ebp
0x500293: push    esi
0x500294: push    edi
0x500295: mov     eax, ds:0B30AACh
0x50029A: xor     eax, esp
0x50029C: push    eax
0x50029D: lea     eax, [esp+78h+var_C]
0x5002A1: mov     large fs:0, eax
0x5002A7: mov     ebp, ecx
0x5002A9: lea     ecx, [esp+78h+var_64]
0x5002AD: call    sub_4FCD60
0x5002B2: mov     esi, [esp+78h+arg_4]
0x5002B9: test    esi, esi
0x5002BB: mov     edi, [esp+78h+arg_8]
0x5002C2: mov     ebx, 1
0x5002C7: mov     [esp+78h+var_4], 0
0x5002CF: mov     [esp+78h+var_5C], edi
0x5002D3: mov     [esp+78h+var_4C], bl
0x5002D7: jz      short loc_500332
0x5002D9: mov     ecx, esi
0x5002DB: call    sub_4D7240
0x5002E0: test    eax, eax
0x5002E2: jz      short loc_500332
0x5002E4: mov     ecx, esi
0x5002E6: call    sub_4D7240
0x5002EB: mov     [esp+78h+var_18], eax
0x5002EF: mov     ecx, [eax+18h]
0x5002F2: mov     [esp+78h+var_3C], ecx
0x5002F6: mov     edx, [eax+1Ch]
0x5002F9: mov     [esp+78h+var_38], edx
0x5002FD: mov     ecx, [eax+20h]
0x500300: mov     [esp+78h+var_34], ecx
0x500304: mov     edx, [eax+24h]
0x500307: mov     [esp+78h+var_30], edx
0x50030B: mov     ecx, [eax+28h]
0x50030E: push    0
0x500310: lea     edx, [esp+7Ch+var_20]
0x500314: push    edx
0x500315: add     eax, 40h ; '@'
0x500318: push    eax
0x500319: mov     [esp+84h+var_2C], ecx
0x50031D: call    sub_4FC040
0x500322: mov     ecx, [esp+84h+var_18]
0x500326: mov     esi, [esp+84h+arg_0]
0x50032D: add     esp, 0Ch
0x500330: jmp     short loc_50033C
0x500332: mov     esi, [esp+78h+arg_0]
0x500336: mov     ecx, esi
0x500338: mov     [esp+78h+var_18], ecx
0x50033C: cmp     edi, ebx
0x50033E: jz      short loc_500388
0x500340: cmp     byte ptr ds:0B333F4h, 0
0x500347: jnz     short loc_500388
0x500349: mov     ds:0B333F4h, bl
0x50034F: mov     eax, [ecx]
0x500351: mov     edx, [eax+0D4h]
0x500357: call    edx
0x500359: test    eax, eax
0x50035B: mov     byte ptr ds:0B333F4h, 0
0x500362: jz      short loc_500388
0x500364: lea     edx, [eax+1]
0x500367: mov     cl, [eax]
0x500369: add     eax, 1
0x50036C: test    cl, cl
0x50036E: jnz     short loc_500367
0x500370: sub     eax, edx
0x500372: test    eax, eax
0x500374: jz      short loc_500388
0x500376: mov     ecx, [esp+78h+var_18]
0x50037A: mov     eax, [ecx]
0x50037C: mov     edx, [eax+0D4h]
0x500382: push    0
0x500384: call    edx
0x500386: jmp     short loc_500395
0x500388: mov     eax, [esp+78h+var_5C]
0x50038C: mov     eax, ds:0B0A110h[eax*4]
0x500393: push    0; a3
0x500395: push    eax; a2
0x500396: lea     ecx, [esp+80h+var_58]; this
0x50039A: call    BSStringT_Set
0x50039F: mov     ecx, [esi+2Ch]
0x5003A2: lea     edx, [esp+78h+var_64]
0x5003A6: push    edx
0x5003A7: mov     [esp+7Ch+var_64], ecx
0x5003AB: push    esi
0x5003AC: mov     ecx, ebp
0x5003AE: call    sub_500170
0x5003B3: lea     ecx, [esp+78h+var_64]
0x5003B7: mov     bl, al
0x5003B9: mov     [esp+78h+var_4], 0FFFFFFFFh
0x5003C1: call    sub_4FF440
0x5003C6: mov     al, bl
0x5003C8: mov     ecx, [esp+78h+var_C]
0x5003CC: mov     large fs:0, ecx
0x5003D3: pop     ecx
0x5003D4: pop     edi
0x5003D5: pop     esi
0x5003D6: pop     ebp
0x5003D7: pop     ebx
0x5003D8: add     esp, 64h
0x5003DB: retn    0Ch
