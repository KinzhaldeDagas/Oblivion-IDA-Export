0x9FDB20: push    0FFFFFFFFh
0x9FDB22: push    offset SEH_9FDB20
0x9FDB27: mov     eax, large fs:0
0x9FDB2D: push    eax
0x9FDB2E: mov     eax, ___security_cookie
0x9FDB33: xor     eax, esp
0x9FDB35: push    eax
0x9FDB36: lea     eax, [esp+10h+var_C]
0x9FDB3A: mov     large fs:0, eax
0x9FDB40: push    offset bHealthBarShowing_Gameplay
0x9FDB45: mov     ecx, offset INISettingCollection
0x9FDB4A: mov     [esp+14h+var_4], 0
0x9FDB52: call    SettingCollectionList_AddSetting
0x9FDB57: push    offset sub_A25890; void (__cdecl *)()
0x9FDB5C: call    _atexit
0x9FDB61: add     esp, 4
0x9FDB64: mov     ecx, [esp+10h+var_C]
0x9FDB68: mov     large fs:0, ecx
0x9FDB6F: pop     ecx
0x9FDB70: add     esp, 0Ch
0x9FDB73: retn
