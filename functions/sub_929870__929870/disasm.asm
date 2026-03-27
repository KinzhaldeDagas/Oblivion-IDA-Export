0x929870: push    ebx
0x929871: mov     ebx, large fs:2Ch
0x929878: push    esi
0x929879: mov     esi, ecx
0x92987B: mov     eax, [esi+30h]
0x92987E: test    eax, eax
0x929880: push    edi
0x929881: mov     edi, ds:0BA9DE4h
0x929887: js      short loc_9298AD
0x929889: mov     ecx, [ebx+edi*4]
0x92988C: mov     ecx, [ecx+19Ch]
0x929892: test    ecx, ecx
0x929894: jnz     short loc_92989C
0x929896: mov     ecx, ds:0BA7D9Ch
0x92989C: mov     edx, [esi+28h]
0x92989F: push    14h
0x9298A1: and     eax, 3FFFFFFFh
0x9298A6: push    eax
0x9298A7: push    edx
0x9298A8: call    sub_8A75D0
0x9298AD: mov     eax, [esi+24h]
0x9298B0: test    eax, eax
0x9298B2: js      short loc_9298DE
0x9298B4: mov     ecx, [ebx+edi*4]
0x9298B7: mov     ecx, [ecx+19Ch]
0x9298BD: test    ecx, ecx
0x9298BF: jnz     short loc_9298C7
0x9298C1: mov     ecx, ds:0BA7D9Ch
0x9298C7: and     eax, 3FFFFFFFh
0x9298CC: lea     edx, [eax+eax*2]
0x9298CF: mov     eax, [esi+1Ch]
0x9298D2: push    14h
0x9298D4: shl     edx, 2
0x9298D7: push    edx
0x9298D8: push    eax
0x9298D9: call    sub_8A75D0
0x9298DE: mov     eax, [esi+18h]
0x9298E1: test    eax, eax
0x9298E3: js      short loc_92990C
0x9298E5: mov     ecx, [ebx+edi*4]
0x9298E8: mov     ecx, [ecx+19Ch]
0x9298EE: test    ecx, ecx
0x9298F0: jnz     short loc_9298F8
0x9298F2: mov     ecx, ds:0BA7D9Ch
0x9298F8: mov     edx, [esi+10h]
0x9298FB: and     eax, 3FFFFFFFh
0x929900: push    14h
0x929902: shl     eax, 4
0x929905: push    eax
0x929906: push    edx
0x929907: call    sub_8A75D0
0x92990C: pop     edi
0x92990D: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x929913: pop     esi
0x929914: pop     ebx
0x929915: retn
