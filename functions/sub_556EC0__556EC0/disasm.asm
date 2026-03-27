0x556EC0: push    ebx
0x556EC1: push    esi
0x556EC2: mov     esi, ecx
0x556EC4: mov     eax, [esi+20h]
0x556EC7: xor     ebx, ebx
0x556EC9: cmp     eax, ebx
0x556ECB: jz      short loc_556ED6
0x556ECD: push    eax
0x556ECE: call    FormHeapFree
0x556ED3: add     esp, 4
0x556ED6: mov     [esi+20h], ebx
0x556ED9: mov     [esi+24h], ebx
0x556EDC: mov     [esi+28h], ebx
0x556EDF: cmp     dword ptr [esi+18h], 10h
0x556EE3: jb      short loc_556EF1
0x556EE5: mov     eax, [esi+4]
0x556EE8: push    eax
0x556EE9: call    FormHeapFree
0x556EEE: add     esp, 4
0x556EF1: mov     [esi+14h], ebx
0x556EF4: mov     dword ptr [esi+18h], 0Fh
0x556EFB: mov     [esi+4], bl
0x556EFE: pop     esi
0x556EFF: pop     ebx
0x556F00: retn
