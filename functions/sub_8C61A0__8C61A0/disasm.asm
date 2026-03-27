0x8C61A0: cmp     [esp+arg_0], 0
0x8C61A5: push    ebx
0x8C61A6: mov     ebx, ecx
0x8C61A8: jz      short loc_8C61F0
0x8C61AA: push    edi
0x8C61AB: mov     edi, [ebx+0Ch]
0x8C61AE: test    edi, edi
0x8C61B0: jz      short loc_8C61E8
0x8C61B2: push    esi
0x8C61B3: mov     esi, [edi+4]
0x8C61B6: test    esi, esi
0x8C61B8: jz      short loc_8C61D6
0x8C61BA: lea     eax, [esi+4]
0x8C61BD: push    eax; lpAddend
0x8C61BE: call    dword ptr ds:0A2807Ch
0x8C61C4: test    eax, eax
0x8C61C6: jnz     short loc_8C61D6
0x8C61C8: test    esi, esi
0x8C61CA: jz      short loc_8C61D6
0x8C61CC: mov     edx, [esi]
0x8C61CE: mov     eax, [edx]
0x8C61D0: push    1
0x8C61D2: mov     ecx, esi
0x8C61D4: call    eax
0x8C61D6: movzx   ecx, byte ptr [edi-1]
0x8C61DA: sub     edi, ecx
0x8C61DC: push    edi; void *
0x8C61DD: mov     ecx, offset FormHeap
0x8C61E2: call    MemoryHeap_Free_checked
0x8C61E7: pop     esi
0x8C61E8: mov     dword ptr [ebx+0Ch], 0
0x8C61EF: pop     edi
0x8C61F0: pop     ebx
0x8C61F1: retn    4
