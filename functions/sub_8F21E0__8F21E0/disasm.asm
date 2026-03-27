0x8F21E0: sub     esp, 410h
0x8F21E6: push    esi
0x8F21E7: lea     ecx, [esp+414h+var_410]
0x8F21EB: call    sub_933D80
0x8F21F0: mov     eax, [esp+414h+arg_8]
0x8F21F7: mov     esi, [esp+414h+arg_4]
0x8F21FE: mov     edx, [esp+414h+arg_0]
0x8F2205: push    eax
0x8F2206: push    esi
0x8F2207: lea     ecx, [esp+41Ch+var_410]
0x8F220B: push    ecx
0x8F220C: push    edx
0x8F220D: call    sub_8F1ED0
0x8F2212: lea     eax, [esp+424h+var_410]
0x8F2216: push    esi
0x8F2217: push    eax
0x8F2218: call    sub_931A30
0x8F221D: mov     eax, [esp+42Ch+var_404]
0x8F2221: add     esp, 18h
0x8F2224: test    eax, eax
0x8F2226: pop     esi
0x8F2227: js      short loc_8F2253
0x8F2229: mov     ecx, [esp+410h+var_40C]
0x8F222D: mov     edx, ds:0BA9DE4h
0x8F2233: and     eax, 3FFFFFFFh
0x8F2238: push    14h
0x8F223A: shl     eax, 3
0x8F223D: push    eax
0x8F223E: mov     eax, large fs:2Ch
0x8F2244: push    ecx
0x8F2245: mov     ecx, [eax+edx*4]
0x8F2248: mov     ecx, [ecx+19Ch]
0x8F224E: call    sub_8A75D0
0x8F2253: add     esp, 410h
0x8F2259: retn
