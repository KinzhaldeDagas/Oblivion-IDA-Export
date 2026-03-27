0x4B20D0: push    ebp
0x4B20D1: mov     ebp, esp
0x4B20D3: push    0FFFFFFFFh
0x4B20D5: push    offset SEH_4B20D0
0x4B20DA: mov     eax, large fs:0
0x4B20E0: push    eax
0x4B20E1: sub     esp, 54h
0x4B20E4: mov     eax, ds:0B30AACh
0x4B20E9: xor     eax, ebp
0x4B20EB: mov     [ebp+var_10], eax
0x4B20EE: push    ebx
0x4B20EF: push    esi
0x4B20F0: push    edi
0x4B20F1: push    eax
0x4B20F2: lea     eax, [ebp+var_C]
0x4B20F5: mov     large fs:0, eax
0x4B20FB: mov     ebx, ecx
0x4B20FD: xor     esi, esi
0x4B20FF: mov     [ebp+var_14], esi
0x4B2102: mov     [ebp+var_20], esi
0x4B2105: mov     eax, [ebx]
0x4B2107: mov     edi, [ebp+arg_0]
0x4B210A: mov     edx, [eax+110h]
0x4B2110: push    edi
0x4B2111: mov     [ebp+var_4], esi
0x4B2114: call    edx
0x4B2116: test    eax, eax
0x4B2118: mov     [ebp+var_18], eax
0x4B211B: jz      loc_4B22AE
0x4B2121: cmp     byte ptr ds:0B333F4h, 0
0x4B2128: jnz     short loc_4B215D
0x4B212A: mov     byte ptr ds:0B333F4h, 1
0x4B2131: mov     eax, [ebx]
0x4B2133: mov     edx, [eax+0D4h]
0x4B2139: mov     ecx, ebx
0x4B213B: call    edx
0x4B213D: test    eax, eax
0x4B213F: mov     byte ptr ds:0B333F4h, 0
0x4B2146: jz      short loc_4B215D
0x4B2148: lea     edx, [eax+1]
0x4B214B: jmp     short loc_4B2150
0x4B214D: align 10h
0x4B2150: mov     cl, [eax]
0x4B2152: add     eax, 1
0x4B2155: test    cl, cl
0x4B2157: jnz     short loc_4B2150
0x4B2159: sub     eax, edx
0x4B215B: jmp     short loc_4B215F
0x4B215D: xor     eax, eax
0x4B215F: add     eax, 10h
0x4B2162: call    __alloca?
0x4B2167: movzx   eax, word ptr [ebx+38h]
0x4B216B: cmp     ax, 0FFFFh
0x4B216F: jnz     short loc_4B2184
0x4B2171: mov     eax, [ebx+34h]
0x4B2174: lea     edx, [eax+1]
0x4B2177: mov     cl, [eax]
0x4B2179: add     eax, 1
0x4B217C: test    cl, cl
0x4B217E: jnz     short loc_4B2177
0x4B2180: sub     eax, edx
0x4B2182: jmp     short loc_4B2187
0x4B2184: movzx   eax, ax
0x4B2187: test    eax, eax
0x4B2189: jnz     short loc_4B21AE
0x4B218B: mov     ecx, [ebp+var_18]
0x4B218E: mov     eax, [ecx]
0x4B2190: mov     edx, [eax+8]
0x4B2193: call    edx
0x4B2195: mov     esi, eax
0x4B2197: mov     eax, [ebx]
0x4B2199: mov     edx, [eax+0D4h]
0x4B219F: mov     ecx, ebx
0x4B21A1: mov     [ebp+var_14], esi
0x4B21A4: call    edx
0x4B21A6: push    eax; Src
0x4B21A7: mov     ecx, esi
0x4B21A9: call    NiObjectNET_SetName
0x4B21AE: mov     eax, [ebx+8]
0x4B21B1: shr     eax, 4
0x4B21B4: test    al, 1
0x4B21B6: jz      short loc_4B21C5
0x4B21B8: test    edi, edi
0x4B21BA: jz      short loc_4B21C5
0x4B21BC: push    1
0x4B21BE: mov     ecx, edi
0x4B21C0: call    sub_46A9C0
0x4B21C5: test    edi, edi
0x4B21C7: fld1
0x4B21C9: fstp    [ebp+var_1C]
0x4B21CC: jz      short loc_4B21DD
0x4B21CE: mov     edx, [edi]
0x4B21D0: mov     eax, [edx+0ECh]
0x4B21D6: mov     ecx, edi
0x4B21D8: call    eax
0x4B21DA: fstp    [ebp+var_1C]
0x4B21DD: lea     ecx, [ebp+var_3C]
0x4B21E0: call    sub_478B90
0x4B21E5: fld     [ebp+var_1C]
0x4B21E8: fst     [ebp+var_24]
0x4B21EB: fst     [ebp+var_28]
0x4B21EE: fstp    [ebp+var_2C]
0x4B21F1: movzx   eax, word ptr [ebx+38h]
0x4B21F5: cmp     ax, 0FFFFh
0x4B21F9: mov     byte ptr [ebp+var_4], 1
0x4B21FD: jnz     short loc_4B2212
0x4B21FF: mov     eax, [ebx+34h]
0x4B2202: lea     edx, [eax+1]
0x4B2205: mov     cl, [eax]
0x4B2207: add     eax, 1
0x4B220A: test    cl, cl
0x4B220C: jnz     short loc_4B2205
0x4B220E: sub     eax, edx
0x4B2210: jmp     short loc_4B2215
0x4B2212: movzx   eax, ax
0x4B2215: test    eax, eax
0x4B2217: jz      short loc_4B222A
0x4B2219: lea     ecx, [ebp+var_3C]
0x4B221C: push    ecx
0x4B221D: mov     ecx, [ebp+var_18]
0x4B2220: call    sub_700610
0x4B2225: mov     [ebp+var_14], eax
0x4B2228: mov     esi, eax
0x4B222A: test    esi, esi
0x4B222C: jz      short loc_4B2278
0x4B222E: mov     edx, [edi]
0x4B2230: mov     eax, [edx+174h]
0x4B2236: mov     ecx, edi
0x4B2238: call    eax
0x4B223A: mov     ecx, [eax]
0x4B223C: mov     [esi+54h], ecx
0x4B223F: mov     edx, [eax+4]
0x4B2242: mov     [esi+58h], edx
0x4B2245: mov     eax, [eax+8]
0x4B2248: lea     ecx, [ebp+var_60]
0x4B224B: push    ecx
0x4B224C: mov     ecx, edi
0x4B224E: mov     [esi+5Ch], eax
0x4B2251: call    sub_4D7AF0
0x4B2256: fldz
0x4B2258: lea     edi, [esi+30h]
0x4B225B: mov     esi, eax
0x4B225D: mov     ecx, 9
0x4B2262: rep movsd
0x4B2264: push    0; a3
0x4B2266: push    ecx
0x4B2267: mov     ecx, [ebp+var_14]; this
0x4B226A: fstp    [esp+78h+a2]; a2
0x4B226D: call    NiAVObject_UpdateNiAVObject
0x4B2272: mov     edi, [ebp+arg_0]
0x4B2275: mov     esi, [ebp+var_14]
0x4B2278: push    esi
0x4B2279: push    edi
0x4B227A: mov     ecx, ebx
0x4B227C: call    sub_4B1600
0x4B2281: mov     ecx, esi; this
0x4B2283: call    NiAVObject_InitializePropertyState
0x4B2288: mov     ecx, [ebp+var_3C]
0x4B228B: test    ecx, ecx
0x4B228D: mov     byte ptr [ebp+var_4], 0
0x4B2291: jz      short loc_4B229B
0x4B2293: mov     edx, [ecx]
0x4B2295: mov     eax, [edx]
0x4B2297: push    1
0x4B2299: call    eax
0x4B229B: mov     ecx, [ebp+var_38]
0x4B229E: test    ecx, ecx
0x4B22A0: jz      short loc_4B22AA
0x4B22A2: mov     edx, [ecx]
0x4B22A4: mov     eax, [edx]
0x4B22A6: push    1
0x4B22A8: call    eax
0x4B22AA: mov     eax, esi
0x4B22AC: jmp     short loc_4B22B0
0x4B22AE: xor     eax, eax
0x4B22B0: lea     esp, [ebp-70h]
0x4B22B3: mov     ecx, [ebp+var_C]
0x4B22B6: mov     large fs:0, ecx
0x4B22BD: pop     ecx
0x4B22BE: pop     edi
0x4B22BF: pop     esi
0x4B22C0: pop     ebx
0x4B22C1: mov     ecx, [ebp+var_10]
0x4B22C4: xor     ecx, ebp
0x4B22C6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4B22CB: mov     esp, ebp
0x4B22CD: pop     ebp
0x4B22CE: retn    4
