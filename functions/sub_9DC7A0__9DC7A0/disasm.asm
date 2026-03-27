0x9DC7A0: push    0FFFFFFFFh
0x9DC7A2: push    offset SEH_9DC7A0
0x9DC7A7: mov     eax, large fs:0
0x9DC7AD: push    eax
0x9DC7AE: mov     eax, ___security_cookie
0x9DC7B3: xor     eax, esp
0x9DC7B5: push    eax
0x9DC7B6: lea     eax, [esp+10h+var_C]
0x9DC7BA: mov     large fs:0, eax
0x9DC7C0: push    offset bDisableWarning_MESSAGES
0x9DC7C5: mov     ecx, offset INISettingCollection
0x9DC7CA: mov     [esp+14h+var_4], 0
0x9DC7D2: call    SettingCollectionList_AddSetting
0x9DC7D7: push    offset sub_A18990; void (__cdecl *)()
0x9DC7DC: call    _atexit
0x9DC7E1: add     esp, 4
0x9DC7E4: mov     ecx, [esp+10h+var_C]
0x9DC7E8: mov     large fs:0, ecx
0x9DC7EF: pop     ecx
0x9DC7F0: add     esp, 0Ch
0x9DC7F3: retn
