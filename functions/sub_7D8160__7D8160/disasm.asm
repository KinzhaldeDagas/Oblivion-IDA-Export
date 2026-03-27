0x7D8160: push    0FFFFFFFFh
0x7D8162: push    offset SEH_7D8160
0x7D8167: mov     eax, large fs:0
0x7D816D: push    eax
0x7D816E: sub     esp, 114h
0x7D8174: mov     eax, ds:0B30AACh
0x7D8179: xor     eax, esp
0x7D817B: mov     [esp+120h+var_10], eax
0x7D8182: push    ebx
0x7D8183: push    ebp
0x7D8184: push    esi
0x7D8185: push    edi
0x7D8186: mov     eax, ds:0B30AACh
0x7D818B: xor     eax, esp
0x7D818D: push    eax
0x7D818E: lea     eax, [esp+134h+var_C]
0x7D8195: mov     large fs:0, eax
0x7D819B: mov     eax, [esp+134h+arg_0]
0x7D81A2: mov     ebx, [esp+134h+arg_8]
0x7D81A9: push    offset a_n; "_n"
0x7D81AE: push    eax
0x7D81AF: mov     [esp+13Ch+var_11C], eax
0x7D81B3: lea     eax, [esp+13Ch+Src]
0x7D81B7: push    eax
0x7D81B8: mov     esi, ecx
0x7D81BA: call    sub_7B4160
0x7D81BF: mov     edi, dword ptr [esp+140h+arg_4]
0x7D81C6: add     esp, 0Ch
0x7D81C9: cmp     [esp+134h+Src], 0
0x7D81CE: jz      short loc_7D822E
0x7D81D0: push    1; char
0x7D81D2: push    edi; char
0x7D81D3: lea     ecx, [esp+13Ch+Src]
0x7D81D7: push    ecx; Src
0x7D81D8: lea     edx, [esp+140h+var_120]
0x7D81DC: push    edx; int
0x7D81DD: call    sub_7B8200
0x7D81E2: add     esp, 10h
0x7D81E5: mov     ecx, [esi+0C0h]
0x7D81EB: push    eax
0x7D81EC: mov     [esp+138h+var_4], 0
0x7D81F7: call    sub_55E2A0
0x7D81FC: mov     eax, [esp+134h+var_120]
0x7D8200: test    eax, eax
0x7D8202: mov     [esp+134h+var_4], 0FFFFFFFFh
0x7D820D: jz      short loc_7D822E
0x7D820F: mov     ebp, eax
0x7D8211: add     eax, 4
0x7D8214: push    eax; lpAddend
0x7D8215: call    dword ptr ds:0A2807Ch
0x7D821B: test    eax, eax
0x7D821D: jnz     short loc_7D822E
0x7D821F: test    ebp, ebp
0x7D8221: jz      short loc_7D822E
0x7D8223: mov     eax, [ebp+0]
0x7D8226: mov     edx, [eax]
0x7D8228: push    1
0x7D822A: mov     ecx, ebp
0x7D822C: call    edx
0x7D822E: test    ebx, ebx
0x7D8230: jz      short loc_7D82B1
0x7D8232: push    offset a_n; "_n"
0x7D8237: lea     eax, [esp+138h+Src]
0x7D823B: push    ebx
0x7D823C: push    eax
0x7D823D: call    sub_7B4160
0x7D8242: add     esp, 0Ch
0x7D8245: cmp     [esp+134h+Src], 0
0x7D824A: jz      short loc_7D82B1
0x7D824C: push    1; char
0x7D824E: push    edi; char
0x7D824F: lea     ecx, [esp+13Ch+Src]
0x7D8253: push    ecx; Src
0x7D8254: lea     edx, [esp+140h+var_120]
0x7D8258: push    edx; int
0x7D8259: call    sub_7B8200
0x7D825E: add     esp, 10h
0x7D8261: mov     ecx, [esi+0C0h]
0x7D8267: push    eax
0x7D8268: add     ecx, 4
0x7D826B: mov     [esp+138h+var_4], 1
0x7D8276: call    sub_55E2A0
0x7D827B: mov     eax, [esp+134h+var_120]
0x7D827F: test    eax, eax
0x7D8281: mov     [esp+134h+var_4], 0FFFFFFFFh
0x7D828C: jz      short loc_7D82B1
0x7D828E: mov     ebx, ds:0A2807Ch
0x7D8294: mov     ebp, eax
0x7D8296: add     eax, 4
0x7D8299: push    eax; lpAddend
0x7D829A: call    ebx ; InterlockedDecrement
0x7D829C: test    eax, eax
0x7D829E: jnz     short loc_7D82B7
0x7D82A0: test    ebp, ebp
0x7D82A2: jz      short loc_7D82B7
0x7D82A4: mov     eax, [ebp+0]
0x7D82A7: mov     edx, [eax]
0x7D82A9: push    1
0x7D82AB: mov     ecx, ebp
0x7D82AD: call    edx
0x7D82AF: jmp     short loc_7D82B7
0x7D82B1: mov     ebx, ds:0A2807Ch
0x7D82B7: mov     eax, [esp+134h+var_11C]
0x7D82BB: push    offset a_g; "_g"
0x7D82C0: push    eax
0x7D82C1: lea     ecx, [esp+13Ch+Src]
0x7D82C5: push    ecx
0x7D82C6: call    sub_7B4160
0x7D82CB: add     esp, 0Ch
0x7D82CE: cmp     [esp+134h+Src], 0
0x7D82D3: jz      short loc_7D8336
0x7D82D5: push    1; char
0x7D82D7: push    edi; char
0x7D82D8: lea     edx, [esp+13Ch+Src]
0x7D82DC: push    edx; Src
0x7D82DD: lea     eax, [esp+140h+var_120]
0x7D82E1: push    eax; int
0x7D82E2: call    sub_7B8200
0x7D82E7: add     esp, 10h
0x7D82EA: mov     eax, [esp+134h+var_120]
0x7D82EE: mov     edx, [esi]
0x7D82F0: mov     edx, [edx+94h]
0x7D82F6: push    eax
0x7D82F7: push    0
0x7D82F9: mov     ecx, esi
0x7D82FB: mov     [esp+13Ch+var_4], 2
0x7D8306: call    edx
0x7D8308: mov     eax, [esp+134h+var_120]
0x7D830C: test    eax, eax
0x7D830E: mov     [esp+134h+var_4], 0FFFFFFFFh
0x7D8319: jz      short loc_7D8336
0x7D831B: mov     ebp, eax
0x7D831D: add     eax, 4
0x7D8320: push    eax; lpAddend
0x7D8321: call    ebx ; InterlockedDecrement
0x7D8323: test    eax, eax
0x7D8325: jnz     short loc_7D8336
0x7D8327: test    ebp, ebp
0x7D8329: jz      short loc_7D8336
0x7D832B: mov     eax, [ebp+0]
0x7D832E: mov     edx, [eax]
0x7D8330: push    1
0x7D8332: mov     ecx, ebp
0x7D8334: call    edx
0x7D8336: test    dword ptr [esi+1Ch], 40000h
0x7D833D: jbe     loc_7D83C5
0x7D8343: mov     eax, [esp+134h+var_11C]
0x7D8347: push    offset off_A7D0E8
0x7D834C: push    eax
0x7D834D: lea     ecx, [esp+13Ch+Src]
0x7D8351: push    ecx
0x7D8352: call    sub_7B4160
0x7D8357: add     esp, 0Ch
0x7D835A: cmp     [esp+134h+Src], 0
0x7D835F: jz      short loc_7D83C5
0x7D8361: push    1; char
0x7D8363: push    edi; char
0x7D8364: lea     edx, [esp+13Ch+Src]
0x7D8368: push    edx; Src
0x7D8369: lea     eax, [esp+140h+var_118]
0x7D836D: push    eax; int
0x7D836E: call    sub_7B8200
0x7D8373: add     esp, 10h
0x7D8376: mov     eax, [esp+134h+var_118]
0x7D837A: mov     edx, [esi]
0x7D837C: mov     edx, [edx+80h]
0x7D8382: push    eax
0x7D8383: push    1
0x7D8385: mov     ecx, esi
0x7D8387: mov     [esp+13Ch+var_4], 3
0x7D8392: call    edx
0x7D8394: mov     eax, [esp+134h+var_118]
0x7D8398: xor     ebp, ebp
0x7D839A: cmp     eax, ebp
0x7D839C: mov     [esp+134h+var_4], 0FFFFFFFFh
0x7D83A7: jz      short loc_7D83C7
0x7D83A9: mov     edi, eax
0x7D83AB: add     eax, 4
0x7D83AE: push    eax; lpAddend
0x7D83AF: call    ebx ; InterlockedDecrement
0x7D83B1: test    eax, eax
0x7D83B3: jnz     short loc_7D83C7
0x7D83B5: cmp     edi, ebp
0x7D83B7: jz      short loc_7D83C7
0x7D83B9: mov     eax, [edi]
0x7D83BB: mov     edx, [eax]
0x7D83BD: push    1
0x7D83BF: mov     ecx, edi
0x7D83C1: call    edx
0x7D83C3: jmp     short loc_7D83C7
0x7D83C5: xor     ebp, ebp
0x7D83C7: mov     eax, [esi+1Ch]
0x7D83CA: test    eax, 20000h
0x7D83CF: ja      loc_7D8515
0x7D83D5: test    eax, 80h
0x7D83DA: mov     eax, [esi+0C0h]
0x7D83E0: mov     edi, [eax]
0x7D83E2: setnbe  bl
0x7D83E5: cmp     edi, ebp
0x7D83E7: jz      short loc_7D842C
0x7D83E9: cmp     [edi+24h], ebp
0x7D83EC: jz      short loc_7D842C
0x7D83EE: mov     ecx, [edi+24h]
0x7D83F1: mov     edx, [ecx]
0x7D83F3: mov     eax, [edx+0Ch]
0x7D83F6: call    eax
0x7D83F8: cmp     eax, ebp
0x7D83FA: jz      short loc_7D842C
0x7D83FC: cmp     [edi+24h], ebp
0x7D83FF: jz      short loc_7D840D
0x7D8401: mov     ecx, [edi+24h]
0x7D8404: mov     edx, [ecx]
0x7D8406: mov     eax, [edx+0Ch]
0x7D8409: call    eax
0x7D840B: jmp     short loc_7D840F
0x7D840D: xor     eax, eax
0x7D840F: mov     eax, [eax+4]
0x7D8412: cmp     eax, 5
0x7D8415: jz      short loc_7D8425
0x7D8417: cmp     eax, 6
0x7D841A: jz      short loc_7D8425
0x7D841C: cmp     eax, 1
0x7D841F: jz      short loc_7D8425
0x7D8421: xor     eax, eax
0x7D8423: jmp     short loc_7D842A
0x7D8425: mov     eax, 1
0x7D842A: or      bl, al
0x7D842C: test    bl, bl
0x7D842E: jz      short loc_7D8436
0x7D8430: or      dword ptr [esi+1Ch], 1
0x7D8434: jmp     short loc_7D843A
0x7D8436: and     dword ptr [esi+1Ch], 0FFFFFFFEh
0x7D843A: mov     ecx, [esi+0C0h]
0x7D8440: mov     [esi+24h], ebp
0x7D8443: mov     edi, [ecx+4]
0x7D8446: cmp     edi, ebp
0x7D8448: jz      short loc_7D8495
0x7D844A: cmp     [edi+24h], ebp
0x7D844D: jz      short loc_7D8495
0x7D844F: mov     ecx, [edi+24h]
0x7D8452: mov     edx, [ecx]
0x7D8454: mov     eax, [edx+0Ch]
0x7D8457: call    eax
0x7D8459: cmp     eax, ebp
0x7D845B: jz      short loc_7D8495
0x7D845D: cmp     [edi+24h], ebp
0x7D8460: jz      short loc_7D846E
0x7D8462: mov     ecx, [edi+24h]
0x7D8465: mov     edx, [ecx]
0x7D8467: mov     eax, [edx+0Ch]
0x7D846A: call    eax
0x7D846C: jmp     short loc_7D8470
0x7D846E: xor     eax, eax
0x7D8470: mov     eax, [eax+4]
0x7D8473: cmp     eax, 5
0x7D8476: jz      short loc_7D8486
0x7D8478: cmp     eax, 6
0x7D847B: jz      short loc_7D8486
0x7D847D: cmp     eax, 1
0x7D8480: jz      short loc_7D8486
0x7D8482: xor     eax, eax
0x7D8484: jmp     short loc_7D848B
0x7D8486: mov     eax, 1
0x7D848B: test    al, al
0x7D848D: jz      short loc_7D8495
0x7D848F: or      dword ptr [esi+1Ch], 10h
0x7D8493: jmp     short loc_7D8499
0x7D8495: and     dword ptr [esi+1Ch], 0FFFFFFEFh
0x7D8499: xor     ebx, ebx
0x7D849B: cmp     [esi+0B8h], bp
0x7D84A2: mov     [esi+24h], ebp
0x7D84A5: jbe     short loc_7D8515
0x7D84A7: jmp     short loc_7D84B0
0x7D84A9: align 10h
0x7D84B0: mov     ecx, [esi+0C0h]
0x7D84B6: mov     edi, [ecx+ebx*4]
0x7D84B9: cmp     edi, ebp
0x7D84BB: jz      short loc_7D8507
0x7D84BD: cmp     [edi+24h], ebp
0x7D84C0: jz      short loc_7D8507
0x7D84C2: mov     ecx, [edi+24h]
0x7D84C5: mov     edx, [ecx]
0x7D84C7: mov     eax, [edx+0Ch]
0x7D84CA: call    eax
0x7D84CC: cmp     eax, ebp
0x7D84CE: jz      short loc_7D8507
0x7D84D0: cmp     [edi+24h], ebp
0x7D84D3: jz      short loc_7D84E1
0x7D84D5: mov     ecx, [edi+24h]
0x7D84D8: mov     edx, [ecx]
0x7D84DA: mov     eax, [edx+0Ch]
0x7D84DD: call    eax
0x7D84DF: jmp     short loc_7D84E3
0x7D84E1: xor     eax, eax
0x7D84E3: mov     eax, [eax+4]
0x7D84E6: cmp     eax, 5
0x7D84E9: jz      short loc_7D84F9
0x7D84EB: cmp     eax, 6
0x7D84EE: jz      short loc_7D84F9
0x7D84F0: cmp     eax, 1
0x7D84F3: jz      short loc_7D84F9
0x7D84F5: xor     eax, eax
0x7D84F7: jmp     short loc_7D84FE
0x7D84F9: mov     eax, 1
0x7D84FE: mov     ecx, [esi+0D0h]
0x7D8504: mov     [ebx+ecx], al
0x7D8507: movzx   edx, word ptr [esi+0B8h]
0x7D850E: add     ebx, 1
0x7D8511: cmp     ebx, edx
0x7D8513: jl      short loc_7D84B0
0x7D8515: mov     eax, [esi+0BCh]
0x7D851B: mov     edi, [eax]
0x7D851D: cmp     edi, ebp
0x7D851F: jz      short loc_7D857A
0x7D8521: cmp     [edi+24h], ebp
0x7D8524: jz      short loc_7D857A
0x7D8526: mov     ecx, [edi+24h]
0x7D8529: mov     edx, [ecx]
0x7D852B: mov     eax, [edx+0Ch]
0x7D852E: call    eax
0x7D8530: cmp     eax, ebp
0x7D8532: jz      short loc_7D857A
0x7D8534: cmp     [edi+24h], ebp
0x7D8537: jz      short loc_7D8545
0x7D8539: mov     ecx, [edi+24h]
0x7D853C: mov     edx, [ecx]
0x7D853E: mov     eax, [edx+0Ch]
0x7D8541: call    eax
0x7D8543: jmp     short loc_7D8547
0x7D8545: xor     eax, eax
0x7D8547: mov     eax, [eax+4]
0x7D854A: cmp     eax, 5
0x7D854D: jz      short loc_7D855D
0x7D854F: cmp     eax, 6
0x7D8552: jz      short loc_7D855D
0x7D8554: cmp     eax, 1
0x7D8557: jz      short loc_7D855D
0x7D8559: xor     eax, eax
0x7D855B: jmp     short loc_7D8562
0x7D855D: mov     eax, 1
0x7D8562: test    al, al
0x7D8564: jz      short loc_7D857A
0x7D8566: mov     eax, [esi+1Ch]
0x7D8569: test    eax, 800h
0x7D856E: ja      short loc_7D857A
0x7D8570: or      eax, 100h
0x7D8575: mov     [esi+1Ch], eax
0x7D8578: jmp     short loc_7D8581
0x7D857A: and     dword ptr [esi+1Ch], 0FFFFFEFFh
0x7D8581: mov     ecx, [esi+0BCh]
0x7D8587: mov     [esi+24h], ebp
0x7D858A: cmp     [ecx+4], ebp
0x7D858D: mov     [esi+24h], ebp
0x7D8590: jz      short loc_7D8598
0x7D8592: or      dword ptr [esi+1Ch], 8
0x7D8596: jmp     short loc_7D859C
0x7D8598: and     dword ptr [esi+1Ch], 0FFFFFFF7h
0x7D859C: mov     ecx, dword ptr [esp+134h+var_C]
0x7D85A3: mov     large fs:0, ecx
0x7D85AA: pop     ecx
0x7D85AB: pop     edi
0x7D85AC: pop     esi
0x7D85AD: pop     ebp
0x7D85AE: pop     ebx
0x7D85AF: mov     ecx, [esp+120h+var_10]
0x7D85B6: xor     ecx, esp
0x7D85B8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7D85BD: add     esp, 120h
0x7D85C3: retn    0Ch
