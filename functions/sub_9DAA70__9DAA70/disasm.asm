0x9DAA70: push    0FFFFFFFFh
0x9DAA72: push    offset SEH_9DAA70
0x9DAA77: mov     eax, large fs:0
0x9DAA7D: push    eax
0x9DAA7E: mov     eax, ___security_cookie
0x9DAA83: xor     eax, esp
0x9DAA85: push    eax
0x9DAA86: lea     eax, [esp+10h+var_C]
0x9DAA8A: mov     large fs:0, eax
0x9DAA90: push    offset iRetainFilenameStringTable_Archive
0x9DAA95: mov     ecx, offset INISettingCollection
0x9DAA9A: mov     [esp+14h+var_4], 0
0x9DAAA2: call    SettingCollectionList_AddSetting
0x9DAAA7: push    offset sub_A17A70; void (__cdecl *)()
0x9DAAAC: call    _atexit
0x9DAAB1: add     esp, 4
0x9DAAB4: mov     ecx, [esp+10h+var_C]
0x9DAAB8: mov     large fs:0, ecx
0x9DAABF: pop     ecx
0x9DAAC0: add     esp, 0Ch
0x9DAAC3: retn
