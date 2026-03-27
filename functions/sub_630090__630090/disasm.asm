0x630090: push    esi
0x630091: push    edi
0x630092: mov     edi, [esp+8+arg_0]
0x630096: test    edi, edi
0x630098: mov     esi, ecx
0x63009A: jz      short loc_6300DB
0x63009C: cmp     dword ptr [esi+190h], 0
0x6300A3: jz      short loc_6300D5
0x6300A5: push    8; Size
0x6300A7: call    FormHeapAlloc
0x6300AC: add     esp, 4
0x6300AF: test    eax, eax
0x6300B1: jz      short loc_6300C4
0x6300B3: mov     ecx, [esi+190h]
0x6300B9: mov     [eax], ecx
0x6300BB: mov     dword ptr [eax+4], 0
0x6300C2: jmp     short loc_6300C6
0x6300C4: xor     eax, eax
0x6300C6: mov     edx, [esi+194h]
0x6300CC: mov     [eax+4], edx
0x6300CF: mov     [esi+194h], eax
0x6300D5: mov     [esi+190h], edi
0x6300DB: pop     edi
0x6300DC: pop     esi
0x6300DD: retn    4
