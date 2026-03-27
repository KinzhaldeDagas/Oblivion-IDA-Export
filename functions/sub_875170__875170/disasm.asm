0x875170: push    0FFFFFFFFh
0x875172: push    offset SEH_879360
0x875177: mov     eax, large fs:0
0x87517D: push    eax
0x87517E: push    ecx
0x87517F: push    ebx
0x875180: push    ebp
0x875181: push    esi
0x875182: push    edi
0x875183: mov     eax, ds:0B30AACh
0x875188: xor     eax, esp
0x87518A: push    eax
0x87518B: lea     eax, [esp+24h+var_C]
0x87518F: mov     large fs:0, eax
0x875195: mov     ebx, ecx
0x875197: mov     [esp+24h+var_10], ebx
0x87519B: mov     eax, [esp+24h+arg_8]
0x87519F: mov     edi, [eax+0Ch]
0x8751A2: mov     esi, ds:0B47654h
0x8751A8: push    edi
0x8751A9: call    sub_848E50
0x8751AE: mov     edx, [ebx]
0x8751B0: mov     eax, [esp+24h+arg_0]
0x8751B4: mov     edx, [edx+0BCh]
0x8751BA: push    0
0x8751BC: push    edi
0x8751BD: push    eax
0x8751BE: mov     ecx, ebx
0x8751C0: call    edx
0x8751C2: mov     eax, [esi+24h]
0x8751C5: mov     ebx, [esp+24h+arg_C]
0x8751C9: mov     edi, [eax]
0x8751CB: mov     edx, [ebx]
0x8751CD: mov     eax, [edx+88h]
0x8751D3: push    0
0x8751D5: mov     ecx, ebx
0x8751D7: mov     [esp+28h+arg_8], edi
0x8751DB: call    eax
0x8751DD: mov     edi, [edi+4]
0x8751E0: mov     ebp, eax
0x8751E2: cmp     edi, ebp
0x8751E4: jz      short loc_87521B
0x8751E6: test    edi, edi
0x8751E8: jz      short loc_875206
0x8751EA: lea     ecx, [edi+4]
0x8751ED: push    ecx; lpAddend
0x8751EE: call    dword ptr ds:0A2807Ch
0x8751F4: test    eax, eax
0x8751F6: jnz     short loc_875206
0x8751F8: test    edi, edi
0x8751FA: jz      short loc_875206
0x8751FC: mov     edx, [edi]
0x8751FE: mov     eax, [edx]
0x875200: push    1
0x875202: mov     ecx, edi
0x875204: call    eax
0x875206: test    ebp, ebp
0x875208: mov     ecx, [esp+24h+arg_8]
0x87520C: mov     [ecx+4], ebp
0x87520F: jz      short loc_87521B
0x875211: add     ebp, 4
0x875214: push    ebp; lpAddend
0x875215: call    dword ptr ds:0A28078h
0x87521B: mov     edx, [esi+24h]
0x87521E: mov     edi, [edx+4]
0x875221: mov     ecx, [esp+24h+var_10]
0x875225: push    0
0x875227: push    ebx
0x875228: mov     [esp+2Ch+arg_8], edi
0x87522C: call    sub_848FD0
0x875231: mov     edi, [edi+4]
0x875234: mov     ebp, eax
0x875236: cmp     edi, ebp
0x875238: jz      short loc_87526F
0x87523A: test    edi, edi
0x87523C: jz      short loc_87525A
0x87523E: lea     eax, [edi+4]
0x875241: push    eax; lpAddend
0x875242: call    dword ptr ds:0A2807Ch
0x875248: test    eax, eax
0x87524A: jnz     short loc_87525A
0x87524C: test    edi, edi
0x87524E: jz      short loc_87525A
0x875250: mov     edx, [edi]
0x875252: mov     eax, [edx]
0x875254: push    1
0x875256: mov     ecx, edi
0x875258: call    eax
0x87525A: test    ebp, ebp
0x87525C: mov     ecx, [esp+24h+arg_8]
0x875260: mov     [ecx+4], ebp
0x875263: jz      short loc_87526F
0x875265: add     ebp, 4
0x875268: push    ebp; lpAddend
0x875269: call    dword ptr ds:0A28078h
0x87526F: mov     edx, [esi+24h]
0x875272: mov     eax, [ebx]
0x875274: mov     ebp, [edx+0Ch]
0x875277: mov     edx, [eax+90h]
0x87527D: push    0
0x87527F: mov     ecx, ebx
0x875281: call    edx
0x875283: mov     edi, [ebp+4]
0x875286: mov     ebx, eax
0x875288: cmp     edi, ebx
0x87528A: jz      short loc_8752BD
0x87528C: test    edi, edi
0x87528E: jz      short loc_8752AC
0x875290: lea     eax, [edi+4]
0x875293: push    eax; lpAddend
0x875294: call    dword ptr ds:0A2807Ch
0x87529A: test    eax, eax
0x87529C: jnz     short loc_8752AC
0x87529E: test    edi, edi
0x8752A0: jz      short loc_8752AC
0x8752A2: mov     edx, [edi]
0x8752A4: mov     eax, [edx]
0x8752A6: push    1
0x8752A8: mov     ecx, edi
0x8752AA: call    eax
0x8752AC: test    ebx, ebx
0x8752AE: mov     [ebp+4], ebx
0x8752B1: jz      short loc_8752BD
0x8752B3: add     ebx, 4
0x8752B6: push    ebx; lpAddend
0x8752B7: call    dword ptr ds:0A28078h
0x8752BD: mov     ecx, [esi+24h]
0x8752C0: mov     edi, [ecx+10h]
0x8752C3: mov     eax, ds:0B43110h
0x8752C8: mov     ebx, [edi+4]
0x8752CB: add     edi, 4
0x8752CE: cmp     ebx, eax
0x8752D0: mov     ebp, eax
0x8752D2: jz      short loc_875304
0x8752D4: test    ebx, ebx
0x8752D6: jz      short loc_8752F4
0x8752D8: lea     edx, [ebx+4]
0x8752DB: push    edx; lpAddend
0x8752DC: call    dword ptr ds:0A2807Ch
0x8752E2: test    eax, eax
0x8752E4: jnz     short loc_8752F4
0x8752E6: test    ebx, ebx
0x8752E8: jz      short loc_8752F4
0x8752EA: mov     eax, [ebx]
0x8752EC: mov     edx, [eax]
0x8752EE: push    1
0x8752F0: mov     ecx, ebx
0x8752F2: call    edx
0x8752F4: test    ebp, ebp
0x8752F6: mov     [edi], ebp
0x8752F8: jz      short loc_875304
0x8752FA: add     ebp, 4
0x8752FD: push    ebp; lpAddend
0x8752FE: call    dword ptr ds:0A28078h
0x875304: mov     ecx, [esi+24h]
0x875307: mov     edi, [ecx+14h]
0x87530A: mov     eax, ds:0B43108h
0x87530F: mov     ebx, [edi+4]
0x875312: add     edi, 4
0x875315: cmp     ebx, eax
0x875317: mov     ebp, eax
0x875319: jz      short loc_87534B
0x87531B: test    ebx, ebx
0x87531D: jz      short loc_87533B
0x87531F: lea     edx, [ebx+4]
0x875322: push    edx; lpAddend
0x875323: call    dword ptr ds:0A2807Ch
0x875329: test    eax, eax
0x87532B: jnz     short loc_87533B
0x87532D: test    ebx, ebx
0x87532F: jz      short loc_87533B
0x875331: mov     eax, [ebx]
0x875333: mov     edx, [eax]
0x875335: push    1
0x875337: mov     ecx, ebx
0x875339: call    edx
0x87533B: test    ebp, ebp
0x87533D: mov     [edi], ebp
0x87533F: jz      short loc_87534B
0x875341: add     ebp, 4
0x875344: push    ebp; lpAddend
0x875345: call    dword ptr ds:0A28078h
0x87534B: mov     eax, [esi+24h]
0x87534E: mov     ebx, [eax+18h]
0x875351: mov     eax, ds:0B4310Ch
0x875356: mov     edi, [ebx+4]
0x875359: cmp     edi, eax
0x87535B: mov     ebp, eax
0x87535D: jz      short loc_875390
0x87535F: test    edi, edi
0x875361: jz      short loc_87537F
0x875363: lea     ecx, [edi+4]
0x875366: push    ecx; lpAddend
0x875367: call    dword ptr ds:0A2807Ch
0x87536D: test    eax, eax
0x87536F: jnz     short loc_87537F
0x875371: test    edi, edi
0x875373: jz      short loc_87537F
0x875375: mov     edx, [edi]
0x875377: mov     eax, [edx]
0x875379: push    1
0x87537B: mov     ecx, edi
0x87537D: call    eax
0x87537F: test    ebp, ebp
0x875381: mov     [ebx+4], ebp
0x875384: jz      short loc_875390
0x875386: add     ebp, 4
0x875389: push    ebp; lpAddend
0x87538A: call    dword ptr ds:0A28078h
0x875390: mov     ebx, 1
0x875395: add     [esi+60h], ebx
0x875398: mov     [esp+24h+arg_8], esi
0x87539C: mov     edi, [esp+24h+var_10]
0x8753A0: mov     edx, [edi+38h]
0x8753A3: lea     ecx, [esp+24h+arg_8]
0x8753A7: push    ecx
0x8753A8: push    edx
0x8753A9: lea     ecx, [edi+40h]
0x8753AC: mov     [esp+2Ch+var_4], 0
0x8753B4: call    sub_76CE40
0x8753B9: or      eax, 0FFFFFFFFh
0x8753BC: add     [esi+60h], eax
0x8753BF: mov     [esp+24h+var_4], eax
0x8753C3: jnz     short loc_8753CC
0x8753C5: mov     ecx, esi
0x8753C7: call    sub_7604D0
0x8753CC: add     [edi+38h], ebx
0x8753CF: mov     ecx, [esp+24h+var_C]
0x8753D3: mov     large fs:0, ecx
0x8753DA: pop     ecx
0x8753DB: pop     edi
0x8753DC: pop     esi
0x8753DD: pop     ebp
0x8753DE: pop     ebx
0x8753DF: add     esp, 10h
0x8753E2: retn    10h
