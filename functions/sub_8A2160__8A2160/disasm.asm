0x8A2160: push    ebp
0x8A2161: mov     ebp, esp
0x8A2163: and     esp, 0FFFFFFF0h
0x8A2166: push    0FFFFFFFFh
0x8A2168: push    offset SEH_8A2160
0x8A216D: mov     eax, large fs:0
0x8A2173: push    eax
0x8A2174: sub     esp, 58h
0x8A2177: mov     eax, ds:0B30AACh
0x8A217C: xor     eax, esp
0x8A217E: mov     [esp+64h+var_14], eax
0x8A2182: push    ebx
0x8A2183: push    esi
0x8A2184: push    edi
0x8A2185: mov     eax, ds:0B30AACh
0x8A218A: xor     eax, esp
0x8A218C: push    eax
0x8A218D: lea     eax, [esp+74h+var_C]
0x8A2191: mov     large fs:0, eax
0x8A2197: mov     ebx, [ebp+arg_0]
0x8A219A: test    ebx, ebx
0x8A219C: mov     edi, ecx
0x8A219E: jz      loc_8A223E
0x8A21A4: mov     ecx, ds:0BA7D98h
0x8A21AA: mov     eax, [ecx]
0x8A21AC: mov     edx, [eax+10h]
0x8A21AF: push    24h ; '$'
0x8A21B1: push    60h ; '`'
0x8A21B3: call    edx
0x8A21B5: mov     esi, eax
0x8A21B7: mov     word ptr [esi+4], 60h ; '`'
0x8A21BD: mov     [esp+74h+var_64], esi
0x8A21C1: lea     eax, [esp+74h+var_60]
0x8A21C5: push    eax
0x8A21C6: lea     ecx, [ebx+10h]
0x8A21C9: mov     [esp+78h+var_4], 0
0x8A21D1: call    sub_8A2050
0x8A21D6: mov     ecx, [ebx+4]
0x8A21D9: push    eax
0x8A21DA: push    ecx
0x8A21DB: mov     ecx, esi
0x8A21DD: call    sub_8E8B50
0x8A21E2: mov     edx, [edi]
0x8A21E4: mov     esi, eax
0x8A21E6: mov     eax, [edx+4Ch]
0x8A21E9: push    esi
0x8A21EA: mov     ecx, edi
0x8A21EC: mov     [esp+78h+var_4], 0FFFFFFFFh
0x8A21F4: call    eax
0x8A21F6: cmp     word ptr [esi+4], 0
0x8A21FB: jz      short loc_8A2215
0x8A21FD: add     word ptr [esi+6], 0FFFFh
0x8A2202: movzx   eax, word ptr [esi+6]
0x8A2206: test    ax, ax
0x8A2209: jnz     short loc_8A2215
0x8A220B: mov     edx, [esi]
0x8A220D: mov     eax, [edx]
0x8A220F: push    1
0x8A2211: mov     ecx, esi
0x8A2213: call    eax
0x8A2215: mov     edx, [edi]
0x8A2217: mov     eax, [edx+7Ch]
0x8A221A: push    ebx
0x8A221B: mov     ecx, edi
0x8A221D: call    eax
0x8A221F: mov     eax, [edi+8]
0x8A2222: test    eax, eax
0x8A2224: jz      short loc_8A2232
0x8A2226: mov     eax, [eax+0Ch]
0x8A2229: test    eax, eax
0x8A222B: jz      short loc_8A2232
0x8A222D: mov     eax, [eax+8]
0x8A2230: jmp     short loc_8A2234
0x8A2232: xor     eax, eax
0x8A2234: test    eax, eax
0x8A2236: jz      short loc_8A223E
0x8A2238: mov     ecx, [eax+10h]
0x8A223B: mov     [edi+10h], ecx
0x8A223E: mov     ecx, [esp+74h+var_C]
0x8A2242: mov     large fs:0, ecx
0x8A2249: pop     ecx
0x8A224A: pop     edi
0x8A224B: pop     esi
0x8A224C: pop     ebx
0x8A224D: mov     ecx, [esp+64h+var_14]
0x8A2251: xor     ecx, esp
0x8A2253: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A2258: mov     esp, ebp
0x8A225A: pop     ebp
0x8A225B: retn    4
