0x4C2180: push    0FFFFFFFFh
0x4C2182: push    offset SEH_4C2180
0x4C2187: mov     eax, large fs:0
0x4C218D: push    eax
0x4C218E: push    ecx
0x4C218F: push    ebx
0x4C2190: push    esi
0x4C2191: push    edi
0x4C2192: mov     eax, ds:0B30AACh
0x4C2197: xor     eax, esp
0x4C2199: push    eax
0x4C219A: lea     eax, [esp+20h+var_C]
0x4C219E: mov     large fs:0, eax
0x4C21A4: mov     edi, ecx
0x4C21A6: mov     [esp+20h+var_10], edi
0x4C21AA: mov     esi, [edi+94h]
0x4C21B0: test    esi, esi
0x4C21B2: mov     ebx, ds:0A2807Ch
0x4C21B8: mov     [esp+20h+var_4], 1
0x4C21C0: jz      short loc_4C21DA
0x4C21C2: lea     eax, [esi+4]
0x4C21C5: push    eax; lpAddend
0x4C21C6: call    ebx ; InterlockedDecrement
0x4C21C8: test    eax, eax
0x4C21CA: jnz     short loc_4C21DA
0x4C21CC: test    esi, esi
0x4C21CE: jz      short loc_4C21DA
0x4C21D0: mov     edx, [esi]
0x4C21D2: mov     eax, [edx]
0x4C21D4: push    1
0x4C21D6: mov     ecx, esi
0x4C21D8: call    eax
0x4C21DA: push    offset ??1?$NiTPointerMap@IPAPAVTESGrassAreaParam@@@@UAE@XZ; void (__thiscall *)(void *)
0x4C21DF: push    4; int
0x4C21E1: push    10h; unsigned int
0x4C21E3: lea     ecx, [edi+54h]
0x4C21E6: push    ecx; void *
0x4C21E7: mov     byte ptr [esp+30h+var_4], 0
0x4C21EC: call    $LN21
0x4C21F1: mov     esi, [edi+14h]
0x4C21F4: test    esi, esi
0x4C21F6: mov     [esp+20h+var_4], 0FFFFFFFFh
0x4C21FE: jz      short loc_4C2218
0x4C2200: lea     edx, [esi+4]
0x4C2203: push    edx; lpAddend
0x4C2204: call    ebx ; InterlockedDecrement
0x4C2206: test    eax, eax
0x4C2208: jnz     short loc_4C2218
0x4C220A: test    esi, esi
0x4C220C: jz      short loc_4C2218
0x4C220E: mov     eax, [esi]
0x4C2210: mov     edx, [eax]
0x4C2212: push    1
0x4C2214: mov     ecx, esi
0x4C2216: call    edx
0x4C2218: mov     ecx, dword ptr [esp+20h+var_C]
0x4C221C: mov     large fs:0, ecx
0x4C2223: pop     ecx
0x4C2224: pop     edi
0x4C2225: pop     esi
0x4C2226: pop     ebx
0x4C2227: add     esp, 10h
0x4C222A: retn
