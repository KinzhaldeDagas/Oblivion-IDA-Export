0x41A4B0: push    ecx
0x41A4B1: mov     eax, [esp+4+arg_4]
0x41A4B5: xor     ecx, ecx
0x41A4B7: add     eax, 0FFFFFFFFh; switch 6 cases
0x41A4BA: cmp     eax, 5
0x41A4BD: push    esi
0x41A4BE: mov     [esp+8+var_4], ecx
0x41A4C2: ja      Magic_CastFailureMsg___def_41A4C8
0x41A4C8: jmp     ds:jpt_41A4C8[eax*4]; switch jump
0x41A4CF: mov     eax, sMagicCastInsufficientMagicka; jumptable 0041A4C8 case 1
0x41A4D4: mov     esi, [esp+8+arg_0]
0x41A4D8: push    eax
0x41A4D9: mov     ecx, esi
0x41A4DB: call    BSStringT_constr_str
0x41A4E0: mov     eax, esi
0x41A4E2: pop     esi
0x41A4E3: pop     ecx
0x41A4E4: retn    8
0x41A4E7: mov     ecx, sMagicCastInsufficientSkill; jumptable 0041A4C8 case 3
0x41A4ED: mov     esi, [esp+8+arg_0]
0x41A4F1: push    ecx
0x41A4F2: mov     ecx, esi
0x41A4F4: call    BSStringT_constr_str
0x41A4F9: mov     eax, esi
0x41A4FB: pop     esi
0x41A4FC: pop     ecx
0x41A4FD: retn    8
0x41A500: mov     edx, sMagicCastPowerUsed; jumptable 0041A4C8 case 4
0x41A506: mov     esi, [esp+8+arg_0]
0x41A50A: push    edx
0x41A50B: mov     ecx, esi
0x41A50D: call    BSStringT_constr_str
0x41A512: mov     eax, esi
0x41A514: pop     esi
0x41A515: pop     ecx
0x41A516: retn    8
0x41A519: mov     eax, sMagicCastSilenced; jumptable 0041A4C8 case 2
0x41A51E: mov     esi, [esp+8+arg_0]
0x41A522: push    eax
0x41A523: mov     ecx, esi
0x41A525: call    BSStringT_constr_str
0x41A52A: mov     eax, esi
0x41A52C: pop     esi
0x41A52D: pop     ecx
0x41A52E: retn    8
0x41A531: mov     ecx, sMagicCastMultipleBoundEffects; jumptable 0041A4C8 case 5
0x41A537: mov     esi, [esp+8+arg_0]
0x41A53B: push    ecx
0x41A53C: mov     ecx, esi
0x41A53E: call    BSStringT_constr_str
0x41A543: mov     eax, esi
0x41A545: pop     esi
0x41A546: pop     ecx
0x41A547: retn    8
0x41A54A: mov     edx, sMagicCastRangedUnderwater; jumptable 0041A4C8 case 6
0x41A550: mov     esi, [esp+8+arg_0]
0x41A554: push    edx
0x41A555: mov     ecx, esi
0x41A557: call    BSStringT_constr_str
0x41A55C: mov     eax, esi
0x41A55E: pop     esi
0x41A55F: pop     ecx
0x41A560: retn    8
