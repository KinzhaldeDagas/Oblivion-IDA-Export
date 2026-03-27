0x8BE4F0: push    esi
0x8BE4F1: mov     esi, ecx
0x8BE4F3: cmp     dword ptr [esi+0Ch], 0
0x8BE4F7: jnz     short loc_8BE53E
0x8BE4F9: push    1
0x8BE4FB: push    50h ; 'P'
0x8BE4FD: mov     ecx, offset FormHeap
0x8BE502: call    j_MemoryHeap_Alloc
0x8BE507: mov     dl, al
0x8BE509: and     dl, 0Fh
0x8BE50C: mov     cl, 10h
0x8BE50E: sub     cl, dl
0x8BE510: movzx   edx, cl
0x8BE513: add     eax, edx
0x8BE515: mov     [eax-1], cl
0x8BE518: mov     ecx, eax
0x8BE51A: call    sub_8BE470
0x8BE51F: cmp     dword ptr [esi+8], 0
0x8BE523: mov     [esi+0Ch], eax
0x8BE526: jz      short loc_8BE530
0x8BE528: push    eax
0x8BE529: mov     ecx, esi
0x8BE52B: call    sub_8BE190
0x8BE530: mov     eax, [esp+4+arg_0]
0x8BE534: mov     byte ptr [eax], 1
0x8BE537: mov     eax, [esi+0Ch]
0x8BE53A: pop     esi
0x8BE53B: retn    4
0x8BE53E: mov     ecx, [esp+4+arg_0]
0x8BE542: mov     byte ptr [ecx], 0
0x8BE545: mov     eax, [esi+0Ch]
0x8BE548: pop     esi
0x8BE549: retn    4
