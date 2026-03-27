0x9DCDC0: push    0FFFFFFFFh
0x9DCDC2: push    offset SEH_9DCDC0
0x9DCDC7: mov     eax, large fs:0
0x9DCDCD: push    eax
0x9DCDCE: mov     eax, ___security_cookie
0x9DCDD3: xor     eax, esp
0x9DCDD5: push    eax
0x9DCDD6: lea     eax, [esp+10h+var_C]
0x9DCDDA: mov     large fs:0, eax
0x9DCDE0: push    offset unk_B06C94
0x9DCDE5: mov     ecx, offset INISettingCollection
0x9DCDEA: mov     [esp+14h+var_4], 0
0x9DCDF2: call    SettingCollectionList_AddSetting
0x9DCDF7: push    offset sub_A18C90; void (__cdecl *)()
0x9DCDFC: call    _atexit
0x9DCE01: add     esp, 4
0x9DCE04: mov     ecx, [esp+10h+var_C]
0x9DCE08: mov     large fs:0, ecx
0x9DCE0F: pop     ecx
0x9DCE10: add     esp, 0Ch
0x9DCE13: retn
