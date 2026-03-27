0x9DCD00: push    0FFFFFFFFh
0x9DCD02: push    offset SEH_9DCD00
0x9DCD07: mov     eax, large fs:0
0x9DCD0D: push    eax
0x9DCD0E: mov     eax, ___security_cookie
0x9DCD13: xor     eax, esp
0x9DCD15: push    eax
0x9DCD16: lea     eax, [esp+10h+var_C]
0x9DCD1A: mov     large fs:0, eax
0x9DCD20: push    offset Y
0x9DCD25: mov     ecx, offset INISettingCollection
0x9DCD2A: mov     [esp+14h+var_4], 0
0x9DCD32: call    SettingCollectionList_AddSetting
0x9DCD37: push    offset sub_A18C30; void (__cdecl *)()
0x9DCD3C: call    _atexit
0x9DCD41: add     esp, 4
0x9DCD44: mov     ecx, [esp+10h+var_C]
0x9DCD48: mov     large fs:0, ecx
0x9DCD4F: pop     ecx
0x9DCD50: add     esp, 0Ch
0x9DCD53: retn
