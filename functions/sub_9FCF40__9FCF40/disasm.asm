0x9FCF40: push    0FFFFFFFFh
0x9FCF42: push    offset SEH_9FCF40
0x9FCF47: mov     eax, large fs:0
0x9FCF4D: push    eax
0x9FCF4E: mov     eax, ___security_cookie
0x9FCF53: xor     eax, esp
0x9FCF55: push    eax
0x9FCF56: lea     eax, [esp+10h+var_C]
0x9FCF5A: mov     large fs:0, eax
0x9FCF60: push    offset trackAllDeath
0x9FCF65: mov     ecx, offset INISettingCollection
0x9FCF6A: mov     [esp+14h+var_4], 0
0x9FCF72: call    SettingCollectionList_AddSetting
0x9FCF77: push    offset sub_A252C0; void (__cdecl *)()
0x9FCF7C: call    _atexit
0x9FCF81: add     esp, 4
0x9FCF84: mov     ecx, [esp+10h+var_C]
0x9FCF88: mov     large fs:0, ecx
0x9FCF8F: pop     ecx
0x9FCF90: add     esp, 0Ch
0x9FCF93: retn
