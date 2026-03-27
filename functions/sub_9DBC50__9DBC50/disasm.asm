0x9DBC50: push    0FFFFFFFFh
0x9DBC52: push    offset SEH_9DBC50
0x9DBC57: mov     eax, large fs:0
0x9DBC5D: push    eax
0x9DBC5E: mov     eax, ___security_cookie
0x9DBC63: xor     eax, esp
0x9DBC65: push    eax
0x9DBC66: lea     eax, [esp+10h+var_C]
0x9DBC6A: mov     large fs:0, eax
0x9DBC70: push    offset unk_B05B9C
0x9DBC75: mov     ecx, offset INISettingCollection
0x9DBC7A: mov     [esp+14h+var_4], 0
0x9DBC82: call    SettingCollectionList_AddSetting
0x9DBC87: push    offset sub_A18380; void (__cdecl *)()
0x9DBC8C: call    _atexit
0x9DBC91: add     esp, 4
0x9DBC94: mov     ecx, [esp+10h+var_C]
0x9DBC98: mov     large fs:0, ecx
0x9DBC9F: pop     ecx
0x9DBCA0: add     esp, 0Ch
0x9DBCA3: retn
