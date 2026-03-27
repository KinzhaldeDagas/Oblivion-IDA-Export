0x507620: push    esi
0x507621: mov     esi, [esp+4+arg_8]
0x507625: test    esi, esi
0x507627: jz      short loc_50763F
0x507629: lea     ecx, [esi+44h]
0x50762C: call    ExtraDataList_RemoveOwner
0x507631: mov     eax, [esi]
0x507633: mov     edx, [eax+40h]
0x507636: push    80h ; '€'
0x50763B: mov     ecx, esi
0x50763D: call    edx
0x50763F: mov     al, 1
0x507641: pop     esi
0x507642: retn
