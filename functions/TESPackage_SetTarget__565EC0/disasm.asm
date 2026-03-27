0x565EC0: push    0FFFFFFFFh
0x565EC2: push    offset SEH_6E3250
0x565EC7: mov     eax, large fs:0
0x565ECD: push    eax
0x565ECE: push    esi
0x565ECF: push    edi
0x565ED0: mov     eax, ds:0B30AACh
0x565ED5: xor     eax, esp
0x565ED7: push    eax
0x565ED8: lea     eax, [esp+18h+var_C]
0x565EDC: mov     large fs:0, eax
0x565EE2: mov     esi, ecx
0x565EE4: mov     edi, [esp+18h+arg_0]
0x565EE8: test    edi, edi
0x565EEA: jz      short TESPackage_SetTarget___ClearTargetData
0x565EEC: cmp     dword ptr [esi+28h], 0
0x565EF0: jnz     short loc_565F22
0x565EF2: push    0Ch; Size
0x565EF4: call    FormHeapAlloc
0x565EF9: add     esp, 4
0x565EFC: mov     [esp+18h+arg_0], eax
0x565F00: test    eax, eax
0x565F02: mov     [esp+18h+var_4], 0
0x565F0A: jz      short loc_565F15
0x565F0C: mov     ecx, eax
0x565F0E: call    TESPackage_TargetData_constr
0x565F13: jmp     short loc_565F17
0x565F15: xor     eax, eax
0x565F17: mov     [esp+18h+var_4], 0FFFFFFFFh
0x565F1F: mov     [esi+28h], eax
0x565F22: mov     ecx, [esi+28h]
0x565F25: push    edi
0x565F26: call    TESPackage_TargetData_CopyFrom
0x565F2B: mov     ecx, [esp+18h+var_C]
0x565F2F: mov     large fs:0, ecx
0x565F36: pop     ecx
0x565F37: pop     edi
0x565F38: pop     esi
0x565F39: add     esp, 0Ch
0x565F3C: retn    4
