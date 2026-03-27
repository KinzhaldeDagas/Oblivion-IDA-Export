0x9D8950: push    0FFFFFFFFh
0x9D8952: push    offset SEH_9D8950
0x9D8957: mov     eax, large fs:0
0x9D895D: push    eax
0x9D895E: mov     eax, ___security_cookie
0x9D8963: xor     eax, esp
0x9D8965: push    eax
0x9D8966: lea     eax, [esp+10h+var_C]
0x9D896A: mov     large fs:0, eax
0x9D8970: push    offset bUSeThreadedMorhper
0x9D8975: mov     ecx, offset INISettingCollection
0x9D897A: mov     [esp+14h+var_4], 0
0x9D8982: call    SettingCollectionList_AddSetting
0x9D8987: push    offset sub_A16A60; void (__cdecl *)()
0x9D898C: call    _atexit
0x9D8991: add     esp, 4
0x9D8994: mov     ecx, [esp+10h+var_C]
0x9D8998: mov     large fs:0, ecx
0x9D899F: pop     ecx
0x9D89A0: add     esp, 0Ch
0x9D89A3: retn
