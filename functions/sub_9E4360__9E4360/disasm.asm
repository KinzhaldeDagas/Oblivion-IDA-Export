0x9E4360: push    0FFFFFFFFh
0x9E4362: push    offset SEH_9E4360
0x9E4367: mov     eax, large fs:0
0x9E436D: push    eax
0x9E436E: mov     eax, ___security_cookie
0x9E4373: xor     eax, esp
0x9E4375: push    eax
0x9E4376: lea     eax, [esp+10h+var_C]
0x9E437A: mov     large fs:0, eax
0x9E4380: push    offset dword_B11910
0x9E4385: mov     ecx, offset INISettingCollection
0x9E438A: mov     [esp+14h+var_4], 0
0x9E4392: call    SettingCollectionList_AddSetting
0x9E4397: push    offset sub_A1C610; void (__cdecl *)()
0x9E439C: call    _atexit
0x9E43A1: add     esp, 4
0x9E43A4: mov     ecx, [esp+10h+var_C]
0x9E43A8: mov     large fs:0, ecx
0x9E43AF: pop     ecx
0x9E43B0: add     esp, 0Ch
0x9E43B3: retn
