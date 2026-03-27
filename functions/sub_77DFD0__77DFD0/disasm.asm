0x77DFD0: push    esi
0x77DFD1: push    edi
0x77DFD2: mov     edi, [esp+8+arg_0]
0x77DFD6: mov     esi, [edi+1Ch]
0x77DFD9: test    esi, esi
0x77DFDB: jz      short loc_77E014
0x77DFDD: push    esi
0x77DFDE: call    sub_782930
0x77DFE3: mov     eax, [esi+24h]
0x77DFE6: test    eax, eax
0x77DFE8: jz      short loc_77DFFD
0x77DFEA: mov     ecx, [esi+1Ch]
0x77DFED: add     ecx, ecx
0x77DFEF: add     ecx, ecx
0x77DFF1: push    ecx
0x77DFF2: push    0
0x77DFF4: push    eax
0x77DFF5: call    __memset
0x77DFFA: add     esp, 0Ch
0x77DFFD: mov     ecx, esi
0x77DFFF: call    sub_778110
0x77E004: push    esi
0x77E005: call    FormHeapFree
0x77E00A: add     esp, 4
0x77E00D: mov     dword ptr [edi+1Ch], 0
0x77E014: pop     edi
0x77E015: pop     esi
0x77E016: retn    4
