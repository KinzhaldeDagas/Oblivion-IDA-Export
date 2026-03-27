0x9D8290: push    0FFFFFFFFh
0x9D8292: push    offset SEH_9D8290
0x9D8297: mov     eax, large fs:0
0x9D829D: push    eax
0x9D829E: mov     eax, ___security_cookie
0x9D82A3: xor     eax, esp
0x9D82A5: push    eax
0x9D82A6: lea     eax, [esp+10h+var_C]
0x9D82AA: mov     large fs:0, eax
0x9D82B0: push    offset off_B02C90
0x9D82B5: mov     ecx, offset INISettingCollection
0x9D82BA: mov     [esp+14h+var_4], 0
0x9D82C2: call    SettingCollectionList_AddSetting
0x9D82C7: push    offset sub_A16700; void (__cdecl *)()
0x9D82CC: call    _atexit
0x9D82D1: add     esp, 4
0x9D82D4: mov     ecx, [esp+10h+var_C]
0x9D82D8: mov     large fs:0, ecx
0x9D82DF: pop     ecx
0x9D82E0: add     esp, 0Ch
0x9D82E3: retn
