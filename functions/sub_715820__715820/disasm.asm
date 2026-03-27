0x715820: push    esi
0x715821: push    edi
0x715822: mov     edi, [esp+8+a2]
0x715826: push    edi; a2
0x715827: mov     esi, ecx
0x715829: call    sub_700670
0x71582E: test    al, al
0x715830: jz      short loc_715896
0x715832: mov     ax, [esi+8]
0x715836: cmp     ax, [edi+8]
0x71583A: jnz     short loc_715896
0x71583C: fld     dword ptr [esi+0Ch]
0x71583F: fld     dword ptr [edi+0Ch]
0x715842: fucompp
0x715844: fnstsw  ax
0x715846: test    ah, 44h
0x715849: jp      short loc_715896
0x71584B: fld     dword ptr [esi+10h]
0x71584E: fld     dword ptr [edi+10h]
0x715851: fucompp
0x715853: fnstsw  ax
0x715855: test    ah, 44h
0x715858: jp      short loc_715896
0x71585A: fld     dword ptr [esi+14h]
0x71585D: fld     dword ptr [edi+14h]
0x715860: fucompp
0x715862: fnstsw  ax
0x715864: test    ah, 44h
0x715867: jp      short loc_715896
0x715869: fld     dword ptr [esi+18h]
0x71586C: fld     dword ptr [edi+18h]
0x71586F: fucompp
0x715871: fnstsw  ax
0x715873: test    ah, 44h
0x715876: jp      short loc_715896
0x715878: mov     esi, [esi+30h]
0x71587B: test    esi, esi
0x71587D: jz      short loc_715889
0x71587F: cmp     dword ptr [edi+30h], 0
0x715883: jz      short loc_715896
0x715885: test    esi, esi
0x715887: jnz     short loc_71588F
0x715889: cmp     dword ptr [edi+30h], 0
0x71588D: jnz     short loc_715896
0x71588F: pop     edi
0x715890: mov     al, 1
0x715892: pop     esi
0x715893: retn    4
0x715896: pop     edi
0x715897: xor     al, al
0x715899: pop     esi
0x71589A: retn    4
