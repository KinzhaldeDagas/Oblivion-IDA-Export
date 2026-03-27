0x56A450: push    esi
0x56A451: mov     esi, ecx
0x56A453: test    esi, esi
0x56A455: jz      short loc_56A470
0x56A457: cmp     dword ptr [esi+4], 0
0x56A45B: jnz     short loc_56A462
0x56A45D: cmp     dword ptr [esi], 0
0x56A460: jz      short loc_56A470
0x56A462: mov     ecx, [esi]
0x56A464: call    sub_56AD60
0x56A469: mov     esi, [esi+4]
0x56A46C: test    esi, esi
0x56A46E: jnz     short loc_56A457
0x56A470: pop     esi
0x56A471: retn
