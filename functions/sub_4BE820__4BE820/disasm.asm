0x4BE820: push    0FFFFFFFFh
0x4BE822: push    offset SEH_4BE820
0x4BE827: mov     eax, large fs:0
0x4BE82D: push    eax
0x4BE82E: push    ecx
0x4BE82F: push    esi
0x4BE830: mov     eax, ds:0B30AACh
0x4BE835: xor     eax, esp
0x4BE837: push    eax
0x4BE838: lea     eax, [esp+18h+var_C]
0x4BE83C: mov     large fs:0, eax
0x4BE842: mov     esi, ecx
0x4BE844: mov     [esp+18h+var_10], esi
0x4BE848: mov     [esp+18h+var_4], 0
0x4BE850: call    sub_4BE420
0x4BE855: push    1
0x4BE857: mov     ecx, esi
0x4BE859: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4BE861: mov     dword ptr [esi], offset ??_7?$LockFreeMap@IV?$NiPointer@VExteriorCellLoaderTask@@@@@@6B@; const LockFreeMap<uint,NiPointer<ExteriorCellLoaderTask>>::`vftable'
0x4BE867: call    sub_642E50
0x4BE86C: mov     eax, [esi+0Ch]
0x4BE86F: push    eax
0x4BE870: call    FormHeapFree
0x4BE875: mov     ecx, [esi+4]
0x4BE878: mov     [esp+1Ch+var_10], ecx
0x4BE87C: mov     edx, [esp+1Ch+var_10]
0x4BE880: push    edx
0x4BE881: call    FormHeapFree
0x4BE886: add     esp, 8
0x4BE889: mov     ecx, [esp+18h+var_C]
0x4BE88D: mov     large fs:0, ecx
0x4BE894: pop     ecx
0x4BE895: pop     esi
0x4BE896: add     esp, 10h
0x4BE899: retn
