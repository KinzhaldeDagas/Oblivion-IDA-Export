0x679480: sub     esp, 14h
0x679483: push    ebx
0x679484: push    ebp
0x679485: push    esi
0x679486: lea     esi, [ecx+40h]
0x679489: test    esi, esi
0x67948B: push    edi
0x67948C: mov     [esp+24h+var_4], ecx
0x679490: mov     [esp+24h+var_10], 0
0x679498: mov     [esp+24h+var_C], 2
0x6794A0: jz      loc_67955D
0x6794A6: mov     ebx, [esp+24h+var_4]
0x6794AA: lea     ebx, [ebx+0]
0x6794B0: cmp     dword ptr [esi+4], 0
0x6794B4: jnz     short loc_6794C6
0x6794B6: or      [esp+24h+var_10], 1
0x6794BB: xor     ebx, ebx
0x6794BD: cmp     [esi], ebx
0x6794BF: mov     [esp+24h+var_11], 1
0x6794C4: jz      short loc_6794CB
0x6794C6: mov     [esp+24h+var_11], 0
0x6794CB: test    byte ptr [esp+24h+var_10], 1
0x6794D0: jz      short loc_6794F3
0x6794D2: and     [esp+24h+var_10], 0FFFFFFFEh
0x6794D7: test    ebx, ebx
0x6794D9: jz      short loc_6794F3
0x6794DB: lea     eax, [ebx+4]
0x6794DE: push    eax; lpAddend
0x6794DF: call    dword ptr ds:0A2807Ch
0x6794E5: test    eax, eax
0x6794E7: jnz     short loc_6794F3
0x6794E9: mov     edx, [ebx]
0x6794EB: mov     eax, [edx]
0x6794ED: push    1
0x6794EF: mov     ecx, ebx
0x6794F1: call    eax
0x6794F3: cmp     [esp+24h+var_11], 0
0x6794F8: jnz     short loc_67955D
0x6794FA: lea     ecx, [esp+24h+var_8]
0x6794FE: push    ecx
0x6794FF: mov     ecx, esi
0x679501: call    sub_677C70
0x679506: mov     ebp, [eax]
0x679508: mov     eax, [esp+24h+var_8]
0x67950C: test    eax, eax
0x67950E: jz      short loc_67952E
0x679510: mov     edi, eax
0x679512: add     eax, 4
0x679515: push    eax; lpAddend
0x679516: call    dword ptr ds:0A2807Ch
0x67951C: test    eax, eax
0x67951E: jnz     short loc_67952E
0x679520: test    edi, edi
0x679522: jz      short loc_67952E
0x679524: mov     edx, [edi]
0x679526: mov     eax, [edx]
0x679528: push    1
0x67952A: mov     ecx, edi
0x67952C: call    eax
0x67952E: mov     edx, [ebp+0]
0x679531: mov     eax, [edx+58h]
0x679534: mov     ecx, ebp
0x679536: call    eax
0x679538: test    al, al
0x67953A: jz      short loc_679552
0x67953C: mov     edx, [ebp+0]
0x67953F: mov     eax, [edx+5Ch]
0x679542: mov     ecx, ebp
0x679544: call    eax
0x679546: mov     ecx, [esp+24h+var_C]
0x67954A: lea     edx, [ecx+eax+1]
0x67954E: mov     [esp+24h+var_C], edx
0x679552: mov     esi, [esi+4]
0x679555: test    esi, esi
0x679557: jnz     loc_6794B0
0x67955D: mov     edi, [esp+24h+var_4]
0x679561: add     edi, 48h ; 'H'
0x679564: jz      loc_67961D
0x67956A: mov     ebx, [esp+24h+var_4]
0x67956E: mov     edi, edi
0x679570: cmp     dword ptr [edi+4], 0
0x679574: jnz     short loc_679586
0x679576: or      [esp+24h+var_10], 2
0x67957B: xor     ebx, ebx
0x67957D: cmp     [edi], ebx
0x67957F: mov     [esp+24h+var_11], 1
0x679584: jz      short loc_67958B
0x679586: mov     [esp+24h+var_11], 0
0x67958B: test    byte ptr [esp+24h+var_10], 2
0x679590: jz      short loc_6795B3
0x679592: and     [esp+24h+var_10], 0FFFFFFFDh
0x679597: test    ebx, ebx
0x679599: jz      short loc_6795B3
0x67959B: lea     eax, [ebx+4]
0x67959E: push    eax; lpAddend
0x67959F: call    dword ptr ds:0A2807Ch
0x6795A5: test    eax, eax
0x6795A7: jnz     short loc_6795B3
0x6795A9: mov     edx, [ebx]
0x6795AB: mov     eax, [edx]
0x6795AD: push    1
0x6795AF: mov     ecx, ebx
0x6795B1: call    eax
0x6795B3: cmp     [esp+24h+var_11], 0
0x6795B8: jnz     short loc_67961D
0x6795BA: lea     ecx, [esp+24h+var_4]
0x6795BE: push    ecx
0x6795BF: mov     ecx, edi
0x6795C1: call    sub_677C70
0x6795C6: mov     ebp, [eax]
0x6795C8: mov     eax, [esp+24h+var_4]
0x6795CC: test    eax, eax
0x6795CE: jz      short loc_6795EE
0x6795D0: mov     esi, eax
0x6795D2: add     eax, 4
0x6795D5: push    eax; lpAddend
0x6795D6: call    dword ptr ds:0A2807Ch
0x6795DC: test    eax, eax
0x6795DE: jnz     short loc_6795EE
0x6795E0: test    esi, esi
0x6795E2: jz      short loc_6795EE
0x6795E4: mov     edx, [esi]
0x6795E6: mov     eax, [edx]
0x6795E8: push    1
0x6795EA: mov     ecx, esi
0x6795EC: call    eax
0x6795EE: mov     edx, [ebp+0]
0x6795F1: mov     eax, [edx+58h]
0x6795F4: mov     ecx, ebp
0x6795F6: call    eax
0x6795F8: test    al, al
0x6795FA: jz      short loc_679612
0x6795FC: mov     edx, [ebp+0]
0x6795FF: mov     eax, [edx+5Ch]
0x679602: mov     ecx, ebp
0x679604: call    eax
0x679606: mov     ecx, [esp+24h+var_C]
0x67960A: lea     edx, [ecx+eax+1]
0x67960E: mov     [esp+24h+var_C], edx
0x679612: mov     edi, [edi+4]
0x679615: test    edi, edi
0x679617: jnz     loc_679570
0x67961D: mov     eax, [esp+24h+var_C]
0x679621: pop     edi
0x679622: pop     esi
0x679623: pop     ebp
0x679624: pop     ebx
0x679625: add     esp, 14h
0x679628: retn
