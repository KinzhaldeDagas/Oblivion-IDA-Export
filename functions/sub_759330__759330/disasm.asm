0x759330: push    esi
0x759331: push    edi
0x759332: mov     edi, [esp+8+arg_0]
0x759336: push    edi
0x759337: mov     esi, ecx
0x759339: call    sub_75E890
0x75933E: test    al, al
0x759340: jz      short loc_759361
0x759342: mov     al, [edi+30h]
0x759345: cmp     al, [esi+30h]
0x759348: jnz     short loc_759361
0x75934A: add     esi, 34h ; '4'
0x75934D: push    esi
0x75934E: lea     ecx, [edi+34h]
0x759351: call    sub_8AA390
0x759356: test    al, al
0x759358: jnz     short loc_759361
0x75935A: pop     edi
0x75935B: mov     al, 1
0x75935D: pop     esi
0x75935E: retn    4
0x759361: pop     edi
0x759362: xor     al, al
0x759364: pop     esi
0x759365: retn    4
