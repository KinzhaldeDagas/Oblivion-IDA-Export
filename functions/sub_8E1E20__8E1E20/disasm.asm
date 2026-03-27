0x8E1E20: push    ebp
0x8E1E21: mov     ebp, esp
0x8E1E23: and     esp, 0FFFFFFF0h
0x8E1E26: sub     esp, 54h
0x8E1E29: push    ebx
0x8E1E2A: mov     ebx, large fs:2Ch
0x8E1E31: push    esi
0x8E1E32: mov     esi, ecx
0x8E1E34: mov     ecx, ds:0BA9DE4h
0x8E1E3A: mov     eax, [ebx+ecx*4]
0x8E1E3D: mov     edx, [eax+1A4h]
0x8E1E43: push    edi
0x8E1E44: cmp     edx, [eax+1A8h]
0x8E1E4A: jnb     short loc_8E1E77
0x8E1E4C: mov     edi, eax
0x8E1E4E: mov     ecx, [edi+1A4h]
0x8E1E54: mov     dword ptr [ecx], offset aLtquerysinglea; "LtquerySingleAabb"
0x8E1E5A: mov     dword ptr [ecx+0Ch], offset aMarker; "marker"
0x8E1E61: rdtsc
0x8E1E63: mov     [esp+60h+var_3C], eax
0x8E1E67: mov     eax, [esp+60h+var_3C]
0x8E1E6B: mov     [ecx+4], eax
0x8E1E6E: add     ecx, 10h
0x8E1E71: mov     [edi+1A4h], ecx
0x8E1E77: mov     edi, [esi+44h]
0x8E1E7A: mov     ecx, ds:0BA9DE4h
0x8E1E80: mov     eax, [ebx+ecx*4]
0x8E1E83: mov     ecx, [eax+19Ch]
0x8E1E89: mov     edx, edi
0x8E1E8B: sar     edx, 5
0x8E1E8E: mov     [esp+60h+var_40], eax
0x8E1E92: lea     eax, ds:30h[edx*4]
0x8E1E99: mov     edx, [ecx+20h]
0x8E1E9C: and     eax, 0FFFFFFF0h
0x8E1E9F: lea     ebx, [edx+eax]
0x8E1EA2: cmp     ebx, [ecx+2Ch]
0x8E1EA5: ja      short loc_8E1EB0
0x8E1EA7: mov     [ecx+20h], ebx
0x8E1EAA: mov     [esp+60h+var_48], edx
0x8E1EAE: jmp     short loc_8E1EBC
0x8E1EB0: mov     edx, [ecx]
0x8E1EB2: push    eax
0x8E1EB3: call    dword ptr [edx+0Ch]
0x8E1EB6: mov     [esp+60h+var_48], eax
0x8E1EBA: mov     edx, eax
0x8E1EBC: sar     edi, 7
0x8E1EBF: test    edi, edi
0x8E1EC1: xorps   xmm0, xmm0
0x8E1EC4: mov     eax, edx
0x8E1EC6: jl      short loc_8E1EDB
0x8E1EC8: inc     edi
0x8E1EC9: lea     esp, [esp+0]
0x8E1ED0: mov     ecx, eax
0x8E1ED2: add     eax, 10h
0x8E1ED5: dec     edi
0x8E1ED6: movaps  xmmword ptr [ecx], xmm0
0x8E1ED9: jnz     short loc_8E1ED0
0x8E1EDB: mov     eax, [ebp+arg_0]
0x8E1EDE: movaps  xmm5, xmmword ptr [eax]
0x8E1EE1: movaps  xmm4, xmmword ptr [esi+10h]
0x8E1EE5: movaps  xmm0, xmmword ptr [esi+30h]
0x8E1EE9: movaps  xmm3, xmmword ptr ds:0B2FC70h
0x8E1EF0: movaps  xmm2, xmmword ptr ds:0A9A660h
0x8E1EF7: movaps  xmm1, xmmword ptr ds:0A9A650h
0x8E1EFE: addps   xmm5, xmm4
0x8E1F01: movaps  xmm4, xmmword ptr [esi+20h]
0x8E1F05: mulps   xmm5, xmm0
0x8E1F08: minps   xmm5, xmm3
0x8E1F0B: maxps   xmm5, xmm2
0x8E1F0E: addps   xmm5, xmm1
0x8E1F11: movaps  [esp+60h+var_34+4], xmm5
0x8E1F16: mov     ecx, dword ptr [esp+60h+var_34+4]
0x8E1F1A: movaps  xmm5, xmmword ptr [eax+10h]
0x8E1F1E: shr     ecx, 7
0x8E1F21: mov     word ptr [esp+60h+var_38], cx
0x8E1F26: mov     ecx, dword ptr [esp+60h+var_34+8]
0x8E1F2A: shr     ecx, 7
0x8E1F2D: mov     word ptr [esp+60h+var_38+2], cx
0x8E1F32: mov     ecx, dword ptr [esp+60h+var_34+0Ch]
0x8E1F36: mov     ebx, [esp+60h+var_38]
0x8E1F3A: and     ebx, 0FFFEh
0x8E1F40: shr     ecx, 7
0x8E1F43: mov     [esp+60h+var_20], ebx
0x8E1F47: mov     word ptr [esp+60h+var_34], cx
0x8E1F4C: mov     ebx, [esp+60h+var_38+2]
0x8E1F50: addps   xmm5, xmm4
0x8E1F53: and     ebx, 0FFFEh
0x8E1F59: mulps   xmm5, xmm0
0x8E1F5C: minps   xmm5, xmm3
0x8E1F5F: mov     [esp+60h+var_1C], ebx
0x8E1F63: mov     ebx, dword ptr [esp+60h+var_34]
0x8E1F67: maxps   xmm5, xmm2
0x8E1F6A: addps   xmm5, xmm1
0x8E1F6D: movaps  [esp+60h+var_34+4], xmm5
0x8E1F72: mov     eax, dword ptr [esp+60h+var_34+4]
0x8E1F76: mov     ecx, dword ptr [esp+60h+var_34+8]
0x8E1F7A: mov     edi, dword ptr [esp+60h+var_34+0Ch]
0x8E1F7E: shr     eax, 7
0x8E1F81: and     ebx, 0FFFEh
0x8E1F87: shr     ecx, 7
0x8E1F8A: mov     [esp+60h+var_18], ebx
0x8E1F8E: movzx   ebx, ax
0x8E1F91: movzx   eax, cx
0x8E1F94: mov     ecx, [esi+70h]
0x8E1F97: or      eax, 1
0x8E1F9A: mov     [esp+60h+var_C], eax
0x8E1F9E: shr     edi, 7
0x8E1FA1: movzx   eax, di
0x8E1FA4: or      eax, 1
0x8E1FA7: mov     [esp+60h+var_8], eax
0x8E1FAB: mov     eax, [esi+4Ch]
0x8E1FAE: or      ebx, 1
0x8E1FB1: add     eax, 4
0x8E1FB4: test    ecx, ecx
0x8E1FB6: mov     [esp+60h+var_10], ebx
0x8E1FBA: jz      loc_8E20A2
0x8E1FC0: mov     edi, [esi+74h]
0x8E1FC3: mov     ecx, 10h
0x8E1FC8: sub     ecx, edi
0x8E1FCA: mov     edi, [esp+60h+var_20]
0x8E1FCE: sar     edi, cl
0x8E1FD0: test    edi, edi
0x8E1FD2: jle     loc_8E20A2
0x8E1FD8: mov     eax, [esi+78h]
0x8E1FDB: shl     edi, 4
0x8E1FDE: movzx   ecx, word ptr [edi+eax-10h]
0x8E1FE3: lea     ebx, [edi+eax-10h]
0x8E1FE7: mov     eax, ecx
0x8E1FE9: and     ecx, 1Fh
0x8E1FEC: sar     eax, 5
0x8E1FEF: mov     edi, 1
0x8E1FF4: shl     edi, cl
0x8E1FF6: mov     ecx, [edx+eax*4]
0x8E1FF9: mov     [esp+60h+var_3C], ebx
0x8E1FFD: xor     ecx, edi
0x8E1FFF: mov     [edx+eax*4], ecx
0x8E2002: mov     eax, [ebx+8]
0x8E2005: dec     eax
0x8E2006: mov     edi, [ebx+4]
0x8E2009: js      short loc_8E2037
0x8E200B: inc     eax
0x8E200C: mov     [esp+60h+var_44], eax
0x8E2010: movzx   ecx, word ptr [edi]
0x8E2013: mov     eax, ecx
0x8E2015: and     ecx, 1Fh
0x8E2018: sar     eax, 5
0x8E201B: mov     ebx, 1
0x8E2020: shl     ebx, cl
0x8E2022: mov     ecx, [edx+eax*4]
0x8E2025: add     edi, 2
0x8E2028: xor     ecx, ebx
0x8E202A: mov     [edx+eax*4], ecx
0x8E202D: dec     [esp+60h+var_44]
0x8E2031: jnz     short loc_8E2010
0x8E2033: mov     ebx, [esp+60h+var_3C]
0x8E2037: movzx   eax, word ptr [ebx]
0x8E203A: mov     ecx, [esi+40h]
0x8E203D: shl     eax, 4
0x8E2040: movzx   edi, word ptr [eax+ecx+8]
0x8E2045: movzx   ebx, word ptr [eax+ecx+0Ah]
0x8E204A: add     eax, ecx
0x8E204C: mov     ecx, [esi+4Ch]
0x8E204F: lea     edi, [ecx+edi*4+4]
0x8E2053: lea     ecx, [ecx+ebx*4]
0x8E2056: cmp     edi, ecx
0x8E2058: mov     [esp+60h+var_44], eax
0x8E205C: mov     [esp+60h+var_3C], ecx
0x8E2060: jnb     short loc_8E2093
0x8E2062: test    byte ptr [edi], 1
0x8E2065: jnz     short loc_8E208C
0x8E2067: movzx   ecx, word ptr [edi+2]
0x8E206B: mov     eax, ecx
0x8E206D: and     ecx, 1Fh
0x8E2070: mov     ebx, 1
0x8E2075: shl     ebx, cl
0x8E2077: sar     eax, 5
0x8E207A: mov     ecx, [edx+eax*4]
0x8E207D: not     ebx
0x8E207F: and     ecx, ebx
0x8E2081: mov     [edx+eax*4], ecx
0x8E2084: mov     ecx, [esp+60h+var_3C]
0x8E2088: mov     eax, [esp+60h+var_44]
0x8E208C: add     edi, 4
0x8E208F: cmp     edi, ecx
0x8E2091: jb      short loc_8E2062
0x8E2093: movzx   ecx, word ptr [eax+8]
0x8E2097: mov     eax, [esi+4Ch]
0x8E209A: mov     ebx, [esp+60h+var_10]
0x8E209E: lea     eax, [eax+ecx*4+4]
0x8E20A2: movzx   ecx, word ptr [eax]
0x8E20A5: cmp     ecx, [esp+60h+var_20]
0x8E20A9: jnb     short loc_8E20DB
0x8E20AB: jmp     short loc_8E20B0
0x8E20AD: align 10h
0x8E20B0: movzx   ecx, word ptr [eax+2]
0x8E20B4: mov     edi, ecx
0x8E20B6: and     ecx, 1Fh
0x8E20B9: sar     edi, 5
0x8E20BC: mov     ebx, 1
0x8E20C1: shl     ebx, cl
0x8E20C3: mov     ecx, [edx+edi*4]
0x8E20C6: add     eax, 4
0x8E20C9: xor     ecx, ebx
0x8E20CB: mov     [edx+edi*4], ecx
0x8E20CE: movzx   ecx, word ptr [eax]
0x8E20D1: cmp     ecx, [esp+60h+var_20]
0x8E20D5: jb      short loc_8E20B0
0x8E20D7: mov     ebx, [esp+60h+var_10]
0x8E20DB: xor     ecx, ecx
0x8E20DD: mov     cx, [eax]
0x8E20E0: mov     [esp+60h+var_44], ecx
0x8E20E4: movzx   ecx, cx
0x8E20E7: cmp     ecx, ebx
0x8E20E9: jnb     short loc_8E212A
0x8E20EB: jmp     short loc_8E20F0
0x8E20ED: align 10h
0x8E20F0: test    byte ptr [esp+60h+var_44], 1
0x8E20F5: jnz     short loc_8E2116
0x8E20F7: movzx   ecx, word ptr [eax+2]
0x8E20FB: mov     edi, ecx
0x8E20FD: and     ecx, 1Fh
0x8E2100: mov     ebx, 1
0x8E2105: shl     ebx, cl
0x8E2107: sar     edi, 5
0x8E210A: mov     ecx, [edx+edi*4]
0x8E210D: xor     ecx, ebx
0x8E210F: mov     ebx, [esp+60h+var_10]
0x8E2113: mov     [edx+edi*4], ecx
0x8E2116: xor     ecx, ecx
0x8E2118: mov     cx, [eax+4]
0x8E211C: add     eax, 4
0x8E211F: mov     [esp+60h+var_44], ecx
0x8E2123: movzx   ecx, cx
0x8E2126: cmp     ecx, ebx
0x8E2128: jb      short loc_8E20F0
0x8E212A: mov     edx, large fs:2Ch
0x8E2131: mov     eax, ds:0BA9DE4h
0x8E2136: mov     eax, [edx+eax*4]
0x8E2139: mov     ecx, [eax+1A4h]
0x8E213F: cmp     ecx, [eax+1A8h]
0x8E2145: jnb     short loc_8E216D
0x8E2147: mov     edi, [esp+60h+var_40]
0x8E214B: mov     ecx, [edi+1A4h]
0x8E2151: mov     dword ptr [ecx], offset aStyzAxis; "Styz-Axis"
0x8E2157: rdtsc
0x8E2159: mov     [esp+60h+var_3C], eax
0x8E215D: mov     edx, [esp+60h+var_3C]
0x8E2161: mov     [ecx+4], edx
0x8E2164: add     ecx, 0Ch
0x8E2167: mov     [edi+1A4h], ecx
0x8E216D: mov     ebx, [esi+58h]
0x8E2170: mov     edx, [esp+60h+var_1C]
0x8E2174: mov     eax, [esi+5Ch]
0x8E2177: lea     edi, [esi+58h]
0x8E217A: lea     eax, [ebx+eax*4-8]
0x8E217E: push    edx
0x8E217F: lea     ecx, [ebx+4]
0x8E2182: push    eax
0x8E2183: push    ecx
0x8E2184: mov     ecx, edi
0x8E2186: mov     [esp+6Ch+var_3C], eax
0x8E218A: call    sub_8E0C30
0x8E218F: mov     ecx, [esp+60h+var_3C]
0x8E2193: sub     eax, ebx
0x8E2195: sar     eax, 2
0x8E2198: mov     word ptr [esp+60h+var_34+4], ax
0x8E219D: mov     eax, [esp+60h+var_C]
0x8E21A1: push    eax
0x8E21A2: push    ecx
0x8E21A3: lea     eax, [ebx+4]
0x8E21A6: push    eax
0x8E21A7: mov     ecx, edi
0x8E21A9: call    sub_8E0C30
0x8E21AE: mov     edx, 0FFFFFFFCh
0x8E21B3: sub     edx, ebx
0x8E21B5: mov     ebx, [esi+64h]
0x8E21B8: add     eax, edx
0x8E21BA: mov     edx, [esp+60h+var_18]
0x8E21BE: sar     eax, 2
0x8E21C1: lea     edi, [esi+64h]
0x8E21C4: mov     word ptr [esp+60h+var_34+8], ax
0x8E21C9: mov     eax, [edi+4]
0x8E21CC: lea     eax, [ebx+eax*4-8]
0x8E21D0: push    edx
0x8E21D1: lea     ecx, [ebx+4]
0x8E21D4: push    eax
0x8E21D5: push    ecx
0x8E21D6: mov     ecx, edi
0x8E21D8: mov     [esp+6Ch+var_3C], eax
0x8E21DC: call    sub_8E0C30
0x8E21E1: mov     ecx, [esp+60h+var_3C]
0x8E21E5: sub     eax, ebx
0x8E21E7: sar     eax, 2
0x8E21EA: mov     word ptr [esp+60h+var_34+6], ax
0x8E21EF: mov     eax, [esp+60h+var_8]
0x8E21F3: push    eax
0x8E21F4: push    ecx
0x8E21F5: lea     eax, [ebx+4]
0x8E21F8: push    eax
0x8E21F9: mov     ecx, edi
0x8E21FB: call    sub_8E0C30
0x8E2200: mov     ecx, large fs:2Ch
0x8E2207: mov     edx, 0FFFFFFFCh
0x8E220C: sub     edx, ebx
0x8E220E: add     eax, edx
0x8E2210: sar     eax, 2
0x8E2213: mov     word ptr [esp+60h+var_34+0Ah], ax
0x8E2218: mov     eax, ds:0BA9DE4h
0x8E221D: mov     eax, [ecx+eax*4]
0x8E2220: mov     edx, [eax+1A4h]
0x8E2226: cmp     edx, [eax+1A8h]
0x8E222C: jnb     short loc_8E2254
0x8E222E: mov     edi, [esp+60h+var_40]
0x8E2232: mov     ecx, [edi+1A4h]
0x8E2238: mov     dword ptr [ecx], offset aStscanbitfield; "StScanBitfield"
0x8E223E: rdtsc
0x8E2240: mov     [esp+60h+var_3C], eax
0x8E2244: mov     eax, [esp+60h+var_3C]
0x8E2248: mov     [ecx+4], eax
0x8E224B: add     ecx, 0Ch
0x8E224E: mov     [edi+1A4h], ecx
0x8E2254: mov     eax, [esi+40h]
0x8E2257: mov     edx, [esp+60h+var_48]
0x8E225B: mov     esi, [esi+44h]
0x8E225E: sar     esi, 5
0x8E2261: lea     edi, [edx+esi*4+4]
0x8E2265: cmp     edx, edi
0x8E2267: mov     ecx, edx
0x8E2269: mov     [esp+60h+var_3C], ecx
0x8E226D: mov     [esp+60h+var_38], edi
0x8E2271: jnb     loc_8E2430
0x8E2277: mov     esi, [ebp+arg_4]
0x8E227A: add     eax, 24h ; '$'
0x8E227D: mov     [esp+60h+var_44], eax
0x8E2281: mov     eax, [ecx]
0x8E2283: test    eax, eax
0x8E2285: mov     [esp+60h+var_4C], eax
0x8E2289: jz      loc_8E2414
0x8E228F: mov     edi, [esp+60h+var_44]
0x8E2293: test    al, 0Fh
0x8E2295: jz      loc_8E23F6
0x8E229B: test    al, 1
0x8E229D: jz      short loc_8E22F2
0x8E229F: mov     edx, [edi-24h]
0x8E22A2: mov     ecx, dword ptr [esp+60h+var_34+8]
0x8E22A6: mov     ebx, dword ptr [esp+60h+var_34+4]
0x8E22AA: sub     ecx, edx
0x8E22AC: mov     edx, [edi-20h]
0x8E22AF: sub     edx, ebx
0x8E22B1: or      ecx, edx
0x8E22B3: test    ecx, 80008000h
0x8E22B9: jnz     short loc_8E22F2
0x8E22BB: mov     ebx, [edi-18h]
0x8E22BE: test    bl, 1
0x8E22C1: jnz     short loc_8E22F2
0x8E22C3: mov     eax, [esi+8]
0x8E22C6: mov     ecx, [esi+4]
0x8E22C9: and     eax, 3FFFFFFFh
0x8E22CE: cmp     ecx, eax
0x8E22D0: jnz     short loc_8E22DD
0x8E22D2: push    8
0x8E22D4: push    esi
0x8E22D5: call    sub_8A6EE0
0x8E22DA: add     esp, 8
0x8E22DD: mov     ecx, [esi+4]
0x8E22E0: mov     edx, [esi]
0x8E22E2: xor     eax, eax
0x8E22E4: mov     [edx+ecx*8], eax
0x8E22E7: mov     [edx+ecx*8+4], ebx
0x8E22EB: inc     dword ptr [esi+4]
0x8E22EE: mov     eax, [esp+60h+var_4C]
0x8E22F2: test    al, 2
0x8E22F4: jz      short loc_8E2349
0x8E22F6: mov     edx, [edi-14h]
0x8E22F9: mov     ecx, dword ptr [esp+60h+var_34+8]
0x8E22FD: mov     ebx, dword ptr [esp+60h+var_34+4]
0x8E2301: sub     ecx, edx
0x8E2303: mov     edx, [edi-10h]
0x8E2306: sub     edx, ebx
0x8E2308: or      ecx, edx
0x8E230A: test    ecx, 80008000h
0x8E2310: jnz     short loc_8E2349
0x8E2312: mov     ebx, [edi-8]
0x8E2315: test    bl, 1
0x8E2318: jnz     short loc_8E2349
0x8E231A: mov     eax, [esi+8]
0x8E231D: mov     ecx, [esi+4]
0x8E2320: and     eax, 3FFFFFFFh
0x8E2325: cmp     ecx, eax
0x8E2327: jnz     short loc_8E2334
0x8E2329: push    8
0x8E232B: push    esi
0x8E232C: call    sub_8A6EE0
0x8E2331: add     esp, 8
0x8E2334: mov     ecx, [esi+4]
0x8E2337: mov     edx, [esi]
0x8E2339: xor     eax, eax
0x8E233B: mov     [edx+ecx*8], eax
0x8E233E: mov     [edx+ecx*8+4], ebx
0x8E2342: inc     dword ptr [esi+4]
0x8E2345: mov     eax, [esp+60h+var_4C]
0x8E2349: test    al, 4
0x8E234B: jz      short loc_8E239F
0x8E234D: mov     edx, [edi-4]
0x8E2350: mov     ecx, dword ptr [esp+60h+var_34+8]
0x8E2354: mov     ebx, dword ptr [esp+60h+var_34+4]
0x8E2358: sub     ecx, edx
0x8E235A: mov     edx, [edi]
0x8E235C: sub     edx, ebx
0x8E235E: or      ecx, edx
0x8E2360: test    ecx, 80008000h
0x8E2366: jnz     short loc_8E239F
0x8E2368: mov     ebx, [edi+8]
0x8E236B: test    bl, 1
0x8E236E: jnz     short loc_8E239B
0x8E2370: mov     eax, [esi+8]
0x8E2373: mov     ecx, [esi+4]
0x8E2376: and     eax, 3FFFFFFFh
0x8E237B: cmp     ecx, eax
0x8E237D: jnz     short loc_8E238A
0x8E237F: push    8
0x8E2381: push    esi
0x8E2382: call    sub_8A6EE0
0x8E2387: add     esp, 8
0x8E238A: mov     ecx, [esi+4]
0x8E238D: mov     edx, [esi]
0x8E238F: xor     eax, eax
0x8E2391: mov     [edx+ecx*8], eax
0x8E2394: mov     [edx+ecx*8+4], ebx
0x8E2398: inc     dword ptr [esi+4]
0x8E239B: mov     eax, [esp+60h+var_4C]
0x8E239F: test    al, 8
0x8E23A1: jz      short loc_8E23F6
0x8E23A3: mov     edx, [edi+0Ch]
0x8E23A6: mov     ecx, dword ptr [esp+60h+var_34+8]
0x8E23AA: mov     ebx, dword ptr [esp+60h+var_34+4]
0x8E23AE: sub     ecx, edx
0x8E23B0: mov     edx, [edi+10h]
0x8E23B3: sub     edx, ebx
0x8E23B5: or      ecx, edx
0x8E23B7: test    ecx, 80008000h
0x8E23BD: jnz     short loc_8E23F6
0x8E23BF: mov     ebx, [edi+18h]
0x8E23C2: test    bl, 1
0x8E23C5: jnz     short loc_8E23F2
0x8E23C7: mov     eax, [esi+8]
0x8E23CA: mov     ecx, [esi+4]
0x8E23CD: and     eax, 3FFFFFFFh
0x8E23D2: cmp     ecx, eax
0x8E23D4: jnz     short loc_8E23E1
0x8E23D6: push    8
0x8E23D8: push    esi
0x8E23D9: call    sub_8A6EE0
0x8E23DE: add     esp, 8
0x8E23E1: mov     ecx, [esi+4]
0x8E23E4: mov     edx, [esi]
0x8E23E6: xor     eax, eax
0x8E23E8: mov     [edx+ecx*8], eax
0x8E23EB: mov     [edx+ecx*8+4], ebx
0x8E23EF: inc     dword ptr [esi+4]
0x8E23F2: mov     eax, [esp+60h+var_4C]
0x8E23F6: shr     eax, 4
0x8E23F9: add     edi, 40h ; '@'
0x8E23FC: test    eax, eax
0x8E23FE: mov     [esp+60h+var_4C], eax
0x8E2402: jnz     loc_8E2293
0x8E2408: mov     edx, [esp+60h+var_48]
0x8E240C: mov     edi, [esp+60h+var_38]
0x8E2410: mov     ecx, [esp+60h+var_3C]
0x8E2414: mov     eax, [esp+60h+var_44]
0x8E2418: add     ecx, 4
0x8E241B: add     eax, 200h
0x8E2420: cmp     ecx, edi
0x8E2422: mov     [esp+60h+var_44], eax
0x8E2426: mov     [esp+60h+var_3C], ecx
0x8E242A: jb      loc_8E2281
0x8E2430: mov     esi, [esp+60h+var_40]
0x8E2434: mov     ecx, [esi+19Ch]
0x8E243A: cmp     edx, [ecx+28h]
0x8E243D: mov     [ecx+20h], edx
0x8E2440: jnz     short loc_8E2448
0x8E2442: mov     eax, [ecx]
0x8E2444: push    edx
0x8E2445: call    dword ptr [eax+10h]
0x8E2448: mov     ecx, large fs:2Ch
0x8E244F: mov     edx, ds:0BA9DE4h
0x8E2455: mov     eax, [ecx+edx*4]
0x8E2458: mov     ecx, [eax+1A4h]
0x8E245E: cmp     ecx, [eax+1A8h]
0x8E2464: jnb     short loc_8E2488
0x8E2466: mov     ecx, [esi+1A4h]
0x8E246C: mov     dword ptr [ecx], offset aLt_0; "lt"
0x8E2472: rdtsc
0x8E2474: mov     [esp+60h+var_38], eax
0x8E2478: mov     edx, [esp+60h+var_38]
0x8E247C: mov     [ecx+4], edx
0x8E247F: add     ecx, 0Ch
0x8E2482: mov     [esi+1A4h], ecx
0x8E2488: pop     edi
0x8E2489: pop     esi
0x8E248A: pop     ebx
0x8E248B: mov     esp, ebp
0x8E248D: pop     ebp
0x8E248E: retn    8
