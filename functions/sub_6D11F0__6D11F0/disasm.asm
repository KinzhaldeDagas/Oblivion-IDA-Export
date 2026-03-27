0x6D11F0: push    ebx
0x6D11F1: mov     ebx, [esp+4+arg_0]
0x6D11F5: push    esi
0x6D11F6: push    edi
0x6D11F7: mov     edi, ecx
0x6D11F9: mov     esi, [edi+50h]
0x6D11FC: cmp     esi, ebx
0x6D11FE: jz      short loc_6D1231
0x6D1200: test    esi, esi
0x6D1202: jz      short loc_6D1220
0x6D1204: lea     eax, [esi+4]
0x6D1207: push    eax; lpAddend
0x6D1208: call    dword ptr ds:0A2807Ch
0x6D120E: test    eax, eax
0x6D1210: jnz     short loc_6D1220
0x6D1212: test    esi, esi
0x6D1214: jz      short loc_6D1220
0x6D1216: mov     edx, [esi]
0x6D1218: mov     eax, [edx]
0x6D121A: push    1
0x6D121C: mov     ecx, esi
0x6D121E: call    eax
0x6D1220: test    ebx, ebx
0x6D1222: mov     [edi+50h], ebx
0x6D1225: jz      short loc_6D1231
0x6D1227: add     ebx, 4
0x6D122A: push    ebx; lpAddend
0x6D122B: call    dword ptr ds:0A28078h
0x6D1231: mov     eax, [edi+50h]
0x6D1234: test    eax, eax
0x6D1236: jz      short loc_6D1242
0x6D1238: mov     eax, [eax+8]
0x6D123B: test    eax, eax
0x6D123D: jbe     short loc_6D1242
0x6D123F: push    eax
0x6D1240: jmp     short loc_6D1244
0x6D1242: push    0
0x6D1244: mov     ecx, edi
0x6D1246: call    sub_6D10F0
0x6D124B: cmp     [esp+0Ch+arg_4], 0
0x6D1250: jz      short loc_6D125E
0x6D1252: mov     edx, [edi]
0x6D1254: mov     eax, [edx+0A8h]
0x6D125A: mov     ecx, edi
0x6D125C: call    eax
0x6D125E: pop     edi
0x6D125F: pop     esi
0x6D1260: pop     ebx
0x6D1261: retn    8
