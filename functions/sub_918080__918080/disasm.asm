0x918080: push    ebx
0x918081: push    ebp
0x918082: push    esi
0x918083: push    edi
0x918084: mov     edi, [esp+10h+arg_4]
0x918088: xor     esi, esi
0x91808A: test    edi, edi
0x91808C: mov     ebx, ecx
0x91808E: jle     short loc_9180AF
0x918090: mov     ebp, [esp+10h+arg_0]
0x918094: mov     ecx, [ebx+8]
0x918097: mov     eax, [ecx]
0x918099: mov     edx, edi
0x91809B: sub     edx, esi
0x91809D: push    edx
0x91809E: lea     edx, [esi+ebp]
0x9180A1: push    edx
0x9180A2: call    dword ptr [eax+14h]
0x9180A5: add     esi, eax
0x9180A7: test    eax, eax
0x9180A9: jz      short loc_9180B8
0x9180AB: cmp     esi, edi
0x9180AD: jl      short loc_918094
0x9180AF: mov     eax, edi
0x9180B1: pop     edi
0x9180B2: pop     esi
0x9180B3: pop     ebp
0x9180B4: pop     ebx
0x9180B5: retn    8
0x9180B8: pop     edi
0x9180B9: mov     eax, esi
0x9180BB: pop     esi
0x9180BC: pop     ebp
0x9180BD: pop     ebx
0x9180BE: retn    8
