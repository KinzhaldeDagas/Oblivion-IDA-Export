0x611D70: push    0FFFFFFFFh
0x611D72: push    offset SEH_8122A0
0x611D77: mov     eax, large fs:0
0x611D7D: push    eax
0x611D7E: push    ecx
0x611D7F: push    ebx
0x611D80: push    esi
0x611D81: push    edi
0x611D82: mov     eax, ds:0B30AACh
0x611D87: xor     eax, esp
0x611D89: push    eax; int
0x611D8A: lea     eax, [esp+20h+var_C]
0x611D8E: mov     large fs:0, eax
0x611D94: mov     ebx, ecx
0x611D96: mov     eax, [ebx]
0x611D98: mov     edx, [eax+18Ch]
0x611D9E: call    edx
0x611DA0: test    eax, eax
0x611DA2: jnz     short loc_611DF0
0x611DA4: mov     eax, [ebx]
0x611DA6: mov     edx, [eax+380h]
0x611DAC: mov     ecx, ebx
0x611DAE: call    edx
0x611DB0: mov     esi, eax
0x611DB2: test    esi, esi
0x611DB4: jz      loc_611E9D
0x611DBA: mov     eax, [ebx]
0x611DBC: mov     edx, [eax+384h]
0x611DC2: push    0
0x611DC4: mov     ecx, ebx
0x611DC6: call    edx
0x611DC8: mov     eax, [esi]
0x611DCA: mov     edx, [eax+38Ch]
0x611DD0: push    0
0x611DD2: mov     ecx, esi
0x611DD4: call    edx
0x611DD6: mov     ecx, esi; int
0x611DD8: call    sub_5EAE70
0x611DDD: mov     ecx, [esp+20h+var_C]
0x611DE1: mov     large fs:0, ecx
0x611DE8: pop     ecx
0x611DE9: pop     edi
0x611DEA: pop     esi
0x611DEB: pop     ebx
0x611DEC: add     esp, 10h
0x611DEF: retn
0x611DF0: push    3Ch ; '<'; Size
0x611DF2: call    FormHeapAlloc
0x611DF7: add     esp, 4
0x611DFA: mov     [esp+20h+var_10], eax
0x611DFE: xor     edi, edi
0x611E00: cmp     eax, edi
0x611E02: mov     [esp+20h+var_4], edi
0x611E06: jz      short loc_611E13
0x611E08: mov     ecx, eax; this
0x611E0A: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x611E0F: mov     esi, eax
0x611E11: jmp     short loc_611E15
0x611E13: xor     esi, esi
0x611E15: push    17h
0x611E17: mov     ecx, esi
0x611E19: mov     [esp+24h+var_4], 0FFFFFFFFh
0x611E21: call    TESPackage_SetType?
0x611E26: mov     eax, [esi+1Ch]
0x611E29: and     eax, 0FFFFFFFDh
0x611E2C: or      eax, 4
0x611E2F: push    0Ch; Size
0x611E31: mov     [esi+1Ch], eax
0x611E34: call    FormHeapAlloc
0x611E39: add     esp, 4
0x611E3C: mov     [esp+20h+var_10], eax
0x611E40: cmp     eax, edi
0x611E42: mov     [esp+20h+var_4], 1
0x611E4A: jz      short loc_611E55
0x611E4C: mov     ecx, eax
0x611E4E: call    TESPackage_LocationData_constr
0x611E53: mov     edi, eax
0x611E55: push    0
0x611E57: mov     ecx, edi
0x611E59: mov     [esp+24h+var_4], 0FFFFFFFFh
0x611E61: call    TESPackage_LocationData_SetType
0x611E66: push    ebx
0x611E67: mov     ecx, edi
0x611E69: call    TESPackage_LocationData_SetReference
0x611E6E: push    edi
0x611E6F: mov     ecx, esi
0x611E71: call    TESPackage_SetLocation
0x611E76: test    edi, edi
0x611E78: jz      short loc_611E8A
0x611E7A: mov     ecx, edi
0x611E7C: call    TESPackage_LocationData_destr
0x611E81: push    edi
0x611E82: call    FormHeapFree
0x611E87: add     esp, 4
0x611E8A: mov     ecx, esi
0x611E8C: call    sub_5672A0
0x611E91: push    1; a4
0x611E93: push    1; a3
0x611E95: push    esi; a2
0x611E96: mov     ecx, ebx; this
0x611E98: call    Actor_AddPackage?
0x611E9D: mov     ecx, [esp+20h+var_C]
0x611EA1: mov     large fs:0, ecx
0x611EA8: pop     ecx
0x611EA9: pop     edi
0x611EAA: pop     esi
0x611EAB: pop     ebx
0x611EAC: add     esp, 10h
0x611EAF: retn
