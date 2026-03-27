0x9DC490: push    0FFFFFFFFh
0x9DC492: push    offset SEH_9DC490
0x9DC497: mov     eax, large fs:0
0x9DC49D: push    eax
0x9DC49E: mov     eax, ___security_cookie
0x9DC4A3: xor     eax, esp
0x9DC4A5: push    eax
0x9DC4A6: lea     eax, [esp+10h+var_C]
0x9DC4AA: mov     large fs:0, eax
0x9DC4B0: push    offset unk_B068E0
0x9DC4B5: mov     ecx, offset INISettingCollection
0x9DC4BA: mov     [esp+14h+var_4], 0
0x9DC4C2: call    SettingCollectionList_AddSetting
0x9DC4C7: push    offset sub_A18770; void (__cdecl *)()
0x9DC4CC: call    _atexit
0x9DC4D1: add     esp, 4
0x9DC4D4: mov     ecx, [esp+10h+var_C]
0x9DC4D8: mov     large fs:0, ecx
0x9DC4DF: pop     ecx
0x9DC4E0: add     esp, 0Ch
0x9DC4E3: retn
