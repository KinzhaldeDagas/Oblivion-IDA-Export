0x880200: push    0FFFFFFFFh
0x880202: push    offset SEH_880560
0x880207: mov     eax, large fs:0
0x88020D: push    eax
0x88020E: push    ebx
0x88020F: push    ebp
0x880210: push    esi
0x880211: push    edi
0x880212: mov     eax, ds:0B30AACh
0x880217: xor     eax, esp
0x880219: push    eax
0x88021A: lea     eax, [esp+20h+var_C]
0x88021E: mov     large fs:0, eax
0x880224: mov     esi, ecx
0x880226: mov     ebx, [esp+20h+arg_8]
0x88022A: mov     eax, [ebx+10h]
0x88022D: mov     edi, ds:0B47728h
0x880233: push    eax
0x880234: call    sub_848C40
0x880239: mov     ebx, [ebx+0Ch]
0x88023C: push    ebx
0x88023D: mov     ecx, esi
0x88023F: call    sub_848E50
0x880244: mov     ecx, [esp+20h+arg_0]
0x880248: mov     eax, [esi]
0x88024A: mov     edx, [eax+0BCh]
0x880250: push    0
0x880252: push    ebx
0x880253: push    ecx
0x880254: mov     ecx, esi
0x880256: call    edx
0x880258: mov     eax, [edi+24h]
0x88025B: mov     ecx, [esp+20h+arg_C]
0x88025F: mov     ebx, [eax]
0x880261: mov     edx, [ecx]
0x880263: mov     eax, [edx+88h]
0x880269: push    0
0x88026B: mov     [esp+24h+arg_8], ebx
0x88026F: call    eax
0x880271: mov     ebx, [ebx+4]
0x880274: mov     ebp, eax
0x880276: cmp     ebx, ebp
0x880278: jz      short loc_8802AF
0x88027A: test    ebx, ebx
0x88027C: jz      short loc_88029A
0x88027E: lea     ecx, [ebx+4]
0x880281: push    ecx; lpAddend
0x880282: call    dword ptr ds:0A2807Ch
0x880288: test    eax, eax
0x88028A: jnz     short loc_88029A
0x88028C: test    ebx, ebx
0x88028E: jz      short loc_88029A
0x880290: mov     edx, [ebx]
0x880292: mov     eax, [edx]
0x880294: push    1
0x880296: mov     ecx, ebx
0x880298: call    eax
0x88029A: test    ebp, ebp
0x88029C: mov     ecx, [esp+20h+arg_8]
0x8802A0: mov     [ecx+4], ebp
0x8802A3: jz      short loc_8802AF
0x8802A5: add     ebp, 4
0x8802A8: push    ebp; lpAddend
0x8802A9: call    dword ptr ds:0A28078h
0x8802AF: mov     edx, [edi+24h]
0x8802B2: mov     eax, [esp+20h+arg_C]
0x8802B6: mov     ebx, [edx+4]
0x8802B9: push    0
0x8802BB: push    eax
0x8802BC: mov     ecx, esi
0x8802BE: mov     [esp+28h+arg_8], ebx
0x8802C2: call    sub_848FD0
0x8802C7: mov     ebx, [ebx+4]
0x8802CA: mov     ebp, eax
0x8802CC: cmp     ebx, ebp
0x8802CE: jz      short loc_880305
0x8802D0: test    ebx, ebx
0x8802D2: jz      short loc_8802F0
0x8802D4: lea     ecx, [ebx+4]
0x8802D7: push    ecx; lpAddend
0x8802D8: call    dword ptr ds:0A2807Ch
0x8802DE: test    eax, eax
0x8802E0: jnz     short loc_8802F0
0x8802E2: test    ebx, ebx
0x8802E4: jz      short loc_8802F0
0x8802E6: mov     edx, [ebx]
0x8802E8: mov     eax, [edx]
0x8802EA: push    1
0x8802EC: mov     ecx, ebx
0x8802EE: call    eax
0x8802F0: test    ebp, ebp
0x8802F2: mov     ecx, [esp+20h+arg_8]
0x8802F6: mov     [ecx+4], ebp
0x8802F9: jz      short loc_880305
0x8802FB: add     ebp, 4
0x8802FE: push    ebp; lpAddend
0x8802FF: call    dword ptr ds:0A28078h
0x880305: mov     edx, [edi+24h]
0x880308: mov     ebp, [edx+10h]
0x88030B: mov     eax, ds:0B43110h
0x880310: mov     ebx, [ebp+4]
0x880313: cmp     ebx, eax
0x880315: mov     ecx, eax
0x880317: mov     [esp+20h+arg_C], ecx
0x88031B: jz      short loc_880352
0x88031D: test    ebx, ebx
0x88031F: jz      short loc_880341
0x880321: lea     eax, [ebx+4]
0x880324: push    eax; lpAddend
0x880325: call    dword ptr ds:0A2807Ch
0x88032B: test    eax, eax
0x88032D: jnz     short loc_88033D
0x88032F: test    ebx, ebx
0x880331: jz      short loc_88033D
0x880333: mov     edx, [ebx]
0x880335: mov     eax, [edx]
0x880337: push    1
0x880339: mov     ecx, ebx
0x88033B: call    eax
0x88033D: mov     ecx, [esp+20h+arg_C]
0x880341: test    ecx, ecx
0x880343: mov     [ebp+4], ecx
0x880346: jz      short loc_880352
0x880348: add     ecx, 4
0x88034B: push    ecx; lpAddend
0x88034C: call    dword ptr ds:0A28078h
0x880352: mov     ebx, 1
0x880357: add     [edi+60h], ebx
0x88035A: mov     [esp+20h+arg_C], edi
0x88035E: mov     edx, [esi+38h]
0x880361: lea     ecx, [esp+20h+arg_C]
0x880365: push    ecx
0x880366: push    edx
0x880367: lea     ecx, [esi+40h]
0x88036A: mov     [esp+28h+var_4], 0
0x880372: call    sub_76CE40
0x880377: or      eax, 0FFFFFFFFh
0x88037A: add     [edi+60h], eax
0x88037D: mov     [esp+20h+var_4], eax
0x880381: jnz     short loc_88038A
0x880383: mov     ecx, edi
0x880385: call    sub_7604D0
0x88038A: add     [esi+38h], ebx
0x88038D: mov     ecx, [esp+20h+var_C]
0x880391: mov     large fs:0, ecx
0x880398: pop     ecx
0x880399: pop     edi
0x88039A: pop     esi
0x88039B: pop     ebp
0x88039C: pop     ebx
0x88039D: add     esp, 0Ch
0x8803A0: retn    10h
