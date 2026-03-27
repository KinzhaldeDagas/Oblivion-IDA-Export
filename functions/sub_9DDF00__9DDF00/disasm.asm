0x9DDF00: push    0FFFFFFFFh
0x9DDF02: push    offset SEH_9DDF00
0x9DDF07: mov     eax, large fs:0
0x9DDF0D: push    eax
0x9DDF0E: mov     eax, ___security_cookie
0x9DDF13: xor     eax, esp
0x9DDF15: push    eax
0x9DDF16: lea     eax, [esp+10h+var_C]
0x9DDF1A: mov     large fs:0, eax
0x9DDF20: push    offset flt_B06E04
0x9DDF25: mov     ecx, offset INISettingCollection
0x9DDF2A: mov     [esp+14h+var_4], 0
0x9DDF32: call    SettingCollectionList_AddSetting
0x9DDF37: push    offset sub_A19530; void (__cdecl *)()
0x9DDF3C: call    _atexit
0x9DDF41: add     esp, 4
0x9DDF44: mov     ecx, [esp+10h+var_C]
0x9DDF48: mov     large fs:0, ecx
0x9DDF4F: pop     ecx
0x9DDF50: add     esp, 0Ch
0x9DDF53: retn
