0x9DCF40: push    0FFFFFFFFh
0x9DCF42: push    offset SEH_9DCF40
0x9DCF47: mov     eax, large fs:0
0x9DCF4D: push    eax
0x9DCF4E: mov     eax, ___security_cookie
0x9DCF53: xor     eax, esp
0x9DCF55: push    eax
0x9DCF56: lea     eax, [esp+10h+var_C]
0x9DCF5A: mov     large fs:0, eax
0x9DCF60: push    offset byte_B06CB4
0x9DCF65: mov     ecx, offset INISettingCollection
0x9DCF6A: mov     [esp+14h+var_4], 0
0x9DCF72: call    SettingCollectionList_AddSetting
0x9DCF77: push    offset sub_A18D50; void (__cdecl *)()
0x9DCF7C: call    _atexit
0x9DCF81: add     esp, 4
0x9DCF84: mov     ecx, [esp+10h+var_C]
0x9DCF88: mov     large fs:0, ecx
0x9DCF8F: pop     ecx
0x9DCF90: add     esp, 0Ch
0x9DCF93: retn
