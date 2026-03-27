0x6F1210: push    esi
0x6F1211: mov     esi, ecx
0x6F1213: mov     ecx, [esi+4]
0x6F1216: test    ecx, ecx
0x6F1218: push    edi
0x6F1219: mov     edi, [esp+8+arg_0]
0x6F121D: jz      short loc_6F1228
0x6F121F: mov     eax, [esi+8]
0x6F1222: sub     eax, ecx
0x6F1224: cmp     edi, eax
0x6F1226: jb      short loc_6F122D
0x6F1228: call    __invalid_parameter_noinfo
0x6F122D: mov     eax, [esi+4]
0x6F1230: add     eax, edi
0x6F1232: pop     edi
0x6F1233: pop     esi
0x6F1234: retn    4
