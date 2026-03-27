0x6C8580: push    0FFFFFFFFh
0x6C8582: push    offset SEH_6C8580
0x6C8587: mov     eax, large fs:0
0x6C858D: push    eax
0x6C858E: sub     esp, 18h
0x6C8591: push    ebx
0x6C8592: push    ebp
0x6C8593: push    esi
0x6C8594: push    edi
0x6C8595: mov     eax, ds:0B30AACh
0x6C859A: xor     eax, esp
0x6C859C: push    eax
0x6C859D: lea     eax, [esp+38h+var_C]
0x6C85A1: mov     large fs:0, eax
0x6C85A7: mov     edi, ecx
0x6C85A9: mov     [esp+38h+var_1C], edi
0x6C85AD: mov     eax, [edi+10h]
0x6C85B0: xor     ebp, ebp
0x6C85B2: cmp     eax, ebp
0x6C85B4: jnz     short loc_6C85CC
0x6C85B6: xor     al, al
0x6C85B8: mov     ecx, [esp+38h+var_C]
0x6C85BC: mov     large fs:0, ecx
0x6C85C3: pop     ecx
0x6C85C4: pop     edi
0x6C85C5: pop     esi
0x6C85C6: pop     ebp
0x6C85C7: pop     ebx
0x6C85C8: add     esp, 24h
0x6C85CB: retn
0x6C85CC: mov     esi, [edi+0Ch]
0x6C85CF: add     esi, eax
0x6C85D1: xor     ecx, ecx
0x6C85D3: mov     eax, esi
0x6C85D5: mov     edx, 10h
0x6C85DA: mul     edx
0x6C85DC: seto    cl
0x6C85DF: neg     ecx
0x6C85E1: or      ecx, eax
0x6C85E3: xor     eax, eax
0x6C85E5: add     ecx, 4
0x6C85E8: setb    al
0x6C85EB: neg     eax
0x6C85ED: or      eax, ecx
0x6C85EF: push    eax; Size
0x6C85F0: call    FormHeapAlloc
0x6C85F5: add     esp, 4
0x6C85F8: mov     [esp+38h+var_10], eax
0x6C85FC: cmp     eax, ebp
0x6C85FE: mov     [esp+38h+var_4], ebp
0x6C8602: jz      short loc_6C8622
0x6C8604: push    offset sub_6C64C0; a5
0x6C8609: push    offset sub_6C62E0; a4
0x6C860E: push    esi; size
0x6C860F: lea     ebx, [eax+4]
0x6C8612: push    10h; a2
0x6C8614: push    ebx; a1
0x6C8615: mov     [eax], esi
0x6C8617: call    ArrayConstructor
0x6C861C: mov     [esp+38h+var_24], ebx
0x6C8620: jmp     short loc_6C8626
0x6C8622: mov     [esp+38h+var_24], ebp
0x6C8626: xor     ecx, ecx
0x6C8628: or      ebp, 0FFFFFFFFh
0x6C862B: mov     eax, esi
0x6C862D: mov     edx, 10h
0x6C8632: mul     edx
0x6C8634: seto    cl
0x6C8637: mov     [esp+38h+var_4], ebp
0x6C863B: neg     ecx
0x6C863D: or      ecx, eax
0x6C863F: xor     eax, eax
0x6C8641: add     ecx, 4
0x6C8644: setb    al
0x6C8647: neg     eax
0x6C8649: or      eax, ecx
0x6C864B: push    eax; Size
0x6C864C: call    FormHeapAlloc
0x6C8651: add     esp, 4
0x6C8654: mov     [esp+38h+var_10], eax
0x6C8658: test    eax, eax
0x6C865A: mov     [esp+38h+var_4], 1
0x6C8662: jz      short loc_6C8682
0x6C8664: push    offset sub_7016A0; a5
0x6C8669: push    offset sub_6C6370; a4
0x6C866E: push    esi; size
0x6C866F: lea     ebx, [eax+4]
0x6C8672: push    10h; a2
0x6C8674: push    ebx; a1
0x6C8675: mov     [eax], esi
0x6C8677: call    ArrayConstructor
0x6C867C: mov     [esp+38h+var_20], ebx
0x6C8680: jmp     short loc_6C868A
0x6C8682: mov     [esp+38h+var_20], 0
0x6C868A: xor     eax, eax
0x6C868C: test    esi, esi
0x6C868E: mov     [esp+38h+var_4], ebp
0x6C8692: mov     [esp+38h+var_18], eax
0x6C8696: jbe     loc_6C8731
0x6C869C: mov     ebx, [esp+38h+var_20]
0x6C86A0: mov     ecx, [esp+38h+var_24]
0x6C86A4: xor     ebp, ebp
0x6C86A6: sub     ecx, ebx
0x6C86A8: mov     [esp+38h+var_14], ebp
0x6C86AC: mov     [esp+38h+var_10], ecx
0x6C86B0: jmp     short loc_6C86B6
0x6C86B2: mov     ecx, [esp+38h+var_10]
0x6C86B6: cmp     eax, [edi+0Ch]
0x6C86B9: jnb     short loc_6C86D7
0x6C86BB: mov     edx, [edi+14h]
0x6C86BE: add     edx, ebp
0x6C86C0: push    edx
0x6C86C1: add     ecx, ebx
0x6C86C3: call    sub_6C6870
0x6C86C8: mov     eax, [edi+18h]
0x6C86CB: add     eax, ebp
0x6C86CD: push    eax
0x6C86CE: mov     ecx, ebx
0x6C86D0: call    sub_6C67F0
0x6C86D5: jmp     short loc_6C8714
0x6C86D7: mov     ebp, [edi+64h]
0x6C86DA: mov     edi, [ebx]
0x6C86DC: cmp     edi, ebp
0x6C86DE: jz      short loc_6C8710
0x6C86E0: test    edi, edi
0x6C86E2: jz      short loc_6C8700
0x6C86E4: lea     ecx, [edi+4]
0x6C86E7: push    ecx; lpAddend
0x6C86E8: call    dword ptr ds:0A2807Ch
0x6C86EE: test    eax, eax
0x6C86F0: jnz     short loc_6C8700
0x6C86F2: test    edi, edi
0x6C86F4: jz      short loc_6C8700
0x6C86F6: mov     edx, [edi]
0x6C86F8: mov     eax, [edx]
0x6C86FA: push    1
0x6C86FC: mov     ecx, edi
0x6C86FE: call    eax
0x6C8700: test    ebp, ebp
0x6C8702: mov     [ebx], ebp
0x6C8704: jz      short loc_6C8710
0x6C8706: add     ebp, 4
0x6C8709: push    ebp; lpAddend
0x6C870A: call    dword ptr ds:0A28078h
0x6C8710: mov     edi, [esp+38h+var_1C]
0x6C8714: mov     eax, [esp+38h+var_18]
0x6C8718: mov     ebp, [esp+38h+var_14]
0x6C871C: add     eax, 1
0x6C871F: add     ebp, 10h
0x6C8722: add     ebx, 10h
0x6C8725: cmp     eax, esi
0x6C8727: mov     [esp+38h+var_18], eax
0x6C872B: mov     [esp+38h+var_14], ebp
0x6C872F: jb      short loc_6C86B2
0x6C8731: mov     eax, [edi+14h]
0x6C8734: test    eax, eax
0x6C8736: jz      short loc_6C8755
0x6C8738: mov     ecx, [eax-4]
0x6C873B: lea     ebx, [eax-4]
0x6C873E: push    offset sub_6C64C0; void (__thiscall *)(void *)
0x6C8743: push    ecx; int
0x6C8744: push    10h; unsigned int
0x6C8746: push    eax; void *
0x6C8747: call    $LN21
0x6C874C: push    ebx
0x6C874D: call    FormHeapFree
0x6C8752: add     esp, 4
0x6C8755: mov     eax, [edi+18h]
0x6C8758: test    eax, eax
0x6C875A: jz      short loc_6C8779
0x6C875C: mov     edx, [eax-4]
0x6C875F: lea     ebx, [eax-4]
0x6C8762: push    offset sub_7016A0; void (__thiscall *)(void *)
0x6C8767: push    edx; int
0x6C8768: push    10h; unsigned int
0x6C876A: push    eax; void *
0x6C876B: call    $LN21
0x6C8770: push    ebx
0x6C8771: call    FormHeapFree
0x6C8776: add     esp, 4
0x6C8779: mov     eax, [esp+38h+var_24]
0x6C877D: mov     ecx, [esp+38h+var_20]
0x6C8781: mov     [edi+14h], eax
0x6C8784: mov     [edi+0Ch], esi
0x6C8787: mov     [edi+18h], ecx
0x6C878A: mov     al, 1
0x6C878C: mov     ecx, [esp+38h+var_C]
0x6C8790: mov     large fs:0, ecx
0x6C8797: pop     ecx
0x6C8798: pop     edi
0x6C8799: pop     esi
0x6C879A: pop     ebp
0x6C879B: pop     ebx
0x6C879C: add     esp, 24h
0x6C879F: retn
