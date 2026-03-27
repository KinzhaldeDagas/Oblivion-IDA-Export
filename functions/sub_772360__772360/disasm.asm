0x772360: push    ebp
0x772361: push    esi
0x772362: mov     esi, [esp+8+arg_0]
0x772366: push    edi
0x772367: xor     edi, edi
0x772369: cmp     esi, edi
0x77236B: mov     ebp, ecx
0x77236D: mov     [ebp+4], esi
0x772370: mov     [ebp+8], edi
0x772373: jbe     short loc_7723B3
0x772375: xor     ecx, ecx
0x772377: mov     eax, esi
0x772379: mov     edx, 60h ; '`'
0x77237E: mul     edx
0x772380: seto    cl
0x772383: neg     ecx
0x772385: or      ecx, eax
0x772387: xor     eax, eax
0x772389: add     ecx, 4
0x77238C: setb    al
0x77238F: neg     eax
0x772391: or      eax, ecx
0x772393: push    eax; Size
0x772394: call    FormHeapAlloc
0x772399: add     esp, 4
0x77239C: cmp     eax, edi
0x77239E: jz      short loc_7723B3
0x7723A0: push    offset sub_7720D0
0x7723A5: push    esi
0x7723A6: lea     edi, [eax+4]
0x7723A9: push    60h ; '`'
0x7723AB: push    edi
0x7723AC: mov     [eax], esi
0x7723AE: call    sub_401080
0x7723B3: mov     [ebp+0], edi
0x7723B6: pop     edi
0x7723B7: pop     esi
0x7723B8: mov     eax, ebp
0x7723BA: pop     ebp
0x7723BB: retn    4
