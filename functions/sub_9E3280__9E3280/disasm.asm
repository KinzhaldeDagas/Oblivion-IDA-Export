0x9E3280: push    0FFFFFFFFh
0x9E3282: push    offset SEH_9E3280
0x9E3287: mov     eax, large fs:0
0x9E328D: push    eax
0x9E328E: mov     eax, ___security_cookie
0x9E3293: xor     eax, esp
0x9E3295: push    eax
0x9E3296: lea     eax, [esp+10h+var_C]
0x9E329A: mov     large fs:0, eax
0x9E32A0: push    offset preventHavokAddClutter
0x9E32A5: mov     ecx, offset INISettingCollection
0x9E32AA: mov     [esp+14h+var_4], 0
0x9E32B2: call    SettingCollectionList_AddSetting
0x9E32B7: push    offset sub_A1BC30; void (__cdecl *)()
0x9E32BC: call    _atexit
0x9E32C1: add     esp, 4
0x9E32C4: mov     ecx, [esp+10h+var_C]
0x9E32C8: mov     large fs:0, ecx
0x9E32CF: pop     ecx
0x9E32D0: add     esp, 0Ch
0x9E32D3: retn
