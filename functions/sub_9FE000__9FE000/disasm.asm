0x9FE000: push    0FFFFFFFFh
0x9FE002: push    offset SEH_9FE000
0x9FE007: mov     eax, large fs:0
0x9FE00D: push    eax
0x9FE00E: mov     eax, ___security_cookie
0x9FE013: xor     eax, esp
0x9FE015: push    eax
0x9FE016: lea     eax, [esp+10h+var_C]
0x9FE01A: mov     large fs:0, eax
0x9FE020: push    offset flt_B14EF8
0x9FE025: mov     ecx, offset INISettingCollection
0x9FE02A: mov     [esp+14h+var_4], 0
0x9FE032: call    SettingCollectionList_AddSetting
0x9FE037: push    offset sub_A25B00; void (__cdecl *)()
0x9FE03C: call    _atexit
0x9FE041: add     esp, 4
0x9FE044: mov     ecx, [esp+10h+var_C]
0x9FE048: mov     large fs:0, ecx
0x9FE04F: pop     ecx
0x9FE050: add     esp, 0Ch
0x9FE053: retn
