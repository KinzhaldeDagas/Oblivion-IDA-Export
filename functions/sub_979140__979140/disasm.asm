0x979140: push    ebx
0x979141: push    ebp
0x979142: push    esi
0x979143: push    edi
0x979144: mov     edi, [esp+10h+arg_1C]
0x979148: mov     esi, ecx
0x97914A: cmp     edi, [esi+88h]
0x979150: jz      short loc_979168
0x979152: mov     eax, [esp+10h+arg_C]
0x979156: add     eax, 64h ; 'd'
0x979159: push    eax
0x97915A: lea     ecx, [esi+4]
0x97915D: call    sub_97AEC0
0x979162: mov     [esi+88h], edi
0x979168: mov     ebp, [esp+10h+arg_0]
0x97916C: mov     edi, [esp+10h+arg_20]
0x979170: cmp     edi, [ebp+88h]
0x979176: mov     ebx, [esp+10h+arg_10]
0x97917A: jz      short loc_97918E
0x97917C: lea     ecx, [ebx+64h]
0x97917F: push    ecx
0x979180: lea     ecx, [ebp+4]
0x979183: call    sub_97AEC0
0x979188: mov     [ebp+88h], edi
0x97918E: lea     edx, [ebp+4]
0x979191: push    edx
0x979192: lea     ecx, [esi+4]
0x979195: call    sub_97AFC0
0x97919A: test    eax, eax
0x97919C: jnz     short loc_9791A5
0x97919E: pop     edi
0x97919F: pop     esi
0x9791A0: pop     ebp
0x9791A1: pop     ebx
0x9791A2: retn    28h ; '('
0x9791A5: mov     eax, [ebp+0]
0x9791A8: mov     edx, [eax+4]
0x9791AB: mov     ecx, ebp
0x9791AD: call    edx
0x9791AF: test    al, al
0x9791B1: jnz     loc_979281
0x9791B7: mov     ecx, [esp+10h+arg_18]
0x9791BB: test    ecx, ecx
0x9791BD: jz      loc_97925D
0x9791C3: mov     eax, [ebp+80h]
0x9791C9: test    eax, eax
0x9791CB: jnz     short loc_9791D9
0x9791CD: cmp     [ebp+84h], eax
0x9791D3: jz      loc_97925D
0x9791D9: mov     edx, [esi]
0x9791DB: lea     edi, [ecx-1]
0x9791DE: mov     ecx, [esp+10h+arg_24]
0x9791E2: push    ecx
0x9791E3: mov     ecx, [esp+14h+arg_20]
0x9791E7: push    ecx
0x9791E8: mov     ecx, [esp+18h+arg_1C]
0x9791EC: mov     edx, [edx+0Ch]
0x9791EF: push    ecx
0x9791F0: mov     ecx, [esp+1Ch+arg_14]
0x9791F4: push    edi
0x9791F5: push    ecx
0x9791F6: mov     ecx, [esp+24h+arg_C]
0x9791FA: push    ebx
0x9791FB: push    ecx
0x9791FC: mov     ecx, [esp+2Ch+arg_8]
0x979200: push    ecx
0x979201: mov     ecx, [esp+30h+arg_4]
0x979205: push    ecx
0x979206: push    eax
0x979207: mov     ecx, esi
0x979209: call    edx
0x97920B: cmp     eax, 1
0x97920E: jge     loc_9792D0
0x979214: mov     ecx, [esp+10h+arg_24]
0x979218: mov     edx, [esp+10h+arg_20]
0x97921C: mov     ebp, [ebp+84h]
0x979222: mov     eax, [esi]
0x979224: push    ecx
0x979225: mov     ecx, [esp+14h+arg_1C]
0x979229: push    edx
0x97922A: mov     edx, [esp+18h+arg_14]
0x97922E: push    ecx
0x97922F: mov     ecx, [esp+1Ch+arg_C]
0x979233: push    edi
0x979234: push    edx
0x979235: mov     edx, [esp+24h+arg_8]
0x979239: push    ebx
0x97923A: push    ecx
0x97923B: mov     ecx, [esp+2Ch+arg_4]
0x97923F: push    edx
0x979240: mov     edx, [eax+0Ch]
0x979243: push    ecx
0x979244: push    ebp
0x979245: mov     ecx, esi
0x979247: call    edx
0x979249: xor     ecx, ecx
0x97924B: cmp     eax, 1
0x97924E: setl    cl
0x979251: pop     edi
0x979252: pop     esi
0x979253: pop     ebp
0x979254: pop     ebx
0x979255: sub     ecx, 1
0x979258: and     eax, ecx
0x97925A: retn    28h ; '('
0x97925D: mov     edx, [esp+10h+arg_24]
0x979261: mov     eax, [esp+10h+arg_C]
0x979265: mov     ecx, [esp+10h+arg_8]
0x979269: push    edx
0x97926A: mov     edx, [esp+14h+arg_4]
0x97926E: push    ebx
0x97926F: push    eax
0x979270: push    ecx
0x979271: push    edx
0x979272: push    ebp
0x979273: mov     ecx, esi
0x979275: call    sub_97A530
0x97927A: pop     edi
0x97927B: pop     esi
0x97927C: pop     ebp
0x97927D: pop     ebx
0x97927E: retn    28h ; '('
0x979281: cmp     [esp+10h+arg_14], 0
0x979286: jge     short loc_9792B3
0x979288: cmp     [esp+10h+arg_18], 0
0x97928D: jge     short loc_9792B3
0x97928F: mov     eax, [esp+10h+arg_24]
0x979293: mov     ecx, [esp+10h+arg_C]
0x979297: mov     edx, [esp+10h+arg_8]
0x97929B: push    eax
0x97929C: mov     eax, [esp+14h+arg_4]
0x9792A0: push    ebx
0x9792A1: push    ecx
0x9792A2: push    edx
0x9792A3: push    eax
0x9792A4: push    ebp
0x9792A5: mov     ecx, esi
0x9792A7: call    sub_978F80
0x9792AC: pop     edi
0x9792AD: pop     esi
0x9792AE: pop     ebp
0x9792AF: pop     ebx
0x9792B0: retn    28h ; '('
0x9792B3: mov     ecx, [esp+10h+arg_24]
0x9792B7: mov     edx, [esp+10h+arg_C]
0x9792BB: mov     eax, [esp+10h+arg_8]
0x9792BF: push    ecx
0x9792C0: mov     ecx, [esp+14h+arg_4]
0x9792C4: push    ebx
0x9792C5: push    edx
0x9792C6: push    eax
0x9792C7: push    ecx
0x9792C8: push    ebp
0x9792C9: mov     ecx, esi
0x9792CB: call    sub_97A530
0x9792D0: pop     edi
0x9792D1: pop     esi
0x9792D2: pop     ebp
0x9792D3: pop     ebx
0x9792D4: retn    28h ; '('
