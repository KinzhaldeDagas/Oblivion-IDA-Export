0x980FB3: cmp     dword ptr [ebp-4], 0
0x980FB7: jz      short loc_980FD0
0x980FB9: mov     ebx, large fs:0
0x980FC0: mov     eax, [ebx]
0x980FC2: mov     ebx, [ebp-28h]
0x980FC5: mov     [ebx], eax
0x980FC7: mov     large fs:0, ebx
0x980FCE: jmp     short loc_980FD9
0x980FD0: mov     eax, [ebp-28h]
0x980FD3: mov     large fs:0, eax
0x980FD9: mov     eax, [ebp-38h]
0x980FDC: pop     ebx
0x980FDD: leave
0x980FDE: retn
