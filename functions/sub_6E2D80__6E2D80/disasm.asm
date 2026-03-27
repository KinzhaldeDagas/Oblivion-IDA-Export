0x6E2D80: push    esi
0x6E2D81: mov     esi, ecx
0x6E2D83: mov     al, [esi+8]
0x6E2D86: shr     al, 5
0x6E2D89: test    al, 1
0x6E2D8B: jz      short loc_6E2D98
0x6E2D8D: fld     dword ptr ds:0A7A164h
0x6E2D93: fstp    dword ptr [esi+28h]
0x6E2D96: jmp     short loc_6E2DBE
0x6E2D98: fld     [esp+4+arg_0]
0x6E2D9C: push    ecx
0x6E2D9D: fstp    [esp+8+var_8]; float
0x6E2DA0: call    sub_6C36B0
0x6E2DA5: test    al, al
0x6E2DA7: jz      short loc_6E2DBE
0x6E2DA9: mov     ecx, [esi+3Ch]
0x6E2DAC: test    ecx, ecx
0x6E2DAE: jz      short loc_6E2DF8
0x6E2DB0: mov     edx, [ecx]
0x6E2DB2: mov     eax, [edx+94h]
0x6E2DB8: call    eax
0x6E2DBA: test    al, al
0x6E2DBC: jz      short loc_6E2DF8
0x6E2DBE: mov     ecx, [esi+3Ch]
0x6E2DC1: test    ecx, ecx
0x6E2DC3: jz      short loc_6E2DF8
0x6E2DC5: mov     edx, [ecx]
0x6E2DC7: fld     dword ptr [esi+28h]
0x6E2DCA: mov     edx, [edx+5Ch]
0x6E2DCD: lea     eax, [esp+4+arg_0]
0x6E2DD1: push    eax
0x6E2DD2: mov     eax, [esi+30h]
0x6E2DD5: push    eax
0x6E2DD6: push    ecx
0x6E2DD7: fstp    [esp+10h+var_10]
0x6E2DDA: call    edx
0x6E2DDC: test    al, al
0x6E2DDE: jz      short loc_6E2DF8
0x6E2DE0: mov     ecx, [esi+44h]
0x6E2DE3: test    ecx, ecx
0x6E2DE5: jz      short loc_6E2DF8
0x6E2DE7: fld     [esp+4+arg_0]
0x6E2DEB: mov     eax, [esi+48h]
0x6E2DEE: push    ecx
0x6E2DEF: fstp    [esp+8+var_8]; float
0x6E2DF2: push    eax; int
0x6E2DF3: call    sub_730090
0x6E2DF8: pop     esi
0x6E2DF9: retn    4
