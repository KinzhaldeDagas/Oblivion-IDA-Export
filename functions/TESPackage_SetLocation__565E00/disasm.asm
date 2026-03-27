0x565E00: push    0FFFFFFFFh
0x565E02: push    offset SEH_6E3250
0x565E07: mov     eax, large fs:0
0x565E0D: push    eax
0x565E0E: push    esi
0x565E0F: push    edi
0x565E10: mov     eax, ds:0B30AACh
0x565E15: xor     eax, esp
0x565E17: push    eax
0x565E18: lea     eax, [esp+18h+var_C]
0x565E1C: mov     large fs:0, eax
0x565E22: mov     esi, ecx
0x565E24: mov     edi, [esp+18h+arg_0]
0x565E28: test    edi, edi
0x565E2A: jz      short TESPackage_SetLocation___ClearLocationData
0x565E2C: cmp     dword ptr [esi+24h], 0
0x565E30: jnz     short loc_565E62
0x565E32: push    0Ch; Size
0x565E34: call    FormHeapAlloc
0x565E39: add     esp, 4
0x565E3C: mov     [esp+18h+arg_0], eax
0x565E40: test    eax, eax
0x565E42: mov     [esp+18h+var_4], 0
0x565E4A: jz      short loc_565E55
0x565E4C: mov     ecx, eax
0x565E4E: call    TESPackage_LocationData_constr
0x565E53: jmp     short loc_565E57
0x565E55: xor     eax, eax
0x565E57: mov     [esp+18h+var_4], 0FFFFFFFFh
0x565E5F: mov     [esi+24h], eax
0x565E62: mov     ecx, [esi+24h]
0x565E65: push    0
0x565E67: push    edi
0x565E68: call    TeSPackage_LocationData_CopyFrom
0x565E6D: mov     ecx, [esp+18h+var_C]
0x565E71: mov     large fs:0, ecx
0x565E78: pop     ecx
0x565E79: pop     edi
0x565E7A: pop     esi
0x565E7B: add     esp, 0Ch
0x565E7E: retn    4
