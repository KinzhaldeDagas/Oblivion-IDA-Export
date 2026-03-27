0x773870: mov     eax, [esp+arg_0]
0x773874: push    esi
0x773875: mov     esi, ecx
0x773877: lea     ecx, [eax+eax*2]
0x77387A: lea     edx, [esi+ecx*4]
0x77387D: movzx   ecx, byte ptr [edx+1Dh]
0x773881: push    edi
0x773882: mov     edi, [esp+8+arg_10]
0x773886: mov     [edi], cl
0x773888: movzx   ecx, byte ptr [edx+1Ch]
0x77388C: mov     edi, [esp+8+arg_C]
0x773890: mov     [edi], cl
0x773892: lea     eax, [eax+eax*2+6]
0x773896: mov     ecx, [esi+eax*4]
0x773899: mov     eax, [esp+8+arg_8]
0x77389D: mov     [eax], ecx
0x77389F: mov     edx, [edx+14h]
0x7738A2: mov     ecx, [esp+8+arg_4]
0x7738A6: cmp     edx, 13h
0x7738A9: pop     edi
0x7738AA: mov     [ecx], edx
0x7738AC: setnz   al
0x7738AF: pop     esi
0x7738B0: retn    14h
