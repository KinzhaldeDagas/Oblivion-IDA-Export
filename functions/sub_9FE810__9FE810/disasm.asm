0x9FE810: push    0FFFFFFFFh
0x9FE812: push    offset SEH_9FE810
0x9FE817: mov     eax, large fs:0
0x9FE81D: push    eax
0x9FE81E: mov     eax, ___security_cookie
0x9FE823: xor     eax, esp
0x9FE825: push    eax
0x9FE826: lea     eax, [esp+10h+var_C]
0x9FE82A: mov     large fs:0, eax
0x9FE830: push    offset bSnapToAngle
0x9FE835: mov     ecx, offset INISettingCollection
0x9FE83A: mov     [esp+14h+var_4], 0
0x9FE842: call    SettingCollectionList_AddSetting
0x9FE847: push    offset sub_A25E70; void (__cdecl *)()
0x9FE84C: call    _atexit
0x9FE851: add     esp, 4
0x9FE854: mov     ecx, [esp+10h+var_C]
0x9FE858: mov     large fs:0, ecx
0x9FE85F: pop     ecx
0x9FE860: add     esp, 0Ch
0x9FE863: retn
