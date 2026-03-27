0x9DBA50: push    0FFFFFFFFh
0x9DBA52: push    offset SEH_9DBA50
0x9DBA57: mov     eax, large fs:0
0x9DBA5D: push    eax
0x9DBA5E: mov     eax, ___security_cookie
0x9DBA63: xor     eax, esp
0x9DBA65: push    eax
0x9DBA66: lea     eax, [esp+10h+var_C]
0x9DBA6A: mov     large fs:0, eax
0x9DBA70: push    offset byte_B055A4
0x9DBA75: mov     ecx, offset INISettingCollection
0x9DBA7A: mov     [esp+14h+var_4], 0
0x9DBA82: call    SettingCollectionList_AddSetting
0x9DBA87: push    offset sub_A18270; void (__cdecl *)()
0x9DBA8C: call    _atexit
0x9DBA91: add     esp, 4
0x9DBA94: mov     ecx, [esp+10h+var_C]
0x9DBA98: mov     large fs:0, ecx
0x9DBA9F: pop     ecx
0x9DBAA0: add     esp, 0Ch
0x9DBAA3: retn
