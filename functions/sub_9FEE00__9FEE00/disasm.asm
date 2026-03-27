0x9FEE00: push    0FFFFFFFFh
0x9FEE02: push    offset SEH_9FEE00
0x9FEE07: mov     eax, large fs:0
0x9FEE0D: push    eax
0x9FEE0E: mov     eax, ___security_cookie
0x9FEE13: xor     eax, esp
0x9FEE15: push    eax
0x9FEE16: lea     eax, [esp+10h+var_C]
0x9FEE1A: mov     large fs:0, eax
0x9FEE20: push    offset bSoundEnabled_Audio
0x9FEE25: mov     ecx, offset INISettingCollection
0x9FEE2A: mov     [esp+14h+var_4], 0
0x9FEE32: call    SettingCollectionList_AddSetting
0x9FEE37: push    offset sub_A25FD0; void (__cdecl *)()
0x9FEE3C: call    _atexit
0x9FEE41: add     esp, 4
0x9FEE44: mov     ecx, [esp+10h+var_C]
0x9FEE48: mov     large fs:0, ecx
0x9FEE4F: pop     ecx
0x9FEE50: add     esp, 0Ch
0x9FEE53: retn
