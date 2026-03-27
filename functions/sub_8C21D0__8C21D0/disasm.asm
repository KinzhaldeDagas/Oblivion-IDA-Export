0x8C21D0: push    ebp
0x8C21D1: mov     ebp, esp
0x8C21D3: and     esp, 0FFFFFFF0h
0x8C21D6: sub     esp, 0B4h
0x8C21DC: mov     eax, ds:0B30AACh
0x8C21E1: xor     eax, esp
0x8C21E3: mov     [esp+0B4h+var_4], eax
0x8C21EA: push    ebx
0x8C21EB: push    esi
0x8C21EC: mov     esi, ecx
0x8C21EE: mov     eax, [esi]
0x8C21F0: mov     edx, [eax+10h]
0x8C21F3: push    edi
0x8C21F4: mov     edi, [ebp+arg_0]
0x8C21F7: call    edx
0x8C21F9: mov     eax, [esi+4]
0x8C21FC: push    eax
0x8C21FD: lea     ecx, [esp+0C4h+var_AC]
0x8C2201: call    sub_9132A0
0x8C2206: mov     ecx, [esi+0Ch]
0x8C2209: mov     edx, [ecx+50h]
0x8C220C: mov     ebx, [esi+10h]
0x8C220F: push    edi
0x8C2210: add     edx, 10h
0x8C2213: push    edx
0x8C2214: lea     ecx, [esp+0C8h+var_90]
0x8C2218: call    sub_8B1FF0
0x8C221D: mov     eax, [ebx+50h]
0x8C2220: push    edi
0x8C2221: add     eax, 10h
0x8C2224: push    eax
0x8C2225: lea     ecx, [esp+0C8h+var_50]
0x8C2229: call    sub_8B1FF0
0x8C222E: lea     ecx, [esp+0C0h+var_60]
0x8C2232: push    ecx
0x8C2233: lea     ecx, [esp+0C4h+var_AC]
0x8C2237: call    sub_9135E0
0x8C223C: lea     edx, [esp+0C0h+var_90]
0x8C2240: push    edx
0x8C2241: lea     ecx, [esp+0C4h+var_AC]
0x8C2245: call    sub_913370
0x8C224A: lea     eax, [esp+0C0h+var_20]
0x8C2251: push    eax
0x8C2252: lea     ecx, [esp+0C4h+var_AC]
0x8C2256: call    sub_913660
0x8C225B: lea     ecx, [esp+0C0h+var_50]
0x8C225F: push    ecx
0x8C2260: lea     ecx, [esp+0C4h+var_AC]
0x8C2264: mov     [esi+14h], eax
0x8C2267: call    sub_913460
0x8C226C: lea     ecx, [esp+0C0h+var_AC]
0x8C2270: mov     [esi+18h], eax
0x8C2273: call    sub_9132E0
0x8C2278: lea     ecx, [esp+0C0h+var_AC]
0x8C227C: call    sub_913550
0x8C2281: fld1
0x8C2283: sub     esp, 8
0x8C2286: fstp    [esp+0C8h+var_C4]
0x8C228A: fld     dword ptr ds:0A2FAACh
0x8C2290: lea     ecx, [esp+0C8h+var_AC]
0x8C2294: fstp    [esp+0C8h+var_C8]
0x8C2297: call    sub_9136E0
0x8C229C: lea     ecx, [esp+0C0h+var_AC]
0x8C22A0: call    sub_9137B0
0x8C22A5: lea     ecx, [esp+0C0h+var_AC]
0x8C22A9: call    sub_913810
0x8C22AE: mov     ecx, [esp+0C0h+var_4]
0x8C22B5: pop     edi
0x8C22B6: pop     esi
0x8C22B7: pop     ebx
0x8C22B8: xor     ecx, esp
0x8C22BA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8C22BF: mov     esp, ebp
0x8C22C1: pop     ebp
0x8C22C2: retn    4
