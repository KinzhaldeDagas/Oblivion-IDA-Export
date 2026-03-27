0x8CACE0: push    edi
0x8CACE1: mov     edi, ecx
0x8CACE3: mov     eax, [edi-48h]
0x8CACE6: test    eax, eax
0x8CACE8: jz      short loc_8CAD0A
0x8CACEA: push    esi
0x8CACEB: mov     esi, [esp+8+arg_0]
0x8CACEF: mov     ecx, [esi+0Ch]
0x8CACF2: test    ecx, ecx
0x8CACF4: jz      short loc_8CAD09
0x8CACF6: mov     eax, [ecx]
0x8CACF8: call    dword ptr [eax+0Ch]
0x8CACFB: cmp     eax, 0Bh
0x8CACFE: jz      short loc_8CAD09
0x8CAD00: mov     ecx, [edi-48h]
0x8CAD03: push    esi
0x8CAD04: call    sub_8CA1D0
0x8CAD09: pop     esi
0x8CAD0A: pop     edi
0x8CAD0B: retn    4
