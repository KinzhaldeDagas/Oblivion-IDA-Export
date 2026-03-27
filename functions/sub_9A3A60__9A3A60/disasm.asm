0x9A3A60: mov     eax, [esp+arg_4]
0x9A3A64: push    esi
0x9A3A65: mov     esi, [eax+10h]
0x9A3A68: lea     eax, [esi-1]; switch 12 cases
0x9A3A6B: cmp     eax, 0Bh
0x9A3A6E: ja      def_9A3A74; jumptable 009A3A74 default case, cases 1,2
0x9A3A74: jmp     ds:jpt_9A3A74[eax*4]; switch jump
0x9A3A7B: mov     ecx, [esp+4+arg_10]; jumptable 009A3A74 case 8
0x9A3A7F: mov     ecx, [ecx+10h]
0x9A3A82: test    ecx, ecx
0x9A3A84: jz      def_9A3A74; jumptable 009A3A74 default case, cases 1,2
0x9A3A8A: fld     dword ptr [ecx+28h]
0x9A3A8D: mov     eax, [esp+4+arg_0]
0x9A3A91: shl     eax, 4
0x9A3A94: fstp    dword ptr [eax+0BAAA70h]
0x9A3A9A: pop     esi
0x9A3A9B: fld     dword ptr [ecx+2Ch]
0x9A3A9E: fstp    dword ptr [eax+0BAAA74h]
0x9A3AA4: fld     dword ptr [ecx+30h]
0x9A3AA7: fstp    dword ptr [eax+0BAAA78h]
0x9A3AAD: fld     dword ptr [ecx+50h]
0x9A3AB0: fstp    dword ptr [eax+0BAAA7Ch]
0x9A3AB6: mov     eax, 0Ah
0x9A3ABB: retn    20h ; ' '
0x9A3ABE: mov     edx, [esp+4+arg_10]; jumptable 009A3A74 case 9
0x9A3AC2: mov     ecx, [edx+10h]
0x9A3AC5: test    ecx, ecx
0x9A3AC7: jz      def_9A3A74; jumptable 009A3A74 default case, cases 1,2
0x9A3ACD: fld     dword ptr [ecx+1Ch]
0x9A3AD0: mov     eax, [esp+4+arg_0]
0x9A3AD4: shl     eax, 4
0x9A3AD7: fstp    dword ptr [eax+0BAAA70h]
0x9A3ADD: pop     esi
0x9A3ADE: fld     dword ptr [ecx+20h]
0x9A3AE1: fstp    dword ptr [eax+0BAAA74h]
0x9A3AE7: fld     dword ptr [ecx+24h]
0x9A3AEA: fstp    dword ptr [eax+0BAAA78h]
0x9A3AF0: fld     dword ptr [ecx+50h]
0x9A3AF3: fstp    dword ptr [eax+0BAAA7Ch]
0x9A3AF9: mov     eax, 0Ah
0x9A3AFE: retn    20h ; ' '
0x9A3B01: mov     eax, [esp+4+arg_10]; jumptable 009A3A74 case 10
0x9A3B05: mov     ecx, [eax+10h]
0x9A3B08: test    ecx, ecx
0x9A3B0A: jz      def_9A3A74; jumptable 009A3A74 default case, cases 1,2
0x9A3B10: fld     dword ptr [ecx+34h]
0x9A3B13: mov     eax, [esp+4+arg_0]
0x9A3B17: shl     eax, 4
0x9A3B1A: fstp    dword ptr [eax+0BAAA70h]
0x9A3B20: pop     esi
0x9A3B21: fld     dword ptr [ecx+38h]
0x9A3B24: fstp    dword ptr [eax+0BAAA74h]
0x9A3B2A: fld     dword ptr [ecx+3Ch]
0x9A3B2D: fstp    dword ptr [eax+0BAAA78h]
0x9A3B33: fld     dword ptr [ecx+50h]
0x9A3B36: fstp    dword ptr [eax+0BAAA7Ch]
0x9A3B3C: mov     eax, 0Ah
0x9A3B41: retn    20h ; ' '
0x9A3B44: mov     ecx, [esp+4+arg_10]; jumptable 009A3A74 case 11
0x9A3B48: mov     ecx, [ecx+10h]
0x9A3B4B: test    ecx, ecx
0x9A3B4D: jz      def_9A3A74; jumptable 009A3A74 default case, cases 1,2
0x9A3B53: fld     dword ptr [ecx+40h]
0x9A3B56: mov     eax, [esp+4+arg_0]
0x9A3B5A: shl     eax, 4
0x9A3B5D: fstp    dword ptr [eax+0BAAA70h]
0x9A3B63: pop     esi
0x9A3B64: fld     dword ptr [ecx+44h]
0x9A3B67: fstp    dword ptr [eax+0BAAA74h]
0x9A3B6D: fld     dword ptr [ecx+48h]
0x9A3B70: fstp    dword ptr [eax+0BAAA78h]
0x9A3B76: fld     dword ptr [ecx+50h]
0x9A3B79: fstp    dword ptr [eax+0BAAA7Ch]
0x9A3B7F: mov     eax, 0Ah
0x9A3B84: retn    20h ; ' '
0x9A3B87: mov     edx, [esp+4+arg_10]; jumptable 009A3A74 case 12
0x9A3B8B: mov     ecx, [edx+10h]
0x9A3B8E: test    ecx, ecx
0x9A3B90: jz      def_9A3A74; jumptable 009A3A74 default case, cases 1,2
0x9A3B96: fld     dword ptr [ecx+4Ch]
0x9A3B99: mov     eax, [esp+4+arg_0]
0x9A3B9D: shl     eax, 4
0x9A3BA0: fstp    dword ptr [eax+0BAAA70h]
0x9A3BA6: pop     esi
0x9A3BA7: fld     dword ptr [ecx+4Ch]
0x9A3BAA: fstp    dword ptr [eax+0BAAA74h]
0x9A3BB0: fld     dword ptr [ecx+4Ch]
0x9A3BB3: fstp    dword ptr [eax+0BAAA78h]
0x9A3BB9: fld     dword ptr [ecx+4Ch]
0x9A3BBC: fstp    dword ptr [eax+0BAAA7Ch]
0x9A3BC2: mov     eax, 0Ah
0x9A3BC7: retn    20h ; ' '
0x9A3BCA: mov     eax, off_B329E4; jumptable 009A3A74 cases 3-7
0x9A3BCF: mov     ecx, [esp+4+arg_8]
0x9A3BD3: push    eax
0x9A3BD4: call    NiObjectNET_GetExtraData
0x9A3BD9: test    eax, eax
0x9A3BDB: jnz     short loc_9A3BE6
0x9A3BDD: mov     eax, 80000010h
0x9A3BE2: pop     esi
0x9A3BE3: retn    20h ; ' '
0x9A3BE6: fld     dword ptr [eax+0Ch]
0x9A3BE9: lea     eax, [esi-3]; switch 5 cases
0x9A3BEC: cmp     eax, 4
0x9A3BEF: fstp    [esp+4+arg_10]
0x9A3BF3: ja      def_9A3A74; jumptable 009A3A74 default case, cases 1,2
0x9A3BF9: jmp     ds:jpt_9A3BF9[eax*4]; switch jump
0x9A3C00: fld     [esp+4+arg_10]; jumptable 009A3BF9 case 3
0x9A3C04: mov     eax, [esp+4+arg_0]
0x9A3C08: shl     eax, 4
0x9A3C0B: fst     dword ptr [eax+0BAAA70h]
0x9A3C11: pop     esi
0x9A3C12: fst     dword ptr [eax+0BAAA74h]
0x9A3C18: fst     dword ptr [eax+0BAAA78h]
0x9A3C1E: fstp    dword ptr [eax+0BAAA7Ch]
0x9A3C24: mov     eax, 7
0x9A3C29: retn    20h ; ' '
0x9A3C2C: fld     [esp+4+arg_10]; jumptable 009A3BF9 case 4
0x9A3C30: call    __CIsin
0x9A3C35: fstp    [esp+4+arg_10]
0x9A3C39: fld     [esp+4+arg_10]
0x9A3C3D: fstp    [esp+4+arg_10]
0x9A3C41: jmp     short loc_9A3C00; jumptable 009A3BF9 case 3
0x9A3C43: fld     [esp+4+arg_10]; jumptable 009A3BF9 case 5
0x9A3C47: call    __CIcos
0x9A3C4C: fstp    [esp+4+arg_10]
0x9A3C50: fld     [esp+4+arg_10]
0x9A3C54: fstp    [esp+4+arg_10]
0x9A3C58: jmp     short loc_9A3C00; jumptable 009A3BF9 case 3
0x9A3C5A: fld     [esp+4+arg_10]; jumptable 009A3BF9 case 6
0x9A3C5E: call    __CItan
0x9A3C63: fstp    [esp+4+arg_10]
0x9A3C67: fld     [esp+4+arg_10]
0x9A3C6B: fstp    [esp+4+arg_10]
0x9A3C6F: jmp     short loc_9A3C00; jumptable 009A3BF9 case 3
0x9A3C71: mov     esi, [esp+4+arg_0]; jumptable 009A3BF9 case 7
0x9A3C75: fld     [esp+4+arg_10]
0x9A3C79: shl     esi, 4
0x9A3C7C: fst     dword ptr [esi+0BAAA70h]
0x9A3C82: call    __CIsin
0x9A3C87: fstp    [esp+4+arg_0]
0x9A3C8B: fld     [esp+4+arg_0]
0x9A3C8F: fstp    dword ptr [esi+0BAAA74h]
0x9A3C95: fld     [esp+4+arg_10]
0x9A3C99: call    __CIcos
0x9A3C9E: fstp    [esp+4+arg_0]
0x9A3CA2: fld     [esp+4+arg_0]
0x9A3CA6: fstp    dword ptr [esi+0BAAA78h]
0x9A3CAC: fld     [esp+4+arg_10]
0x9A3CB0: call    __CItan
0x9A3CB5: fstp    [esp+4+arg_0]
0x9A3CB9: fld     [esp+4+arg_0]
0x9A3CBD: mov     eax, 7
0x9A3CC2: fstp    dword ptr [esi+0BAAA7Ch]
0x9A3CC8: pop     esi
0x9A3CC9: retn    20h ; ' '
0x9A3CCC: xor     eax, eax; jumptable 009A3A74 default case, cases 1,2
0x9A3CCE: pop     esi
0x9A3CCF: retn    20h ; ' '
