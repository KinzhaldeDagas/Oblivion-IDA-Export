0x9A9040: cmp     byte_B4295B, 0
0x9A9047: push    esi
0x9A9048: mov     esi, [esp+4+arg_0]
0x9A904C: push    edi
0x9A904D: mov     edi, [esi+14h]
0x9A9050: jnz     short loc_9A9057
0x9A9052: call    sub_783C70
0x9A9057: and     edi, 0FFh
0x9A905D: cmp     dword_B428D8[edi*4], 1
0x9A9065: jnz     short loc_9A907F
0x9A9067: mov     eax, [esp+8+arg_4]
0x9A906B: movzx   ecx, byte ptr [eax+0Ch]
0x9A906F: pop     edi
0x9A9070: mov     dword_BAA930, ecx
0x9A9076: mov     eax, offset dword_BAA930
0x9A907B: pop     esi
0x9A907C: retn    8
0x9A907F: cmp     byte_B4295B, 0
0x9A9086: mov     edi, [esi+14h]
0x9A9089: jnz     short loc_9A9090
0x9A908B: call    sub_783C70
0x9A9090: and     edi, 0FFh
0x9A9096: cmp     dword_B428D8[edi*4], 2
0x9A909E: jz      loc_9A92D0
0x9A90A4: cmp     byte_B4295B, 0
0x9A90AB: mov     edi, [esi+14h]
0x9A90AE: jnz     short loc_9A90B5
0x9A90B0: call    sub_783C70
0x9A90B5: and     edi, 0FFh
0x9A90BB: cmp     dword_B428D8[edi*4], 3
0x9A90C3: jnz     short loc_9A90EA
0x9A90C5: mov     edx, [esp+8+arg_4]
0x9A90C9: mov     eax, [edx+0Ch]
0x9A90CC: pop     edi
0x9A90CD: mov     dword_BAA934, eax
0x9A90D2: mov     dword_BAA938, eax
0x9A90D7: mov     dword_BAA93C, eax
0x9A90DC: mov     dword_BAA940, eax
0x9A90E1: mov     eax, offset dword_BAA934
0x9A90E6: pop     esi
0x9A90E7: retn    8
0x9A90EA: cmp     byte_B4295B, 0
0x9A90F1: mov     edi, [esi+14h]
0x9A90F4: jnz     short loc_9A90FB
0x9A90F6: call    sub_783C70
0x9A90FB: and     edi, 0FFh
0x9A9101: cmp     dword_B428D8[edi*4], 4
0x9A9109: jnz     short loc_9A913A
0x9A910B: mov     eax, [esp+8+arg_4]
0x9A910F: fld     dword ptr [eax+0Ch]
0x9A9112: pop     edi
0x9A9113: fstp    flt_BAA990
0x9A9119: mov     eax, offset flt_BAA990
0x9A911E: fld     flt_BAA990
0x9A9124: pop     esi
0x9A9125: fst     flt_BAA994
0x9A912B: fst     flt_BAA998
0x9A9131: fstp    flt_BAA99C
0x9A9137: retn    8
0x9A913A: mov     ecx, esi
0x9A913C: call    sub_783340
0x9A9141: test    al, al
0x9A9143: jz      short loc_9A9178
0x9A9145: mov     ecx, [esp+8+arg_4]
0x9A9149: mov     eax, [ecx+10h]
0x9A914C: fld     dword ptr [eax]
0x9A914E: pop     edi
0x9A914F: fstp    flt_BAA990
0x9A9155: pop     esi
0x9A9156: fld     dword ptr [eax+4]
0x9A9159: fstp    flt_BAA994
0x9A915F: fld     dword ptr [eax]
0x9A9161: fstp    flt_BAA998
0x9A9167: fld     dword ptr [eax+4]
0x9A916A: mov     eax, offset flt_BAA990
0x9A916F: fstp    flt_BAA99C
0x9A9175: retn    8
0x9A9178: mov     ecx, esi
0x9A917A: call    sub_783370
0x9A917F: test    al, al
0x9A9181: jz      short loc_9A91B6
0x9A9183: mov     edx, [esp+8+arg_4]
0x9A9187: mov     eax, [edx+10h]
0x9A918A: fld     dword ptr [eax]
0x9A918C: pop     edi
0x9A918D: fstp    flt_BAA990
0x9A9193: pop     esi
0x9A9194: fld     dword ptr [eax+4]
0x9A9197: fstp    flt_BAA994
0x9A919D: fld     dword ptr [eax+8]
0x9A91A0: mov     eax, offset flt_BAA990
0x9A91A5: fstp    flt_BAA998
0x9A91AB: fld1
0x9A91AD: fstp    flt_BAA99C
0x9A91B3: retn    8
0x9A91B6: mov     ecx, esi
0x9A91B8: call    sub_7833A0
0x9A91BD: test    al, al
0x9A91BF: jz      short loc_9A91F5
0x9A91C1: mov     eax, [esp+8+arg_4]
0x9A91C5: mov     eax, [eax+10h]
0x9A91C8: fld     dword ptr [eax]
0x9A91CA: pop     edi
0x9A91CB: fstp    flt_BAA990
0x9A91D1: pop     esi
0x9A91D2: fld     dword ptr [eax+4]
0x9A91D5: fstp    flt_BAA994
0x9A91DB: fld     dword ptr [eax+8]
0x9A91DE: fstp    flt_BAA998
0x9A91E4: fld     dword ptr [eax+0Ch]
0x9A91E7: mov     eax, offset flt_BAA990
0x9A91EC: fstp    flt_BAA99C
0x9A91F2: retn    8
0x9A91F5: mov     ecx, esi
0x9A91F7: call    sub_782DE0
0x9A91FC: test    al, al
0x9A91FE: jz      short loc_9A9275
0x9A9200: mov     ecx, [esp+8+arg_4]
0x9A9204: mov     eax, [ecx+10h]
0x9A9207: fld     dword ptr [eax]
0x9A9209: pop     edi
0x9A920A: fstp    flt_BAA9A0
0x9A9210: pop     esi
0x9A9211: fld     dword ptr [eax+4]
0x9A9214: fstp    flt_BAA9A4
0x9A921A: fld     dword ptr [eax+8]
0x9A921D: fstp    flt_BAA9A8
0x9A9223: fldz
0x9A9225: fst     flt_BAA9AC
0x9A922B: fld     dword ptr [eax+0Ch]
0x9A922E: fstp    flt_BAA9B0
0x9A9234: fld     dword ptr [eax+10h]
0x9A9237: fstp    flt_BAA9B4
0x9A923D: fld     dword ptr [eax+14h]
0x9A9240: fstp    flt_BAA9B8
0x9A9246: fst     flt_BAA9BC
0x9A924C: fld     dword ptr [eax+18h]
0x9A924F: fstp    flt_BAA9C0
0x9A9255: fld     dword ptr [eax+1Ch]
0x9A9258: fstp    flt_BAA9C4
0x9A925E: fld     dword ptr [eax+20h]
0x9A9261: mov     eax, offset flt_BAA9A0
0x9A9266: fstp    flt_BAA9C8
0x9A926C: fstp    flt_BAA9CC
0x9A9272: retn    8
0x9A9275: mov     ecx, esi
0x9A9277: call    sub_782E10
0x9A927C: test    al, al
0x9A927E: jz      short loc_9A928C
0x9A9280: mov     edx, [esp+8+arg_4]
0x9A9284: mov     eax, [edx+10h]
0x9A9287: pop     edi
0x9A9288: pop     esi
0x9A9289: retn    8
0x9A928C: mov     ecx, esi
0x9A928E: call    sub_7833D0
0x9A9293: test    al, al
0x9A9295: jz      short loc_9A92C9
0x9A9297: mov     eax, [esp+8+arg_4]
0x9A929B: fld     dword ptr [eax+0Ch]
0x9A929E: pop     edi
0x9A929F: fstp    flt_BAA990
0x9A92A5: pop     esi
0x9A92A6: fld     dword ptr [eax+10h]
0x9A92A9: fstp    flt_BAA994
0x9A92AF: fld     dword ptr [eax+14h]
0x9A92B2: fstp    flt_BAA998
0x9A92B8: fld     dword ptr [eax+18h]
0x9A92BB: mov     eax, offset flt_BAA990
0x9A92C0: fstp    flt_BAA99C
0x9A92C6: retn    8
0x9A92C9: mov     ecx, esi
0x9A92CB: call    sub_9A32B0
0x9A92D0: pop     edi
0x9A92D1: xor     eax, eax
0x9A92D3: pop     esi
0x9A92D4: retn    8
