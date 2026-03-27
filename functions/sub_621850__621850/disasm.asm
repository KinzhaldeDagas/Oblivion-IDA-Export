0x621850: push    esi
0x621851: mov     esi, ecx
0x621853: cmp     dword ptr [esi+6Ch], 1
0x621857: jnz     short loc_621878
0x621859: fld     dword ptr [esi+44h]
0x62185C: fsub    dword ptr [esi+0D4h]
0x621862: fld     dword ptr [esi+0D8h]
0x621868: fcompp
0x62186A: fnstsw  ax
0x62186C: test    ah, 5
0x62186F: jp      short loc_62187A
0x621871: push    0
0x621873: call    sub_619920
0x621878: pop     esi
0x621879: retn
0x62187A: call    sub_6135F0
0x62187F: test    eax, eax
0x621881: jz      short loc_621895
0x621883: mov     ecx, esi
0x621885: call    sub_6135F0
0x62188A: mov     ecx, eax
0x62188C: call    sub_5E5640
0x621891: test    al, al
0x621893: jnz     short loc_62189E
0x621895: cmp     byte ptr [esi+15Ah], 0
0x62189C: jz      short loc_621878
0x62189E: mov     eax, 2
0x6218A3: cmp     [esi+74h], eax
0x6218A6: jnz     short loc_6218B9
0x6218A8: mov     ecx, esi
0x6218AA: mov     [esi+78h], eax
0x6218AD: mov     dword ptr [esi+74h], 3
0x6218B4: call    sub_6213D0
0x6218B9: mov     ecx, esi
0x6218BB: pop     esi
0x6218BC: jmp     sub_61CE40
