0x9A6370: push    ebx
0x9A6371: push    esi
0x9A6372: mov     esi, [esp+8+arg_4]
0x9A6376: xor     ebx, ebx
0x9A6378: cmp     byte_B4295B, bl
0x9A637E: push    edi
0x9A637F: mov     edi, [esi+14h]
0x9A6382: jnz     short loc_9A6389
0x9A6384: call    sub_783C70
0x9A6389: and     edi, 0FFh
0x9A638F: cmp     dword_B428D8[edi*4], 1
0x9A6397: jnz     short loc_9A63B1
0x9A6399: mov     eax, [esi+30h]
0x9A639C: movzx   ecx, byte ptr [eax]
0x9A639F: push    0
0x9A63A1: mov     dword_BAA930, ecx
0x9A63A7: push    offset dword_BAA930
0x9A63AC: jmp     loc_9A658B
0x9A63B1: cmp     byte_B4295B, bl
0x9A63B7: mov     edi, [esi+14h]
0x9A63BA: jnz     short loc_9A63C1
0x9A63BC: call    sub_783C70
0x9A63C1: and     edi, 0FFh
0x9A63C7: cmp     dword_B428D8[edi*4], 3
0x9A63CF: jnz     short loc_9A63F6
0x9A63D1: mov     ecx, [esi+30h]
0x9A63D4: mov     eax, [ecx]
0x9A63D6: push    0
0x9A63D8: mov     dword_BAA934, eax
0x9A63DD: mov     dword_BAA938, eax
0x9A63E2: mov     dword_BAA93C, eax
0x9A63E7: mov     dword_BAA940, eax
0x9A63EC: push    offset dword_BAA934
0x9A63F1: jmp     loc_9A658B
0x9A63F6: cmp     byte_B4295B, bl
0x9A63FC: mov     edi, [esi+14h]
0x9A63FF: jnz     short loc_9A6406
0x9A6401: call    sub_783C70
0x9A6406: and     edi, 0FFh
0x9A640C: cmp     dword_B428D8[edi*4], 4
0x9A6414: jnz     short loc_9A6438
0x9A6416: mov     ecx, [esi+30h]
0x9A6419: fld     dword ptr [ecx]
0x9A641B: fstp    flt_BAA990
0x9A6421: fld     flt_BAA990
0x9A6427: fst     flt_BAA994
0x9A642D: fst     flt_BAA998
0x9A6433: jmp     loc_9A657E
0x9A6438: cmp     byte_B4295B, bl
0x9A643E: mov     edi, [esi+14h]
0x9A6441: jnz     short loc_9A6448
0x9A6443: call    sub_783C70
0x9A6448: and     edi, 0FFh
0x9A644E: cmp     dword_B428D8[edi*4], 5
0x9A6456: jnz     short loc_9A6483
0x9A6458: mov     eax, [esi+30h]
0x9A645B: fld     dword ptr [eax]
0x9A645D: fstp    flt_BAA990
0x9A6463: fld     dword ptr [eax+4]
0x9A6466: fstp    flt_BAA994
0x9A646C: fld     flt_BAA990
0x9A6472: fstp    flt_BAA998
0x9A6478: fld     flt_BAA994
0x9A647E: jmp     loc_9A657E
0x9A6483: mov     ecx, esi
0x9A6485: call    sub_783370
0x9A648A: test    al, al
0x9A648C: jz      short loc_9A64B2
0x9A648E: mov     eax, [esi+30h]
0x9A6491: fld     dword ptr [eax]
0x9A6493: fstp    flt_BAA990
0x9A6499: fld     dword ptr [eax+4]
0x9A649C: fstp    flt_BAA994
0x9A64A2: fld     dword ptr [eax+8]
0x9A64A5: fstp    flt_BAA998
0x9A64AB: fld1
0x9A64AD: jmp     loc_9A657E
0x9A64B2: mov     ecx, esi
0x9A64B4: call    sub_7833A0
0x9A64B9: test    al, al
0x9A64BB: jnz     loc_9A655E
0x9A64C1: mov     ecx, esi
0x9A64C3: call    sub_7833D0
0x9A64C8: test    al, al
0x9A64CA: jnz     loc_9A655E
0x9A64D0: mov     ecx, esi
0x9A64D2: call    sub_782DE0
0x9A64D7: test    al, al
0x9A64D9: jz      short loc_9A654B
0x9A64DB: mov     eax, [esi+30h]
0x9A64DE: fld     dword ptr [eax]
0x9A64E0: push    0
0x9A64E2: fstp    flt_BAA9A0
0x9A64E8: push    offset flt_BAA9A0
0x9A64ED: fld     dword ptr [eax+4]
0x9A64F0: fstp    flt_BAA9A4
0x9A64F6: fld     dword ptr [eax+8]
0x9A64F9: fstp    flt_BAA9A8
0x9A64FF: fldz
0x9A6501: fst     flt_BAA9AC
0x9A6507: fld     dword ptr [eax+0Ch]
0x9A650A: fstp    flt_BAA9B0
0x9A6510: fld     dword ptr [eax+10h]
0x9A6513: fstp    flt_BAA9B4
0x9A6519: fld     dword ptr [eax+14h]
0x9A651C: fstp    flt_BAA9B8
0x9A6522: fst     flt_BAA9BC
0x9A6528: fld     dword ptr [eax+18h]
0x9A652B: fstp    flt_BAA9C0
0x9A6531: fld     dword ptr [eax+1Ch]
0x9A6534: fstp    flt_BAA9C4
0x9A653A: fld     dword ptr [eax+20h]
0x9A653D: fstp    flt_BAA9C8
0x9A6543: fstp    flt_BAA9CC
0x9A6549: jmp     short loc_9A658B
0x9A654B: mov     ecx, esi
0x9A654D: call    sub_782E10
0x9A6552: test    al, al
0x9A6554: jz      short loc_9A65A0
0x9A6556: mov     eax, [esi+30h]
0x9A6559: push    0
0x9A655B: push    eax
0x9A655C: jmp     short loc_9A658B
0x9A655E: mov     eax, [esi+30h]
0x9A6561: fld     dword ptr [eax]
0x9A6563: fstp    flt_BAA990
0x9A6569: fld     dword ptr [eax+4]
0x9A656C: fstp    flt_BAA994
0x9A6572: fld     dword ptr [eax+8]
0x9A6575: fstp    flt_BAA998
0x9A657B: fld     dword ptr [eax+0Ch]
0x9A657E: push    0
0x9A6580: fstp    flt_BAA99C
0x9A6586: push    offset flt_BAA990
0x9A658B: mov     ecx, [esp+14h+arg_0]
0x9A658F: mov     edx, [ecx]
0x9A6591: mov     eax, [edx+28h]
0x9A6594: push    esi
0x9A6595: call    eax
0x9A6597: test    al, al
0x9A6599: jnz     short loc_9A65A0
0x9A659B: mov     ebx, 80000050h
0x9A65A0: pop     edi
0x9A65A1: pop     esi
0x9A65A2: mov     eax, ebx
0x9A65A4: pop     ebx
0x9A65A5: retn    0Ch
