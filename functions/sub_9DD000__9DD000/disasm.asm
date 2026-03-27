0x9DD000: push    0FFFFFFFFh
0x9DD002: push    offset SEH_9DD000
0x9DD007: mov     eax, large fs:0
0x9DD00D: push    eax
0x9DD00E: mov     eax, ___security_cookie
0x9DD013: xor     eax, esp
0x9DD015: push    eax
0x9DD016: lea     eax, [esp+10h+var_C]
0x9DD01A: mov     large fs:0, eax
0x9DD020: push    offset bDoImageSpaceEffect
0x9DD025: mov     ecx, offset INISettingCollection
0x9DD02A: mov     [esp+14h+var_4], 0
0x9DD032: call    SettingCollectionList_AddSetting
0x9DD037: push    offset sub_A18DB0; void (__cdecl *)()
0x9DD03C: call    _atexit
0x9DD041: add     esp, 4
0x9DD044: mov     ecx, [esp+10h+var_C]
0x9DD048: mov     large fs:0, ecx
0x9DD04F: pop     ecx
0x9DD050: add     esp, 0Ch
0x9DD053: retn
