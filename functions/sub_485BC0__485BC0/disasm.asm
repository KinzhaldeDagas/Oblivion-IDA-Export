0x485BC0: push    esi
0x485BC1: push    edi
0x485BC2: mov     edi, ecx
0x485BC4: mov     esi, [edi]
0x485BC6: test    esi, esi
0x485BC8: jz      short loc_485BF7
0x485BCA: lea     ebx, [ebx+0]
0x485BD0: cmp     dword ptr [esi+4], 0
0x485BD4: jnz     short loc_485BDB
0x485BD6: cmp     dword ptr [esi], 0
0x485BD9: jz      short loc_485BF7
0x485BDB: mov     ecx, [esi]
0x485BDD: test    ecx, ecx
0x485BDF: jz      short loc_485BF0
0x485BE1: mov     eax, [edi+8]
0x485BE4: push    eax
0x485BE5: push    0
0x485BE7: push    0
0x485BE9: push    20h ; ' '
0x485BEB: call    sub_425040
0x485BF0: mov     esi, [esi+4]
0x485BF3: test    esi, esi
0x485BF5: jnz     short loc_485BD0
0x485BF7: pop     edi
0x485BF8: pop     esi
0x485BF9: retn
