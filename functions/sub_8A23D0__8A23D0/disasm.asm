0x8A23D0: push    esi
0x8A23D1: mov     esi, ecx
0x8A23D3: cmp     dword ptr [esi+0Ch], 0
0x8A23D7: jnz     short loc_8A241E
0x8A23D9: push    1
0x8A23DB: push    60h ; '`'
0x8A23DD: mov     ecx, offset FormHeap
0x8A23E2: call    j_MemoryHeap_Alloc
0x8A23E7: mov     dl, al
0x8A23E9: and     dl, 0Fh
0x8A23EC: mov     cl, 10h
0x8A23EE: sub     cl, dl
0x8A23F0: movzx   edx, cl
0x8A23F3: add     eax, edx
0x8A23F5: mov     [eax-1], cl
0x8A23F8: mov     ecx, eax
0x8A23FA: call    sub_564B70
0x8A23FF: cmp     dword ptr [esi+8], 0
0x8A2403: mov     [esi+0Ch], eax
0x8A2406: jz      short loc_8A2410
0x8A2408: push    eax
0x8A2409: mov     ecx, esi
0x8A240B: call    sub_8A20A0
0x8A2410: mov     eax, [esp+4+arg_0]
0x8A2414: mov     byte ptr [eax], 1
0x8A2417: mov     eax, [esi+0Ch]
0x8A241A: pop     esi
0x8A241B: retn    4
0x8A241E: mov     ecx, [esp+4+arg_0]
0x8A2422: mov     byte ptr [ecx], 0
0x8A2425: mov     eax, [esi+0Ch]
0x8A2428: pop     esi
0x8A2429: retn    4
