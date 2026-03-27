0x552090: push    ebx
0x552091: push    esi
0x552092: mov     esi, [esp+8+arg_0]
0x552096: cmp     dword ptr [esi+30h], 10h
0x55209A: jb      short loc_5520A8
0x55209C: mov     eax, [esi+1Ch]
0x55209F: push    eax
0x5520A0: call    FormHeapFree
0x5520A5: add     esp, 4
0x5520A8: xor     ebx, ebx
0x5520AA: mov     dword ptr [esi+30h], 0Fh
0x5520B1: mov     [esi+2Ch], ebx
0x5520B4: mov     [esi+1Ch], bl
0x5520B7: mov     eax, [esi+0Ch]
0x5520BA: cmp     eax, ebx
0x5520BC: jz      short loc_5520C7
0x5520BE: push    eax
0x5520BF: call    FormHeapFree
0x5520C4: add     esp, 4
0x5520C7: mov     [esi+0Ch], ebx
0x5520CA: mov     [esi+10h], ebx
0x5520CD: mov     [esi+14h], ebx
0x5520D0: pop     esi
0x5520D1: pop     ebx
0x5520D2: retn    4
