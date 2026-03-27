0x6F1160: push    esi
0x6F1161: mov     esi, ecx
0x6F1163: mov     eax, [esi+4]
0x6F1166: test    eax, eax
0x6F1168: push    edi
0x6F1169: mov     edi, [esp+8+arg_0]
0x6F116D: jz      short loc_6F1189
0x6F116F: mov     ecx, [esi+8]
0x6F1172: sub     ecx, eax
0x6F1174: mov     eax, 2E8BA2E9h
0x6F1179: imul    ecx
0x6F117B: sar     edx, 3
0x6F117E: mov     eax, edx
0x6F1180: shr     eax, 1Fh
0x6F1183: add     eax, edx
0x6F1185: cmp     edi, eax
0x6F1187: jb      short loc_6F118E
0x6F1189: call    __invalid_parameter_noinfo
0x6F118E: mov     eax, edi
0x6F1190: imul    eax, 2Ch ; ','
0x6F1193: add     eax, [esi+4]
0x6F1196: pop     edi
0x6F1197: pop     esi
0x6F1198: retn    4
