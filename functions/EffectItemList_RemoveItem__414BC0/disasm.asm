0x414BC0: push    edi
0x414BC1: mov     edi, ecx
0x414BC3: lea     ecx, [edi+4]
0x414BC6: mov     eax, ecx
0x414BC8: test    eax, eax
0x414BCA: jz      short loc_414BF7
0x414BCC: push    esi
0x414BCD: mov     esi, [esp+8+arg_0]
0x414BD1: cmp     [eax], esi
0x414BD3: jz      short loc_414BE1
0x414BD5: mov     eax, [eax+4]
0x414BD8: test    eax, eax
0x414BDA: jnz     short loc_414BD1
0x414BDC: pop     esi
0x414BDD: pop     edi
0x414BDE: retn    4
0x414BE1: push    esi
0x414BE2: call    BSSimpleList_Remove
0x414BE7: mov     ecx, esi
0x414BE9: call    EffectItem_IsHostile
0x414BEE: test    al, al
0x414BF0: jz      short loc_414BF6
0x414BF2: add     dword ptr [edi+0Ch], 0FFFFFFFFh
0x414BF6: pop     esi
0x414BF7: pop     edi
0x414BF8: retn    4
