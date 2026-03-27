0xA10E50: push    0FFFFFFFFh
0xA10E52: push    offset SEH_A10E50
0xA10E57: mov     eax, large fs:0
0xA10E5D: push    eax
0xA10E5E: mov     eax, ___security_cookie
0xA10E63: xor     eax, esp
0xA10E65: push    eax
0xA10E66: lea     eax, [esp+10h+var_C]
0xA10E6A: mov     large fs:0, eax
0xA10E70: push    offset iDistantLODGroupWidth_DistantLOD
0xA10E75: mov     ecx, offset INISettingCollection
0xA10E7A: mov     [esp+14h+var_4], 0
0xA10E82: call    SettingCollectionList_AddSetting
0xA10E87: push    offset sub_A27120; void (__cdecl *)()
0xA10E8C: call    _atexit
0xA10E91: add     esp, 4
0xA10E94: mov     ecx, [esp+10h+var_C]
0xA10E98: mov     large fs:0, ecx
0xA10E9F: pop     ecx
0xA10EA0: add     esp, 0Ch
0xA10EA3: retn
