0x9FD3F0: push    0FFFFFFFFh
0x9FD3F2: push    offset SEH_9FD3F0
0x9FD3F7: mov     eax, large fs:0
0x9FD3FD: push    eax
0x9FD3FE: mov     eax, ___security_cookie
0x9FD403: xor     eax, esp
0x9FD405: push    eax
0x9FD406: lea     eax, [esp+10h+var_C]
0x9FD40A: mov     large fs:0, eax
0x9FD410: push    offset dword_B14B94
0x9FD415: mov     ecx, offset INISettingCollection
0x9FD41A: mov     [esp+14h+var_4], 0
0x9FD422: call    SettingCollectionList_AddSetting
0x9FD427: push    offset sub_A254F0; void (__cdecl *)()
0x9FD42C: call    _atexit
0x9FD431: add     esp, 4
0x9FD434: mov     ecx, [esp+10h+var_C]
0x9FD438: mov     large fs:0, ecx
0x9FD43F: pop     ecx
0x9FD440: add     esp, 0Ch
0x9FD443: retn
