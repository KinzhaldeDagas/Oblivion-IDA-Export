0x4D78E0: push    esi
0x4D78E1: mov     esi, ecx
0x4D78E3: mov     eax, [esi]
0x4D78E5: mov     edx, [eax+170h]
0x4D78EB: call    edx
0x4D78ED: cmp     eax, ds:0B35EACh
0x4D78F3: jz      short loc_4D790D
0x4D78F5: mov     eax, [esi]
0x4D78F7: mov     edx, [eax+170h]
0x4D78FD: mov     ecx, esi
0x4D78FF: call    edx
0x4D7901: cmp     eax, ds:0B35EB0h
0x4D7907: jz      short loc_4D790D
0x4D7909: xor     eax, eax
0x4D790B: pop     esi
0x4D790C: retn
0x4D790D: lea     ecx, [esi+44h]
0x4D7910: pop     esi
0x4D7911: jmp     ExtraDataList__GetExtraXTarget
