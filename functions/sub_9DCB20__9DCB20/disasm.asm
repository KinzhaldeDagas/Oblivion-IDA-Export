0x9DCB20: push    0FFFFFFFFh
0x9DCB22: push    offset SEH_9DCB20
0x9DCB27: mov     eax, large fs:0
0x9DCB2D: push    eax
0x9DCB2E: mov     eax, ___security_cookie
0x9DCB33: xor     eax, esp
0x9DCB35: push    eax
0x9DCB36: lea     eax, [esp+10h+var_C]
0x9DCB3A: mov     large fs:0, eax
0x9DCB40: push    offset dword_B06C5C
0x9DCB45: mov     ecx, offset INISettingCollection
0x9DCB4A: mov     [esp+14h+var_4], 0
0x9DCB52: call    SettingCollectionList_AddSetting
0x9DCB57: push    offset sub_A18B40; void (__cdecl *)()
0x9DCB5C: call    _atexit
0x9DCB61: add     esp, 4
0x9DCB64: mov     ecx, [esp+10h+var_C]
0x9DCB68: mov     large fs:0, ecx
0x9DCB6F: pop     ecx
0x9DCB70: add     esp, 0Ch
0x9DCB73: retn
