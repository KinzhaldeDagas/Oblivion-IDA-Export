0x794760: push    esi
0x794761: push    edi
0x794762: mov     edi, [esp+8+arg_0]
0x794766: mov     esi, ecx
0x794768: mov     ecx, [esi+0BCh]
0x79476E: add     edi, edi
0x794770: test    ecx, ecx
0x794772: jz      short loc_794783
0x794774: mov     eax, [esi+0C0h]
0x79477A: sub     eax, ecx
0x79477C: sar     eax, 2
0x79477F: cmp     edi, eax
0x794781: jb      short loc_794788
0x794783: call    __invalid_parameter_noinfo
0x794788: mov     eax, [esi+0BCh]
0x79478E: lea     eax, [eax+edi*4]
0x794791: pop     edi
0x794792: pop     esi
0x794793: retn    4
