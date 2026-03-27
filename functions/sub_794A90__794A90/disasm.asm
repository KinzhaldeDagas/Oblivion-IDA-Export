0x794A90: mov     ax, [esp+arg_0]
0x794A95: push    esi
0x794A96: mov     esi, ecx
0x794A98: mov     [esi+24h], ax
0x794A9C: mov     word ptr [esi+26h], 0
0x794AA2: mov     ecx, [esi+2Ch]
0x794AA5: test    ecx, ecx
0x794AA7: push    edi
0x794AA8: movzx   edi, ax
0x794AAB: jz      short loc_794AB9
0x794AAD: mov     eax, [esi+30h]
0x794AB0: sub     eax, ecx
0x794AB2: sar     eax, 2
0x794AB5: cmp     edi, eax
0x794AB7: jb      short loc_794ACD
0x794AB9: call    __invalid_parameter_noinfo
0x794ABE: mov     eax, [esi+2Ch]
0x794AC1: mov     dword ptr [eax+edi*4], 0
0x794AC8: pop     edi
0x794AC9: pop     esi
0x794ACA: retn    4
0x794ACD: mov     dword ptr [ecx+edi*4], 0
0x794AD4: pop     edi
0x794AD5: pop     esi
0x794AD6: retn    4
