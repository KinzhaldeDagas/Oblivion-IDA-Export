0x552310: push    ecx
0x552311: push    ebx
0x552312: push    ebp
0x552313: mov     ebp, [esp+0Ch+arg_0]
0x552317: push    esi
0x552318: mov     esi, ecx
0x55231A: mov     eax, [esi+4]
0x55231D: mov     ecx, [esi]
0x55231F: push    edi
0x552320: push    eax
0x552321: push    ecx
0x552322: mov     ecx, ebp
0x552324: mov     [esp+1Ch+var_4], 0
0x55232C: call    sub_552240
0x552331: lea     edi, [esi+8]
0x552334: mov     esi, [edi+4]
0x552337: cmp     esi, [edi+8]
0x55233A: jbe     short loc_552341
0x55233C: call    __invalid_parameter_noinfo
0x552341: mov     ebx, [ebp+0Ch]
0x552344: cmp     ebx, [ebp+10h]
0x552347: jbe     short loc_552350
0x552349: call    __invalid_parameter_noinfo
0x55234E: mov     edi, edi
0x552350: mov     eax, [edi+8]
0x552353: cmp     [edi+4], eax
0x552356: mov     [esp+14h+arg_0], eax
0x55235A: jbe     short loc_552361
0x55235C: call    __invalid_parameter_noinfo
0x552361: cmp     edi, edi
0x552363: jz      short loc_55236A
0x552365: call    __invalid_parameter_noinfo
0x55236A: cmp     esi, [esp+14h+arg_0]
0x55236E: jz      short loc_5523A8
0x552370: cmp     esi, [edi+8]
0x552373: jb      short loc_55237A
0x552375: call    __invalid_parameter_noinfo
0x55237A: cmp     ebx, [ebp+10h]
0x55237D: jb      short loc_552384
0x55237F: call    __invalid_parameter_noinfo
0x552384: fld     dword ptr [esi]
0x552386: fmul    [esp+14h+arg_4]
0x55238A: fstp    dword ptr [ebx]
0x55238C: cmp     esi, [edi+8]
0x55238F: jb      short loc_552396
0x552391: call    __invalid_parameter_noinfo
0x552396: add     esi, 4
0x552399: cmp     ebx, [ebp+10h]
0x55239C: jb      short loc_5523A3
0x55239E: call    __invalid_parameter_noinfo
0x5523A3: add     ebx, 4
0x5523A6: jmp     short loc_552350
0x5523A8: pop     edi
0x5523A9: pop     esi
0x5523AA: mov     eax, ebp
0x5523AC: pop     ebp
0x5523AD: pop     ebx
0x5523AE: pop     ecx
0x5523AF: retn    8
