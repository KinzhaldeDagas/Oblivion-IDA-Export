0x4BCAC0: push    0FFFFFFFFh
0x4BCAC2: push    offset SEH_6428F0
0x4BCAC7: mov     eax, large fs:0
0x4BCACD: push    eax
0x4BCACE: push    ecx
0x4BCACF: push    esi
0x4BCAD0: mov     eax, ds:0B30AACh
0x4BCAD5: xor     eax, esp
0x4BCAD7: push    eax
0x4BCAD8: lea     eax, [esp+18h+var_C]
0x4BCADC: mov     large fs:0, eax
0x4BCAE2: mov     esi, ecx
0x4BCAE4: mov     [esp+18h+var_10], esi
0x4BCAE8: mov     eax, [esp+18h+arg_4]
0x4BCAEC: push    eax
0x4BCAED: call    sub_436FA0
0x4BCAF2: mov     ecx, [esp+18h+arg_8]
0x4BCAF6: mov     eax, [esp+18h+arg_0]
0x4BCAFA: mov     edx, [esp+18h+arg_C]
0x4BCAFE: mov     [esi+28h], ecx
0x4BCB01: push    eax
0x4BCB02: mov     ecx, esi
0x4BCB04: mov     [esp+1Ch+var_4], 0
0x4BCB0C: mov     dword ptr [esi], offset ??_7DistantLODLoaderTask@@6B@; const DistantLODLoaderTask::`vftable'
0x4BCB12: mov     [esi+2Ch], edx
0x4BCB15: call    sub_434600
0x4BCB1A: push    0
0x4BCB1C: push    0
0x4BCB1E: mov     ecx, esi
0x4BCB20: call    sub_434CB0
0x4BCB25: mov     eax, esi
0x4BCB27: mov     ecx, [esp+18h+var_C]
0x4BCB2B: mov     large fs:0, ecx
0x4BCB32: pop     ecx
0x4BCB33: pop     esi
0x4BCB34: add     esp, 10h
0x4BCB37: retn    10h
