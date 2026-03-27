0x9A92E0: push    ebx
0x9A92E1: push    esi
0x9A92E2: mov     esi, [esp+8+arg_0]
0x9A92E6: mov     eax, [esi+28h]
0x9A92E9: xor     edx, edx
0x9A92EB: div     dword ptr [esi+2Ch]
0x9A92EE: cmp     byte_B4295B, 0
0x9A92F5: push    edi
0x9A92F6: mov     edi, [esi+14h]
0x9A92F9: mov     ebx, eax
0x9A92FB: jnz     short loc_9A9302
0x9A92FD: call    sub_783C70
0x9A9302: and     edi, 0FFh
0x9A9308: mov     edi, dword_B428D8[edi*4]
0x9A930F: lea     eax, [ebx-1]; switch 16 cases
0x9A9312: cmp     eax, 0Fh
0x9A9315: ja      def_9A9322; jumptable 009A9322 default case, cases 5-7,10,11,13-15
0x9A931B: movzx   eax, ds:byte_9A9604[eax]
0x9A9322: jmp     ds:jpt_9A9322[eax*4]; switch jump
0x9A9329: cmp     edi, 1; jumptable 009A9322 case 1
0x9A932C: jnz     short loc_9A9345
0x9A932E: mov     ecx, [esi+30h]
0x9A9331: movzx   edx, byte ptr [ecx]
0x9A9334: pop     edi
0x9A9335: pop     esi
0x9A9336: mov     dword_BAA930, edx
0x9A933C: mov     eax, offset dword_BAA930
0x9A9341: pop     ebx
0x9A9342: retn    4
0x9A9345: cmp     edi, 3
0x9A9348: jnz     short loc_9A936E
0x9A934A: mov     eax, [esi+30h]
0x9A934D: mov     eax, [eax]
0x9A934F: pop     edi
0x9A9350: pop     esi
0x9A9351: mov     dword_BAA934, eax
0x9A9356: mov     dword_BAA938, eax
0x9A935B: mov     dword_BAA93C, eax
0x9A9360: mov     dword_BAA940, eax
0x9A9365: mov     eax, offset dword_BAA934
0x9A936A: pop     ebx
0x9A936B: retn    4
0x9A936E: mov     ecx, [esi+30h]
0x9A9371: fld     dword ptr [ecx]
0x9A9373: pop     edi
0x9A9374: fstp    flt_BAA990
0x9A937A: pop     esi
0x9A937B: fld     flt_BAA990
0x9A9381: mov     eax, offset flt_BAA990
0x9A9386: fst     flt_BAA994
0x9A938C: pop     ebx
0x9A938D: fst     flt_BAA998
0x9A9393: fstp    flt_BAA99C
0x9A9399: retn    4
0x9A939C: cmp     edi, 3; jumptable 009A9322 case 2
0x9A939F: mov     esi, [esi+30h]
0x9A93A2: jnz     short loc_9A93CA
0x9A93A4: mov     eax, [esi]
0x9A93A6: mov     dword_BAA934, eax
0x9A93AB: mov     esi, [esi+4]
0x9A93AE: pop     edi
0x9A93AF: mov     dword_BAA938, esi
0x9A93B5: mov     dword_BAA940, esi
0x9A93BB: pop     esi
0x9A93BC: mov     dword_BAA93C, eax
0x9A93C1: mov     eax, offset dword_BAA934
0x9A93C6: pop     ebx
0x9A93C7: retn    4
0x9A93CA: fld     dword ptr [esi]
0x9A93CC: pop     edi
0x9A93CD: fstp    flt_BAA990
0x9A93D3: mov     eax, offset flt_BAA990
0x9A93D8: fld     dword ptr [esi+4]
0x9A93DB: pop     esi
0x9A93DC: fstp    flt_BAA994
0x9A93E2: pop     ebx
0x9A93E3: fld     flt_BAA990
0x9A93E9: fstp    flt_BAA998
0x9A93EF: fld     flt_BAA994
0x9A93F5: fstp    flt_BAA99C
0x9A93FB: retn    4
0x9A93FE: cmp     edi, 3; jumptable 009A9322 case 3
0x9A9401: mov     esi, [esi+30h]
0x9A9404: jnz     short loc_9A9434
0x9A9406: mov     edx, [esi]
0x9A9408: mov     dword_BAA934, edx
0x9A940E: mov     eax, [esi+4]
0x9A9411: mov     dword_BAA938, eax
0x9A9416: mov     ecx, [esi+8]
0x9A9419: pop     edi
0x9A941A: pop     esi
0x9A941B: mov     dword_BAA93C, ecx
0x9A9421: mov     dword_BAA940, 1
0x9A942B: mov     eax, offset dword_BAA934
0x9A9430: pop     ebx
0x9A9431: retn    4
0x9A9434: fld     dword ptr [esi]
0x9A9436: pop     edi
0x9A9437: fstp    flt_BAA990
0x9A943D: mov     eax, offset flt_BAA990
0x9A9442: fld     dword ptr [esi+4]
0x9A9445: fstp    flt_BAA994
0x9A944B: fld     dword ptr [esi+8]
0x9A944E: pop     esi
0x9A944F: fstp    flt_BAA998
0x9A9455: pop     ebx
0x9A9456: fld1
0x9A9458: fstp    flt_BAA99C
0x9A945E: retn    4
0x9A9461: mov     eax, [esi+30h]; jumptable 009A9322 cases 4,16
0x9A9464: pop     edi
0x9A9465: pop     esi
0x9A9466: pop     ebx
0x9A9467: retn    4
0x9A946A: mov     esi, [esi+30h]; jumptable 009A9322 case 8
0x9A946D: fld     dword ptr [esi]
0x9A946F: fstp    flt_BAA9A0
0x9A9475: fld     dword ptr [esi+4]
0x9A9478: fstp    flt_BAA9A4
0x9A947E: fld     dword ptr [esi+8]
0x9A9481: fstp    flt_BAA9A8
0x9A9487: fld     dword ptr [esi+0Ch]
0x9A948A: fstp    flt_BAA9AC
0x9A9490: fld     dword ptr [esi+10h]
0x9A9493: fstp    flt_BAA9B0
0x9A9499: fld     dword ptr [esi+14h]
0x9A949C: fstp    flt_BAA9B4
0x9A94A2: fld     dword ptr [esi+18h]
0x9A94A5: fstp    flt_BAA9B8
0x9A94AB: fld     dword ptr [esi+1Ch]
0x9A94AE: fstp    flt_BAA9BC
0x9A94B4: fldz
0x9A94B6: fst     flt_BAA9C0
0x9A94BC: fst     flt_BAA9C4
0x9A94C2: fst     flt_BAA9C8
0x9A94C8: fst     flt_BAA9CC
0x9A94CE: pop     edi
0x9A94CF: fst     flt_BAA9D0
0x9A94D5: fst     flt_BAA9D4
0x9A94DB: pop     esi
0x9A94DC: fst     flt_BAA9D8
0x9A94E2: mov     eax, offset flt_BAA9A0
0x9A94E7: fstp    flt_BAA9DC
0x9A94ED: pop     ebx
0x9A94EE: retn    4
0x9A94F1: mov     esi, [esi+30h]; jumptable 009A9322 case 9
0x9A94F4: fld     dword ptr [esi]
0x9A94F6: fstp    flt_BAA9A0
0x9A94FC: fld     dword ptr [esi+4]
0x9A94FF: fstp    flt_BAA9A4
0x9A9505: fld     dword ptr [esi+8]
0x9A9508: fstp    flt_BAA9A8
0x9A950E: fldz
0x9A9510: fst     flt_BAA9AC
0x9A9516: fld     dword ptr [esi+0Ch]
0x9A9519: fstp    flt_BAA9B0
0x9A951F: fld     dword ptr [esi+10h]
0x9A9522: fstp    flt_BAA9B4
0x9A9528: fld     dword ptr [esi+14h]
0x9A952B: fstp    flt_BAA9B8
0x9A9531: fst     flt_BAA9BC
0x9A9537: fld     dword ptr [esi+18h]
0x9A953A: fstp    flt_BAA9C0
0x9A9540: fld     dword ptr [esi+1Ch]
0x9A9543: fstp    flt_BAA9C4
0x9A9549: fld     dword ptr [esi+20h]
0x9A954C: fstp    flt_BAA9C8
0x9A9552: jmp     loc_9A94C8
0x9A9557: mov     esi, [esi+30h]; jumptable 009A9322 case 12
0x9A955A: fld     dword ptr [esi]
0x9A955C: fstp    flt_BAA9A0
0x9A9562: fld     dword ptr [esi+4]
0x9A9565: fstp    flt_BAA9A4
0x9A956B: fld     dword ptr [esi+8]
0x9A956E: fstp    flt_BAA9A8
0x9A9574: fld     dword ptr [esi+0Ch]
0x9A9577: fstp    flt_BAA9AC
0x9A957D: fld     dword ptr [esi+10h]
0x9A9580: fstp    flt_BAA9B0
0x9A9586: fld     dword ptr [esi+14h]
0x9A9589: fstp    flt_BAA9B4
0x9A958F: fld     dword ptr [esi+18h]
0x9A9592: fstp    flt_BAA9B8
0x9A9598: fld     dword ptr [esi+1Ch]
0x9A959B: fstp    flt_BAA9BC
0x9A95A1: fld     dword ptr [esi+20h]
0x9A95A4: fstp    flt_BAA9C0
0x9A95AA: fld     dword ptr [esi+24h]
0x9A95AD: fstp    flt_BAA9C4
0x9A95B3: fld     dword ptr [esi+28h]
0x9A95B6: fstp    flt_BAA9C8
0x9A95BC: fld     dword ptr [esi+2Ch]
0x9A95BF: fstp    flt_BAA9CC
0x9A95C5: fldz
0x9A95C7: jmp     loc_9A94CE
0x9A95CC: cmp     dword ptr [esi+2Ch], 4; jumptable 009A9322 default case, cases 5-7,10,11,13-15
0x9A95D0: jnz     short loc_9A95DB
0x9A95D2: test    bl, 3
0x9A95D5: jz      loc_9A9461; jumptable 009A9322 cases 4,16
0x9A95DB: pop     edi
0x9A95DC: pop     esi
0x9A95DD: xor     eax, eax
0x9A95DF: pop     ebx
0x9A95E0: retn    4
