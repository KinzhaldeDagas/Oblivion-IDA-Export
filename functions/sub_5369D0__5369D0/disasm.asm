0x5369D0: push    edi
0x5369D1: mov     edi, ecx
0x5369D3: mov     eax, [edi+10h]
0x5369D6: test    eax, eax
0x5369D8: jz      short loc_5369FB
0x5369DA: push    esi
0x5369DB: jmp     short loc_5369E0
0x5369DD: align 10h
0x5369E0: movzx   ecx, byte ptr [eax-1]
0x5369E4: mov     esi, [eax+4]
0x5369E7: sub     eax, ecx
0x5369E9: push    eax; void *
0x5369EA: mov     ecx, offset FormHeap
0x5369EF: call    MemoryHeap_Free_checked
0x5369F4: test    esi, esi
0x5369F6: mov     eax, esi
0x5369F8: jnz     short loc_5369E0
0x5369FA: pop     esi
0x5369FB: mov     dword ptr [edi+10h], 0
0x536A02: pop     edi
0x536A03: retn
