0x4DDFD0: push    esi
0x4DDFD1: mov     esi, ecx
0x4DDFD3: mov     eax, [esi]
0x4DDFD5: mov     edx, [eax+190h]
0x4DDFDB: call    edx
0x4DDFDD: test    al, al
0x4DDFDF: jnz     short loc_4DDFE7
0x4DDFE1: xor     eax, eax
0x4DDFE3: pop     esi
0x4DDFE4: retn    4
0x4DDFE7: mov     eax, [esi]
0x4DDFE9: mov     edx, [eax+27Ch]
0x4DDFEF: mov     ecx, esi
0x4DDFF1: call    edx
0x4DDFF3: test    eax, eax
0x4DDFF5: jz      short loc_4DDFE1
0x4DDFF7: mov     esi, [esi+3Ch]
0x4DDFFA: push    offset aBsfacegennin_0; "BSFaceGenNiNodeSkinned"
0x4DDFFF: push    esi; a1
0x4DE000: call    NiObjectNET_LookupObjectByName
0x4DE005: add     esp, 8
0x4DE008: pop     esi
0x4DE009: retn    4
