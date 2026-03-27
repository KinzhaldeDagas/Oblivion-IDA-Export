0x4A1220: push    0FFFFFFFFh
0x4A1222: push    offset SEH_7C77C0
0x4A1227: mov     eax, large fs:0
0x4A122D: push    eax
0x4A122E: push    ecx
0x4A122F: push    esi
0x4A1230: push    edi
0x4A1231: mov     eax, ds:0B30AACh
0x4A1236: xor     eax, esp
0x4A1238: push    eax
0x4A1239: lea     eax, [esp+1Ch+var_C]
0x4A123D: mov     large fs:0, eax
0x4A1243: mov     esi, ecx
0x4A1245: mov     eax, [esp+1Ch+arg_0]
0x4A1249: test    eax, eax
0x4A124B: mov     [esp+1Ch+arg_0], eax
0x4A124F: jz      short loc_4A125B
0x4A1251: add     eax, 4
0x4A1254: push    eax; lpAddend
0x4A1255: call    dword ptr ds:0A28078h
0x4A125B: lea     eax, [esp+1Ch+arg_0]
0x4A125F: push    eax
0x4A1260: lea     ecx, [esp+20h+var_10]
0x4A1264: push    ecx
0x4A1265: lea     ecx, [esi+98h]
0x4A126B: mov     [esp+24h+var_4], 0
0x4A1273: call    sub_4A0E50
0x4A1278: mov     eax, [esp+1Ch+var_10]
0x4A127C: test    eax, eax
0x4A127E: mov     edi, ds:0A2807Ch
0x4A1284: jz      short loc_4A12A0
0x4A1286: mov     esi, eax
0x4A1288: add     eax, 4
0x4A128B: push    eax; lpAddend
0x4A128C: call    edi ; InterlockedDecrement
0x4A128E: test    eax, eax
0x4A1290: jnz     short loc_4A12A0
0x4A1292: test    esi, esi
0x4A1294: jz      short loc_4A12A0
0x4A1296: mov     edx, [esi]
0x4A1298: mov     eax, [edx]
0x4A129A: push    1
0x4A129C: mov     ecx, esi
0x4A129E: call    eax
0x4A12A0: mov     esi, [esp+1Ch+arg_0]
0x4A12A4: test    esi, esi
0x4A12A6: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4A12AE: jz      short loc_4A12C4
0x4A12B0: lea     ecx, [esi+4]
0x4A12B3: push    ecx; lpAddend
0x4A12B4: call    edi ; InterlockedDecrement
0x4A12B6: test    eax, eax
0x4A12B8: jnz     short loc_4A12C4
0x4A12BA: mov     edx, [esi]
0x4A12BC: mov     eax, [edx]
0x4A12BE: push    1
0x4A12C0: mov     ecx, esi
0x4A12C2: call    eax
0x4A12C4: mov     ecx, dword ptr [esp+1Ch+var_C]
0x4A12C8: mov     large fs:0, ecx
0x4A12CF: pop     ecx
0x4A12D0: pop     edi
0x4A12D1: pop     esi
0x4A12D2: add     esp, 10h
0x4A12D5: retn    4
