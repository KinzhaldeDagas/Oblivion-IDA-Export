0x725500: push    esi
0x725501: push    edi
0x725502: mov     edi, [esp+8+arg_0]
0x725506: push    edi
0x725507: mov     esi, ecx
0x725509: call    sub_71A650
0x72550E: test    al, al
0x725510: jz      short loc_725558
0x725512: fld     dword ptr [esi+108h]
0x725518: fld     dword ptr [edi+108h]
0x72551E: fucompp
0x725520: fnstsw  ax
0x725522: test    ah, 44h
0x725525: jp      short loc_725558
0x725527: fld     dword ptr [esi+10Ch]
0x72552D: fld     dword ptr [edi+10Ch]
0x725533: fucompp
0x725535: fnstsw  ax
0x725537: test    ah, 44h
0x72553A: jp      short loc_725558
0x72553C: fld     dword ptr [esi+110h]
0x725542: fld     dword ptr [edi+110h]
0x725548: fucompp
0x72554A: fnstsw  ax
0x72554C: test    ah, 44h
0x72554F: jp      short loc_725558
0x725551: pop     edi
0x725552: mov     al, 1
0x725554: pop     esi
0x725555: retn    4
0x725558: pop     edi
0x725559: xor     al, al
0x72555B: pop     esi
0x72555C: retn    4
