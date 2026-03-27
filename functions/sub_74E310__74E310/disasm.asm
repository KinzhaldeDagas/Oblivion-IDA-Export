0x74E310: push    esi
0x74E311: push    edi
0x74E312: mov     edi, [esp+8+arg_0]
0x74E316: push    edi
0x74E317: mov     esi, ecx
0x74E319: call    sub_752CD0
0x74E31E: test    al, al
0x74E320: jz      short loc_74E385
0x74E322: fld     dword ptr [edi+18h]
0x74E325: fld     dword ptr [esi+18h]
0x74E328: fucompp
0x74E32A: fnstsw  ax
0x74E32C: test    ah, 44h
0x74E32F: jp      short loc_74E385
0x74E331: fld     dword ptr [edi+1Ch]
0x74E334: fld     dword ptr [esi+1Ch]
0x74E337: fucompp
0x74E339: fnstsw  ax
0x74E33B: test    ah, 44h
0x74E33E: jp      short loc_74E385
0x74E340: mov     al, [edi+35h]
0x74E343: cmp     al, [esi+35h]
0x74E346: jnz     short loc_74E385
0x74E348: fld     dword ptr [edi+20h]
0x74E34B: fld     dword ptr [esi+20h]
0x74E34E: fucompp
0x74E350: fnstsw  ax
0x74E352: test    ah, 44h
0x74E355: jp      short loc_74E385
0x74E357: fld     dword ptr [edi+24h]
0x74E35A: fld     dword ptr [esi+24h]
0x74E35D: fucompp
0x74E35F: fnstsw  ax
0x74E361: test    ah, 44h
0x74E364: jp      short loc_74E385
0x74E366: mov     cl, [edi+34h]
0x74E369: cmp     cl, [esi+34h]
0x74E36C: jnz     short loc_74E385
0x74E36E: add     esi, 28h ; '('
0x74E371: push    esi
0x74E372: lea     ecx, [edi+28h]
0x74E375: call    sub_8AA390
0x74E37A: test    al, al
0x74E37C: jnz     short loc_74E385
0x74E37E: pop     edi
0x74E37F: mov     al, 1
0x74E381: pop     esi
0x74E382: retn    4
0x74E385: pop     edi
0x74E386: xor     al, al
0x74E388: pop     esi
0x74E389: retn    4
