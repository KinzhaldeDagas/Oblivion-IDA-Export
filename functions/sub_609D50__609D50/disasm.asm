0x609D50: sub     esp, 24h
0x609D53: push    esi
0x609D54: mov     esi, ecx
0x609D56: mov     eax, [esi]
0x609D58: mov     edx, [eax+154h]
0x609D5E: call    edx
0x609D60: test    eax, eax
0x609D62: jz      short loc_609DE3
0x609D64: mov     ecx, [esi+5Ch]
0x609D67: test    ecx, ecx
0x609D69: jz      short loc_609DE3
0x609D6B: cmp     dword ptr [ecx], 1
0x609D6E: jnz     short loc_609DE3
0x609D70: push    eax
0x609D71: call    sub_480340
0x609D76: add     esp, 4
0x609D79: test    eax, eax
0x609D7B: jz      short loc_609DE3
0x609D7D: mov     ecx, [eax+10h]
0x609D80: test    ecx, ecx
0x609D82: jz      short loc_609DE3
0x609D84: fld     dword ptr ds:0A3D65Ch
0x609D8A: push    edi
0x609D8B: mov     edi, [esp+2Ch+arg_10]
0x609D8F: fstp    [esp+2Ch+var_14]
0x609D93: mov     [esp+2Ch+var_8], ecx
0x609D97: mov     [esp+2Ch+var_4], edi
0x609D9B: call    sub_494F10
0x609DA0: fld     [esp+2Ch+arg_0]
0x609DA4: mov     al, [eax+10h]
0x609DA7: fstp    [esp+2Ch+var_18]
0x609DAB: mov     edx, [esp+2Ch+arg_4]
0x609DAF: mov     cl, [esp+2Ch+arg_14]
0x609DB3: mov     [esp+2Ch+var_24], edx
0x609DB7: mov     [esp+2Ch+var_10], al
0x609DBB: mov     eax, [esp+2Ch+arg_8]
0x609DBF: mov     [esp+2Ch+var_F], cl
0x609DC3: mov     ecx, [esp+2Ch+arg_C]
0x609DC7: lea     edx, [esp+2Ch+var_24]
0x609DCB: add     edi, esi
0x609DCD: push    edx
0x609DCE: mov     [esp+30h+var_20], eax
0x609DD2: mov     [esp+30h+var_1C], ecx
0x609DD6: mov     [esp+30h+var_C], edi
0x609DDA: call    sub_6B0C70
0x609DDF: add     esp, 4
0x609DE2: pop     edi
0x609DE3: pop     esi
0x609DE4: add     esp, 24h
0x609DE7: retn    18h
