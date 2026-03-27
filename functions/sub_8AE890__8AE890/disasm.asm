0x8AE890: push    ebp
0x8AE891: mov     ebp, esp
0x8AE893: and     esp, 0FFFFFFF0h
0x8AE896: sub     esp, 1A0h
0x8AE89C: lea     eax, [esp+1A0h+var_180]
0x8AE8A0: lea     edx, [esp+1A0h+var_1A0]
0x8AE8A3: push    edx
0x8AE8A4: mov     edx, [ebp+arg_0]
0x8AE8A7: mov     [esp+1A4h+var_190], eax
0x8AE8AB: mov     eax, [ebp+arg_4]
0x8AE8AE: push    eax
0x8AE8AF: push    edx
0x8AE8B0: mov     [esp+1ACh+var_1A0], offset ??_7hkAllCdPointCollector@@6B@; const hkAllCdPointCollector::`vftable'
0x8AE8B8: mov     [esp+1ACh+var_188], 80000008h
0x8AE8C0: mov     [esp+1ACh+var_18C], 0
0x8AE8C8: mov     [esp+1ACh+var_19C], 7F7FFFFFh
0x8AE8D0: call    sub_8AE100
0x8AE8D5: mov     eax, [esp+1A0h+var_188]
0x8AE8D9: test    eax, eax
0x8AE8DB: mov     [esp+1A0h+var_1A0], offset ??_7hkAllCdPointCollector@@6B@; const hkAllCdPointCollector::`vftable'
0x8AE8E2: js      short loc_8AE91C
0x8AE8E4: mov     ecx, ds:0BA9DE4h
0x8AE8EA: mov     edx, large fs:2Ch
0x8AE8F1: mov     ecx, [edx+ecx*4]
0x8AE8F4: mov     ecx, [ecx+19Ch]
0x8AE8FA: test    ecx, ecx
0x8AE8FC: jnz     short loc_8AE904
0x8AE8FE: mov     ecx, ds:0BA7D9Ch
0x8AE904: and     eax, 3FFFFFFFh
0x8AE909: lea     edx, [eax+eax*2]
0x8AE90C: mov     eax, [esp+1A0h+var_190]
0x8AE910: push    14h
0x8AE912: shl     edx, 4
0x8AE915: push    edx
0x8AE916: push    eax
0x8AE917: call    sub_8A75D0
0x8AE91C: mov     esp, ebp
0x8AE91E: pop     ebp
0x8AE91F: retn    8
