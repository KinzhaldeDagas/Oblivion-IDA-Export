0x784FA0: mov     eax, [esp+arg_0]
0x784FA4: push    esi
0x784FA5: mov     esi, ecx
0x784FA7: xor     ecx, ecx
0x784FA9: cmp     eax, ecx
0x784FAB: mov     [esi+4], ecx
0x784FAE: mov     [esi+8], ecx
0x784FB1: mov     [esi+0Ch], ecx
0x784FB4: jnz     short loc_784FBC
0x784FB6: xor     al, al
0x784FB8: pop     esi
0x784FB9: retn    4
0x784FBC: cmp     eax, 0FFFFFFFFh
0x784FBF: jbe     short loc_784FC6
0x784FC1: call    sub_790B90
0x784FC6: push    edi
0x784FC7: lea     edi, [eax+eax*2]
0x784FCA: add     edi, edi
0x784FCC: add     edi, edi
0x784FCE: add     edi, edi
0x784FD0: push    edi; Size
0x784FD1: call    FormHeapAlloc
0x784FD6: add     edi, eax
0x784FD8: add     esp, 4
0x784FDB: mov     [esi+0Ch], edi
0x784FDE: mov     [esi+4], eax
0x784FE1: mov     [esi+8], eax
0x784FE4: pop     edi
0x784FE5: mov     al, 1
0x784FE7: pop     esi
0x784FE8: retn    4
