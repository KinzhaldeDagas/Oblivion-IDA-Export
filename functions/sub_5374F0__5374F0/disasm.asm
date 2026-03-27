0x5374F0: push    ecx
0x5374F1: push    ebp
0x5374F2: mov     ebp, [esp+8+arg_0]
0x5374F6: test    ebp, ebp
0x5374F8: mov     [esp+8+var_4], ecx
0x5374FC: jz      short loc_537577
0x5374FE: push    edi
0x5374FF: mov     edi, [ecx+18h]
0x537502: test    edi, edi
0x537504: jz      short loc_537576
0x537506: push    ebx
0x537507: push    esi
0x537508: mov     esi, [edi+10h]
0x53750B: mov     ebx, [edi+4]
0x53750E: mov     eax, esi
0x537510: test    eax, eax
0x537512: jz      short loc_53755E
0x537514: cmp     [eax+0Ch], ebp
0x537517: jz      short loc_537522
0x537519: mov     eax, [eax+4]
0x53751C: test    eax, eax
0x53751E: jnz     short loc_537514
0x537520: jmp     short loc_53755E
0x537522: cmp     eax, esi
0x537524: jnz     short loc_53752B
0x537526: mov     esi, [eax+4]
0x537529: jmp     short loc_537546
0x53752B: test    esi, esi
0x53752D: mov     edx, esi
0x53752F: jz      short loc_537546
0x537531: mov     ecx, [edx+4]
0x537534: cmp     eax, ecx
0x537536: jz      short loc_537540
0x537538: test    ecx, ecx
0x53753A: mov     edx, ecx
0x53753C: jnz     short loc_537531
0x53753E: jmp     short loc_537546
0x537540: mov     ecx, [ecx+4]
0x537543: mov     [edx+4], ecx
0x537546: test    eax, eax
0x537548: mov     [edi+10h], esi
0x53754B: jz      short loc_53755E
0x53754D: movzx   edx, byte ptr [eax-1]
0x537551: sub     eax, edx
0x537553: push    eax; void *
0x537554: mov     ecx, offset FormHeap
0x537559: call    MemoryHeap_Free_checked
0x53755E: cmp     dword ptr [edi+10h], 0
0x537562: jnz     short loc_53756E
0x537564: mov     ecx, [esp+14h+var_4]
0x537568: push    edi
0x537569: call    sub_536D30
0x53756E: test    ebx, ebx
0x537570: mov     edi, ebx
0x537572: jnz     short loc_537508
0x537574: pop     esi
0x537575: pop     ebx
0x537576: pop     edi
0x537577: pop     ebp
0x537578: pop     ecx
0x537579: retn    4
