0x9FDC40: push    0FFFFFFFFh
0x9FDC42: push    offset SEH_9FDC40
0x9FDC47: mov     eax, large fs:0
0x9FDC4D: push    eax
0x9FDC4E: mov     eax, ___security_cookie
0x9FDC53: xor     eax, esp
0x9FDC55: push    eax
0x9FDC56: lea     eax, [esp+10h+var_C]
0x9FDC5A: mov     large fs:0, eax
0x9FDC60: push    offset trackLevelUps
0x9FDC65: mov     ecx, offset INISettingCollection
0x9FDC6A: mov     [esp+14h+var_4], 0
0x9FDC72: call    SettingCollectionList_AddSetting
0x9FDC77: push    offset sub_A25920; void (__cdecl *)()
0x9FDC7C: call    _atexit
0x9FDC81: add     esp, 4
0x9FDC84: mov     ecx, [esp+10h+var_C]
0x9FDC88: mov     large fs:0, ecx
0x9FDC8F: pop     ecx
0x9FDC90: add     esp, 0Ch
0x9FDC93: retn
