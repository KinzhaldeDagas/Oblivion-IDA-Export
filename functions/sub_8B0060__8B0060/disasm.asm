0x8B0060: push    esi
0x8B0061: mov     esi, ecx
0x8B0063: mov     eax, [esi]
0x8B0065: mov     edx, [eax+58h]
0x8B0068: call    edx
0x8B006A: test    eax, eax
0x8B006C: jz      short loc_8B007D
0x8B006E: mov     ecx, [esi+8]
0x8B0071: push    1
0x8B0073: push    0
0x8B0075: push    ecx
0x8B0076: mov     ecx, eax
0x8B0078: call    sub_89B630
0x8B007D: pop     esi
0x8B007E: retn
