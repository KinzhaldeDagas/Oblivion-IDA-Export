0x4A2210: push    0FFFFFFFFh
0x4A2212: push    offset SEH_6E10B0
0x4A2217: mov     eax, large fs:0
0x4A221D: push    eax
0x4A221E: push    ebx
0x4A221F: push    ebp
0x4A2220: push    esi
0x4A2221: push    edi
0x4A2222: mov     eax, ds:0B30AACh
0x4A2227: xor     eax, esp
0x4A2229: push    eax
0x4A222A: lea     eax, [esp+20h+var_C]
0x4A222E: mov     large fs:0, eax
0x4A2234: cmp     byte ptr [ecx+10h], 0
0x4A2238: mov     [esp+20h+var_4], 0
0x4A2240: jz      short loc_4A2278
0x4A2242: mov     edi, [esp+20h+Src]
0x4A2246: mov     eax, edi
0x4A2248: lea     edx, [eax+1]
0x4A224B: jmp     short loc_4A2250
0x4A224D: align 10h
0x4A2250: mov     cl, [eax]
0x4A2252: add     eax, 1
0x4A2255: test    cl, cl
0x4A2257: jnz     short loc_4A2250
0x4A2259: sub     eax, edx
0x4A225B: lea     esi, [eax+1]
0x4A225E: push    esi; Size
0x4A225F: call    FormHeapAlloc
0x4A2264: mov     ebx, [esp+24h+arg_0]
0x4A2268: push    edi; Src
0x4A2269: push    esi; SizeInBytes
0x4A226A: push    eax; Dst
0x4A226B: mov     [ebx+4], eax
0x4A226E: call    _strcpy_s
0x4A2273: add     esp, 10h
0x4A2276: jmp     short loc_4A2283
0x4A2278: mov     ebx, [esp+20h+arg_0]
0x4A227C: mov     eax, [esp+20h+Src]
0x4A2280: mov     [ebx+4], eax
0x4A2283: mov     esi, [ebx+8]
0x4A2286: mov     edi, [esp+20h+arg_8]
0x4A228A: cmp     esi, edi
0x4A228C: mov     ebp, ds:0A2807Ch
0x4A2292: jz      short loc_4A22C1
0x4A2294: test    esi, esi
0x4A2296: jz      short loc_4A22B0
0x4A2298: lea     ecx, [esi+4]
0x4A229B: push    ecx; lpAddend
0x4A229C: call    ebp ; InterlockedDecrement
0x4A229E: test    eax, eax
0x4A22A0: jnz     short loc_4A22B0
0x4A22A2: test    esi, esi
0x4A22A4: jz      short loc_4A22B0
0x4A22A6: mov     edx, [esi]
0x4A22A8: mov     eax, [edx]
0x4A22AA: push    1
0x4A22AC: mov     ecx, esi
0x4A22AE: call    eax
0x4A22B0: test    edi, edi
0x4A22B2: mov     [ebx+8], edi
0x4A22B5: jz      short loc_4A22C1
0x4A22B7: lea     ecx, [edi+4]
0x4A22BA: push    ecx; lpAddend
0x4A22BB: call    dword ptr ds:0A28078h
0x4A22C1: test    edi, edi
0x4A22C3: mov     [esp+20h+var_4], 0FFFFFFFFh
0x4A22CB: jz      short loc_4A22E1
0x4A22CD: lea     edx, [edi+4]
0x4A22D0: push    edx; lpAddend
0x4A22D1: call    ebp ; InterlockedDecrement
0x4A22D3: test    eax, eax
0x4A22D5: jnz     short loc_4A22E1
0x4A22D7: mov     eax, [edi]
0x4A22D9: mov     edx, [eax]
0x4A22DB: push    1
0x4A22DD: mov     ecx, edi
0x4A22DF: call    edx
0x4A22E1: mov     ecx, dword ptr [esp+20h+var_C]
0x4A22E5: mov     large fs:0, ecx
0x4A22EC: pop     ecx
0x4A22ED: pop     edi
0x4A22EE: pop     esi
0x4A22EF: pop     ebp
0x4A22F0: pop     ebx
0x4A22F1: add     esp, 0Ch
0x4A22F4: retn    0Ch
