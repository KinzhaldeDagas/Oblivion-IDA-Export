0x557130: push    ebx
0x557131: push    esi
0x557132: mov     esi, [esp+8+arg_0]
0x557136: mov     eax, [esi+20h]
0x557139: xor     ebx, ebx
0x55713B: cmp     eax, ebx
0x55713D: jz      short loc_557148
0x55713F: push    eax
0x557140: call    FormHeapFree
0x557145: add     esp, 4
0x557148: mov     [esi+20h], ebx
0x55714B: mov     [esi+24h], ebx
0x55714E: mov     [esi+28h], ebx
0x557151: cmp     dword ptr [esi+18h], 10h
0x557155: jb      short loc_557163
0x557157: mov     eax, [esi+4]
0x55715A: push    eax
0x55715B: call    FormHeapFree
0x557160: add     esp, 4
0x557163: mov     [esi+14h], ebx
0x557166: mov     dword ptr [esi+18h], 0Fh
0x55716D: mov     [esi+4], bl
0x557170: pop     esi
0x557171: pop     ebx
0x557172: retn    4
