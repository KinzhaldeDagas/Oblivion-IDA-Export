0x9FE240: push    0FFFFFFFFh
0x9FE242: push    offset SEH_9FE240
0x9FE247: mov     eax, large fs:0
0x9FE24D: push    eax
0x9FE24E: mov     eax, ___security_cookie
0x9FE253: xor     eax, esp
0x9FE255: push    eax
0x9FE256: lea     eax, [esp+10h+var_C]
0x9FE25A: mov     large fs:0, eax
0x9FE260: push    offset flt_B14F28
0x9FE265: mov     ecx, offset INISettingCollection
0x9FE26A: mov     [esp+14h+var_4], 0
0x9FE272: call    SettingCollectionList_AddSetting
0x9FE277: push    offset sub_A25C20; void (__cdecl *)()
0x9FE27C: call    _atexit
0x9FE281: add     esp, 4
0x9FE284: mov     ecx, [esp+10h+var_C]
0x9FE288: mov     large fs:0, ecx
0x9FE28F: pop     ecx
0x9FE290: add     esp, 0Ch
0x9FE293: retn
