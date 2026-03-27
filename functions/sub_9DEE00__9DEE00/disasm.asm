0x9DEE00: push    0FFFFFFFFh
0x9DEE02: push    offset SEH_9DEE00
0x9DEE07: mov     eax, large fs:0
0x9DEE0D: push    eax
0x9DEE0E: mov     eax, ___security_cookie
0x9DEE13: xor     eax, esp
0x9DEE15: push    eax
0x9DEE16: lea     eax, [esp+10h+var_C]
0x9DEE1A: mov     large fs:0, eax
0x9DEE20: push    offset unk_B06F44
0x9DEE25: mov     ecx, offset INISettingCollection
0x9DEE2A: mov     [esp+14h+var_4], 0
0x9DEE32: call    SettingCollectionList_AddSetting
0x9DEE37: push    offset sub_A19CB0; void (__cdecl *)()
0x9DEE3C: call    _atexit
0x9DEE41: add     esp, 4
0x9DEE44: mov     ecx, [esp+10h+var_C]
0x9DEE48: mov     large fs:0, ecx
0x9DEE4F: pop     ecx
0x9DEE50: add     esp, 0Ch
0x9DEE53: retn
