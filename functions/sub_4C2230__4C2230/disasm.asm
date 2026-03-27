0x4C2230: push    edi
0x4C2231: mov     edi, [esp+4+arg_0]
0x4C2235: xor     al, al
0x4C2237: test    edi, edi
0x4C2239: jz      loc_4C22F5
0x4C223F: push    esi
0x4C2240: mov     esi, [esp+8+arg_4]
0x4C2244: test    esi, esi
0x4C2246: jz      loc_4C22F4
0x4C224C: push    ebp
0x4C224D: mov     ebp, [esp+0Ch+arg_8]
0x4C2251: test    ebp, ebp
0x4C2253: jz      loc_4C22F3
0x4C2259: mov     ecx, ds:0BA7D98h
0x4C225F: mov     eax, [ecx]
0x4C2261: mov     edx, [eax+10h]
0x4C2264: push    ebx
0x4C2265: push    25h ; '%'
0x4C2267: push    30h ; '0'
0x4C2269: call    edx
0x4C226B: mov     ecx, eax
0x4C226D: mov     word ptr [eax+4], 30h ; '0'
0x4C2273: call    sub_4C1750
0x4C2278: cmp     esi, 10h
0x4C227B: mov     [ebp+0], eax
0x4C227E: jbe     short loc_4C22DB
0x4C2280: add     esi, 0FFFFFFF0h
0x4C2283: mov     ecx, [edi]
0x4C2285: mov     [eax+10h], ecx
0x4C2288: mov     edx, [edi+4]
0x4C228B: mov     [eax+14h], edx
0x4C228E: mov     ecx, [edi+8]
0x4C2291: mov     [eax+18h], ecx
0x4C2294: mov     edx, [edi+0Ch]
0x4C2297: mov     [eax+1Ch], edx
0x4C229A: lea     ebx, [edi+10h]
0x4C229D: jz      short loc_4C22DB
0x4C229F: lea     edi, [eax+20h]
0x4C22A2: mov     eax, [edi+8]
0x4C22A5: and     eax, 3FFFFFFFh
0x4C22AA: cmp     eax, esi
0x4C22AC: jge     short loc_4C22C2
0x4C22AE: add     eax, eax
0x4C22B0: cmp     esi, eax
0x4C22B2: jl      short loc_4C22B6
0x4C22B4: mov     eax, esi
0x4C22B6: push    1
0x4C22B8: push    eax
0x4C22B9: push    edi
0x4C22BA: call    sub_8A6E40
0x4C22BF: add     esp, 0Ch
0x4C22C2: push    esi; Size
0x4C22C3: mov     [edi+4], esi
0x4C22C6: mov     eax, [edi]
0x4C22C8: push    ebx; Src
0x4C22C9: push    eax; Dst
0x4C22CA: call    _memcpy
0x4C22CF: add     esp, 0Ch
0x4C22D2: pop     ebx
0x4C22D3: pop     ebp
0x4C22D4: pop     esi
0x4C22D5: mov     al, 1
0x4C22D7: pop     edi
0x4C22D8: retn    0Ch
0x4C22DB: test    eax, eax
0x4C22DD: jz      short loc_4C22E9
0x4C22DF: mov     edx, [eax]
0x4C22E1: mov     ecx, eax
0x4C22E3: mov     eax, [edx]
0x4C22E5: push    1
0x4C22E7: call    eax
0x4C22E9: mov     dword ptr [ebp+0], 0
0x4C22F0: xor     al, al
0x4C22F2: pop     ebx
0x4C22F3: pop     ebp
0x4C22F4: pop     esi
0x4C22F5: pop     edi
0x4C22F6: retn    0Ch
