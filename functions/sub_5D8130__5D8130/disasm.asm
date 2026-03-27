0x5D8130: push    esi
0x5D8131: mov     esi, ecx
0x5D8133: mov     ecx, [esi+70h]
0x5D8136: call    sub_57D2F0
0x5D813B: test    al, al
0x5D813D: jz      short loc_5D8173
0x5D813F: mov     ecx, [esi+70h]
0x5D8142: call    sub_57DDE0
0x5D8147: mov     ecx, [esi+70h]
0x5D814A: call    sub_580120
0x5D814F: mov     ecx, [esi+54h]
0x5D8152: push    eax
0x5D8153: push    0FDEh
0x5D8158: call    Tile_SetString
0x5D815D: mov     ecx, [esi+70h]
0x5D8160: call    NiRenderTargetGroup__GetRenderTargetsNum
0x5D8165: mov     ecx, [esi+74h]
0x5D8168: push    0; a3
0x5D816A: push    eax; a2
0x5D816B: add     ecx, 1Ch; this
0x5D816E: call    BSStringT_Set
0x5D8173: pop     esi
0x5D8174: retn
