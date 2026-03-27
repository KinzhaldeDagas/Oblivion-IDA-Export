0x7D1170: push    0FFFFFFFFh
0x7D1172: push    offset SEH_7E9A20
0x7D1177: mov     eax, large fs:0
0x7D117D: push    eax
0x7D117E: sub     esp, 8
0x7D1181: push    ebx
0x7D1182: push    ebp
0x7D1183: push    esi
0x7D1184: push    edi
0x7D1185: mov     eax, ds:0B30AACh
0x7D118A: xor     eax, esp
0x7D118C: push    eax
0x7D118D: lea     eax, [esp+28h+var_C]
0x7D1191: mov     large fs:0, eax
0x7D1197: mov     [esp+28h+var_10], ecx
0x7D119B: xor     ebx, ebx
0x7D119D: lea     eax, [esp+28h+var_14]
0x7D11A1: push    eax
0x7D11A2: call    sub_7606A0
0x7D11A7: add     esp, 4
0x7D11AA: mov     esi, eax
0x7D11AC: mov     ecx, ds:dword_B455A0[ebx]
0x7D11B2: cmp     ecx, [esi]
0x7D11B4: mov     [esp+28h+var_4], 0
0x7D11BC: jz      short loc_7D11DD
0x7D11BE: test    ecx, ecx
0x7D11C0: jz      short loc_7D11CD
0x7D11C2: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7D11C6: jnz     short loc_7D11CD
0x7D11C8: call    sub_7604D0
0x7D11CD: mov     eax, [esi]
0x7D11CF: test    eax, eax
0x7D11D1: mov     ds:dword_B455A0[ebx], eax
0x7D11D7: jz      short loc_7D11DD
0x7D11D9: add     dword ptr [eax+60h], 1
0x7D11DD: mov     eax, [esp+28h+var_14]
0x7D11E1: test    eax, eax
0x7D11E3: mov     [esp+28h+var_4], 0FFFFFFFFh
0x7D11EB: jz      short loc_7D1200
0x7D11ED: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7D11F1: mov     ecx, eax
0x7D11F3: add     eax, 60h ; '`'
0x7D11F6: cmp     dword ptr [eax], 0
0x7D11F9: jnz     short loc_7D1200
0x7D11FB: call    sub_7604D0
0x7D1200: mov     esi, ds:dword_B455A0[ebx]
0x7D1206: mov     eax, ds:0B45290h
0x7D120B: mov     edi, [esi+58h]
0x7D120E: add     esi, 58h ; 'X'
0x7D1211: cmp     edi, eax
0x7D1213: mov     ebp, eax
0x7D1215: jz      short loc_7D1247
0x7D1217: test    edi, edi
0x7D1219: jz      short loc_7D1237
0x7D121B: lea     ecx, [edi+4]
0x7D121E: push    ecx; lpAddend
0x7D121F: call    dword ptr ds:0A2807Ch
0x7D1225: test    eax, eax
0x7D1227: jnz     short loc_7D1237
0x7D1229: test    edi, edi
0x7D122B: jz      short loc_7D1237
0x7D122D: mov     edx, [edi]
0x7D122F: mov     eax, [edx]
0x7D1231: push    1
0x7D1233: mov     ecx, edi
0x7D1235: call    eax
0x7D1237: test    ebp, ebp
0x7D1239: mov     [esi], ebp
0x7D123B: jz      short loc_7D1247
0x7D123D: add     ebp, 4
0x7D1240: push    ebp; lpAddend
0x7D1241: call    dword ptr ds:0A28078h
0x7D1247: add     ebx, 4
0x7D124A: cmp     ebx, 68Ch
0x7D1250: jb      loc_7D119D
0x7D1256: mov     esi, [esp+28h+var_10]
0x7D125A: mov     ecx, esi
0x7D125C: call    sub_820910
0x7D1261: mov     ecx, esi
0x7D1263: call    sub_814430
0x7D1268: mov     ecx, esi
0x7D126A: call    sub_815DB0
0x7D126F: mov     ecx, esi
0x7D1271: call    sub_81AA00
0x7D1276: mov     ecx, esi
0x7D1278: call    sub_81B120
0x7D127D: mov     ecx, esi
0x7D127F: call    sub_81BCE0
0x7D1284: mov     ecx, esi
0x7D1286: call    sub_81D090
0x7D128B: mov     ecx, esi
0x7D128D: call    sub_81DC40
0x7D1292: mov     ecx, esi
0x7D1294: call    sub_81EA70
0x7D1299: mov     ecx, esi
0x7D129B: call    sub_8203D0
0x7D12A0: cmp     dword ptr ds:0B42F48h, 2
0x7D12A7: mov     ecx, esi
0x7D12A9: jl      short loc_7D12F8
0x7D12AB: call    sub_82D990
0x7D12B0: mov     ecx, esi
0x7D12B2: call    sub_820C00
0x7D12B7: mov     ecx, esi
0x7D12B9: call    sub_828280
0x7D12BE: mov     ecx, esi
0x7D12C0: call    sub_831910
0x7D12C5: mov     ecx, esi
0x7D12C7: call    sub_832740
0x7D12CC: mov     ecx, esi
0x7D12CE: call    sub_8357B0
0x7D12D3: mov     ecx, esi
0x7D12D5: call    sub_836230
0x7D12DA: mov     ecx, esi
0x7D12DC: call    sub_836810
0x7D12E1: mov     ecx, esi
0x7D12E3: call    sub_839F90
0x7D12E8: mov     ecx, esi
0x7D12EA: call    sub_83A7E0
0x7D12EF: mov     ecx, esi
0x7D12F1: call    sub_839A50
0x7D12F6: jmp     short loc_7D12FD
0x7D12F8: call    sub_81F330
0x7D12FD: mov     al, 1
0x7D12FF: mov     ecx, dword ptr [esp+28h+var_C]
0x7D1303: mov     large fs:0, ecx
0x7D130A: pop     ecx
0x7D130B: pop     edi
0x7D130C: pop     esi
0x7D130D: pop     ebp
0x7D130E: pop     ebx
0x7D130F: add     esp, 14h
0x7D1312: retn
