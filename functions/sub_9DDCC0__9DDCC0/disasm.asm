0x9DDCC0: push    0FFFFFFFFh
0x9DDCC2: push    offset SEH_9DDCC0
0x9DDCC7: mov     eax, large fs:0
0x9DDCCD: push    eax
0x9DDCCE: mov     eax, ___security_cookie
0x9DDCD3: xor     eax, esp
0x9DDCD5: push    eax
0x9DDCD6: lea     eax, [esp+10h+var_C]
0x9DDCDA: mov     large fs:0, eax
0x9DDCE0: push    offset unk_B06DD4
0x9DDCE5: mov     ecx, offset INISettingCollection
0x9DDCEA: mov     [esp+14h+var_4], 0
0x9DDCF2: call    SettingCollectionList_AddSetting
0x9DDCF7: push    offset sub_A19410; void (__cdecl *)()
0x9DDCFC: call    _atexit
0x9DDD01: add     esp, 4
0x9DDD04: mov     ecx, [esp+10h+var_C]
0x9DDD08: mov     large fs:0, ecx
0x9DDD0F: pop     ecx
0x9DDD10: add     esp, 0Ch
0x9DDD13: retn
