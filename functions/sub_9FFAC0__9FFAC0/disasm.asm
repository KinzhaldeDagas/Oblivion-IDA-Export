0x9FFAC0: push    0FFFFFFFFh
0x9FFAC2: push    offset SEH_9FFAC0
0x9FFAC7: mov     eax, large fs:0
0x9FFACD: push    eax
0x9FFACE: mov     eax, ___security_cookie
0x9FFAD3: xor     eax, esp
0x9FFAD5: push    eax
0x9FFAD6: lea     eax, [esp+10h+var_C]
0x9FFADA: mov     large fs:0, eax
0x9FFAE0: push    offset fLargeWeaponSpeedMax_Audio
0x9FFAE5: mov     ecx, offset INISettingCollection
0x9FFAEA: mov     [esp+14h+var_4], 0
0x9FFAF2: call    SettingCollectionList_AddSetting
0x9FFAF7: push    offset sub_A26640; void (__cdecl *)()
0x9FFAFC: call    _atexit
0x9FFB01: add     esp, 4
0x9FFB04: mov     ecx, [esp+10h+var_C]
0x9FFB08: mov     large fs:0, ecx
0x9FFB0F: pop     ecx
0x9FFB10: add     esp, 0Ch
0x9FFB13: retn
