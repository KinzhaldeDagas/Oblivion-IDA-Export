0x9DDBA0: push    0FFFFFFFFh
0x9DDBA2: push    offset SEH_9DDBA0
0x9DDBA7: mov     eax, large fs:0
0x9DDBAD: push    eax
0x9DDBAE: mov     eax, ___security_cookie
0x9DDBB3: xor     eax, esp
0x9DDBB5: push    eax
0x9DDBB6: lea     eax, [esp+10h+var_C]
0x9DDBBA: mov     large fs:0, eax
0x9DDBC0: push    offset ForcePow2Text
0x9DDBC5: mov     ecx, offset INISettingCollection
0x9DDBCA: mov     [esp+14h+var_4], 0
0x9DDBD2: call    SettingCollectionList_AddSetting
0x9DDBD7: push    offset sub_A19380; void (__cdecl *)()
0x9DDBDC: call    _atexit
0x9DDBE1: add     esp, 4
0x9DDBE4: mov     ecx, [esp+10h+var_C]
0x9DDBE8: mov     large fs:0, ecx
0x9DDBEF: pop     ecx
0x9DDBF0: add     esp, 0Ch
0x9DDBF3: retn
