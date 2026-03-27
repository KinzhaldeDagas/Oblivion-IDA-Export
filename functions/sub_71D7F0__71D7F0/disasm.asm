0x71D7F0: push    ecx
0x71D7F1: mov     eax, [esp+4+arg_4]
0x71D7F5: test    eax, eax
0x71D7F7: push    edi
0x71D7F8: mov     edi, [esp+8+arg_C]
0x71D7FC: jbe     loc_71D8CA
0x71D802: mov     ecx, [esp+8+arg_0]
0x71D806: push    ebx
0x71D807: push    ebp
0x71D808: push    esi
0x71D809: mov     esi, [esp+14h+arg_18]
0x71D80D: mov     [esp+14h+var_4], eax
0x71D811: mov     eax, [esp+14h+arg_14]
0x71D815: mov     ebp, 1
0x71D81A: lea     ebx, [ebx+0]
0x71D820: test    ecx, ecx
0x71D822: jbe     loc_71D8BD
0x71D828: mov     [esp+14h+arg_4], ecx
0x71D82C: lea     esp, [esp+0]
0x71D830: mov     dl, [esi]
0x71D832: mov     bl, [esi+ebp]
0x71D835: add     esi, ebp
0x71D837: movzx   ecx, byte ptr [esi+ebp]
0x71D83B: add     esi, ebp
0x71D83D: mov     byte ptr [esp+14h+arg_C], cl
0x71D841: movzx   ecx, byte ptr [eax+17h]
0x71D845: add     esi, ebp
0x71D847: mov     ebp, 0FFh
0x71D84C: shr     ebp, cl
0x71D84E: movzx   ecx, byte ptr [eax+13h]
0x71D852: shl     ebp, cl
0x71D854: movzx   ecx, byte ptr [eax+14h]
0x71D858: and     bp, [eax+0Ch]
0x71D85C: shr     dl, cl
0x71D85E: movzx   ecx, byte ptr [eax+10h]
0x71D862: movzx   dx, dl
0x71D866: shl     dx, cl
0x71D869: movzx   ecx, byte ptr [eax+16h]
0x71D86D: and     dx, [eax]
0x71D870: add     edi, 2
0x71D873: or      bp, dx
0x71D876: mov     dl, byte ptr [esp+14h+arg_C]
0x71D87A: shr     dl, cl
0x71D87C: movzx   ecx, byte ptr [eax+12h]
0x71D880: movzx   dx, dl
0x71D884: shl     dx, cl
0x71D887: movzx   ecx, byte ptr [eax+15h]
0x71D88B: and     dx, [eax+8]
0x71D88F: shr     bl, cl
0x71D891: movzx   ecx, byte ptr [eax+11h]
0x71D895: or      bp, dx
0x71D898: movzx   dx, bl
0x71D89C: shl     dx, cl
0x71D89F: and     dx, [eax+4]
0x71D8A3: or      bp, dx
0x71D8A6: mov     [edi-2], bp
0x71D8AA: mov     ebp, 1
0x71D8AF: sub     [esp+14h+arg_4], ebp
0x71D8B3: jnz     loc_71D830
0x71D8B9: mov     ecx, [esp+14h+arg_0]
0x71D8BD: sub     [esp+14h+var_4], ebp
0x71D8C1: jnz     loc_71D820
0x71D8C7: pop     esi
0x71D8C8: pop     ebp
0x71D8C9: pop     ebx
0x71D8CA: pop     edi
0x71D8CB: pop     ecx
0x71D8CC: retn
