0x9DAAD0: push    0FFFFFFFFh
0x9DAAD2: push    offset SEH_9DAAD0
0x9DAAD7: mov     eax, large fs:0
0x9DAADD: push    eax
0x9DAADE: mov     eax, ___security_cookie
0x9DAAE3: xor     eax, esp
0x9DAAE5: push    eax
0x9DAAE6: lea     eax, [esp+10h+var_C]
0x9DAAEA: mov     large fs:0, eax
0x9DAAF0: push    offset iRetainFilenameOffsetTable_Archive
0x9DAAF5: mov     ecx, offset INISettingCollection
0x9DAAFA: mov     [esp+14h+var_4], 0
0x9DAB02: call    SettingCollectionList_AddSetting
0x9DAB07: push    offset sub_A17AA0; void (__cdecl *)()
0x9DAB0C: call    _atexit
0x9DAB11: add     esp, 4
0x9DAB14: mov     ecx, [esp+10h+var_C]
0x9DAB18: mov     large fs:0, ecx
0x9DAB1F: pop     ecx
0x9DAB20: add     esp, 0Ch
0x9DAB23: retn
