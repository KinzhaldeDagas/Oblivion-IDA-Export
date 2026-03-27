0x9E2C40: push    0FFFFFFFFh
0x9E2C42: push    offset SEH_9E2C40
0x9E2C47: mov     eax, large fs:0
0x9E2C4D: push    eax
0x9E2C4E: mov     eax, ___security_cookie
0x9E2C53: xor     eax, esp
0x9E2C55: push    eax
0x9E2C56: lea     eax, [esp+10h+var_C]
0x9E2C5A: mov     large fs:0, eax
0x9E2C60: push    offset dword_B08B64
0x9E2C65: mov     ecx, offset INISettingCollection
0x9E2C6A: mov     [esp+14h+var_4], 0
0x9E2C72: call    SettingCollectionList_AddSetting
0x9E2C77: push    offset sub_A1B900; void (__cdecl *)()
0x9E2C7C: call    _atexit
0x9E2C81: add     esp, 4
0x9E2C84: mov     ecx, [esp+10h+var_C]
0x9E2C88: mov     large fs:0, ecx
0x9E2C8F: pop     ecx
0x9E2C90: add     esp, 0Ch
0x9E2C93: retn
