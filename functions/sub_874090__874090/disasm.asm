0x874090: push    0FFFFFFFFh
0x874092: push    offset SEH_879360
0x874097: mov     eax, large fs:0
0x87409D: push    eax
0x87409E: push    ecx
0x87409F: push    ebx
0x8740A0: push    ebp
0x8740A1: push    esi
0x8740A2: push    edi
0x8740A3: mov     eax, ds:0B30AACh
0x8740A8: xor     eax, esp
0x8740AA: push    eax
0x8740AB: lea     eax, [esp+24h+var_C]
0x8740AF: mov     large fs:0, eax
0x8740B5: mov     ebx, ecx
0x8740B7: mov     [esp+24h+var_10], ebx
0x8740BB: mov     eax, [esp+24h+arg_8]
0x8740BF: mov     edi, [eax+0Ch]
0x8740C2: mov     esi, ds:0B47634h
0x8740C8: push    edi
0x8740C9: call    sub_848E50
0x8740CE: mov     edx, [ebx]
0x8740D0: mov     eax, [esp+24h+arg_0]
0x8740D4: mov     edx, [edx+0BCh]
0x8740DA: push    0
0x8740DC: push    edi
0x8740DD: push    eax
0x8740DE: mov     ecx, ebx
0x8740E0: call    edx
0x8740E2: mov     eax, [esi+24h]
0x8740E5: mov     ebx, [esp+24h+arg_C]
0x8740E9: mov     edi, [eax]
0x8740EB: mov     edx, [ebx]
0x8740ED: mov     eax, [edx+88h]
0x8740F3: push    0
0x8740F5: mov     ecx, ebx
0x8740F7: mov     [esp+28h+arg_8], edi
0x8740FB: call    eax
0x8740FD: mov     edi, [edi+4]
0x874100: mov     ebp, eax
0x874102: cmp     edi, ebp
0x874104: jz      short loc_87413B
0x874106: test    edi, edi
0x874108: jz      short loc_874126
0x87410A: lea     ecx, [edi+4]
0x87410D: push    ecx; lpAddend
0x87410E: call    dword ptr ds:0A2807Ch
0x874114: test    eax, eax
0x874116: jnz     short loc_874126
0x874118: test    edi, edi
0x87411A: jz      short loc_874126
0x87411C: mov     edx, [edi]
0x87411E: mov     eax, [edx]
0x874120: push    1
0x874122: mov     ecx, edi
0x874124: call    eax
0x874126: test    ebp, ebp
0x874128: mov     ecx, [esp+24h+arg_8]
0x87412C: mov     [ecx+4], ebp
0x87412F: jz      short loc_87413B
0x874131: add     ebp, 4
0x874134: push    ebp; lpAddend
0x874135: call    dword ptr ds:0A28078h
0x87413B: mov     edx, [esi+24h]
0x87413E: mov     edi, [edx+4]
0x874141: mov     ecx, [esp+24h+var_10]
0x874145: push    0
0x874147: push    ebx
0x874148: mov     [esp+2Ch+arg_8], edi
0x87414C: call    sub_848FD0
0x874151: mov     edi, [edi+4]
0x874154: mov     ebp, eax
0x874156: cmp     edi, ebp
0x874158: jz      short loc_87418F
0x87415A: test    edi, edi
0x87415C: jz      short loc_87417A
0x87415E: lea     eax, [edi+4]
0x874161: push    eax; lpAddend
0x874162: call    dword ptr ds:0A2807Ch
0x874168: test    eax, eax
0x87416A: jnz     short loc_87417A
0x87416C: test    edi, edi
0x87416E: jz      short loc_87417A
0x874170: mov     edx, [edi]
0x874172: mov     eax, [edx]
0x874174: push    1
0x874176: mov     ecx, edi
0x874178: call    eax
0x87417A: test    ebp, ebp
0x87417C: mov     ecx, [esp+24h+arg_8]
0x874180: mov     [ecx+4], ebp
0x874183: jz      short loc_87418F
0x874185: add     ebp, 4
0x874188: push    ebp; lpAddend
0x874189: call    dword ptr ds:0A28078h
0x87418F: mov     edx, [esi+24h]
0x874192: mov     eax, [ebx]
0x874194: mov     ebp, [edx+0Ch]
0x874197: mov     edx, [eax+90h]
0x87419D: push    0
0x87419F: mov     ecx, ebx
0x8741A1: call    edx
0x8741A3: mov     edi, [ebp+4]
0x8741A6: mov     ebx, eax
0x8741A8: cmp     edi, ebx
0x8741AA: jz      short loc_8741DD
0x8741AC: test    edi, edi
0x8741AE: jz      short loc_8741CC
0x8741B0: lea     eax, [edi+4]
0x8741B3: push    eax; lpAddend
0x8741B4: call    dword ptr ds:0A2807Ch
0x8741BA: test    eax, eax
0x8741BC: jnz     short loc_8741CC
0x8741BE: test    edi, edi
0x8741C0: jz      short loc_8741CC
0x8741C2: mov     edx, [edi]
0x8741C4: mov     eax, [edx]
0x8741C6: push    1
0x8741C8: mov     ecx, edi
0x8741CA: call    eax
0x8741CC: test    ebx, ebx
0x8741CE: mov     [ebp+4], ebx
0x8741D1: jz      short loc_8741DD
0x8741D3: add     ebx, 4
0x8741D6: push    ebx; lpAddend
0x8741D7: call    dword ptr ds:0A28078h
0x8741DD: mov     ecx, [esi+24h]
0x8741E0: mov     edi, [ecx+10h]
0x8741E3: mov     eax, ds:0B43110h
0x8741E8: mov     ebx, [edi+4]
0x8741EB: add     edi, 4
0x8741EE: cmp     ebx, eax
0x8741F0: mov     ebp, eax
0x8741F2: jz      short loc_874224
0x8741F4: test    ebx, ebx
0x8741F6: jz      short loc_874214
0x8741F8: lea     edx, [ebx+4]
0x8741FB: push    edx; lpAddend
0x8741FC: call    dword ptr ds:0A2807Ch
0x874202: test    eax, eax
0x874204: jnz     short loc_874214
0x874206: test    ebx, ebx
0x874208: jz      short loc_874214
0x87420A: mov     eax, [ebx]
0x87420C: mov     edx, [eax]
0x87420E: push    1
0x874210: mov     ecx, ebx
0x874212: call    edx
0x874214: test    ebp, ebp
0x874216: mov     [edi], ebp
0x874218: jz      short loc_874224
0x87421A: add     ebp, 4
0x87421D: push    ebp; lpAddend
0x87421E: call    dword ptr ds:0A28078h
0x874224: mov     ecx, [esi+24h]
0x874227: mov     edi, [ecx+14h]
0x87422A: mov     eax, ds:0B43108h
0x87422F: mov     ebx, [edi+4]
0x874232: add     edi, 4
0x874235: cmp     ebx, eax
0x874237: mov     ebp, eax
0x874239: jz      short loc_87426B
0x87423B: test    ebx, ebx
0x87423D: jz      short loc_87425B
0x87423F: lea     edx, [ebx+4]
0x874242: push    edx; lpAddend
0x874243: call    dword ptr ds:0A2807Ch
0x874249: test    eax, eax
0x87424B: jnz     short loc_87425B
0x87424D: test    ebx, ebx
0x87424F: jz      short loc_87425B
0x874251: mov     eax, [ebx]
0x874253: mov     edx, [eax]
0x874255: push    1
0x874257: mov     ecx, ebx
0x874259: call    edx
0x87425B: test    ebp, ebp
0x87425D: mov     [edi], ebp
0x87425F: jz      short loc_87426B
0x874261: add     ebp, 4
0x874264: push    ebp; lpAddend
0x874265: call    dword ptr ds:0A28078h
0x87426B: mov     eax, [esi+24h]
0x87426E: mov     ebx, [eax+18h]
0x874271: mov     eax, ds:0B4310Ch
0x874276: mov     edi, [ebx+4]
0x874279: cmp     edi, eax
0x87427B: mov     ebp, eax
0x87427D: jz      short loc_8742B0
0x87427F: test    edi, edi
0x874281: jz      short loc_87429F
0x874283: lea     ecx, [edi+4]
0x874286: push    ecx; lpAddend
0x874287: call    dword ptr ds:0A2807Ch
0x87428D: test    eax, eax
0x87428F: jnz     short loc_87429F
0x874291: test    edi, edi
0x874293: jz      short loc_87429F
0x874295: mov     edx, [edi]
0x874297: mov     eax, [edx]
0x874299: push    1
0x87429B: mov     ecx, edi
0x87429D: call    eax
0x87429F: test    ebp, ebp
0x8742A1: mov     [ebx+4], ebp
0x8742A4: jz      short loc_8742B0
0x8742A6: add     ebp, 4
0x8742A9: push    ebp; lpAddend
0x8742AA: call    dword ptr ds:0A28078h
0x8742B0: mov     ebx, 1
0x8742B5: add     [esi+60h], ebx
0x8742B8: mov     [esp+24h+arg_8], esi
0x8742BC: mov     edi, [esp+24h+var_10]
0x8742C0: mov     edx, [edi+38h]
0x8742C3: lea     ecx, [esp+24h+arg_8]
0x8742C7: push    ecx
0x8742C8: push    edx
0x8742C9: lea     ecx, [edi+40h]
0x8742CC: mov     [esp+2Ch+var_4], 0
0x8742D4: call    sub_76CE40
0x8742D9: or      eax, 0FFFFFFFFh
0x8742DC: add     [esi+60h], eax
0x8742DF: mov     [esp+24h+var_4], eax
0x8742E3: jnz     short loc_8742EC
0x8742E5: mov     ecx, esi
0x8742E7: call    sub_7604D0
0x8742EC: add     [edi+38h], ebx
0x8742EF: mov     ecx, [esp+24h+var_C]
0x8742F3: mov     large fs:0, ecx
0x8742FA: pop     ecx
0x8742FB: pop     edi
0x8742FC: pop     esi
0x8742FD: pop     ebp
0x8742FE: pop     ebx
0x8742FF: add     esp, 10h
0x874302: retn    10h
