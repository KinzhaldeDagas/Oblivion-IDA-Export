0x5C30C0: push    esi
0x5C30C1: mov     esi, ecx
0x5C30C3: mov     ecx, [esi+8ECh]
0x5C30C9: push    edi
0x5C30CA: call    sub_580120
0x5C30CF: mov     ecx, [esi+30h]
0x5C30D2: push    eax
0x5C30D3: push    0FDEh
0x5C30D8: call    Tile_SetString
0x5C30DD: mov     ecx, ds:0B333C4h
0x5C30E3: mov     eax, [ecx]
0x5C30E5: mov     edx, [eax+170h]
0x5C30EB: call    edx
0x5C30ED: mov     ecx, [esi+8ECh]
0x5C30F3: mov     edi, eax
0x5C30F5: call    NiRenderTargetGroup__GetRenderTargetsNum
0x5C30FA: push    0; a3
0x5C30FC: push    eax; a2
0x5C30FD: lea     ecx, [edi+0A4h]; this
0x5C3103: call    BSStringT_Set
0x5C3108: pop     edi
0x5C3109: pop     esi
0x5C310A: retn
