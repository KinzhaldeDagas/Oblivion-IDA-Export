0x6D12F0: push    0FFFFFFFFh
0x6D12F2: push    offset ??1NiGeomMorpherController@@UAE@XZ_SEH
0x6D12F7: mov     eax, large fs:0
0x6D12FD: push    eax
0x6D12FE: push    ecx
0x6D12FF: push    ebx
0x6D1300: push    esi
0x6D1301: push    edi
0x6D1302: mov     eax, ds:0B30AACh
0x6D1307: xor     eax, esp
0x6D1309: push    eax
0x6D130A: lea     eax, [esp+20h+var_C]
0x6D130E: mov     large fs:0, eax
0x6D1314: mov     esi, ecx
0x6D1316: mov     [esp+20h+var_10], esi
0x6D131A: mov     dword ptr [esi], offset ??_7NiGeomMorpherController@@6B@; const NiGeomMorpherController::`vftable'
0x6D1320: mov     edi, [esi+50h]
0x6D1323: test    edi, edi
0x6D1325: mov     ebx, ds:0A2807Ch
0x6D132B: mov     [esp+20h+var_4], 2
0x6D1333: jz      short loc_6D1354
0x6D1335: lea     eax, [edi+4]
0x6D1338: push    eax; lpAddend
0x6D1339: call    ebx ; InterlockedDecrement
0x6D133B: test    eax, eax
0x6D133D: jnz     short loc_6D134D
0x6D133F: test    edi, edi
0x6D1341: jz      short loc_6D134D
0x6D1343: mov     edx, [edi]
0x6D1345: mov     eax, [edx]
0x6D1347: push    1
0x6D1349: mov     ecx, edi
0x6D134B: call    eax
0x6D134D: mov     dword ptr [esi+50h], 0
0x6D1354: push    0
0x6D1356: mov     ecx, esi
0x6D1358: call    sub_6D10F0
0x6D135D: mov     edi, [esi+50h]
0x6D1360: test    edi, edi
0x6D1362: mov     byte ptr [esp+20h+var_4], 1
0x6D1367: jz      short loc_6D1381
0x6D1369: lea     ecx, [edi+4]
0x6D136C: push    ecx; lpAddend
0x6D136D: call    ebx ; InterlockedDecrement
0x6D136F: test    eax, eax
0x6D1371: jnz     short loc_6D1381
0x6D1373: test    edi, edi
0x6D1375: jz      short loc_6D1381
0x6D1377: mov     edx, [edi]
0x6D1379: mov     eax, [edx]
0x6D137B: push    1
0x6D137D: mov     ecx, edi
0x6D137F: call    eax
0x6D1381: mov     eax, [esi+44h]
0x6D1384: push    eax
0x6D1385: mov     dword ptr [esi+40h], offset ??_7?$NiTArray@M@@6B@; const NiTArray<float>::`vftable'
0x6D138C: call    FormHeapFree
0x6D1391: add     esp, 4
0x6D1394: mov     ecx, esi; this
0x6D1396: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6D139E: call    ??1NiPSysResetOnLoopCtlr@@UAE@XZ; NiPSysResetOnLoopCtlr::~NiPSysResetOnLoopCtlr(void)
0x6D13A3: mov     ecx, [esp+20h+var_C]
0x6D13A7: mov     large fs:0, ecx
0x6D13AE: pop     ecx
0x6D13AF: pop     edi
0x6D13B0: pop     esi
0x6D13B1: pop     ebx
0x6D13B2: add     esp, 10h
0x6D13B5: retn
