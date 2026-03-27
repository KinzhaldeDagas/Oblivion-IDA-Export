0x9DFBC0: push    0FFFFFFFFh
0x9DFBC2: push    offset SEH_9DFBC0
0x9DFBC7: mov     eax, large fs:0
0x9DFBCD: push    eax
0x9DFBCE: mov     eax, ___security_cookie
0x9DFBD3: xor     eax, esp
0x9DFBD5: push    eax
0x9DFBD6: lea     eax, [esp+10h+var_C]
0x9DFBDA: mov     large fs:0, eax
0x9DFBE0: push    offset useWaterLOD
0x9DFBE5: mov     ecx, offset INISettingCollection
0x9DFBEA: mov     [esp+14h+var_4], 0
0x9DFBF2: call    SettingCollectionList_AddSetting
0x9DFBF7: push    offset sub_A1A3F0; void (__cdecl *)()
0x9DFBFC: call    _atexit
0x9DFC01: add     esp, 4
0x9DFC04: mov     ecx, [esp+10h+var_C]
0x9DFC08: mov     large fs:0, ecx
0x9DFC0F: pop     ecx
0x9DFC10: add     esp, 0Ch
0x9DFC13: retn
