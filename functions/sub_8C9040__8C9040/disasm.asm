0x8C9040: cmp     [esp+arg_0], 0
0x8C9045: push    edi
0x8C9046: mov     edi, ecx
0x8C9048: jz      short loc_8C906A
0x8C904A: push    esi
0x8C904B: mov     esi, [edi+0Ch]
0x8C904E: test    esi, esi
0x8C9050: jz      short loc_8C9062
0x8C9052: mov     ecx, esi
0x8C9054: call    sub_8C8DB0
0x8C9059: push    esi
0x8C905A: call    FormHeapFree
0x8C905F: add     esp, 4
0x8C9062: mov     dword ptr [edi+0Ch], 0
0x8C9069: pop     esi
0x8C906A: pop     edi
0x8C906B: retn    4
