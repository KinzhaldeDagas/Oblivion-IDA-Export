0x9DBD70: push    0FFFFFFFFh
0x9DBD72: push    offset SEH_9DBD70
0x9DBD77: mov     eax, large fs:0
0x9DBD7D: push    eax
0x9DBD7E: mov     eax, ___security_cookie
0x9DBD83: xor     eax, esp
0x9DBD85: push    eax
0x9DBD86: lea     eax, [esp+10h+var_C]
0x9DBD8A: mov     large fs:0, eax
0x9DBD90: push    offset Str
0x9DBD95: mov     ecx, offset INISettingCollection
0x9DBD9A: mov     [esp+14h+var_4], 0
0x9DBDA2: call    SettingCollectionList_AddSetting
0x9DBDA7: push    offset sub_A18410; void (__cdecl *)()
0x9DBDAC: call    _atexit
0x9DBDB1: add     esp, 4
0x9DBDB4: mov     ecx, [esp+10h+var_C]
0x9DBDB8: mov     large fs:0, ecx
0x9DBDBF: pop     ecx
0x9DBDC0: add     esp, 0Ch
0x9DBDC3: retn
