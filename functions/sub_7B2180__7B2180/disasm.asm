0x7B2180: push    0FFFFFFFFh
0x7B2182: push    offset SEH_7B2180
0x7B2187: mov     eax, large fs:0
0x7B218D: push    eax
0x7B218E: push    ecx
0x7B218F: push    ebx
0x7B2190: push    ebp
0x7B2191: push    esi
0x7B2192: push    edi
0x7B2193: mov     eax, ds:0B30AACh
0x7B2198: xor     eax, esp
0x7B219A: push    eax
0x7B219B: lea     eax, [esp+24h+var_C]
0x7B219F: mov     large fs:0, eax
0x7B21A5: mov     esi, ecx
0x7B21A7: mov     eax, [esi]
0x7B21A9: mov     ebx, [esp+24h+arg_0]
0x7B21AD: mov     edx, [eax+4]
0x7B21B0: push    ebx
0x7B21B1: mov     [esp+28h+var_4], 0
0x7B21B9: call    edx
0x7B21BB: mov     ebp, eax
0x7B21BD: mov     eax, [esi+8]
0x7B21C0: mov     edi, [eax+ebp*4]
0x7B21C3: test    edi, edi
0x7B21C5: jz      short loc_7B21E3
0x7B21C7: mov     eax, [edi+4]
0x7B21CA: mov     edx, [esi]
0x7B21CC: mov     edx, [edx+8]
0x7B21CF: push    eax
0x7B21D0: push    ebx
0x7B21D1: mov     ecx, esi
0x7B21D3: call    edx
0x7B21D5: test    al, al
0x7B21D7: jnz     loc_7B2264
0x7B21DD: mov     edi, [edi]
0x7B21DF: test    edi, edi
0x7B21E1: jnz     short loc_7B21C7
0x7B21E3: mov     edx, [esi]
0x7B21E5: mov     eax, [edx+14h]
0x7B21E8: mov     ecx, esi
0x7B21EA: call    eax
0x7B21EC: mov     ebx, [esp+20h+arg_8]
0x7B21F0: test    ebx, ebx
0x7B21F2: push    ecx
0x7B21F3: mov     edi, eax
0x7B21F5: mov     eax, esp
0x7B21F7: mov     [esp+24h+var_C], esp
0x7B21FB: mov     [eax], ebx
0x7B21FD: jz      short loc_7B2209
0x7B21FF: lea     ecx, [ebx+4]
0x7B2202: push    ecx; lpAddend
0x7B2203: call    dword ptr ds:0A28078h
0x7B2209: mov     eax, [esp+24h+arg_4]
0x7B220D: mov     edx, [esi]
0x7B220F: mov     edx, [edx+0Ch]
0x7B2212: push    eax
0x7B2213: push    edi
0x7B2214: mov     ecx, esi
0x7B2216: call    edx
0x7B2218: mov     eax, [esi+8]
0x7B221B: mov     ecx, [eax+ebp*4]
0x7B221E: mov     [edi], ecx
0x7B2220: mov     edx, [esi+8]
0x7B2223: mov     [edx+ebp*4], edi
0x7B2226: add     dword ptr [esi+0Ch], 1
0x7B222A: test    ebx, ebx
0x7B222C: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7B2234: jz      short loc_7B224E
0x7B2236: lea     eax, [ebx+4]
0x7B2239: push    eax; lpAddend
0x7B223A: call    dword ptr ds:0A2807Ch
0x7B2240: test    eax, eax
0x7B2242: jnz     short loc_7B224E
0x7B2244: mov     edx, [ebx]
0x7B2246: mov     eax, [edx]
0x7B2248: push    1
0x7B224A: mov     ecx, ebx
0x7B224C: call    eax
0x7B224E: mov     ecx, [esp+24h+var_C]
0x7B2252: mov     large fs:0, ecx
0x7B2259: pop     ecx
0x7B225A: pop     edi
0x7B225B: pop     esi
0x7B225C: pop     ebp
0x7B225D: pop     ebx
0x7B225E: add     esp, 10h
0x7B2261: retn    8
0x7B2264: mov     eax, [esi]
0x7B2266: mov     edx, [eax+10h]
0x7B2269: push    edi
0x7B226A: mov     ecx, esi
0x7B226C: call    edx
0x7B226E: mov     ebx, [esp+20h+arg_8]
0x7B2272: test    ebx, ebx
0x7B2274: push    ecx
0x7B2275: mov     eax, esp
0x7B2277: mov     [esp+24h+var_C], esp
0x7B227B: mov     [eax], ebx
0x7B227D: jz      short loc_7B2289
0x7B227F: lea     eax, [ebx+4]
0x7B2282: push    eax; lpAddend
0x7B2283: call    dword ptr ds:0A28078h
0x7B2289: mov     eax, [esp+24h+arg_4]
0x7B228D: mov     edx, [esi]
0x7B228F: mov     edx, [edx+0Ch]
0x7B2292: push    eax
0x7B2293: push    edi
0x7B2294: mov     ecx, esi
0x7B2296: call    edx
0x7B2298: jmp     short loc_7B222A
