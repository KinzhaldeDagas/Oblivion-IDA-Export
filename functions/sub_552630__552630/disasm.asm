0x552630: push    ecx
0x552631: push    ebx
0x552632: mov     ebx, [esp+8+arg_4]
0x552636: push    ebp
0x552637: push    esi
0x552638: mov     esi, ecx
0x55263A: mov     eax, [esi]
0x55263C: cmp     eax, [ebx]
0x55263E: push    edi
0x55263F: mov     [esp+14h+var_4], 0
0x552647: jnz     short loc_552651
0x552649: mov     ecx, [esi+4]
0x55264C: cmp     ecx, [ebx+4]
0x55264F: jz      short loc_552663
0x552651: push    1C4h; int
0x552656: push    offset aENetworkprojec; "e:\\networkprojectspc\\oblivionse\\sdk"...
0x55265B: call    sub_6ED6D0
0x552660: add     esp, 8
0x552663: mov     edx, [esi+4]
0x552666: mov     eax, [esi]
0x552668: mov     edi, [esp+14h+arg_0]
0x55266C: push    edx
0x55266D: push    eax
0x55266E: mov     ecx, edi
0x552670: call    sub_552240
0x552675: mov     ebp, [edi+0Ch]
0x552678: cmp     ebp, [edi+10h]
0x55267B: jbe     short loc_552682
0x55267D: call    __invalid_parameter_noinfo
0x552682: lea     edi, [esi+8]
0x552685: mov     esi, [edi+4]
0x552688: cmp     esi, [edi+8]
0x55268B: jbe     short loc_552692
0x55268D: call    __invalid_parameter_noinfo
0x552692: mov     ebx, [ebx+0Ch]
0x552695: mov     ecx, [esp+14h+arg_4]
0x552699: cmp     ebx, [ecx+10h]
0x55269C: jbe     short loc_5526A3
0x55269E: call    __invalid_parameter_noinfo
0x5526A3: mov     eax, [edi+8]
0x5526A6: cmp     [edi+4], eax
0x5526A9: mov     [esp+14h+var_4], eax
0x5526AD: jbe     short loc_5526B4
0x5526AF: call    __invalid_parameter_noinfo
0x5526B4: cmp     edi, edi
0x5526B6: jz      short loc_5526BD
0x5526B8: call    __invalid_parameter_noinfo
0x5526BD: cmp     esi, [esp+14h+var_4]
0x5526C1: jz      short loc_552721
0x5526C3: cmp     esi, [edi+8]
0x5526C6: jb      short loc_5526CD
0x5526C8: call    __invalid_parameter_noinfo
0x5526CD: mov     edx, [esp+14h+arg_4]
0x5526D1: cmp     ebx, [edx+10h]
0x5526D4: jb      short loc_5526DB
0x5526D6: call    __invalid_parameter_noinfo
0x5526DB: mov     eax, [esp+14h+arg_0]
0x5526DF: cmp     ebp, [eax+10h]
0x5526E2: jb      short loc_5526E9
0x5526E4: call    __invalid_parameter_noinfo
0x5526E9: fld     dword ptr [esi]
0x5526EB: fsub    dword ptr [ebx]
0x5526ED: fstp    dword ptr [ebp+0]
0x5526F0: cmp     esi, [edi+8]
0x5526F3: jb      short loc_5526FA
0x5526F5: call    __invalid_parameter_noinfo
0x5526FA: mov     ecx, [esp+14h+arg_4]
0x5526FE: add     esi, 4
0x552701: cmp     ebx, [ecx+10h]
0x552704: jb      short loc_55270B
0x552706: call    __invalid_parameter_noinfo
0x55270B: mov     edx, [esp+14h+arg_0]
0x55270F: add     ebx, 4
0x552712: cmp     ebp, [edx+10h]
0x552715: jb      short loc_55271C
0x552717: call    __invalid_parameter_noinfo
0x55271C: add     ebp, 4
0x55271F: jmp     short loc_5526A3
0x552721: mov     eax, [esp+14h+arg_0]
0x552725: pop     edi
0x552726: pop     esi
0x552727: pop     ebp
0x552728: pop     ebx
0x552729: pop     ecx
0x55272A: retn    8
