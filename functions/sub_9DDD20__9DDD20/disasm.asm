0x9DDD20: push    0FFFFFFFFh
0x9DDD22: push    offset SEH_9DDD20
0x9DDD27: mov     eax, large fs:0
0x9DDD2D: push    eax
0x9DDD2E: mov     eax, ___security_cookie
0x9DDD33: xor     eax, esp
0x9DDD35: push    eax
0x9DDD36: lea     eax, [esp+10h+var_C]
0x9DDD3A: mov     large fs:0, eax
0x9DDD40: push    offset flt_B06DDC
0x9DDD45: mov     ecx, offset INISettingCollection
0x9DDD4A: mov     [esp+14h+var_4], 0
0x9DDD52: call    SettingCollectionList_AddSetting
0x9DDD57: push    offset sub_A19440; void (__cdecl *)()
0x9DDD5C: call    _atexit
0x9DDD61: add     esp, 4
0x9DDD64: mov     ecx, [esp+10h+var_C]
0x9DDD68: mov     large fs:0, ecx
0x9DDD6F: pop     ecx
0x9DDD70: add     esp, 0Ch
0x9DDD73: retn
