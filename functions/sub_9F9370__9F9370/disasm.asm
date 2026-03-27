0x9F9370: push    0FFFFFFFFh
0x9F9372: push    offset SEH_9F9370
0x9F9377: mov     eax, large fs:0
0x9F937D: push    eax
0x9F937E: mov     eax, ___security_cookie
0x9F9383: xor     eax, esp
0x9F9385: push    eax
0x9F9386: lea     eax, [esp+10h+var_C]
0x9F938A: mov     large fs:0, eax
0x9F9390: push    offset flt_B12620
0x9F9395: mov     ecx, offset INISettingCollection
0x9F939A: mov     [esp+14h+var_4], 0
0x9F93A2: call    SettingCollectionList_AddSetting
0x9F93A7: push    offset sub_A23750; void (__cdecl *)()
0x9F93AC: call    _atexit
0x9F93B1: add     esp, 4
0x9F93B4: mov     ecx, [esp+10h+var_C]
0x9F93B8: mov     large fs:0, ecx
0x9F93BF: pop     ecx
0x9F93C0: add     esp, 0Ch
0x9F93C3: retn
