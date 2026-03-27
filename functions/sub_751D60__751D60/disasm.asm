0x751D60: push    esi
0x751D61: push    edi
0x751D62: mov     edi, [esp+8+arg_0]
0x751D66: push    edi
0x751D67: mov     esi, ecx
0x751D69: call    sub_752CD0
0x751D6E: test    al, al
0x751D70: jz      short loc_751DE2
0x751D72: mov     ax, [edi+18h]
0x751D76: cmp     ax, [esi+18h]
0x751D7A: jnz     short loc_751DE2
0x751D7C: fld     dword ptr [edi+1Ch]
0x751D7F: fld     dword ptr [esi+1Ch]
0x751D82: fucompp
0x751D84: fnstsw  ax
0x751D86: test    ah, 44h
0x751D89: jp      short loc_751DE2
0x751D8B: mov     cx, [edi+20h]
0x751D8F: cmp     cx, [esi+20h]
0x751D93: jnz     short loc_751DE2
0x751D95: mov     dx, [edi+22h]
0x751D99: cmp     dx, [esi+22h]
0x751D9D: jnz     short loc_751DE2
0x751D9F: fld     dword ptr [edi+24h]
0x751DA2: fld     dword ptr [esi+24h]
0x751DA5: fucompp
0x751DA7: fnstsw  ax
0x751DA9: test    ah, 44h
0x751DAC: jp      short loc_751DE2
0x751DAE: fld     dword ptr [edi+28h]
0x751DB1: fld     dword ptr [esi+28h]
0x751DB4: fucompp
0x751DB6: fnstsw  ax
0x751DB8: test    ah, 44h
0x751DBB: jp      short loc_751DE2
0x751DBD: fld     dword ptr [edi+2Ch]
0x751DC0: fld     dword ptr [esi+2Ch]
0x751DC3: fucompp
0x751DC5: fnstsw  ax
0x751DC7: test    ah, 44h
0x751DCA: jp      short loc_751DE2
0x751DCC: fld     dword ptr [edi+30h]
0x751DCF: fld     dword ptr [esi+30h]
0x751DD2: fucompp
0x751DD4: fnstsw  ax
0x751DD6: test    ah, 44h
0x751DD9: jp      short loc_751DE2
0x751DDB: pop     edi
0x751DDC: mov     al, 1
0x751DDE: pop     esi
0x751DDF: retn    4
0x751DE2: pop     edi
0x751DE3: xor     al, al
0x751DE5: pop     esi
0x751DE6: retn    4
