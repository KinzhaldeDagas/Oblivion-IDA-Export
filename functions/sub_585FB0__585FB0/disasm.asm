0x585FB0: push    esi
0x585FB1: mov     esi, [esp+4+arg_0]
0x585FB5: mov     eax, [esi+8]
0x585FB8: push    edi
0x585FB9: push    eax
0x585FBA: call    FormHeapFree
0x585FBF: xor     edi, edi
0x585FC1: add     esp, 4
0x585FC4: cmp     esi, edi
0x585FC6: mov     [esi+8], edi
0x585FC9: mov     [esi+0Eh], di
0x585FCD: mov     [esi+0Ch], di
0x585FD1: jz      short loc_585FEF
0x585FD3: mov     ecx, edi
0x585FD5: push    ecx
0x585FD6: call    FormHeapFree
0x585FDB: push    esi
0x585FDC: mov     [esi+8], edi
0x585FDF: mov     [esi+0Eh], di
0x585FE3: mov     [esi+0Ch], di
0x585FE7: call    FormHeapFree
0x585FEC: add     esp, 8
0x585FEF: pop     edi
0x585FF0: pop     esi
0x585FF1: retn    4
