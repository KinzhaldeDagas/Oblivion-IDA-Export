0x85D720: push    0FFFFFFFFh
0x85D722: push    offset SEH_85E160
0x85D727: mov     eax, large fs:0
0x85D72D: push    eax
0x85D72E: push    ebx
0x85D72F: push    ebp
0x85D730: push    esi
0x85D731: push    edi
0x85D732: mov     eax, ds:0B30AACh
0x85D737: xor     eax, esp
0x85D739: push    eax
0x85D73A: lea     eax, [esp+20h+var_C]
0x85D73E: mov     large fs:0, eax
0x85D744: mov     esi, ecx
0x85D746: mov     eax, [esp+20h+arg_8]
0x85D74A: mov     ebx, [eax+0Ch]
0x85D74D: mov     edi, ds:0B477C0h
0x85D753: push    ebx
0x85D754: call    sub_848E50
0x85D759: mov     edx, [esi]
0x85D75B: mov     eax, [esp+20h+arg_0]
0x85D75F: mov     edx, [edx+0BCh]
0x85D765: push    0
0x85D767: push    ebx
0x85D768: push    eax
0x85D769: mov     ecx, esi
0x85D76B: call    edx
0x85D76D: mov     eax, [edi+24h]
0x85D770: mov     ebp, [esp+20h+arg_C]
0x85D774: mov     ebx, [eax]
0x85D776: mov     edx, [ebp+0]
0x85D779: mov     eax, [edx+88h]
0x85D77F: push    0
0x85D781: mov     ecx, ebp
0x85D783: mov     [esp+24h+arg_8], ebx
0x85D787: call    eax
0x85D789: mov     ebx, [ebx+4]
0x85D78C: cmp     ebx, eax
0x85D78E: mov     [esp+20h+arg_0], eax
0x85D792: jz      short loc_85D7CD
0x85D794: test    ebx, ebx
0x85D796: jz      short loc_85D7B8
0x85D798: lea     ecx, [ebx+4]
0x85D79B: push    ecx; lpAddend
0x85D79C: call    dword ptr ds:0A2807Ch
0x85D7A2: test    eax, eax
0x85D7A4: jnz     short loc_85D7B4
0x85D7A6: test    ebx, ebx
0x85D7A8: jz      short loc_85D7B4
0x85D7AA: mov     edx, [ebx]
0x85D7AC: mov     eax, [edx]
0x85D7AE: push    1
0x85D7B0: mov     ecx, ebx
0x85D7B2: call    eax
0x85D7B4: mov     eax, [esp+20h+arg_0]
0x85D7B8: test    eax, eax
0x85D7BA: mov     ecx, [esp+20h+arg_8]
0x85D7BE: mov     [ecx+4], eax
0x85D7C1: jz      short loc_85D7CD
0x85D7C3: add     eax, 4
0x85D7C6: push    eax; lpAddend
0x85D7C7: call    dword ptr ds:0A28078h
0x85D7CD: mov     edx, [esp+20h+arg_8]
0x85D7D1: push    ebp
0x85D7D2: push    edx
0x85D7D3: mov     ecx, esi
0x85D7D5: call    sub_848FA0
0x85D7DA: mov     eax, [edi+24h]
0x85D7DD: mov     ebx, [eax+4]
0x85D7E0: push    0
0x85D7E2: push    ebp
0x85D7E3: mov     ecx, esi
0x85D7E5: mov     [esp+28h+arg_8], ebx
0x85D7E9: call    sub_848FD0
0x85D7EE: mov     ebx, [ebx+4]
0x85D7F1: cmp     ebx, eax
0x85D7F3: mov     [esp+20h+arg_0], eax
0x85D7F7: jz      short loc_85D832
0x85D7F9: test    ebx, ebx
0x85D7FB: jz      short loc_85D81D
0x85D7FD: lea     ecx, [ebx+4]
0x85D800: push    ecx; lpAddend
0x85D801: call    dword ptr ds:0A2807Ch
0x85D807: test    eax, eax
0x85D809: jnz     short loc_85D819
0x85D80B: test    ebx, ebx
0x85D80D: jz      short loc_85D819
0x85D80F: mov     edx, [ebx]
0x85D811: mov     eax, [edx]
0x85D813: push    1
0x85D815: mov     ecx, ebx
0x85D817: call    eax
0x85D819: mov     eax, [esp+20h+arg_0]
0x85D81D: test    eax, eax
0x85D81F: mov     ecx, [esp+20h+arg_8]
0x85D823: mov     [ecx+4], eax
0x85D826: jz      short loc_85D832
0x85D828: add     eax, 4
0x85D82B: push    eax; lpAddend
0x85D82C: call    dword ptr ds:0A28078h
0x85D832: mov     edx, [esp+20h+arg_8]
0x85D836: push    ebp
0x85D837: push    edx
0x85D838: mov     ecx, esi
0x85D83A: call    sub_848FA0
0x85D83F: cmp     byte ptr [esp+20h+arg_10], 0
0x85D844: jnz     short loc_85D881
0x85D846: mov     ebx, 1
0x85D84B: add     [edi+60h], ebx
0x85D84E: mov     [esp+20h+arg_10], edi
0x85D852: mov     ecx, [esi+38h]
0x85D855: lea     eax, [esp+20h+arg_10]
0x85D859: push    eax
0x85D85A: push    ecx
0x85D85B: lea     ecx, [esi+40h]
0x85D85E: mov     [esp+28h+var_4], 0
0x85D866: call    sub_76CE40
0x85D86B: or      eax, 0FFFFFFFFh
0x85D86E: add     [edi+60h], eax
0x85D871: mov     [esp+20h+var_4], eax
0x85D875: jnz     short loc_85D87E
0x85D877: mov     ecx, edi
0x85D879: call    sub_7604D0
0x85D87E: add     [esi+38h], ebx
0x85D881: mov     ecx, [esp+20h+var_C]
0x85D885: mov     large fs:0, ecx
0x85D88C: pop     ecx
0x85D88D: pop     edi
0x85D88E: pop     esi
0x85D88F: pop     ebp
0x85D890: pop     ebx
0x85D891: add     esp, 0Ch
0x85D894: retn    14h
