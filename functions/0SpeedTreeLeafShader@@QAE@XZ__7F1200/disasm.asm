0x7F1200: push    0FFFFFFFFh
0x7F1202: push    offset ??0SpeedTreeLeafShader@@QAE@XZ_SEH
0x7F1207: mov     eax, large fs:0
0x7F120D: push    eax
0x7F120E: sub     esp, 14h
0x7F1211: push    esi
0x7F1212: mov     eax, ds:0B30AACh
0x7F1217: xor     eax, esp
0x7F1219: push    eax
0x7F121A: lea     eax, [esp+28h+var_C]
0x7F121E: mov     large fs:0, eax
0x7F1224: mov     esi, ecx
0x7F1226: mov     [esp+28h+var_20], esi
0x7F122A: call    ??0BSShader@@QAE@XZ; BSShader::BSShader(void)
0x7F122F: push    offset sub_7016A0; a5
0x7F1234: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7F1239: push    4; size
0x7F123B: push    4; a2
0x7F123D: lea     eax, [esi+37Ch]
0x7F1243: push    eax; a1
0x7F1244: mov     [esp+3Ch+var_4], 0
0x7F124C: mov     dword ptr [esi], offset ??_7SpeedTreeLeafShader@@6B@; const SpeedTreeLeafShader::`vftable'
0x7F1252: call    ArrayConstructor
0x7F1257: push    offset sub_7016A0; a5
0x7F125C: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7F1261: push    2; size
0x7F1263: push    4; a2
0x7F1265: lea     ecx, [esi+38Ch]
0x7F126B: push    ecx; a1
0x7F126C: mov     byte ptr [esp+3Ch+var_4], 1
0x7F1271: call    ArrayConstructor
0x7F1276: push    300h
0x7F127B: lea     edx, [esi+7Ch]
0x7F127E: push    0
0x7F1280: push    edx
0x7F1281: mov     dword ptr [esi+394h], 0
0x7F128B: call    __memset
0x7F1290: fld1
0x7F1292: fst     [esp+34h+var_1C]
0x7F1296: add     esp, 0Ch
0x7F1299: mov     eax, [esp+28h+var_1C]
0x7F129D: fst     [esp+28h+var_18]
0x7F12A1: mov     ecx, [esp+28h+var_18]
0x7F12A5: fst     [esp+28h+var_14]
0x7F12A9: mov     edx, [esp+28h+var_14]
0x7F12AD: fst     [esp+28h+var_10]
0x7F12B1: fst     [esp+28h+var_1C]
0x7F12B5: mov     ds:0B46758h, eax
0x7F12BA: mov     eax, [esp+28h+var_10]
0x7F12BE: fst     [esp+28h+var_18]
0x7F12C2: fst     [esp+28h+var_14]
0x7F12C6: mov     ds:0B46764h, eax
0x7F12CB: mov     eax, [esp+28h+var_14]
0x7F12CF: fstp    [esp+28h+var_10]
0x7F12D3: fldz
0x7F12D5: mov     ds:0B4675Ch, ecx
0x7F12DB: mov     ecx, [esp+28h+var_1C]
0x7F12DF: fst     [esp+28h+var_1C]
0x7F12E3: mov     ds:0B46760h, edx
0x7F12E9: mov     edx, [esp+28h+var_18]
0x7F12ED: fst     [esp+28h+var_18]
0x7F12F1: mov     ds:0B46770h, eax
0x7F12F6: fst     [esp+28h+var_14]
0x7F12FA: mov     eax, [esp+28h+var_18]
0x7F12FE: mov     ds:0B46768h, ecx
0x7F1304: mov     ecx, [esp+28h+var_10]
0x7F1308: fst     [esp+28h+var_10]
0x7F130C: mov     ds:0B4676Ch, edx
0x7F1312: mov     edx, [esp+28h+var_1C]
0x7F1316: fst     [esp+28h+var_1C]
0x7F131A: mov     ds:0B4677Ch, eax
0x7F131F: fst     [esp+28h+var_18]
0x7F1323: mov     eax, [esp+28h+var_1C]
0x7F1327: mov     ds:0B46774h, ecx
0x7F132D: mov     ecx, [esp+28h+var_14]
0x7F1331: fst     [esp+28h+var_14]
0x7F1335: mov     ds:0B46778h, edx
0x7F133B: mov     edx, [esp+28h+var_10]
0x7F133F: fstp    [esp+28h+var_10]
0x7F1343: mov     ds:0B46788h, eax
0x7F1348: mov     eax, [esp+28h+var_10]
0x7F134C: mov     ds:0B46780h, ecx
0x7F1352: mov     ecx, [esp+28h+var_18]
0x7F1356: mov     ds:0B46784h, edx
0x7F135C: mov     edx, [esp+28h+var_14]
0x7F1360: mov     ds:0B46794h, eax
0x7F1365: mov     ds:0B4678Ch, ecx
0x7F136B: mov     ds:0B46790h, edx
0x7F1371: mov     eax, esi
0x7F1373: mov     ecx, [esp+28h+var_C]
0x7F1377: mov     large fs:0, ecx
0x7F137E: pop     ecx
0x7F137F: pop     esi
0x7F1380: add     esp, 20h
0x7F1383: retn
