0x9E2290: push    0FFFFFFFFh
0x9E2292: push    offset SEH_9E2290
0x9E2297: mov     eax, large fs:0
0x9E229D: push    eax
0x9E229E: mov     eax, ___security_cookie
0x9E22A3: xor     eax, esp
0x9E22A5: push    eax
0x9E22A6: lea     eax, [esp+10h+var_C]
0x9E22AA: mov     large fs:0, eax
0x9E22B0: push    offset bUSeLinear
0x9E22B5: mov     ecx, offset INISettingCollection
0x9E22BA: mov     [esp+14h+var_4], 0
0x9E22C2: call    SettingCollectionList_AddSetting
0x9E22C7: push    offset sub_A1B3F0; void (__cdecl *)()
0x9E22CC: call    _atexit
0x9E22D1: add     esp, 4
0x9E22D4: mov     ecx, [esp+10h+var_C]
0x9E22D8: mov     large fs:0, ecx
0x9E22DF: pop     ecx
0x9E22E0: add     esp, 0Ch
0x9E22E3: retn
