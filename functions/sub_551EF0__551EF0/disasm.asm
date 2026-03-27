0x551EF0: push    ebx
0x551EF1: push    esi
0x551EF2: mov     esi, ecx
0x551EF4: cmp     dword ptr [esi+30h], 10h
0x551EF8: jb      short loc_551F06
0x551EFA: mov     eax, [esi+1Ch]
0x551EFD: push    eax
0x551EFE: call    FormHeapFree
0x551F03: add     esp, 4
0x551F06: xor     ebx, ebx
0x551F08: mov     dword ptr [esi+30h], 0Fh
0x551F0F: mov     [esi+2Ch], ebx
0x551F12: mov     [esi+1Ch], bl
0x551F15: mov     eax, [esi+0Ch]
0x551F18: cmp     eax, ebx
0x551F1A: jz      short loc_551F25
0x551F1C: push    eax
0x551F1D: call    FormHeapFree
0x551F22: add     esp, 4
0x551F25: mov     [esi+0Ch], ebx
0x551F28: mov     [esi+10h], ebx
0x551F2B: mov     [esi+14h], ebx
0x551F2E: pop     esi
0x551F2F: pop     ebx
0x551F30: retn
