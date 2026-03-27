0x730560: push    0FFFFFFFFh
0x730562: push    offset SEH_8C62B0
0x730567: mov     eax, large fs:0
0x73056D: push    eax
0x73056E: push    ecx
0x73056F: push    esi
0x730570: mov     eax, ds:0B30AACh
0x730575: xor     eax, esp
0x730577: push    eax
0x730578: lea     eax, [esp+18h+var_C]
0x73057C: mov     large fs:0, eax
0x730582: push    1Ch; Size
0x730584: call    FormHeapAlloc
0x730589: mov     esi, eax
0x73058B: add     esp, 4
0x73058E: mov     [esp+18h+var_10], esi
0x730592: xor     eax, eax
0x730594: cmp     esi, eax
0x730596: mov     [esp+18h+var_4], eax
0x73059A: jz      short loc_7305DB
0x73059C: mov     ecx, esi
0x73059E: call    sub_721350
0x7305A3: fldz
0x7305A5: mov     dword ptr [esi], offset ??_7NiColorExtraData@@6B@; const NiColorExtraData::`vftable'
0x7305AB: fst     dword ptr [esi+0Ch]
0x7305AE: fst     dword ptr [esi+10h]
0x7305B1: fst     dword ptr [esi+14h]
0x7305B4: fstp    dword ptr [esi+18h]
0x7305B7: mov     eax, ds:0B25AD0h
0x7305BC: mov     [esi+0Ch], eax
0x7305BF: mov     ecx, ds:0B25AD4h
0x7305C5: mov     [esi+10h], ecx
0x7305C8: mov     edx, ds:0B25AD8h
0x7305CE: mov     [esi+14h], edx
0x7305D1: mov     eax, ds:0B25ADCh
0x7305D6: mov     [esi+18h], eax
0x7305D9: mov     eax, esi
0x7305DB: mov     ecx, [esp+18h+var_C]
0x7305DF: mov     large fs:0, ecx
0x7305E6: pop     ecx
0x7305E7: pop     esi
0x7305E8: add     esp, 10h
0x7305EB: retn
