0x9FFB20: push    0FFFFFFFFh
0x9FFB22: push    offset SEH_9FFB20
0x9FFB27: mov     eax, large fs:0
0x9FFB2D: push    eax
0x9FFB2E: mov     eax, ___security_cookie
0x9FFB33: xor     eax, esp
0x9FFB35: push    eax
0x9FFB36: lea     eax, [esp+10h+var_C]
0x9FFB3A: mov     large fs:0, eax
0x9FFB40: push    offset byte_B162EC
0x9FFB45: mov     ecx, offset INISettingCollection
0x9FFB4A: mov     [esp+14h+var_4], 0
0x9FFB52: call    SettingCollectionList_AddSetting
0x9FFB57: push    offset sub_A26670; void (__cdecl *)()
0x9FFB5C: call    _atexit
0x9FFB61: add     esp, 4
0x9FFB64: mov     ecx, [esp+10h+var_C]
0x9FFB68: mov     large fs:0, ecx
0x9FFB6F: pop     ecx
0x9FFB70: add     esp, 0Ch
0x9FFB73: retn
