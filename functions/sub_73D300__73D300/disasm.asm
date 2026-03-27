0x73D300: push    esi
0x73D301: push    edi
0x73D302: mov     edi, [esp+8+arg_0]
0x73D306: push    edi
0x73D307: mov     esi, ecx
0x73D309: call    sub_725500
0x73D30E: test    al, al
0x73D310: jz      short loc_73D343
0x73D312: fld     dword ptr [esi+120h]
0x73D318: fld     dword ptr [edi+120h]
0x73D31E: fucompp
0x73D320: fnstsw  ax
0x73D322: test    ah, 44h
0x73D325: jp      short loc_73D343
0x73D327: fld     dword ptr [esi+124h]
0x73D32D: fld     dword ptr [edi+124h]
0x73D333: fucompp
0x73D335: fnstsw  ax
0x73D337: test    ah, 44h
0x73D33A: jp      short loc_73D343
0x73D33C: pop     edi
0x73D33D: mov     al, 1
0x73D33F: pop     esi
0x73D340: retn    4
0x73D343: pop     edi
0x73D344: xor     al, al
0x73D346: pop     esi
0x73D347: retn    4
