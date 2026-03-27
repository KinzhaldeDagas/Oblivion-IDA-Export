0x878240: push    0FFFFFFFFh
0x878242: push    offset SEH_879360
0x878247: mov     eax, large fs:0
0x87824D: push    eax
0x87824E: push    ecx
0x87824F: push    ebx
0x878250: push    ebp
0x878251: push    esi
0x878252: push    edi
0x878253: mov     eax, ds:0B30AACh
0x878258: xor     eax, esp
0x87825A: push    eax
0x87825B: lea     eax, [esp+24h+var_C]
0x87825F: mov     large fs:0, eax
0x878265: mov     ebx, ecx
0x878267: mov     [esp+24h+var_10], ebx
0x87826B: mov     ebp, [esp+24h+arg_8]
0x87826F: mov     edi, [ebp+0Ch]
0x878272: mov     esi, ds:0B476B4h
0x878278: push    edi
0x878279: call    sub_848E50
0x87827E: mov     ebp, [ebp+10h]
0x878281: mov     ecx, [esp+24h+arg_0]
0x878285: mov     eax, [ebx]
0x878287: mov     edx, [eax+0BCh]
0x87828D: push    ebp
0x87828E: push    edi
0x87828F: push    ecx
0x878290: mov     ecx, ebx
0x878292: call    edx
0x878294: mov     eax, [esi+24h]
0x878297: mov     ebx, [esp+24h+arg_C]
0x87829B: mov     edi, [eax]
0x87829D: mov     edx, [ebx]
0x87829F: mov     eax, [edx+88h]
0x8782A5: push    0
0x8782A7: mov     ecx, ebx
0x8782A9: mov     [esp+28h+arg_8], edi
0x8782AD: call    eax
0x8782AF: mov     edi, [edi+4]
0x8782B2: mov     ebp, eax
0x8782B4: cmp     edi, ebp
0x8782B6: jz      short loc_8782ED
0x8782B8: test    edi, edi
0x8782BA: jz      short loc_8782D8
0x8782BC: lea     ecx, [edi+4]
0x8782BF: push    ecx; lpAddend
0x8782C0: call    dword ptr ds:0A2807Ch
0x8782C6: test    eax, eax
0x8782C8: jnz     short loc_8782D8
0x8782CA: test    edi, edi
0x8782CC: jz      short loc_8782D8
0x8782CE: mov     edx, [edi]
0x8782D0: mov     eax, [edx]
0x8782D2: push    1
0x8782D4: mov     ecx, edi
0x8782D6: call    eax
0x8782D8: test    ebp, ebp
0x8782DA: mov     ecx, [esp+24h+arg_8]
0x8782DE: mov     [ecx+4], ebp
0x8782E1: jz      short loc_8782ED
0x8782E3: add     ebp, 4
0x8782E6: push    ebp; lpAddend
0x8782E7: call    dword ptr ds:0A28078h
0x8782ED: mov     edx, [esi+24h]
0x8782F0: mov     edi, [edx+4]
0x8782F3: mov     ecx, [esp+24h+var_10]
0x8782F7: push    0
0x8782F9: push    ebx
0x8782FA: mov     [esp+2Ch+arg_8], edi
0x8782FE: call    sub_848FD0
0x878303: mov     edi, [edi+4]
0x878306: mov     ebp, eax
0x878308: cmp     edi, ebp
0x87830A: jz      short loc_878341
0x87830C: test    edi, edi
0x87830E: jz      short loc_87832C
0x878310: lea     eax, [edi+4]
0x878313: push    eax; lpAddend
0x878314: call    dword ptr ds:0A2807Ch
0x87831A: test    eax, eax
0x87831C: jnz     short loc_87832C
0x87831E: test    edi, edi
0x878320: jz      short loc_87832C
0x878322: mov     edx, [edi]
0x878324: mov     eax, [edx]
0x878326: push    1
0x878328: mov     ecx, edi
0x87832A: call    eax
0x87832C: test    ebp, ebp
0x87832E: mov     ecx, [esp+24h+arg_8]
0x878332: mov     [ecx+4], ebp
0x878335: jz      short loc_878341
0x878337: add     ebp, 4
0x87833A: push    ebp; lpAddend
0x87833B: call    dword ptr ds:0A28078h
0x878341: mov     edx, [esi+24h]
0x878344: mov     eax, [ebx]
0x878346: mov     ebp, [edx+10h]
0x878349: mov     edx, [eax+90h]
0x87834F: push    0
0x878351: mov     ecx, ebx
0x878353: call    edx
0x878355: mov     edi, [ebp+4]
0x878358: mov     ebx, eax
0x87835A: cmp     edi, ebx
0x87835C: jz      short loc_87838F
0x87835E: test    edi, edi
0x878360: jz      short loc_87837E
0x878362: lea     eax, [edi+4]
0x878365: push    eax; lpAddend
0x878366: call    dword ptr ds:0A2807Ch
0x87836C: test    eax, eax
0x87836E: jnz     short loc_87837E
0x878370: test    edi, edi
0x878372: jz      short loc_87837E
0x878374: mov     edx, [edi]
0x878376: mov     eax, [edx]
0x878378: push    1
0x87837A: mov     ecx, edi
0x87837C: call    eax
0x87837E: test    ebx, ebx
0x878380: mov     [ebp+4], ebx
0x878383: jz      short loc_87838F
0x878385: add     ebx, 4
0x878388: push    ebx; lpAddend
0x878389: call    dword ptr ds:0A28078h
0x87838F: mov     ecx, [esi+24h]
0x878392: mov     edi, [ecx+14h]
0x878395: mov     eax, ds:0B43110h
0x87839A: mov     ebx, [edi+4]
0x87839D: add     edi, 4
0x8783A0: cmp     ebx, eax
0x8783A2: mov     ebp, eax
0x8783A4: jz      short loc_8783D6
0x8783A6: test    ebx, ebx
0x8783A8: jz      short loc_8783C6
0x8783AA: lea     edx, [ebx+4]
0x8783AD: push    edx; lpAddend
0x8783AE: call    dword ptr ds:0A2807Ch
0x8783B4: test    eax, eax
0x8783B6: jnz     short loc_8783C6
0x8783B8: test    ebx, ebx
0x8783BA: jz      short loc_8783C6
0x8783BC: mov     eax, [ebx]
0x8783BE: mov     edx, [eax]
0x8783C0: push    1
0x8783C2: mov     ecx, ebx
0x8783C4: call    edx
0x8783C6: test    ebp, ebp
0x8783C8: mov     [edi], ebp
0x8783CA: jz      short loc_8783D6
0x8783CC: add     ebp, 4
0x8783CF: push    ebp; lpAddend
0x8783D0: call    dword ptr ds:0A28078h
0x8783D6: mov     ecx, [esi+24h]
0x8783D9: mov     edi, [ecx+18h]
0x8783DC: mov     eax, ds:0B43108h
0x8783E1: mov     ebx, [edi+4]
0x8783E4: add     edi, 4
0x8783E7: cmp     ebx, eax
0x8783E9: mov     ebp, eax
0x8783EB: jz      short loc_87841D
0x8783ED: test    ebx, ebx
0x8783EF: jz      short loc_87840D
0x8783F1: lea     edx, [ebx+4]
0x8783F4: push    edx; lpAddend
0x8783F5: call    dword ptr ds:0A2807Ch
0x8783FB: test    eax, eax
0x8783FD: jnz     short loc_87840D
0x8783FF: test    ebx, ebx
0x878401: jz      short loc_87840D
0x878403: mov     eax, [ebx]
0x878405: mov     edx, [eax]
0x878407: push    1
0x878409: mov     ecx, ebx
0x87840B: call    edx
0x87840D: test    ebp, ebp
0x87840F: mov     [edi], ebp
0x878411: jz      short loc_87841D
0x878413: add     ebp, 4
0x878416: push    ebp; lpAddend
0x878417: call    dword ptr ds:0A28078h
0x87841D: mov     eax, [esi+24h]
0x878420: mov     ebx, [eax+1Ch]
0x878423: mov     eax, ds:0B4310Ch
0x878428: mov     edi, [ebx+4]
0x87842B: cmp     edi, eax
0x87842D: mov     ebp, eax
0x87842F: jz      short loc_878462
0x878431: test    edi, edi
0x878433: jz      short loc_878451
0x878435: lea     ecx, [edi+4]
0x878438: push    ecx; lpAddend
0x878439: call    dword ptr ds:0A2807Ch
0x87843F: test    eax, eax
0x878441: jnz     short loc_878451
0x878443: test    edi, edi
0x878445: jz      short loc_878451
0x878447: mov     edx, [edi]
0x878449: mov     eax, [edx]
0x87844B: push    1
0x87844D: mov     ecx, edi
0x87844F: call    eax
0x878451: test    ebp, ebp
0x878453: mov     [ebx+4], ebp
0x878456: jz      short loc_878462
0x878458: add     ebp, 4
0x87845B: push    ebp; lpAddend
0x87845C: call    dword ptr ds:0A28078h
0x878462: mov     ebx, 1
0x878467: add     [esi+60h], ebx
0x87846A: mov     [esp+24h+arg_8], esi
0x87846E: mov     edi, [esp+24h+var_10]
0x878472: mov     edx, [edi+38h]
0x878475: lea     ecx, [esp+24h+arg_8]
0x878479: push    ecx
0x87847A: push    edx
0x87847B: lea     ecx, [edi+40h]
0x87847E: mov     [esp+2Ch+var_4], 0
0x878486: call    sub_76CE40
0x87848B: or      eax, 0FFFFFFFFh
0x87848E: add     [esi+60h], eax
0x878491: mov     [esp+24h+var_4], eax
0x878495: jnz     short loc_87849E
0x878497: mov     ecx, esi
0x878499: call    sub_7604D0
0x87849E: add     [edi+38h], ebx
0x8784A1: mov     ecx, [esp+24h+var_C]
0x8784A5: mov     large fs:0, ecx
0x8784AC: pop     ecx
0x8784AD: pop     edi
0x8784AE: pop     esi
0x8784AF: pop     ebp
0x8784B0: pop     ebx
0x8784B1: add     esp, 10h
0x8784B4: retn    10h
