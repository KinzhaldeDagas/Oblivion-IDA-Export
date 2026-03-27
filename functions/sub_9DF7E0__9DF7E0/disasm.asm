0x9DF7E0: push    0FFFFFFFFh
0x9DF7E2: push    offset SEH_9DF7E0
0x9DF7E7: mov     eax, large fs:0
0x9DF7ED: push    eax
0x9DF7EE: mov     eax, ___security_cookie
0x9DF7F3: xor     eax, esp
0x9DF7F5: push    eax
0x9DF7F6: lea     eax, [esp+10h+var_C]
0x9DF7FA: mov     large fs:0, eax
0x9DF800: push    offset flt_B07048
0x9DF805: mov     ecx, offset INISettingCollection
0x9DF80A: mov     [esp+14h+var_4], 0
0x9DF812: call    SettingCollectionList_AddSetting
0x9DF817: push    offset sub_A1A210; void (__cdecl *)()
0x9DF81C: call    _atexit
0x9DF821: add     esp, 4
0x9DF824: mov     ecx, [esp+10h+var_C]
0x9DF828: mov     large fs:0, ecx
0x9DF82F: pop     ecx
0x9DF830: add     esp, 0Ch
0x9DF833: retn
