0x68A6E0: push    esi
0x68A6E1: mov     esi, ecx
0x68A6E3: mov     ecx, [esi+4]
0x68A6E6: test    ecx, ecx
0x68A6E8: mov     al, 1
0x68A6EA: jz      short loc_68A717
0x68A6EC: push    edi
0x68A6ED: mov     edi, [esp+8+arg_0]
0x68A6F1: test    edi, edi
0x68A6F3: jz      short loc_68A716
0x68A6F5: push    ebx
0x68A6F6: xor     bl, bl
0x68A6F8: call    sub_68B110
0x68A6FD: push    eax
0x68A6FE: mov     ecx, edi
0x68A700: call    sub_4D7E30
0x68A705: fld     dword ptr [esi+0Ch]
0x68A708: fcompp
0x68A70A: fnstsw  ax
0x68A70C: mov     al, 1
0x68A70E: test    ah, 1
0x68A711: jz      short loc_68A715
0x68A713: mov     al, bl
0x68A715: pop     ebx
0x68A716: pop     edi
0x68A717: pop     esi
0x68A718: retn    4
