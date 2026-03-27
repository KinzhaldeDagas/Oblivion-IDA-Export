0x6F1110: push    esi
0x6F1111: mov     esi, ecx
0x6F1113: mov     ecx, [esi+4]
0x6F1116: test    ecx, ecx
0x6F1118: push    edi
0x6F1119: mov     edi, [esp+8+arg_0]
0x6F111D: jz      short loc_6F112B
0x6F111F: mov     eax, [esi+8]
0x6F1122: sub     eax, ecx
0x6F1124: sar     eax, 5
0x6F1127: cmp     edi, eax
0x6F1129: jb      short loc_6F1130
0x6F112B: call    __invalid_parameter_noinfo
0x6F1130: mov     eax, edi
0x6F1132: shl     eax, 5
0x6F1135: add     eax, [esi+4]
0x6F1138: pop     edi
0x6F1139: pop     esi
0x6F113A: retn    4
