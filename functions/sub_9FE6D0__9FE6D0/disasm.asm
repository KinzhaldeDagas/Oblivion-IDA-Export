0x9FE6D0: push    0FFFFFFFFh
0x9FE6D2: push    offset SEH_9FE6D0
0x9FE6D7: mov     eax, large fs:0
0x9FE6DD: push    eax
0x9FE6DE: mov     eax, ___security_cookie
0x9FE6E3: xor     eax, esp
0x9FE6E5: push    eax
0x9FE6E6: lea     eax, [esp+10h+var_C]
0x9FE6EA: mov     large fs:0, eax
0x9FE6F0: push    offset unk_B15748
0x9FE6F5: mov     ecx, offset INISettingCollection
0x9FE6FA: mov     [esp+14h+var_4], 0
0x9FE702: call    SettingCollectionList_AddSetting
0x9FE707: push    offset sub_A25DD0; void (__cdecl *)()
0x9FE70C: call    _atexit
0x9FE711: add     esp, 4
0x9FE714: mov     ecx, [esp+10h+var_C]
0x9FE718: mov     large fs:0, ecx
0x9FE71F: pop     ecx
0x9FE720: add     esp, 0Ch
0x9FE723: retn
