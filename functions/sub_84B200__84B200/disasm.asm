0x84B200: push    0FFFFFFFFh
0x84B202: push    offset SEH_882120
0x84B207: mov     eax, large fs:0
0x84B20D: push    eax
0x84B20E: push    ebx
0x84B20F: push    ebp
0x84B210: push    esi
0x84B211: push    edi
0x84B212: mov     eax, ds:0B30AACh
0x84B217: xor     eax, esp
0x84B219: push    eax
0x84B21A: lea     eax, [esp+20h+var_C]
0x84B21E: mov     large fs:0, eax
0x84B224: mov     ebx, ecx
0x84B226: mov     esi, [esp+20h+arg_8]
0x84B22A: mov     eax, [esi+10h]
0x84B22D: mov     edi, ds:0B45680h
0x84B233: push    eax
0x84B234: call    sub_848C40
0x84B239: mov     esi, [esi+0Ch]
0x84B23C: push    esi
0x84B23D: mov     ecx, ebx
0x84B23F: call    sub_848E50
0x84B244: mov     eax, [edi+24h]
0x84B247: mov     ebp, [esp+20h+arg_C]
0x84B24B: mov     esi, [eax]
0x84B24D: mov     edx, [ebp+0]
0x84B250: mov     eax, [edx+88h]
0x84B256: push    0
0x84B258: mov     ecx, ebp
0x84B25A: mov     [esp+24h+arg_8], esi
0x84B25E: call    eax
0x84B260: mov     esi, [esi+4]
0x84B263: cmp     esi, eax
0x84B265: mov     [esp+20h+arg_C], eax
0x84B269: jz      short loc_84B2A6
0x84B26B: test    esi, esi
0x84B26D: jz      short loc_84B28F
0x84B26F: lea     ecx, [esi+4]
0x84B272: push    ecx; lpAddend
0x84B273: call    dword ptr ds:0A2807Ch
0x84B279: test    eax, eax
0x84B27B: jnz     short loc_84B28B
0x84B27D: test    esi, esi
0x84B27F: jz      short loc_84B28B
0x84B281: mov     edx, [esi]
0x84B283: mov     eax, [edx]
0x84B285: push    1
0x84B287: mov     ecx, esi
0x84B289: call    eax
0x84B28B: mov     eax, [esp+20h+arg_C]
0x84B28F: test    eax, eax
0x84B291: mov     esi, [esp+20h+arg_8]
0x84B295: mov     [esi+4], eax
0x84B298: jz      short loc_84B2AA
0x84B29A: add     eax, 4
0x84B29D: push    eax; lpAddend
0x84B29E: call    dword ptr ds:0A28078h
0x84B2A4: jmp     short loc_84B2AA
0x84B2A6: mov     esi, [esp+20h+arg_8]
0x84B2AA: test    esi, esi
0x84B2AC: jz      short loc_84B2C9
0x84B2AE: cmp     byte ptr ds:0B42CDDh, 0
0x84B2B5: jz      short loc_84B2C9
0x84B2B7: mov     edx, [ebp+0]
0x84B2BA: mov     eax, [edx+78h]
0x84B2BD: mov     ecx, ebp
0x84B2BF: call    eax
0x84B2C1: push    eax
0x84B2C2: mov     ecx, esi
0x84B2C4: call    sub_7715E0
0x84B2C9: mov     ecx, [edi+24h]
0x84B2CC: mov     esi, [ecx+4]
0x84B2CF: mov     edx, [ebp+0]
0x84B2D2: mov     eax, [edx+8Ch]
0x84B2D8: push    0
0x84B2DA: mov     ecx, ebp
0x84B2DC: mov     [esp+24h+arg_8], esi
0x84B2E0: call    eax
0x84B2E2: test    eax, eax
0x84B2E4: jz      short loc_84B2FB
0x84B2E6: mov     edx, [ebp+0]
0x84B2E9: mov     eax, [edx+8Ch]
0x84B2EF: push    0
0x84B2F1: mov     ecx, ebp
0x84B2F3: call    eax
0x84B2F5: mov     [esp+20h+arg_C], eax
0x84B2F9: jmp     short loc_84B31A
0x84B2FB: test    dword ptr [ebp+1Ch], 80h
0x84B302: jbe     short loc_84B310
0x84B304: mov     ecx, ds:0B430F0h
0x84B30A: mov     [esp+20h+arg_C], ecx
0x84B30E: jmp     short loc_84B31A
0x84B310: mov     edx, ds:0B430DCh
0x84B316: mov     [esp+20h+arg_C], edx
0x84B31A: mov     esi, [esi+4]
0x84B31D: cmp     esi, [esp+20h+arg_C]
0x84B321: jz      short loc_84B35E
0x84B323: test    esi, esi
0x84B325: jz      short loc_84B343
0x84B327: lea     eax, [esi+4]
0x84B32A: push    eax; lpAddend
0x84B32B: call    dword ptr ds:0A2807Ch
0x84B331: test    eax, eax
0x84B333: jnz     short loc_84B343
0x84B335: test    esi, esi
0x84B337: jz      short loc_84B343
0x84B339: mov     edx, [esi]
0x84B33B: mov     eax, [edx]
0x84B33D: push    1
0x84B33F: mov     ecx, esi
0x84B341: call    eax
0x84B343: mov     eax, [esp+20h+arg_C]
0x84B347: test    eax, eax
0x84B349: mov     esi, [esp+20h+arg_8]
0x84B34D: mov     [esi+4], eax
0x84B350: jz      short loc_84B362
0x84B352: add     eax, 4
0x84B355: push    eax; lpAddend
0x84B356: call    dword ptr ds:0A28078h
0x84B35C: jmp     short loc_84B362
0x84B35E: mov     esi, [esp+20h+arg_8]
0x84B362: test    esi, esi
0x84B364: jz      short loc_84B381
0x84B366: cmp     byte ptr ds:0B42CDDh, 0
0x84B36D: jz      short loc_84B381
0x84B36F: mov     edx, [ebp+0]
0x84B372: mov     eax, [edx+78h]
0x84B375: mov     ecx, ebp
0x84B377: call    eax
0x84B379: push    eax
0x84B37A: mov     ecx, esi
0x84B37C: call    sub_7715E0
0x84B381: mov     esi, 1
0x84B386: add     [edi+60h], esi
0x84B389: mov     [esp+20h+arg_8], edi
0x84B38D: mov     edx, [ebx+38h]
0x84B390: lea     ecx, [esp+20h+arg_8]
0x84B394: push    ecx
0x84B395: push    edx
0x84B396: lea     ecx, [ebx+40h]
0x84B399: mov     [esp+28h+var_4], 0
0x84B3A1: call    sub_76CE40
0x84B3A6: or      eax, 0FFFFFFFFh
0x84B3A9: add     [edi+60h], eax
0x84B3AC: mov     [esp+20h+var_4], eax
0x84B3B0: jnz     short loc_84B3B9
0x84B3B2: mov     ecx, edi
0x84B3B4: call    sub_7604D0
0x84B3B9: add     [ebx+38h], esi
0x84B3BC: mov     ecx, [esp+20h+var_C]
0x84B3C0: mov     large fs:0, ecx
0x84B3C7: pop     ecx
0x84B3C8: pop     edi
0x84B3C9: pop     esi
0x84B3CA: pop     ebp
0x84B3CB: pop     ebx
0x84B3CC: add     esp, 0Ch
0x84B3CF: retn    10h
