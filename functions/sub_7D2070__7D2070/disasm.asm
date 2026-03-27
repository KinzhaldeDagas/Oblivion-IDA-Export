0x7D2070: push    ecx
0x7D2071: mov     eax, [ecx+100h]
0x7D2077: test    byte ptr [eax+18h], 1
0x7D207B: jnz     loc_7D21E2
0x7D2081: mov     ecx, [ecx+0E8h]
0x7D2087: test    ecx, ecx
0x7D2089: jz      loc_7D21E2
0x7D208F: push    ebx
0x7D2090: push    ebp
0x7D2091: push    esi
0x7D2092: push    edi
0x7D2093: jmp     short loc_7D2099
0x7D2095: mov     ecx, [esp+14h+var_4]
0x7D2099: mov     ebp, [ecx+8]
0x7D209C: test    ebp, ebp
0x7D209E: lea     eax, [ecx+8]
0x7D20A1: mov     ecx, [ecx]
0x7D20A3: mov     [esp+14h+var_4], ecx
0x7D20A7: jz      loc_7D21D3
0x7D20AD: mov     esi, [ebp+0BCh]
0x7D20B3: test    esi, esi
0x7D20B5: jz      loc_7D21D3
0x7D20BB: push    4; a2
0x7D20BD: mov     ecx, ebp; this
0x7D20BF: call    NiNode_GetNiPropertyByID
0x7D20C4: mov     edi, eax
0x7D20C6: cmp     dword ptr [edi+68h], 0
0x7D20CA: jnz     short loc_7D20E2
0x7D20CC: mov     eax, ds:0B42EB4h
0x7D20D1: test    eax, eax
0x7D20D3: jz      short loc_7D20DD
0x7D20D5: push    ebp; _DWORD
0x7D20D6: call    eax ; dword_B42EB4
0x7D20D8: add     esp, 4
0x7D20DB: jmp     short loc_7D20DF
0x7D20DD: xor     eax, eax
0x7D20DF: mov     [edi+68h], eax
0x7D20E2: mov     ecx, [edi+68h]
0x7D20E5: mov     edx, 1
0x7D20EA: shl     edx, cl
0x7D20EC: test    ds:0B2C678h, edx
0x7D20F2: jz      loc_7D21D3
0x7D20F8: test    esi, esi
0x7D20FA: jz      loc_7D21D3
0x7D2100: mov     eax, ds:0B3F928h
0x7D2105: mov     ecx, [eax+8]
0x7D2108: call    sub_733840
0x7D210D: mov     edx, [esi]
0x7D210F: mov     bl, al
0x7D2111: mov     eax, [edx+1Ch]
0x7D2114: mov     ecx, esi
0x7D2116: call    eax
0x7D2118: cmp     eax, 1
0x7D211B: jl      short loc_7D2169
0x7D211D: mov     edx, [esi]
0x7D211F: mov     eax, [edx+1Ch]
0x7D2122: mov     ecx, esi
0x7D2124: call    eax
0x7D2126: cmp     eax, 5
0x7D2129: jg      short loc_7D2169
0x7D212B: test    bl, bl
0x7D212D: jnz     loc_7D21C7
0x7D2133: xor     eax, eax
0x7D2135: cmp     [ebp+0B8h], eax
0x7D213B: push    eax
0x7D213C: mov     ds:0B42EB8h, eax
0x7D2141: jz      short loc_7D2156
0x7D2143: push    14h
0x7D2145: mov     dword ptr ds:0B42E90h, 14h
0x7D214F: call    sub_7D1320
0x7D2154: jmp     short loc_7D21B0
0x7D2156: push    10h
0x7D2158: mov     dword ptr ds:0B42E90h, 10h
0x7D2162: call    sub_7D1320
0x7D2167: jmp     short loc_7D21B0
0x7D2169: mov     edx, [esi]
0x7D216B: mov     eax, [edx+1Ch]
0x7D216E: mov     ecx, esi
0x7D2170: call    eax
0x7D2172: cmp     eax, 1Bh
0x7D2175: jnz     short loc_7D21D3
0x7D2177: test    bl, bl
0x7D2179: jnz     short loc_7D21C7
0x7D217B: xor     eax, eax
0x7D217D: cmp     [ebp+0B8h], eax
0x7D2183: push    eax
0x7D2184: mov     ds:0B42EB8h, eax
0x7D2189: jz      short loc_7D219C
0x7D218B: mov     dword ptr ds:0B42E90h, 155h
0x7D2195: push    155h
0x7D219A: jmp     short loc_7D21AB
0x7D219C: mov     dword ptr ds:0B42E90h, 154h
0x7D21A6: push    154h
0x7D21AB: call    sub_7FD260
0x7D21B0: mov     ecx, [esi+30h]
0x7D21B3: mov     edx, [ecx]
0x7D21B5: mov     eax, [edx+48h]
0x7D21B8: add     esp, 8
0x7D21BB: call    eax
0x7D21BD: mov     ecx, [esi+2Ch]
0x7D21C0: mov     edx, [ecx]
0x7D21C2: mov     eax, [edx+48h]
0x7D21C5: call    eax
0x7D21C7: mov     ecx, [esp+14h+a2]
0x7D21CB: push    ecx; a2
0x7D21CC: mov     ecx, ebp; this
0x7D21CE: call    NiAVObject_Render
0x7D21D3: cmp     [esp+14h+var_4], 0
0x7D21D8: jnz     loc_7D2095
0x7D21DE: pop     edi
0x7D21DF: pop     esi
0x7D21E0: pop     ebp
0x7D21E1: pop     ebx
0x7D21E2: mov     al, 1
0x7D21E4: pop     ecx
0x7D21E5: retn    4
