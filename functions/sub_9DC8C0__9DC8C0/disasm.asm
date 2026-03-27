0x9DC8C0: push    0FFFFFFFFh
0x9DC8C2: push    offset SEH_9DC8C0
0x9DC8C7: mov     eax, large fs:0
0x9DC8CD: push    eax
0x9DC8CE: mov     eax, ___security_cookie
0x9DC8D3: xor     eax, esp
0x9DC8D5: push    eax
0x9DC8D6: lea     eax, [esp+10h+var_C]
0x9DC8DA: mov     large fs:0, eax
0x9DC8E0: push    offset bSkipInitializationFlows_MESSAGES
0x9DC8E5: mov     ecx, offset INISettingCollection
0x9DC8EA: mov     [esp+14h+var_4], 0
0x9DC8F2: call    SettingCollectionList_AddSetting
0x9DC8F7: push    offset sub_A18A20; void (__cdecl *)()
0x9DC8FC: call    _atexit
0x9DC901: add     esp, 4
0x9DC904: mov     ecx, [esp+10h+var_C]
0x9DC908: mov     large fs:0, ecx
0x9DC90F: pop     ecx
0x9DC910: add     esp, 0Ch
0x9DC913: retn
