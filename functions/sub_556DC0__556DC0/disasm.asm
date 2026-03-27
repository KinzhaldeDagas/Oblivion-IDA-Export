0x556DC0: push    ebx
0x556DC1: push    esi
0x556DC2: mov     esi, ecx
0x556DC4: mov     eax, [esi+24h]
0x556DC7: xor     ebx, ebx
0x556DC9: cmp     eax, ebx
0x556DCB: jz      short loc_556DD6
0x556DCD: push    eax
0x556DCE: call    FormHeapFree
0x556DD3: add     esp, 4
0x556DD6: mov     [esi+24h], ebx
0x556DD9: mov     [esi+28h], ebx
0x556DDC: mov     [esi+2Ch], ebx
0x556DDF: cmp     dword ptr [esi+18h], 10h
0x556DE3: jb      short loc_556DF1
0x556DE5: mov     eax, [esi+4]
0x556DE8: push    eax
0x556DE9: call    FormHeapFree
0x556DEE: add     esp, 4
0x556DF1: mov     [esi+14h], ebx
0x556DF4: mov     dword ptr [esi+18h], 0Fh
0x556DFB: mov     [esi+4], bl
0x556DFE: pop     esi
0x556DFF: pop     ebx
0x556E00: retn
