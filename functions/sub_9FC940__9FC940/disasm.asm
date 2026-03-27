0x9FC940: push    0FFFFFFFFh
0x9FC942: push    offset SEH_9FC940
0x9FC947: mov     eax, large fs:0
0x9FC94D: push    eax
0x9FC94E: mov     eax, ___security_cookie
0x9FC953: xor     eax, esp
0x9FC955: push    eax
0x9FC956: lea     eax, [esp+10h+var_C]
0x9FC95A: mov     large fs:0, eax
0x9FC960: push    offset dword_B1482C
0x9FC965: mov     ecx, offset INISettingCollection
0x9FC96A: mov     [esp+14h+var_4], 0
0x9FC972: call    SettingCollectionList_AddSetting
0x9FC977: push    offset sub_A24FC0; void (__cdecl *)()
0x9FC97C: call    _atexit
0x9FC981: add     esp, 4
0x9FC984: mov     ecx, [esp+10h+var_C]
0x9FC988: mov     large fs:0, ecx
0x9FC98F: pop     ecx
0x9FC990: add     esp, 0Ch
0x9FC993: retn
