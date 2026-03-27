0x83D570: push    0FFFFFFFFh
0x83D572: push    offset SEH_882120
0x83D577: mov     eax, large fs:0
0x83D57D: push    eax
0x83D57E: push    ebx
0x83D57F: push    ebp
0x83D580: push    esi
0x83D581: push    edi
0x83D582: mov     eax, ds:0B30AACh
0x83D587: xor     eax, esp
0x83D589: push    eax
0x83D58A: lea     eax, [esp+20h+var_C]
0x83D58E: mov     large fs:0, eax
0x83D594: mov     edi, ecx
0x83D596: mov     eax, [esp+20h+arg_8]
0x83D59A: mov     esi, [eax+0Ch]
0x83D59D: mov     ebx, ds:0B45818h
0x83D5A3: push    esi
0x83D5A4: call    sub_848E50
0x83D5A9: mov     edx, [edi]
0x83D5AB: mov     eax, [esp+20h+arg_0]
0x83D5AF: mov     edx, [edx+0BCh]
0x83D5B5: push    0
0x83D5B7: push    esi
0x83D5B8: push    eax
0x83D5B9: mov     ecx, edi
0x83D5BB: call    edx
0x83D5BD: mov     esi, [esp+20h+arg_C]
0x83D5C1: mov     eax, [esi+0A8h]
0x83D5C7: mov     ds:0B46628h, eax
0x83D5CC: mov     ecx, [esi+0ACh]
0x83D5D2: mov     ds:0B4662Ch, ecx
0x83D5D8: mov     edx, [esi+0B0h]
0x83D5DE: mov     ds:0B46630h, edx
0x83D5E4: mov     eax, [esi+0B4h]
0x83D5EA: mov     ds:0B46634h, eax
0x83D5EF: mov     ecx, [ebx+24h]
0x83D5F2: mov     ebp, [ecx]
0x83D5F4: mov     edx, [esi]
0x83D5F6: mov     eax, [edx+88h]
0x83D5FC: push    0
0x83D5FE: mov     ecx, esi
0x83D600: mov     [esp+24h+arg_8], ebp
0x83D604: call    eax
0x83D606: mov     ebp, [ebp+4]
0x83D609: cmp     ebp, eax
0x83D60B: mov     [esp+20h+arg_0], eax
0x83D60F: jz      short loc_83D64B
0x83D611: test    ebp, ebp
0x83D613: jz      short loc_83D636
0x83D615: lea     ecx, [ebp+4]
0x83D618: push    ecx; lpAddend
0x83D619: call    dword ptr ds:0A2807Ch
0x83D61F: test    eax, eax
0x83D621: jnz     short loc_83D632
0x83D623: test    ebp, ebp
0x83D625: jz      short loc_83D632
0x83D627: mov     edx, [ebp+0]
0x83D62A: mov     eax, [edx]
0x83D62C: push    1
0x83D62E: mov     ecx, ebp
0x83D630: call    eax
0x83D632: mov     eax, [esp+20h+arg_0]
0x83D636: test    eax, eax
0x83D638: mov     ecx, [esp+20h+arg_8]
0x83D63C: mov     [ecx+4], eax
0x83D63F: jz      short loc_83D64B
0x83D641: add     eax, 4
0x83D644: push    eax; lpAddend
0x83D645: call    dword ptr ds:0A28078h
0x83D64B: mov     edx, [esp+20h+arg_8]
0x83D64F: push    esi
0x83D650: push    edx
0x83D651: mov     ecx, edi
0x83D653: call    sub_848FA0
0x83D658: mov     eax, [ebx+24h]
0x83D65B: mov     ebp, [eax+4]
0x83D65E: push    0
0x83D660: push    esi
0x83D661: mov     ecx, edi
0x83D663: mov     [esp+28h+arg_8], ebp
0x83D667: call    sub_848FD0
0x83D66C: mov     ebp, [ebp+4]
0x83D66F: cmp     ebp, eax
0x83D671: mov     [esp+20h+arg_0], eax
0x83D675: jz      short loc_83D6B1
0x83D677: test    ebp, ebp
0x83D679: jz      short loc_83D69C
0x83D67B: lea     ecx, [ebp+4]
0x83D67E: push    ecx; lpAddend
0x83D67F: call    dword ptr ds:0A2807Ch
0x83D685: test    eax, eax
0x83D687: jnz     short loc_83D698
0x83D689: test    ebp, ebp
0x83D68B: jz      short loc_83D698
0x83D68D: mov     edx, [ebp+0]
0x83D690: mov     eax, [edx]
0x83D692: push    1
0x83D694: mov     ecx, ebp
0x83D696: call    eax
0x83D698: mov     eax, [esp+20h+arg_0]
0x83D69C: test    eax, eax
0x83D69E: mov     ecx, [esp+20h+arg_8]
0x83D6A2: mov     [ecx+4], eax
0x83D6A5: jz      short loc_83D6B1
0x83D6A7: add     eax, 4
0x83D6AA: push    eax; lpAddend
0x83D6AB: call    dword ptr ds:0A28078h
0x83D6B1: mov     edx, [esp+20h+arg_8]
0x83D6B5: push    esi
0x83D6B6: push    edx
0x83D6B7: mov     ecx, edi
0x83D6B9: call    sub_848FA0
0x83D6BE: mov     eax, [ebx+24h]
0x83D6C1: mov     ebp, [eax+10h]
0x83D6C4: mov     edx, [esi]
0x83D6C6: mov     eax, [edx+88h]
0x83D6CC: push    1
0x83D6CE: mov     ecx, esi
0x83D6D0: mov     [esp+24h+arg_8], ebp
0x83D6D4: call    eax
0x83D6D6: mov     ebp, [ebp+4]
0x83D6D9: cmp     ebp, eax
0x83D6DB: mov     [esp+20h+arg_0], eax
0x83D6DF: jz      short loc_83D71B
0x83D6E1: test    ebp, ebp
0x83D6E3: jz      short loc_83D706
0x83D6E5: lea     ecx, [ebp+4]
0x83D6E8: push    ecx; lpAddend
0x83D6E9: call    dword ptr ds:0A2807Ch
0x83D6EF: test    eax, eax
0x83D6F1: jnz     short loc_83D702
0x83D6F3: test    ebp, ebp
0x83D6F5: jz      short loc_83D702
0x83D6F7: mov     edx, [ebp+0]
0x83D6FA: mov     eax, [edx]
0x83D6FC: push    1
0x83D6FE: mov     ecx, ebp
0x83D700: call    eax
0x83D702: mov     eax, [esp+20h+arg_0]
0x83D706: test    eax, eax
0x83D708: mov     ecx, [esp+20h+arg_8]
0x83D70C: mov     [ecx+4], eax
0x83D70F: jz      short loc_83D71B
0x83D711: add     eax, 4
0x83D714: push    eax; lpAddend
0x83D715: call    dword ptr ds:0A28078h
0x83D71B: mov     edx, [esp+20h+arg_8]
0x83D71F: push    esi
0x83D720: push    edx
0x83D721: mov     ecx, edi
0x83D723: call    sub_848FA0
0x83D728: mov     esi, 1
0x83D72D: add     [ebx+60h], esi
0x83D730: mov     [esp+20h+arg_8], ebx
0x83D734: mov     ecx, [edi+38h]
0x83D737: lea     eax, [esp+20h+arg_8]
0x83D73B: push    eax
0x83D73C: push    ecx
0x83D73D: lea     ecx, [edi+40h]
0x83D740: mov     [esp+28h+var_4], 0
0x83D748: call    sub_76CE40
0x83D74D: or      eax, 0FFFFFFFFh
0x83D750: add     [ebx+60h], eax
0x83D753: mov     [esp+20h+var_4], eax
0x83D757: jnz     short loc_83D760
0x83D759: mov     ecx, ebx
0x83D75B: call    sub_7604D0
0x83D760: add     [edi+38h], esi
0x83D763: mov     ecx, [esp+20h+var_C]
0x83D767: mov     large fs:0, ecx
0x83D76E: pop     ecx
0x83D76F: pop     edi
0x83D770: pop     esi
0x83D771: pop     ebp
0x83D772: pop     ebx
0x83D773: add     esp, 0Ch
0x83D776: retn    10h
