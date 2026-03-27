0x9D9A40: push    0FFFFFFFFh
0x9D9A42: push    offset SEH_9D9A40
0x9D9A47: mov     eax, large fs:0
0x9D9A4D: push    eax
0x9D9A4E: mov     eax, ___security_cookie
0x9D9A53: xor     eax, esp
0x9D9A55: push    eax
0x9D9A56: lea     eax, [esp+10h+var_C]
0x9D9A5A: mov     large fs:0, eax
0x9D9A60: push    offset g_DefaulFOV
0x9D9A65: mov     ecx, offset INISettingCollection
0x9D9A6A: mov     [esp+14h+var_4], 0
0x9D9A72: call    SettingCollectionList_AddSetting
0x9D9A77: push    offset sub_A172D0; void (__cdecl *)()
0x9D9A7C: call    _atexit
0x9D9A81: add     esp, 4
0x9D9A84: mov     ecx, [esp+10h+var_C]
0x9D9A88: mov     large fs:0, ecx
0x9D9A8F: pop     ecx
0x9D9A90: add     esp, 0Ch
0x9D9A93: retn
