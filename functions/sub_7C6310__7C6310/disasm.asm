0x7C6310: push    0FFFFFFFFh
0x7C6312: push    offset SEH_6D7780
0x7C6317: mov     eax, large fs:0
0x7C631D: push    eax
0x7C631E: sub     esp, 8
0x7C6321: push    ebx
0x7C6322: push    ebp
0x7C6323: push    esi
0x7C6324: push    edi
0x7C6325: mov     eax, ds:0B30AACh
0x7C632A: xor     eax, esp
0x7C632C: push    eax
0x7C632D: lea     eax, [esp+28h+var_C]
0x7C6331: mov     large fs:0, eax
0x7C6337: mov     edi, ecx
0x7C6339: mov     [esp+28h+var_10], edi
0x7C633D: mov     ebx, [esp+28h+arg_0]
0x7C6341: mov     al, [ebx+18h]
0x7C6344: and     word ptr [ebx+18h], 0FFFEh
0x7C634A: and     al, 1
0x7C634C: lea     esi, [edi+124h]
0x7C6352: mov     byte ptr [esp+28h+arg_0], al
0x7C6356: mov     eax, [esi]
0x7C6358: test    eax, eax
0x7C635A: jnz     short loc_7C6396
0x7C635C: push    150h; Size
0x7C6361: call    FormHeapAlloc
0x7C6366: add     esp, 4
0x7C6369: mov     [esp+28h+var_14], eax
0x7C636D: test    eax, eax
0x7C636F: mov     [esp+28h+var_4], 0
0x7C6377: jz      short loc_7C6384
0x7C6379: push    3
0x7C637B: mov     ecx, eax; this
0x7C637D: call    ??0BSCubeMapCamera@@QAE@XZ; BSCubeMapCamera::BSCubeMapCamera(void)
0x7C6382: jmp     short loc_7C6386
0x7C6384: xor     eax, eax
0x7C6386: push    eax; a2
0x7C6387: mov     ecx, esi; this
0x7C6389: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x7C6391: call    NiSmartPointer_Set??
0x7C6396: mov     eax, [esi]
0x7C6398: mov     dword ptr [eax+124h], 3
0x7C63A2: mov     eax, [esi]
0x7C63A4: mov     ecx, [ebx+88h]
0x7C63AA: add     eax, 54h ; 'T'
0x7C63AD: mov     [eax], ecx
0x7C63AF: mov     edx, [ebx+8Ch]
0x7C63B5: mov     [eax+4], edx
0x7C63B8: mov     ecx, [ebx+90h]
0x7C63BE: mov     [eax+8], ecx
0x7C63C1: mov     eax, [edi+120h]
0x7C63C7: test    eax, eax
0x7C63C9: jz      short loc_7C63E2
0x7C63CB: cmp     [esp+28h+arg_8], 0
0x7C63D0: jz      short loc_7C643D
0x7C63D2: test    eax, eax
0x7C63D4: jz      short loc_7C63E2
0x7C63D6: mov     ecx, ds:0B42F50h; this
0x7C63DC: push    eax; a2
0x7C63DD: call    sub_7C1EE0
0x7C63E2: mov     edx, ds:0B43104h
0x7C63E8: mov     ecx, ds:0B42F50h; this
0x7C63EE: push    18h; a3
0x7C63F0: push    edx; a2
0x7C63F1: call    BSTextureManager_GetDefaultRenderTarget
0x7C63F6: mov     ebp, [edi+120h]
0x7C63FC: cmp     ebp, eax
0x7C63FE: mov     [esp+28h+var_14], eax
0x7C6402: jz      short loc_7C643D
0x7C6404: test    ebp, ebp
0x7C6406: jz      short loc_7C6429
0x7C6408: lea     eax, [ebp+4]
0x7C640B: push    eax; lpAddend
0x7C640C: call    dword ptr ds:0A2807Ch
0x7C6412: test    eax, eax
0x7C6414: jnz     short loc_7C6425
0x7C6416: test    ebp, ebp
0x7C6418: jz      short loc_7C6425
0x7C641A: mov     edx, [ebp+0]
0x7C641D: mov     eax, [edx]
0x7C641F: push    1
0x7C6421: mov     ecx, ebp
0x7C6423: call    eax
0x7C6425: mov     eax, [esp+28h+var_14]
0x7C6429: test    eax, eax
0x7C642B: mov     [edi+120h], eax
0x7C6431: jz      short loc_7C643D
0x7C6433: add     eax, 4
0x7C6436: push    eax; lpAddend
0x7C6437: call    dword ptr ds:0A28078h
0x7C643D: mov     eax, [edi+120h]
0x7C6443: mov     edi, [esi]
0x7C6445: mov     ebp, [edi+140h]
0x7C644B: add     edi, 140h
0x7C6451: cmp     ebp, eax
0x7C6453: mov     [esp+28h+var_14], eax
0x7C6457: jz      short loc_7C648E
0x7C6459: test    ebp, ebp
0x7C645B: jz      short loc_7C647E
0x7C645D: lea     ecx, [ebp+4]
0x7C6460: push    ecx; lpAddend
0x7C6461: call    dword ptr ds:0A2807Ch
0x7C6467: test    eax, eax
0x7C6469: jnz     short loc_7C647A
0x7C646B: test    ebp, ebp
0x7C646D: jz      short loc_7C647A
0x7C646F: mov     edx, [ebp+0]
0x7C6472: mov     eax, [edx]
0x7C6474: push    1
0x7C6476: mov     ecx, ebp
0x7C6478: call    eax
0x7C647A: mov     eax, [esp+28h+var_14]
0x7C647E: test    eax, eax
0x7C6480: mov     [edi], eax
0x7C6482: jz      short loc_7C648E
0x7C6484: add     eax, 4
0x7C6487: push    eax; lpAddend
0x7C6488: call    dword ptr ds:0A28078h
0x7C648E: mov     ebp, [esi]
0x7C6490: mov     edi, [ebp+148h]
0x7C6496: add     ebp, 148h
0x7C649C: cmp     edi, ebx
0x7C649E: jz      short loc_7C64CD
0x7C64A0: test    edi, edi
0x7C64A2: jz      short loc_7C64C0
0x7C64A4: lea     ecx, [edi+4]
0x7C64A7: push    ecx; lpAddend
0x7C64A8: call    dword ptr ds:0A2807Ch
0x7C64AE: test    eax, eax
0x7C64B0: jnz     short loc_7C64C0
0x7C64B2: test    edi, edi
0x7C64B4: jz      short loc_7C64C0
0x7C64B6: mov     edx, [edi]
0x7C64B8: mov     eax, [edx]
0x7C64BA: push    1
0x7C64BC: mov     ecx, edi
0x7C64BE: call    eax
0x7C64C0: lea     ecx, [ebx+4]
0x7C64C3: push    ecx; lpAddend
0x7C64C4: mov     [ebp+0], ebx
0x7C64C7: call    dword ptr ds:0A28078h
0x7C64CD: cmp     [esp+28h+arg_8], 0
0x7C64D2: mov     ebp, [esp+28h+var_10]
0x7C64D6: jz      short loc_7C64DD
0x7C64D8: or      eax, 0FFFFFFFFh
0x7C64DB: jmp     short loc_7C64EC
0x7C64DD: mov     eax, [ebp+128h]
0x7C64E3: lea     edx, [eax+1]
0x7C64E6: mov     [ebp+128h], edx
0x7C64EC: mov     ecx, [esi]
0x7C64EE: mov     edx, [ecx]
0x7C64F0: push    eax
0x7C64F1: mov     eax, [edx+84h]
0x7C64F7: call    eax
0x7C64F9: mov     esi, [esi]
0x7C64FB: mov     edi, [esi+140h]
0x7C6501: add     esi, 140h
0x7C6507: test    edi, edi
0x7C6509: jz      short loc_7C652D
0x7C650B: lea     ecx, [edi+4]
0x7C650E: push    ecx; lpAddend
0x7C650F: call    dword ptr ds:0A2807Ch
0x7C6515: test    eax, eax
0x7C6517: jnz     short loc_7C6527
0x7C6519: test    edi, edi
0x7C651B: jz      short loc_7C6527
0x7C651D: mov     edx, [edi]
0x7C651F: mov     eax, [edx]
0x7C6521: push    1
0x7C6523: mov     ecx, edi
0x7C6525: call    eax
0x7C6527: mov     dword ptr [esi], 0
0x7C652D: cmp     byte ptr [esp+28h+arg_0], 0
0x7C6532: jz      short loc_7C653B
0x7C6534: or      word ptr [ebx+18h], 1
0x7C6539: jmp     short loc_7C6541
0x7C653B: and     word ptr [ebx+18h], 0FFFEh
0x7C6541: cmp     dword ptr [ebp+128h], 6
0x7C6548: jge     short loc_7C654E
0x7C654A: xor     al, al
0x7C654C: jmp     short loc_7C655A
0x7C654E: mov     dword ptr [ebp+128h], 0
0x7C6558: mov     al, 1
0x7C655A: mov     ecx, dword ptr [esp+28h+var_C]
0x7C655E: mov     large fs:0, ecx
0x7C6565: pop     ecx
0x7C6566: pop     edi
0x7C6567: pop     esi
0x7C6568: pop     ebp
0x7C6569: pop     ebx
0x7C656A: add     esp, 14h
0x7C656D: retn    0Ch
