0x9FC5A0: push    0FFFFFFFFh
0x9FC5A2: push    offset SEH_9FC5A0
0x9FC5A7: mov     eax, large fs:0
0x9FC5AD: push    eax
0x9FC5AE: mov     eax, ___security_cookie
0x9FC5B3: xor     eax, esp
0x9FC5B5: push    eax
0x9FC5B6: lea     eax, [esp+10h+var_C]
0x9FC5BA: mov     large fs:0, eax
0x9FC5C0: push    offset unk_B14380
0x9FC5C5: mov     ecx, offset INISettingCollection
0x9FC5CA: mov     [esp+14h+var_4], 0
0x9FC5D2: call    SettingCollectionList_AddSetting
0x9FC5D7: push    offset sub_A24DB0; void (__cdecl *)()
0x9FC5DC: call    _atexit
0x9FC5E1: add     esp, 4
0x9FC5E4: mov     ecx, [esp+10h+var_C]
0x9FC5E8: mov     large fs:0, ecx
0x9FC5EF: pop     ecx
0x9FC5F0: add     esp, 0Ch
0x9FC5F3: retn
