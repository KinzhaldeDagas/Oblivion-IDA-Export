0x8F5750: push    esi
0x8F5751: mov     esi, ecx
0x8F5753: mov     ecx, [esp+4+arg_4]
0x8F5757: xor     eax, eax
0x8F5759: mov     [esi+10h], ecx
0x8F575C: mov     ecx, [esp+4+arg_0]
0x8F5760: cmp     ecx, eax
0x8F5762: mov     word ptr [esi+6], 1
0x8F5768: mov     [esi+8], eax
0x8F576B: mov     [esi+0Ch], eax
0x8F576E: mov     [esi+14h], eax
0x8F5771: mov     dword ptr [esi], offset off_A9B370
0x8F5777: mov     [esi+18h], ecx
0x8F577A: jz      short loc_8F5781
0x8F577C: call    sub_8BC720
0x8F5781: mov     eax, esi
0x8F5783: pop     esi
0x8F5784: retn    8
