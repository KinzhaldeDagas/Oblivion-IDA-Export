0x94D8B0: push    ebx
0x94D8B1: push    ebp
0x94D8B2: push    esi
0x94D8B3: push    edi
0x94D8B4: mov     edi, ecx
0x94D8B6: mov     ecx, ds:0BA7D98h
0x94D8BC: mov     eax, [ecx]
0x94D8BE: push    24h ; '$'
0x94D8C0: push    18h
0x94D8C2: call    dword ptr [eax+10h]
0x94D8C5: xor     esi, esi
0x94D8C7: cmp     eax, esi
0x94D8C9: jz      short loc_94D8E3
0x94D8CB: mov     [eax], esi
0x94D8CD: mov     [eax+4], esi
0x94D8D0: mov     ecx, 80000000h
0x94D8D5: mov     [eax+8], ecx
0x94D8D8: mov     [eax+0Ch], esi
0x94D8DB: mov     [eax+10h], esi
0x94D8DE: mov     [eax+14h], ecx
0x94D8E1: mov     esi, eax
0x94D8E3: mov     [edi+50h], esi
0x94D8E6: mov     eax, [esi+8]
0x94D8E9: and     eax, 3FFFFFFFh
0x94D8EE: cmp     eax, 5
0x94D8F1: jge     short loc_94D90B
0x94D8F3: add     eax, eax
0x94D8F5: cmp     eax, 5
0x94D8F8: jg      short loc_94D8FF
0x94D8FA: mov     eax, 5
0x94D8FF: push    10h
0x94D901: push    eax
0x94D902: push    esi
0x94D903: call    sub_8A6E40
0x94D908: add     esp, 0Ch
0x94D90B: mov     dword ptr [esi+4], 5
0x94D912: mov     ecx, [edi+50h]
0x94D915: mov     edx, [ecx]
0x94D917: movaps  xmm0, xmmword ptr [edi+70h]
0x94D91B: movaps  xmmword ptr [edx+40h], xmm0
0x94D91F: mov     eax, [edi+50h]
0x94D922: mov     ecx, [eax]
0x94D924: push    ecx
0x94D925: mov     ecx, edi
0x94D927: call    sub_94D600
0x94D92C: mov     esi, [edi+50h]
0x94D92F: mov     ebx, [esi+10h]
0x94D932: mov     eax, [esi+14h]
0x94D935: add     esi, 0Ch
0x94D938: lea     ebp, [ebx+1]
0x94D93B: and     eax, 3FFFFFFFh
0x94D940: cmp     eax, ebp
0x94D942: jge     short loc_94D958
0x94D944: add     eax, eax
0x94D946: cmp     ebp, eax
0x94D948: jl      short loc_94D94C
0x94D94A: mov     eax, ebp
0x94D94C: push    0Ch
0x94D94E: push    eax
0x94D94F: push    esi
0x94D950: call    sub_8A6E40
0x94D955: add     esp, 0Ch
0x94D958: mov     eax, [esi]
0x94D95A: mov     [esi+4], ebp
0x94D95D: lea     edx, [ebx+ebx*2]
0x94D960: lea     eax, [eax+edx*4]
0x94D963: mov     dword ptr [eax], 2
0x94D969: mov     dword ptr [eax+4], 4
0x94D970: mov     dword ptr [eax+8], 3
0x94D977: mov     esi, [edi+50h]
0x94D97A: mov     ebx, [esi+10h]
0x94D97D: mov     eax, [esi+14h]
0x94D980: add     esi, 0Ch
0x94D983: lea     ebp, [ebx+1]
0x94D986: and     eax, 3FFFFFFFh
0x94D98B: cmp     eax, ebp
0x94D98D: jge     short loc_94D9A3
0x94D98F: add     eax, eax
0x94D991: cmp     ebp, eax
0x94D993: jl      short loc_94D997
0x94D995: mov     eax, ebp
0x94D997: push    0Ch
0x94D999: push    eax
0x94D99A: push    esi
0x94D99B: call    sub_8A6E40
0x94D9A0: add     esp, 0Ch
0x94D9A3: mov     edx, [esi]
0x94D9A5: mov     [esi+4], ebp
0x94D9A8: lea     ecx, [ebx+ebx*2]
0x94D9AB: lea     eax, [edx+ecx*4]
0x94D9AE: mov     dword ptr [eax], 0
0x94D9B4: mov     dword ptr [eax+4], 4
0x94D9BB: mov     dword ptr [eax+8], 2
0x94D9C2: mov     esi, [edi+50h]
0x94D9C5: mov     ebx, [esi+10h]
0x94D9C8: mov     eax, [esi+14h]
0x94D9CB: add     esi, 0Ch
0x94D9CE: lea     ebp, [ebx+1]
0x94D9D1: and     eax, 3FFFFFFFh
0x94D9D6: cmp     eax, ebp
0x94D9D8: jge     short loc_94D9EE
0x94D9DA: add     eax, eax
0x94D9DC: cmp     ebp, eax
0x94D9DE: jl      short loc_94D9E2
0x94D9E0: mov     eax, ebp
0x94D9E2: push    0Ch
0x94D9E4: push    eax
0x94D9E5: push    esi
0x94D9E6: call    sub_8A6E40
0x94D9EB: add     esp, 0Ch
0x94D9EE: mov     ecx, [esi]
0x94D9F0: mov     [esi+4], ebp
0x94D9F3: lea     eax, [ebx+ebx*2]
0x94D9F6: lea     eax, [ecx+eax*4]
0x94D9F9: mov     dword ptr [eax], 1
0x94D9FF: mov     dword ptr [eax+4], 4
0x94DA06: mov     dword ptr [eax+8], 0
0x94DA0D: mov     esi, [edi+50h]
0x94DA10: mov     ebx, [esi+10h]
0x94DA13: mov     eax, [esi+14h]
0x94DA16: add     esi, 0Ch
0x94DA19: lea     edi, [ebx+1]
0x94DA1C: and     eax, 3FFFFFFFh
0x94DA21: cmp     eax, edi
0x94DA23: jge     short loc_94DA39
0x94DA25: add     eax, eax
0x94DA27: cmp     edi, eax
0x94DA29: jl      short loc_94DA2D
0x94DA2B: mov     eax, edi
0x94DA2D: push    0Ch
0x94DA2F: push    eax
0x94DA30: push    esi
0x94DA31: call    sub_8A6E40
0x94DA36: add     esp, 0Ch
0x94DA39: mov     eax, [esi]
0x94DA3B: mov     [esi+4], edi
0x94DA3E: pop     edi
0x94DA3F: lea     edx, [ebx+ebx*2]
0x94DA42: pop     esi
0x94DA43: lea     eax, [eax+edx*4]
0x94DA46: pop     ebp
0x94DA47: mov     dword ptr [eax], 3
0x94DA4D: mov     dword ptr [eax+4], 4
0x94DA54: mov     dword ptr [eax+8], 1
0x94DA5B: pop     ebx
0x94DA5C: retn
