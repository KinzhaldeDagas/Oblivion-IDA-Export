0x9FC170: push    0FFFFFFFFh
0x9FC172: push    offset SEH_9FC170
0x9FC177: mov     eax, large fs:0
0x9FC17D: push    eax
0x9FC17E: mov     eax, ___security_cookie
0x9FC183: xor     eax, esp
0x9FC185: push    eax
0x9FC186: lea     eax, [esp+10h+var_C]
0x9FC18A: mov     large fs:0, eax
0x9FC190: push    offset byte_B14130
0x9FC195: mov     ecx, offset INISettingCollection
0x9FC19A: mov     [esp+14h+var_4], 0
0x9FC1A2: call    SettingCollectionList_AddSetting
0x9FC1A7: push    offset sub_A24B90; void (__cdecl *)()
0x9FC1AC: call    _atexit
0x9FC1B1: add     esp, 4
0x9FC1B4: mov     ecx, [esp+10h+var_C]
0x9FC1B8: mov     large fs:0, ecx
0x9FC1BF: pop     ecx
0x9FC1C0: add     esp, 0Ch
0x9FC1C3: retn
