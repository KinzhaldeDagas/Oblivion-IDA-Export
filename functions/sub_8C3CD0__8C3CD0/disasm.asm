0x8C3CD0: push    esi
0x8C3CD1: push    edi
0x8C3CD2: mov     edi, [esp+8+arg_0]
0x8C3CD6: push    edi
0x8C3CD7: mov     esi, ecx
0x8C3CD9: call    sub_8AEA60
0x8C3CDE: test    esi, esi
0x8C3CE0: jz      short loc_8C3D0F
0x8C3CE2: mov     esi, [esi+8]
0x8C3CE5: test    esi, esi
0x8C3CE7: jz      short loc_8C3D0F
0x8C3CE9: add     esi, 10h
0x8C3CEC: jz      short loc_8C3D0F
0x8C3CEE: push    esi
0x8C3CEF: lea     ecx, [edi+10h]
0x8C3CF2: call    sub_47DCD0
0x8C3CF7: lea     eax, [esi+10h]
0x8C3CFA: push    eax
0x8C3CFB: lea     ecx, [edi+20h]
0x8C3CFE: call    sub_47DCD0
0x8C3D03: add     esi, 20h ; ' '
0x8C3D06: push    esi
0x8C3D07: lea     ecx, [edi+30h]
0x8C3D0A: call    sub_47DCD0
0x8C3D0F: pop     edi
0x8C3D10: pop     esi
0x8C3D11: retn    4
