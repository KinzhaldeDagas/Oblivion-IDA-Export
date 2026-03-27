0x4E1FD0: push    ebx
0x4E1FD1: mov     ebx, ecx
0x4E1FD3: mov     eax, [ebx+40h]
0x4E1FD6: test    eax, eax
0x4E1FD8: jz      short loc_4E1FE9
0x4E1FDA: mov     al, [eax+26h]
0x4E1FDD: cmp     al, 6
0x4E1FDF: jz      short loc_4E1FE9
0x4E1FE1: cmp     al, 5
0x4E1FE3: jnz     loc_4E215B
0x4E1FE9: mov     eax, [ebx]
0x4E1FEB: mov     edx, [eax+154h]
0x4E1FF1: push    ebp
0x4E1FF2: push    edi
0x4E1FF3: call    edx
0x4E1FF5: mov     edi, eax
0x4E1FF7: test    edi, edi
0x4E1FF9: mov     ebp, edi
0x4E1FFB: jz      loc_4E2159
0x4E2001: push    esi
0x4E2002: push    edi
0x4E2003: push    offset unk_B35408
0x4E2008: call    NiRTTI_Cast
0x4E200D: add     esp, 8
0x4E2010: test    eax, eax
0x4E2012: jz      short loc_4E202C
0x4E2014: cmp     word ptr [eax+0B6h], 0
0x4E201C: jbe     loc_4E2112
0x4E2022: mov     eax, [eax+0B0h]
0x4E2028: mov     ebp, [eax]
0x4E202A: jmp     short loc_4E20A7
0x4E202C: mov     edx, [edi]
0x4E202E: mov     eax, [edx+8]
0x4E2031: mov     ecx, edi
0x4E2033: call    eax
0x4E2035: mov     edx, [ebx]
0x4E2037: mov     esi, eax
0x4E2039: mov     eax, [edx+190h]
0x4E203F: mov     ecx, ebx
0x4E2041: call    eax
0x4E2043: test    al, al
0x4E2045: jnz     short loc_4E20A7
0x4E2047: push    edi
0x4E2048: call    sub_4A05E0
0x4E204D: add     esp, 4
0x4E2050: test    eax, eax
0x4E2052: jnz     short loc_4E20A7
0x4E2054: test    esi, esi
0x4E2056: jz      short loc_4E20A7
0x4E2058: cmp     [esi+0B6h], ax
0x4E205F: jz      short loc_4E20A7
0x4E2061: push    eax
0x4E2062: mov     ecx, esi
0x4E2064: call    sub_405790
0x4E2069: test    eax, eax
0x4E206B: jz      short loc_4E20A7
0x4E206D: push    0
0x4E206F: mov     ecx, esi
0x4E2071: call    sub_405790
0x4E2076: mov     ebp, eax
0x4E2078: push    ebp
0x4E2079: call    sub_4A05E0
0x4E207E: add     esp, 4
0x4E2081: test    eax, eax
0x4E2083: jnz     short loc_4E20A7
0x4E2085: cmp     word ptr [esi+0B6h], 1
0x4E208D: jbe     short loc_4E20A7
0x4E208F: push    1
0x4E2091: mov     ecx, esi
0x4E2093: call    sub_405790
0x4E2098: test    eax, eax
0x4E209A: jz      short loc_4E20A7
0x4E209C: push    1
0x4E209E: mov     ecx, esi
0x4E20A0: call    sub_405790
0x4E20A5: mov     ebp, eax
0x4E20A7: test    ebp, ebp
0x4E20A9: jz      short loc_4E2112
0x4E20AB: mov     esi, [ebx+40h]
0x4E20AE: test    esi, esi
0x4E20B0: jz      loc_4E2158
0x4E20B6: mov     ecx, esi; this
0x4E20B8: call    TESObjectCELL_IsInterior
0x4E20BD: test    al, al
0x4E20BF: jz      short loc_4E20CB
0x4E20C1: lea     ecx, [esi+28h]
0x4E20C4: call    sub_424180
0x4E20C9: jmp     short loc_4E20D0
0x4E20CB: mov     eax, ds:0B35C24h
0x4E20D0: test    eax, eax
0x4E20D2: jz      loc_4E2158
0x4E20D8: mov     edx, [eax]
0x4E20DA: push    edi
0x4E20DB: mov     ecx, eax
0x4E20DD: mov     eax, [edx+94h]
0x4E20E3: push    ebp
0x4E20E4: call    eax
0x4E20E6: test    dword ptr [ebx+8], 100h
0x4E20ED: jz      short loc_4E2105
0x4E20EF: push    1
0x4E20F1: push    1
0x4E20F3: push    1
0x4E20F5: push    edi
0x4E20F6: call    sub_88CF90
0x4E20FB: add     esp, 10h
0x4E20FE: and     dword ptr [ebx+8], 0FFFFFEFFh
0x4E2105: push    edi
0x4E2106: mov     ecx, ebx
0x4E2108: call    sub_4D8F20
0x4E210D: pop     esi
0x4E210E: pop     edi
0x4E210F: pop     ebp
0x4E2110: pop     ebx
0x4E2111: retn
0x4E2112: mov     edx, [edi]
0x4E2114: mov     eax, [edx+4]
0x4E2117: mov     ecx, edi
0x4E2119: call    eax
0x4E211B: test    eax, eax
0x4E211D: jz      short loc_4E2158
0x4E211F: nop
0x4E2120: cmp     eax, offset BSTreeNode
0x4E2125: jz      short loc_4E2133
0x4E2127: mov     eax, [eax+4]
0x4E212A: test    eax, eax
0x4E212C: jnz     short loc_4E2120
0x4E212E: pop     esi
0x4E212F: pop     edi
0x4E2130: pop     ebp
0x4E2131: pop     ebx
0x4E2132: retn
0x4E2133: mov     ecx, [ebx+40h]
0x4E2136: test    ecx, ecx
0x4E2138: jz      short loc_4E2158
0x4E213A: call    sub_4440C0
0x4E213F: test    eax, eax
0x4E2141: jz      short loc_4E2158
0x4E2143: mov     edx, [eax]
0x4E2145: push    0
0x4E2147: push    0
0x4E2149: push    0
0x4E214B: push    0
0x4E214D: mov     ecx, eax
0x4E214F: mov     eax, [edx+90h]
0x4E2155: push    edi
0x4E2156: call    eax
0x4E2158: pop     esi
0x4E2159: pop     edi
0x4E215A: pop     ebp
0x4E215B: pop     ebx
0x4E215C: retn
