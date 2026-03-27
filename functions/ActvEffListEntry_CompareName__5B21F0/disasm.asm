0x5B21F0: push    0FFFFFFFFh
0x5B21F2: push    offset SEH_5BF7D0
0x5B21F7: mov     eax, large fs:0
0x5B21FD: push    eax
0x5B21FE: sub     esp, 10h
0x5B2201: push    ebx
0x5B2202: push    ebp
0x5B2203: push    esi
0x5B2204: push    edi
0x5B2205: mov     eax, ds:0B30AACh
0x5B220A: xor     eax, esp
0x5B220C: push    eax
0x5B220D: lea     eax, [esp+30h+var_C]
0x5B2211: mov     large fs:0, eax
0x5B2217: mov     esi, ecx
0x5B2219: mov     eax, [esi]
0x5B221B: mov     ebx, [eax+0Ch]
0x5B221E: mov     eax, [ebx+1Ch]
0x5B2221: mov     ecx, [esp+30h+arg_0]
0x5B2225: mov     edx, [eax+98h]
0x5B222B: cmp     edx, 46464553h
0x5B2231: mov     ecx, [ecx+0Ch]
0x5B2234: mov     edi, [ecx+1Ch]
0x5B2237: jnz     short loc_5B229E
0x5B2239: cmp     [edi+98h], edx
0x5B223F: jnz     short loc_5B229E
0x5B2241: lea     edx, [esp+30h+var_14]
0x5B2245: push    edx
0x5B2246: call    EffectItem_GetName
0x5B224B: mov     edi, eax
0x5B224D: mov     eax, [esi]
0x5B224F: mov     ecx, [eax+0Ch]
0x5B2252: lea     edx, [esp+34h+var_20]
0x5B2256: xor     ebp, ebp
0x5B2258: push    edx
0x5B2259: mov     [esp+38h+var_8], ebp
0x5B225D: call    EffectItem_GetName
0x5B2262: mov     edi, [edi]
0x5B2264: mov     eax, [eax]
0x5B2266: push    edi; Str2
0x5B2267: push    eax; Str1
0x5B2268: call    __strcmp
0x5B226D: test    eax, eax
0x5B226F: mov     eax, [esp+40h+var_24]
0x5B2273: push    eax
0x5B2274: setz    bl
0x5B2277: call    FormHeapFree
0x5B227C: mov     ecx, [esp+44h+var_1C]
0x5B2280: push    ecx
0x5B2281: mov     [esp+48h+var_24], ebp
0x5B2285: mov     word ptr [esp+48h+var_20+2], bp
0x5B228A: mov     word ptr [esp+48h+var_20], bp
0x5B228F: call    FormHeapFree
0x5B2294: add     esp, 10h
0x5B2297: test    bl, bl
0x5B2299: setnz   al
0x5B229C: jmp     short ActvEffListEntry_CompareName___Done
0x5B229E: cmp     eax, edi
0x5B22A0: jnz     short ActvEffListEntry_CompareName___Return_0
0x5B22A2: mov     esi, [eax+58h]
0x5B22A5: mov     edx, esi
0x5B22A7: shr     edx, 13h
0x5B22AA: test    dl, 1
0x5B22AD: jnz     short loc_5B22B8
0x5B22AF: mov     eax, esi
0x5B22B1: shr     eax, 14h
0x5B22B4: test    al, 1
0x5B22B6: jz      short ActvEffListEntry_CompareName___Return_1
0x5B22B8: mov     edx, [ebx+14h]
0x5B22BB: cmp     edx, [ecx+14h]
0x5B22BE: jnz     short ActvEffListEntry_CompareName___Return_0
