0x57DA20: mov     eax, [esp+arg_0]
0x57DA24: push    esi
0x57DA25: mov     esi, ecx
0x57DA27: mov     ecx, [esi+1Ch]
0x57DA2A: push    eax
0x57DA2B: push    0FE6h
0x57DA30: call    Tile_SetString
0x57DA35: cmp     [esp+4+arg_4], 0
0x57DA3A: mov     ecx, [esi+1Ch]
0x57DA3D: mov     eax, [ecx+2Ch]
0x57DA40: jz      short loc_57DA47
0x57DA42: and     eax, 0FFFEh
0x57DA47: mov     edx, ecx
0x57DA49: or      eax, 20h
0x57DA4C: mov     [edx+2Ch], eax
0x57DA4F: mov     ecx, [esi+1Ch]
0x57DA52: call    sub_58E870
0x57DA57: pop     esi
0x57DA58: retn    8
