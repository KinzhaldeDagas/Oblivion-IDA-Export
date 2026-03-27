0x9DF220: push    0FFFFFFFFh
0x9DF222: push    offset SEH_9DF220
0x9DF227: mov     eax, large fs:0
0x9DF22D: push    eax
0x9DF22E: mov     eax, ___security_cookie
0x9DF233: xor     eax, esp
0x9DF235: push    eax
0x9DF236: lea     eax, [esp+10h+var_C]
0x9DF23A: mov     large fs:0, eax
0x9DF240: push    offset bBlendLandscapeValue
0x9DF245: mov     ecx, offset INISettingCollection
0x9DF24A: mov     [esp+14h+var_4], 0
0x9DF252: call    SettingCollectionList_AddSetting
0x9DF257: push    offset sub_A19EC0; void (__cdecl *)()
0x9DF25C: call    _atexit
0x9DF261: add     esp, 4
0x9DF264: mov     ecx, [esp+10h+var_C]
0x9DF268: mov     large fs:0, ecx
0x9DF26F: pop     ecx
0x9DF270: add     esp, 0Ch
0x9DF273: retn
