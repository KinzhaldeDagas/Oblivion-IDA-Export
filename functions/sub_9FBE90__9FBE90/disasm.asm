0x9FBE90: push    0FFFFFFFFh
0x9FBE92: push    offset SEH_9FBE90
0x9FBE97: mov     eax, large fs:0
0x9FBE9D: push    eax
0x9FBE9E: mov     eax, ___security_cookie
0x9FBEA3: xor     eax, esp
0x9FBEA5: push    eax
0x9FBEA6: lea     eax, [esp+10h+var_C]
0x9FBEAA: mov     large fs:0, eax
0x9FBEB0: push    offset unk_B140B0
0x9FBEB5: mov     ecx, offset INISettingCollection
0x9FBEBA: mov     [esp+14h+var_4], 0
0x9FBEC2: call    SettingCollectionList_AddSetting
0x9FBEC7: push    offset sub_A24B20; void (__cdecl *)()
0x9FBECC: call    _atexit
0x9FBED1: add     esp, 4
0x9FBED4: mov     ecx, [esp+10h+var_C]
0x9FBED8: mov     large fs:0, ecx
0x9FBEDF: pop     ecx
0x9FBEE0: add     esp, 0Ch
0x9FBEE3: retn
