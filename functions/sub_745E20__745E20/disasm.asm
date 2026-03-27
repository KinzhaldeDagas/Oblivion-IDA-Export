0x745E20: push    ecx
0x745E21: mov     edx, [eax+1448h]
0x745E27: push    ebp
0x745E28: push    esi
0x745E29: mov     esi, [esp+0Ch+arg_0]
0x745E2D: mov     ebp, [eax+esi*4+0B54h]
0x745E34: lea     ecx, [esi+esi]
0x745E37: cmp     ecx, edx
0x745E39: mov     [esp+0Ch+var_4], ebp
0x745E3D: jg      loc_745EDB
0x745E43: push    ebx
0x745E44: jge     short loc_745E7A
0x745E46: mov     esi, [eax+ecx*4+0B58h]
0x745E4D: mov     ebp, [eax+ecx*4+0B54h]
0x745E54: movzx   edx, word ptr [edi+esi*4]
0x745E58: movzx   ebx, word ptr [edi+ebp*4]
0x745E5C: cmp     dx, bx
0x745E5F: jb      short loc_745E73
0x745E61: jnz     short loc_745E76
0x745E63: mov     dl, [esi+eax+1450h]
0x745E6A: cmp     dl, [eax+ebp+1450h]
0x745E71: ja      short loc_745E76
0x745E73: add     ecx, 1
0x745E76: mov     ebp, [esp+10h+var_4]
0x745E7A: mov     esi, [eax+ecx*4+0B54h]
0x745E81: movzx   edx, word ptr [edi+ebp*4]
0x745E85: movzx   ebx, word ptr [edi+esi*4]
0x745E89: cmp     dx, bx
0x745E8C: jb      short loc_745EBB
0x745E8E: jnz     short loc_745EA0
0x745E90: mov     dl, [eax+ebp+1450h]
0x745E97: cmp     dl, [esi+eax+1450h]
0x745E9E: jbe     short loc_745ECB
0x745EA0: mov     edx, [esp+10h+arg_0]
0x745EA4: mov     [eax+edx*4+0B54h], esi
0x745EAB: mov     edx, [eax+1448h]
0x745EB1: mov     [esp+10h+arg_0], ecx
0x745EB5: add     ecx, ecx
0x745EB7: cmp     ecx, edx
0x745EB9: jle     short loc_745E44
0x745EBB: mov     ecx, [esp+10h+arg_0]
0x745EBF: pop     ebx
0x745EC0: pop     esi
0x745EC1: mov     [eax+ecx*4+0B54h], ebp
0x745EC8: pop     ebp
0x745EC9: pop     ecx
0x745ECA: retn
0x745ECB: mov     edx, [esp+10h+arg_0]
0x745ECF: pop     ebx
0x745ED0: pop     esi
0x745ED1: mov     [eax+edx*4+0B54h], ebp
0x745ED8: pop     ebp
0x745ED9: pop     ecx
0x745EDA: retn
0x745EDB: mov     [eax+esi*4+0B54h], ebp
0x745EE2: pop     esi
0x745EE3: pop     ebp
0x745EE4: pop     ecx
0x745EE5: retn
