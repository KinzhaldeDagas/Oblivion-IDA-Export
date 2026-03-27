0x9FAE00: push    0FFFFFFFFh
0x9FAE02: push    offset SEH_9FAE00
0x9FAE07: mov     eax, large fs:0
0x9FAE0D: push    eax
0x9FAE0E: mov     eax, ___security_cookie
0x9FAE13: xor     eax, esp
0x9FAE15: push    eax
0x9FAE16: lea     eax, [esp+10h+var_C]
0x9FAE1A: mov     large fs:0, eax
0x9FAE20: push    offset off_B12E2C; "Data\\Fonts\\Tahoma_Bold_Small.fnt"
0x9FAE25: mov     ecx, offset INISettingCollection
0x9FAE2A: mov     [esp+14h+var_4], 0
0x9FAE32: call    SettingCollectionList_AddSetting
0x9FAE37: push    offset sub_A24340; void (__cdecl *)()
0x9FAE3C: call    _atexit
0x9FAE41: add     esp, 4
0x9FAE44: mov     ecx, [esp+10h+var_C]
0x9FAE48: mov     large fs:0, ecx
0x9FAE4F: pop     ecx
0x9FAE50: add     esp, 0Ch
0x9FAE53: retn
