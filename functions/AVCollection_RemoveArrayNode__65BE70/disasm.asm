0x65BE70: push    edi
0x65BE71: mov     edi, ecx
0x65BE73: mov     eax, [edi+10h]
0x65BE76: test    eax, eax
0x65BE78: jz      AVCollection_RemoveArrayNode___def_65BE93; jumptable 0065BE93 default case, cases 1-3,9,10,12,14-25,27-32,34,35,37-39,42-45,50-55
0x65BE7E: movsx   ecx, [esp+4+arg_0]
0x65BE83: cmp     ecx, 38h; switch 57 cases
0x65BE86: ja      AVCollection_RemoveArrayNode___def_65BE93; jumptable 0065BE93 default case, cases 1-3,9,10,12,14-25,27-32,34,35,37-39,42-45,50-55
0x65BE8C: movzx   ecx, ds:byte_65BFD4[ecx]
0x65BE93: jmp     ds:jpt_65BE93[ecx*4]; switch jump
0x65BE9A: add     eax, 4; jumptable 0065BE93 case 11
0x65BE9D: jmp     short AVCollection_RemoveArrayNode___CheckIfArrayEmpty; jumptable 0065BE93 case 8
0x65BE9F: add     eax, 8; jumptable 0065BE93 case 40
0x65BEA2: jmp     short AVCollection_RemoveArrayNode___CheckIfArrayEmpty; jumptable 0065BE93 case 8
0x65BEA4: add     eax, 0Ch; jumptable 0065BE93 case 48
0x65BEA7: jmp     short AVCollection_RemoveArrayNode___CheckIfArrayEmpty; jumptable 0065BE93 case 8
0x65BEA9: add     eax, 10h; jumptable 0065BE93 case 36
0x65BEAC: jmp     short AVCollection_RemoveArrayNode___CheckIfArrayEmpty; jumptable 0065BE93 case 8
0x65BEAE: add     eax, 14h; jumptable 0065BE93 case 49
0x65BEB1: jmp     short AVCollection_RemoveArrayNode___CheckIfArrayEmpty; jumptable 0065BE93 case 8
0x65BEB3: add     eax, 18h; jumptable 0065BE93 case 6
0x65BEB6: jmp     short AVCollection_RemoveArrayNode___CheckIfArrayEmpty; jumptable 0065BE93 case 8
0x65BEB8: add     eax, 1Ch; jumptable 0065BE93 case 56
0x65BEBB: jmp     short AVCollection_RemoveArrayNode___CheckIfArrayEmpty; jumptable 0065BE93 case 8
0x65BEBD: add     eax, 20h ; ' '; jumptable 0065BE93 case 46
0x65BEC0: jmp     short AVCollection_RemoveArrayNode___CheckIfArrayEmpty; jumptable 0065BE93 case 8
0x65BEC2: add     eax, 24h ; '$'; jumptable 0065BE93 case 47
0x65BEC5: jmp     short AVCollection_RemoveArrayNode___CheckIfArrayEmpty; jumptable 0065BE93 case 8
0x65BEC7: add     eax, 28h ; '('; jumptable 0065BE93 case 41
0x65BECA: jmp     short AVCollection_RemoveArrayNode___CheckIfArrayEmpty; jumptable 0065BE93 case 8
0x65BECC: add     eax, 2Ch ; ','; jumptable 0065BE93 case 33
0x65BECF: jmp     short AVCollection_RemoveArrayNode___CheckIfArrayEmpty; jumptable 0065BE93 case 8
0x65BED1: add     eax, 30h ; '0'; jumptable 0065BE93 case 26
0x65BED4: jmp     short AVCollection_RemoveArrayNode___CheckIfArrayEmpty; jumptable 0065BE93 case 8
0x65BED6: add     eax, 34h ; '4'; jumptable 0065BE93 case 5
0x65BED9: jmp     short AVCollection_RemoveArrayNode___CheckIfArrayEmpty; jumptable 0065BE93 case 8
0x65BEDB: add     eax, 38h ; '8'; jumptable 0065BE93 case 7
0x65BEDE: jmp     short AVCollection_RemoveArrayNode___CheckIfArrayEmpty; jumptable 0065BE93 case 8
0x65BEE0: add     eax, 3Ch ; '<'; jumptable 0065BE93 case 0
0x65BEE3: jmp     short AVCollection_RemoveArrayNode___CheckIfArrayEmpty; jumptable 0065BE93 case 8
0x65BEE5: add     eax, 40h ; '@'; jumptable 0065BE93 case 4
0x65BEE8: jmp     short AVCollection_RemoveArrayNode___CheckIfArrayEmpty; jumptable 0065BE93 case 8
0x65BEEA: add     eax, 44h ; 'D'; jumptable 0065BE93 case 13
0x65BEED: push    eax; jumptable 0065BE93 case 8
0x65BEEE: mov     ecx, edi
0x65BEF0: call    AVCollection_DeallocArrayNode
0x65BEF5: push    esi
0x65BEF6: mov     esi, [edi+10h]
0x65BEF9: cmp     dword ptr [esi], 0
0x65BEFC: jnz     AVCollection_RemoveArrayNode___Done_
0x65BF02: cmp     dword ptr [esi+4], 0
0x65BF06: jnz     short AVCollection_RemoveArrayNode___Done_
0x65BF08: cmp     dword ptr [esi+8], 0
0x65BF0C: jnz     short AVCollection_RemoveArrayNode___Done_
0x65BF0E: cmp     dword ptr [esi+0Ch], 0
0x65BF12: jnz     short AVCollection_RemoveArrayNode___Done_
0x65BF14: cmp     dword ptr [esi+10h], 0
0x65BF18: jnz     short AVCollection_RemoveArrayNode___Done_
0x65BF1A: cmp     dword ptr [esi+14h], 0
0x65BF1E: jnz     short AVCollection_RemoveArrayNode___Done_
0x65BF20: cmp     dword ptr [esi+18h], 0
0x65BF24: jnz     short AVCollection_RemoveArrayNode___Done_
0x65BF26: cmp     dword ptr [esi+1Ch], 0
0x65BF2A: jnz     short AVCollection_RemoveArrayNode___Done_
0x65BF2C: cmp     dword ptr [esi+20h], 0
0x65BF30: jnz     short AVCollection_RemoveArrayNode___Done_
0x65BF32: cmp     dword ptr [esi+24h], 0
0x65BF36: jnz     short AVCollection_RemoveArrayNode___Done_
0x65BF38: cmp     dword ptr [esi+28h], 0
0x65BF3C: jnz     short AVCollection_RemoveArrayNode___Done_
0x65BF3E: cmp     dword ptr [esi+2Ch], 0
0x65BF42: jnz     short AVCollection_RemoveArrayNode___Done_
0x65BF44: cmp     dword ptr [esi+30h], 0
0x65BF48: jnz     short AVCollection_RemoveArrayNode___Done_
0x65BF4A: cmp     dword ptr [esi+34h], 0
0x65BF4E: jnz     short AVCollection_RemoveArrayNode___Done_
0x65BF50: cmp     dword ptr [esi+38h], 0
0x65BF54: jnz     short AVCollection_RemoveArrayNode___Done_
0x65BF56: cmp     dword ptr [esi+3Ch], 0
0x65BF5A: jnz     short AVCollection_RemoveArrayNode___Done_
0x65BF5C: cmp     dword ptr [esi+40h], 0
0x65BF60: jnz     short AVCollection_RemoveArrayNode___Done_
0x65BF62: cmp     dword ptr [esi+44h], 0
0x65BF66: jnz     short AVCollection_RemoveArrayNode___Done_
0x65BF68: test    esi, esi
0x65BF6A: jz      short loc_65BF7C
0x65BF6C: mov     ecx, esi
0x65BF6E: call    AVCollection_DeleteArray
0x65BF73: push    esi
0x65BF74: call    FormHeapFree
0x65BF79: add     esp, 4
0x65BF7C: mov     dword ptr [edi+10h], 0
