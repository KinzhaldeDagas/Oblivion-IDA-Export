0x8C8400: push    esi
0x8C8401: mov     esi, ecx
0x8C8403: cmp     dword ptr [esi+0Ch], 0
0x8C8407: jnz     short loc_8C844E
0x8C8409: push    1
0x8C840B: push    50h ; 'P'
0x8C840D: mov     ecx, offset FormHeap
0x8C8412: call    j_MemoryHeap_Alloc
0x8C8417: mov     dl, al
0x8C8419: and     dl, 0Fh
0x8C841C: mov     cl, 10h
0x8C841E: sub     cl, dl
0x8C8420: movzx   edx, cl
0x8C8423: add     eax, edx
0x8C8425: mov     [eax-1], cl
0x8C8428: mov     ecx, eax
0x8C842A: call    sub_8C8390
0x8C842F: cmp     dword ptr [esi+8], 0
0x8C8433: mov     [esi+0Ch], eax
0x8C8436: jz      short loc_8C8440
0x8C8438: push    eax
0x8C8439: mov     ecx, esi
0x8C843B: call    sub_8C8080
0x8C8440: mov     eax, [esp+4+arg_0]
0x8C8444: mov     byte ptr [eax], 1
0x8C8447: mov     eax, [esi+0Ch]
0x8C844A: pop     esi
0x8C844B: retn    4
0x8C844E: mov     ecx, [esp+4+arg_0]
0x8C8452: mov     byte ptr [ecx], 0
0x8C8455: mov     eax, [esi+0Ch]
0x8C8458: pop     esi
0x8C8459: retn    4
