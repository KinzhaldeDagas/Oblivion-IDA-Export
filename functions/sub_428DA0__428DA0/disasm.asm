0x428DA0: push    ebx
0x428DA1: mov     ebx, [esp+4+arg_0]
0x428DA5: push    esi
0x428DA6: push    edi
0x428DA7: push    0; int
0x428DA9: push    offset ??_R0?AVExtraStartingPosition@@@8; struct TypeDescriptor *
0x428DAE: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x428DB3: push    0; int
0x428DB5: push    ebx; void *
0x428DB6: mov     edi, ecx
0x428DB8: call    OblivionDynamicCast
0x428DBD: mov     esi, eax
0x428DBF: add     esp, 14h
0x428DC2: test    esi, esi
0x428DC4: jnz     short loc_428DCE
0x428DC6: pop     edi
0x428DC7: pop     esi
0x428DC8: mov     al, 1
0x428DCA: pop     ebx
0x428DCB: retn    4
0x428DCE: push    ebx
0x428DCF: mov     ecx, edi
0x428DD1: call    BSExtraData_CompareTo
0x428DD6: test    al, al
0x428DD8: jnz     short loc_428DC6
0x428DDA: mov     eax, 18h
0x428DDF: lea     ecx, [esi+0Ch]
0x428DE2: lea     edx, [edi+0Ch]
0x428DE5: mov     esi, [edx]
0x428DE7: cmp     esi, [ecx]
0x428DE9: jnz     short loc_428DFD
0x428DEB: sub     eax, 4
0x428DEE: add     ecx, 4
0x428DF1: add     edx, 4
0x428DF4: cmp     eax, 4
0x428DF7: jnb     short loc_428DE5
0x428DF9: test    eax, eax
0x428DFB: jz      short loc_428E63
0x428DFD: movzx   esi, byte ptr [edx]
0x428E00: movzx   edi, byte ptr [ecx]
0x428E03: sub     esi, edi
0x428E05: jnz     short loc_428E4C
0x428E07: sub     eax, 1
0x428E0A: add     ecx, 1
0x428E0D: add     edx, 1
0x428E10: test    eax, eax
0x428E12: jz      short loc_428E63
0x428E14: movzx   esi, byte ptr [edx]
0x428E17: movzx   edi, byte ptr [ecx]
0x428E1A: sub     esi, edi
0x428E1C: jnz     short loc_428E4C
0x428E1E: sub     eax, 1
0x428E21: add     ecx, 1
0x428E24: add     edx, 1
0x428E27: test    eax, eax
0x428E29: jz      short loc_428E63
0x428E2B: movzx   esi, byte ptr [edx]
0x428E2E: movzx   edi, byte ptr [ecx]
0x428E31: sub     esi, edi
0x428E33: jnz     short loc_428E4C
0x428E35: sub     eax, 1
0x428E38: add     ecx, 1
0x428E3B: add     edx, 1
0x428E3E: test    eax, eax
0x428E40: jz      short loc_428E63
0x428E42: movzx   esi, byte ptr [edx]
0x428E45: movzx   eax, byte ptr [ecx]
0x428E48: sub     esi, eax
0x428E4A: jz      short loc_428E63
0x428E4C: test    esi, esi
0x428E4E: mov     eax, 1
0x428E53: jg      short loc_428E65
0x428E55: or      eax, 0FFFFFFFFh
0x428E58: pop     edi
0x428E59: test    eax, eax
0x428E5B: pop     esi
0x428E5C: setnz   al
0x428E5F: pop     ebx
0x428E60: retn    4
0x428E63: xor     eax, eax
0x428E65: pop     edi
0x428E66: test    eax, eax
0x428E68: pop     esi
0x428E69: setnz   al
0x428E6C: pop     ebx
0x428E6D: retn    4
