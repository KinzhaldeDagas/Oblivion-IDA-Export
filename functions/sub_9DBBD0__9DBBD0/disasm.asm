0x9DBBD0: push    0FFFFFFFFh
0x9DBBD2: push    offset SEH_9DBBD0
0x9DBBD7: mov     eax, large fs:0
0x9DBBDD: push    eax
0x9DBBDE: mov     eax, ___security_cookie
0x9DBBE3: xor     eax, esp
0x9DBBE5: push    eax
0x9DBBE6: lea     eax, [esp+10h+var_C]
0x9DBBEA: mov     large fs:0, eax
0x9DBBF0: push    offset unk_B055C4
0x9DBBF5: mov     ecx, offset INISettingCollection
0x9DBBFA: mov     [esp+14h+var_4], 0
0x9DBC02: call    SettingCollectionList_AddSetting
0x9DBC07: push    offset sub_A18330; void (__cdecl *)()
0x9DBC0C: call    _atexit
0x9DBC11: add     esp, 4
0x9DBC14: mov     ecx, [esp+10h+var_C]
0x9DBC18: mov     large fs:0, ecx
0x9DBC1F: pop     ecx
0x9DBC20: add     esp, 0Ch
0x9DBC23: retn
