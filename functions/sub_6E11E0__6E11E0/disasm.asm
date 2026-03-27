0x6E11E0: push    0FFFFFFFFh
0x6E11E2: push    offset SEH_6E3B20
0x6E11E7: mov     eax, large fs:0
0x6E11ED: push    eax
0x6E11EE: push    esi
0x6E11EF: push    edi
0x6E11F0: mov     eax, ds:0B30AACh
0x6E11F5: xor     eax, esp
0x6E11F7: push    eax
0x6E11F8: lea     eax, [esp+18h+var_C]
0x6E11FC: mov     large fs:0, eax
0x6E1202: mov     edi, ecx
0x6E1204: mov     esi, [esp+18h+Src]
0x6E1208: mov     eax, [esp+18h+arg_8]
0x6E120C: mov     ecx, [esp+18h+arg_0]
0x6E1210: push    esi; Src
0x6E1211: push    eax; int
0x6E1212: push    ecx; int
0x6E1213: lea     edx, [esp+24h+Src]
0x6E1217: push    edx; int
0x6E1218: call    sub_6D8B50
0x6E121D: add     esp, 10h
0x6E1220: mov     ecx, [esp+18h+Src]
0x6E1224: test    ecx, ecx
0x6E1226: mov     [esp+18h+var_4], 0
0x6E122E: jnz     short loc_6E1246
0x6E1230: xor     al, al
0x6E1232: mov     ecx, [esp+18h+var_C]
0x6E1236: mov     large fs:0, ecx
0x6E123D: pop     ecx
0x6E123E: pop     edi
0x6E123F: pop     esi
0x6E1240: add     esp, 0Ch
0x6E1243: retn    0Ch
0x6E1246: test    esi, esi
0x6E1248: jz      short loc_6E1254
0x6E124A: push    esi; Src
0x6E124B: call    sub_6D7E10
0x6E1250: mov     ecx, [esp+18h+Src]
0x6E1254: mov     esi, [ecx+8]
0x6E1257: push    ecx
0x6E1258: mov     eax, esp
0x6E125A: mov     [eax], ecx
0x6E125C: mov     eax, [esp+1Ch+Src]
0x6E1260: test    eax, eax
0x6E1262: mov     [esp+1Ch+arg_8], esp
0x6E1266: jz      short loc_6E1272
0x6E1268: add     eax, 4
0x6E126B: push    eax; lpAddend
0x6E126C: call    dword ptr ds:0A28078h
0x6E1272: push    esi
0x6E1273: lea     ecx, [edi+3Ch]
0x6E1276: call    sub_7C2FF0
0x6E127B: mov     eax, [esp+18h+Src]
0x6E127F: test    eax, eax
0x6E1281: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6E1289: jz      short loc_6E12A9
0x6E128B: mov     esi, eax
0x6E128D: add     eax, 4
0x6E1290: push    eax; lpAddend
0x6E1291: call    dword ptr ds:0A2807Ch
0x6E1297: test    eax, eax
0x6E1299: jnz     short loc_6E12A9
0x6E129B: test    esi, esi
0x6E129D: jz      short loc_6E12A9
0x6E129F: mov     eax, [esi]
0x6E12A1: mov     edx, [eax]
0x6E12A3: push    1
0x6E12A5: mov     ecx, esi
0x6E12A7: call    edx
0x6E12A9: mov     al, 1
0x6E12AB: mov     ecx, [esp+18h+var_C]
0x6E12AF: mov     large fs:0, ecx
0x6E12B6: pop     ecx
0x6E12B7: pop     edi
0x6E12B8: pop     esi
0x6E12B9: add     esp, 0Ch
0x6E12BC: retn    0Ch
