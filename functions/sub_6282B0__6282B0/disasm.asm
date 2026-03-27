0x6282B0: push    esi
0x6282B1: mov     esi, ecx
0x6282B3: mov     eax, [esi]
0x6282B5: mov     edx, [eax+36Ch]
0x6282BB: call    edx
0x6282BD: test    eax, eax
0x6282BF: jz      short loc_6282E3
0x6282C1: mov     eax, [esi]
0x6282C3: mov     edx, [eax+36Ch]
0x6282C9: mov     ecx, esi
0x6282CB: call    edx
0x6282CD: cmp     eax, 4
0x6282D0: jz      short loc_6282E3
0x6282D2: mov     eax, [esi]
0x6282D4: mov     edx, [eax+36Ch]
0x6282DA: mov     ecx, esi
0x6282DC: call    edx
0x6282DE: cmp     eax, 9
0x6282E1: jnz     short loc_62832B
0x6282E3: mov     esi, [esp+4+arg_0]
0x6282E7: mov     eax, [esi]
0x6282E9: mov     edx, [eax+164h]
0x6282EF: mov     ecx, esi
0x6282F1: call    edx
0x6282F3: test    eax, eax
0x6282F5: jz      short loc_628302
0x6282F7: push    0
0x6282F9: push    1
0x6282FB: mov     ecx, eax
0x6282FD: call    sub_475440
0x628302: mov     ecx, esi
0x628304: call    sub_5E12B0
0x628309: test    eax, eax
0x62830B: jz      short loc_62832B
0x62830D: mov     edx, [eax]
0x62830F: fld     dword ptr ds:0A41328h
0x628315: push    1
0x628317: push    1
0x628319: push    1
0x62831B: push    1
0x62831D: push    ecx
0x62831E: mov     ecx, eax
0x628320: fstp    [esp+18h+var_18]
0x628323: mov     eax, [edx+80h]
0x628329: call    eax
0x62832B: pop     esi
0x62832C: retn    4
