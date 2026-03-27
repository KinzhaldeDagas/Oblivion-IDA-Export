0x9E3580: push    0FFFFFFFFh
0x9E3582: push    offset SEH_9E3580
0x9E3587: mov     eax, large fs:0
0x9E358D: push    eax
0x9E358E: mov     eax, ___security_cookie
0x9E3593: xor     eax, esp
0x9E3595: push    eax
0x9E3596: lea     eax, [esp+10h+var_C]
0x9E359A: mov     large fs:0, eax
0x9E35A0: push    offset SettingGrassStartFadeDistance
0x9E35A5: mov     ecx, offset INISettingCollection
0x9E35AA: mov     [esp+14h+var_4], 0
0x9E35B2: call    SettingCollectionList_AddSetting
0x9E35B7: push    offset sub_A1BE50; void (__cdecl *)()
0x9E35BC: call    _atexit
0x9E35C1: add     esp, 4
0x9E35C4: mov     ecx, [esp+10h+var_C]
0x9E35C8: mov     large fs:0, ecx
0x9E35CF: pop     ecx
0x9E35D0: add     esp, 0Ch
0x9E35D3: retn
