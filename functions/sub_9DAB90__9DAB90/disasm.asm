0x9DAB90: push    0FFFFFFFFh
0x9DAB92: push    offset SEH_9DAB90
0x9DAB97: mov     eax, large fs:0
0x9DAB9D: push    eax
0x9DAB9E: mov     eax, ___security_cookie
0x9DABA3: xor     eax, esp
0x9DABA5: push    eax
0x9DABA6: lea     eax, [esp+10h+var_C]
0x9DABAA: mov     large fs:0, eax
0x9DABB0: push    offset sArchiveList_Archive
0x9DABB5: mov     ecx, offset INISettingCollection
0x9DABBA: mov     [esp+14h+var_4], 0
0x9DABC2: call    SettingCollectionList_AddSetting
0x9DABC7: push    offset sub_A17B00; void (__cdecl *)()
0x9DABCC: call    _atexit
0x9DABD1: add     esp, 4
0x9DABD4: mov     ecx, [esp+10h+var_C]
0x9DABD8: mov     large fs:0, ecx
0x9DABDF: pop     ecx
0x9DABE0: add     esp, 0Ch
0x9DABE3: retn
