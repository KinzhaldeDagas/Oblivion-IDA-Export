0x6C8220: push    0FFFFFFFFh
0x6C8222: push    offset SEH_6C8220
0x6C8227: mov     eax, large fs:0
0x6C822D: push    eax
0x6C822E: sub     esp, 14h
0x6C8231: push    ebx
0x6C8232: push    ebp
0x6C8233: push    esi
0x6C8234: push    edi
0x6C8235: mov     eax, ds:0B30AACh
0x6C823A: xor     eax, esp
0x6C823C: push    eax
0x6C823D: lea     eax, [esp+34h+var_C]
0x6C8241: mov     large fs:0, eax
0x6C8247: mov     ebx, ecx
0x6C8249: mov     [esp+34h+var_1C], ebx
0x6C824D: mov     ecx, [esp+34h+arg_0]
0x6C8251: push    offset dword_B3CD7C
0x6C8256: mov     [esp+38h+var_1D], 0
0x6C825B: call    sub_700010
0x6C8260: mov     ebp, eax
0x6C8262: xor     edi, edi
0x6C8264: cmp     ebp, edi
0x6C8266: mov     [esp+34h+var_14], ebp
0x6C826A: jz      short loc_6C8276
0x6C826C: lea     eax, [ebp+4]
0x6C826F: push    eax; lpAddend
0x6C8270: call    dword ptr ds:0A28078h
0x6C8276: cmp     ebp, edi
0x6C8278: mov     [esp+34h+var_4], edi
0x6C827C: jnz     loc_6C83B6
0x6C8282: mov     eax, [ebx+0Ch]
0x6C8285: cmp     eax, edi
0x6C8287: jbe     short loc_6C82CA
0x6C8289: mov     esi, [ebx+18h]
0x6C828C: mov     ebx, eax
0x6C828E: mov     edi, edi
0x6C8290: movzx   ecx, word ptr [esi+8]
0x6C8294: cmp     cx, 0FFFFh
0x6C8299: jz      short loc_6C82BD
0x6C829B: mov     eax, [esi]
0x6C829D: mov     edx, [eax+8]
0x6C82A0: movzx   ecx, cx
0x6C82A3: add     edx, ecx
0x6C82A5: jz      short loc_6C82BD
0x6C82A7: mov     eax, [eax+8]
0x6C82AA: add     eax, ecx
0x6C82AC: jz      short loc_6C82BD
0x6C82AE: cmp     byte ptr [eax+2], 54h ; 'T'
0x6C82B2: jnz     short loc_6C82BD
0x6C82B4: cmp     byte ptr [eax+7], 66h ; 'f'
0x6C82B8: jnz     short loc_6C82BD
0x6C82BA: add     edi, 1
0x6C82BD: add     esi, 10h
0x6C82C0: sub     ebx, 1
0x6C82C3: jnz     short loc_6C8290
0x6C82C5: test    di, di
0x6C82C8: jnz     short loc_6C82D1
0x6C82CA: xor     al, al
0x6C82CC: jmp     loc_6C8560
0x6C82D1: push    48h ; 'H'; Size
0x6C82D3: add     edi, 0Ah
0x6C82D6: call    FormHeapAlloc
0x6C82DB: add     esp, 4
0x6C82DE: mov     [esp+34h+var_10], eax
0x6C82E2: test    eax, eax
0x6C82E4: mov     byte ptr [esp+34h+var_4], 1
0x6C82E9: jz      short loc_6C82F5
0x6C82EB: push    edi
0x6C82EC: mov     ecx, eax
0x6C82EE: call    sub_6C5EE0
0x6C82F3: jmp     short loc_6C82F7
0x6C82F5: xor     eax, eax
0x6C82F7: test    eax, eax
0x6C82F9: mov     byte ptr [esp+34h+var_4], 0
0x6C82FE: jz      short loc_6C8310
0x6C8300: mov     ebp, eax
0x6C8302: add     eax, 4
0x6C8305: push    eax; lpAddend
0x6C8306: mov     [esp+38h+var_14], ebp
0x6C830A: call    dword ptr ds:0A28078h
0x6C8310: mov     edx, [ebp+0]
0x6C8313: mov     esi, [esp+34h+arg_0]
0x6C8317: mov     eax, [edx+58h]
0x6C831A: push    esi
0x6C831B: mov     ecx, ebp
0x6C831D: call    eax
0x6C831F: or      word ptr [ebp+8], 20h
0x6C8324: mov     ebx, [esp+34h+var_1C]
0x6C8328: mov     ecx, [ebx+40h]
0x6C832B: cmp     esi, [ecx+30h]
0x6C832E: mov     [esp+34h+var_1D], 1
0x6C8333: jnz     loc_6C83B6
0x6C8339: push    ebp
0x6C833A: mov     ecx, esi
0x6C833C: call    sub_6FFE90
0x6C8341: mov     edx, [ebx+40h]
0x6C8344: mov     edi, [edx+34h]
0x6C8347: mov     esi, [ebp+34h]
0x6C834A: cmp     esi, edi
0x6C834C: jz      short loc_6C837F
0x6C834E: test    esi, esi
0x6C8350: jz      short loc_6C836E
0x6C8352: lea     eax, [esi+4]
0x6C8355: push    eax; lpAddend
0x6C8356: call    dword ptr ds:0A2807Ch
0x6C835C: test    eax, eax
0x6C835E: jnz     short loc_6C836E
0x6C8360: test    esi, esi
0x6C8362: jz      short loc_6C836E
0x6C8364: mov     edx, [esi]
0x6C8366: mov     eax, [edx]
0x6C8368: push    1
0x6C836A: mov     ecx, esi
0x6C836C: call    eax
0x6C836E: test    edi, edi
0x6C8370: mov     [ebp+34h], edi
0x6C8373: jz      short loc_6C837F
0x6C8375: add     edi, 4
0x6C8378: push    edi; lpAddend
0x6C8379: call    dword ptr ds:0A28078h
0x6C837F: mov     edi, [ebx+40h]
0x6C8382: mov     esi, [edi+34h]
0x6C8385: cmp     esi, ebp
0x6C8387: jz      short loc_6C83B6
0x6C8389: test    esi, esi
0x6C838B: jz      short loc_6C83A9
0x6C838D: lea     ecx, [esi+4]
0x6C8390: push    ecx; lpAddend
0x6C8391: call    dword ptr ds:0A2807Ch
0x6C8397: test    eax, eax
0x6C8399: jnz     short loc_6C83A9
0x6C839B: test    esi, esi
0x6C839D: jz      short loc_6C83A9
0x6C839F: mov     edx, [esi]
0x6C83A1: mov     eax, [edx]
0x6C83A3: push    1
0x6C83A5: mov     ecx, esi
0x6C83A7: call    eax
0x6C83A9: lea     ecx, [ebp+4]
0x6C83AC: push    ecx; lpAddend
0x6C83AD: mov     [edi+34h], ebp
0x6C83B0: call    dword ptr ds:0A28078h
0x6C83B6: xor     ecx, ecx
0x6C83B8: cmp     [ebx+0Ch], ecx
0x6C83BB: mov     [esp+34h+arg_0], ecx
0x6C83BF: jbe     loc_6C8537
0x6C83C5: mov     [esp+34h+var_18], ecx
0x6C83C9: mov     eax, [ebx+14h]
0x6C83CC: add     eax, ecx
0x6C83CE: mov     [esp+34h+var_10], eax
0x6C83D2: mov     eax, [ebx+18h]
0x6C83D5: movzx   edx, word ptr [eax+ecx+8]
0x6C83DA: add     eax, ecx
0x6C83DC: cmp     dx, 0FFFFh
0x6C83E1: jz      loc_6C8518
0x6C83E7: mov     ecx, [eax]
0x6C83E9: mov     esi, [ecx+8]
0x6C83EC: movzx   edx, dx
0x6C83EF: add     esi, edx
0x6C83F1: jz      loc_6C8518
0x6C83F7: mov     esi, [ecx+8]
0x6C83FA: add     edx, esi
0x6C83FC: jz      loc_6C8518
0x6C8402: cmp     byte ptr [edx+2], 54h ; 'T'
0x6C8406: jnz     loc_6C8518
0x6C840C: cmp     byte ptr [edx+7], 66h ; 'f'
0x6C8410: jnz     loc_6C8518
0x6C8416: movzx   eax, word ptr [eax+4]
0x6C841A: cmp     ax, 0FFFFh
0x6C841E: jz      short loc_6C8429
0x6C8420: movzx   eax, ax
0x6C8423: mov     ecx, esi
0x6C8425: add     eax, ecx
0x6C8427: jmp     short loc_6C842B
0x6C8429: xor     eax, eax
0x6C842B: mov     ecx, [esp+34h+arg_4]
0x6C842F: mov     edx, [ecx]
0x6C8431: push    eax
0x6C8432: mov     eax, [edx+4Ch]
0x6C8435: call    eax
0x6C8437: mov     esi, eax
0x6C8439: test    esi, esi
0x6C843B: jz      loc_6C8518
0x6C8441: cmp     [ebx+60h], esi
0x6C8444: jnz     short loc_6C8453
0x6C8446: mov     ecx, [ebx+40h]
0x6C8449: cmp     byte ptr [ecx+6Ch], 0
0x6C844D: jnz     loc_6C8518
0x6C8453: push    offset dword_B3CA58
0x6C8458: mov     ecx, esi
0x6C845A: call    sub_700010
0x6C845F: movzx   ecx, word ptr [ebp+44h]
0x6C8463: mov     ebx, eax
0x6C8465: xor     eax, eax
0x6C8467: test    cx, cx
0x6C846A: jbe     short loc_6C848E
0x6C846C: mov     edx, [ebp+40h]
0x6C846F: nop
0x6C8470: movzx   edi, ax
0x6C8473: cmp     [edx+edi*4], esi
0x6C8476: jz      short loc_6C8482
0x6C8478: add     eax, 1
0x6C847B: cmp     ax, cx
0x6C847E: jb      short loc_6C8470
0x6C8480: jmp     short loc_6C848E
0x6C8482: cmp     ax, ds:0A7A160h
0x6C8489: movzx   edi, ax
0x6C848C: jnz     short loc_6C84A4
0x6C848E: push    esi
0x6C848F: mov     ecx, ebp
0x6C8491: call    sub_6C5F80
0x6C8496: movzx   edi, ax
0x6C8499: cmp     di, ds:0A7A160h
0x6C84A0: jz      short loc_6C8514
0x6C84A2: jmp     short loc_6C84AA
0x6C84A4: movzx   eax, ax
0x6C84A7: mov     [edx+eax*4], esi
0x6C84AA: mov     eax, [esi+8]
0x6C84AD: push    offset aBip01; "Bip01"
0x6C84B2: push    eax; Str1
0x6C84B3: call    __strcmp
0x6C84B8: add     esp, 8
0x6C84BB: test    eax, eax
0x6C84BD: jz      short loc_6C84C7
0x6C84BF: push    ebx
0x6C84C0: mov     ecx, esi
0x6C84C2: call    sub_6FFE90
0x6C84C7: mov     ebx, [esp+34h+var_10]
0x6C84CB: mov     esi, [ebx+4]
0x6C84CE: cmp     esi, ebp
0x6C84D0: jz      short loc_6C84FF
0x6C84D2: test    esi, esi
0x6C84D4: jz      short loc_6C84F2
0x6C84D6: lea     ecx, [esi+4]
0x6C84D9: push    ecx; lpAddend
0x6C84DA: call    dword ptr ds:0A2807Ch
0x6C84E0: test    eax, eax
0x6C84E2: jnz     short loc_6C84F2
0x6C84E4: test    esi, esi
0x6C84E6: jz      short loc_6C84F2
0x6C84E8: mov     edx, [esi]
0x6C84EA: mov     eax, [edx]
0x6C84EC: push    1
0x6C84EE: mov     ecx, esi
0x6C84F0: call    eax
0x6C84F2: lea     ecx, [ebp+4]
0x6C84F5: push    ecx; lpAddend
0x6C84F6: mov     [ebx+4], ebp
0x6C84F9: call    dword ptr ds:0A28078h
0x6C84FF: movzx   eax, di
0x6C8502: lea     edx, [eax+eax*2]
0x6C8505: mov     eax, [ebp+3Ch]
0x6C8508: shl     edx, 4
0x6C850B: add     eax, edx
0x6C850D: mov     [ebx+8], eax
0x6C8510: or      byte ptr [eax+0Ch], 1
0x6C8514: mov     ebx, [esp+34h+var_1C]
0x6C8518: mov     eax, [esp+34h+arg_0]
0x6C851C: mov     ecx, [esp+34h+var_18]
0x6C8520: add     eax, 1
0x6C8523: add     ecx, 10h
0x6C8526: cmp     eax, [ebx+0Ch]
0x6C8529: mov     [esp+34h+arg_0], eax
0x6C852D: mov     [esp+34h+var_18], ecx
0x6C8531: jb      loc_6C83C9
0x6C8537: test    ebp, ebp
0x6C8539: mov     [esp+34h+var_4], 0FFFFFFFFh
0x6C8541: jz      short loc_6C855C
0x6C8543: lea     ecx, [ebp+4]
0x6C8546: push    ecx; lpAddend
0x6C8547: call    dword ptr ds:0A2807Ch
0x6C854D: test    eax, eax
0x6C854F: jnz     short loc_6C855C
0x6C8551: mov     edx, [ebp+0]
0x6C8554: mov     eax, [edx]
0x6C8556: push    1
0x6C8558: mov     ecx, ebp
0x6C855A: call    eax
0x6C855C: mov     al, [esp+34h+var_1D]
0x6C8560: mov     ecx, [esp+34h+var_C]
0x6C8564: mov     large fs:0, ecx
0x6C856B: pop     ecx
0x6C856C: pop     edi
0x6C856D: pop     esi
0x6C856E: pop     ebp
0x6C856F: pop     ebx
0x6C8570: add     esp, 20h
0x6C8573: retn    8
