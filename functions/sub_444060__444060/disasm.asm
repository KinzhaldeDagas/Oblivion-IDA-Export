0x444060: push    0FFFFFFFFh
0x444062: push    offset SEH_404850
0x444067: mov     eax, large fs:0
0x44406D: push    eax
0x44406E: push    ecx
0x44406F: push    esi
0x444070: mov     eax, ds:0B30AACh
0x444075: xor     eax, esp
0x444077: push    eax
0x444078: lea     eax, [esp+18h+var_C]
0x44407C: mov     large fs:0, eax
0x444082: mov     esi, ecx
0x444084: mov     [esp+18h+var_10], esi
0x444088: mov     eax, [esp+18h+arg_0]
0x44408C: mov     ecx, [esp+18h+arg_4]
0x444090: mov     [esi+4], eax
0x444093: mov     [esi], ecx
0x444095: push    esi
0x444096: mov     ecx, offset INISettingCollection
0x44409B: mov     [esp+1Ch+var_4], 0
0x4440A3: call    SettingCollectionList_AddSetting
0x4440A8: mov     eax, esi
0x4440AA: mov     ecx, [esp+18h+var_C]
0x4440AE: mov     large fs:0, ecx
0x4440B5: pop     ecx
0x4440B6: pop     esi
0x4440B7: add     esp, 10h
0x4440BA: retn    8
