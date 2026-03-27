0x5D8660: push    esi
0x5D8661: mov     esi, ecx
0x5D8663: mov     ecx, [esi+70h]
0x5D8666: call    sub_57D2F0
0x5D866B: test    al, al
0x5D866D: jz      short loc_5D86AE
0x5D866F: mov     eax, [esp+4+arg_0]
0x5D8673: mov     ecx, [esi+70h]
0x5D8676: push    eax
0x5D8677: call    sub_57FF50
0x5D867C: mov     ecx, [esi+70h]
0x5D867F: call    sub_580120
0x5D8684: mov     ecx, [esi+54h]
0x5D8687: push    eax
0x5D8688: push    0FDEh
0x5D868D: call    Tile_SetString
0x5D8692: mov     ecx, [esi+70h]
0x5D8695: call    NiRenderTargetGroup__GetRenderTargetsNum
0x5D869A: mov     ecx, [esi+74h]
0x5D869D: push    0; a3
0x5D869F: push    eax; a2
0x5D86A0: add     ecx, 1Ch; this
0x5D86A3: call    BSStringT_Set
0x5D86A8: mov     al, 1
0x5D86AA: pop     esi
0x5D86AB: retn    4
0x5D86AE: xor     al, al
0x5D86B0: pop     esi
0x5D86B1: retn    4
