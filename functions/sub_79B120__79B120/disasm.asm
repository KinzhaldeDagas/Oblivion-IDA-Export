0x79B120: push    esi
0x79B121: mov     esi, [esp+4+arg_0]
0x79B125: push    edi
0x79B126: mov     edi, [esp+8+arg_4]
0x79B12A: cmp     esi, edi
0x79B12C: jz      short loc_79B158
0x79B12E: push    ebx
0x79B12F: xor     ebx, ebx
0x79B131: cmp     dword ptr [esi+18h], 10h
0x79B135: jb      short loc_79B143
0x79B137: mov     eax, [esi+4]
0x79B13A: push    eax
0x79B13B: call    FormHeapFree
0x79B140: add     esp, 4
0x79B143: mov     dword ptr [esi+18h], 0Fh
0x79B14A: mov     [esi+14h], ebx
0x79B14D: mov     [esi+4], bl
0x79B150: add     esi, 2Ch ; ','
0x79B153: cmp     esi, edi
0x79B155: jnz     short loc_79B131
0x79B157: pop     ebx
0x79B158: pop     edi
0x79B159: pop     esi
0x79B15A: retn
