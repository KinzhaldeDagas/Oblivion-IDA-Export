0x9D8C50: push    0FFFFFFFFh
0x9D8C52: push    offset SEH_9D8C50
0x9D8C57: mov     eax, large fs:0
0x9D8C5D: push    eax
0x9D8C5E: mov     eax, ___security_cookie
0x9D8C63: xor     eax, esp
0x9D8C65: push    eax
0x9D8C66: lea     eax, [esp+10h+var_C]
0x9D8C6A: mov     large fs:0, eax
0x9D8C70: push    offset bUseHardDriveCache
0x9D8C75: mov     ecx, offset INISettingCollection
0x9D8C7A: mov     [esp+14h+var_4], 0
0x9D8C82: call    SettingCollectionList_AddSetting
0x9D8C87: push    offset sub_A16BE0; void (__cdecl *)()
0x9D8C8C: call    _atexit
0x9D8C91: add     esp, 4
0x9D8C94: mov     ecx, [esp+10h+var_C]
0x9D8C98: mov     large fs:0, ecx
0x9D8C9F: pop     ecx
0x9D8CA0: add     esp, 0Ch
0x9D8CA3: retn
