0x9DF1C0: push    0FFFFFFFFh
0x9DF1C2: push    offset SEH_9DF1C0
0x9DF1C7: mov     eax, large fs:0
0x9DF1CD: push    eax
0x9DF1CE: mov     eax, ___security_cookie
0x9DF1D3: xor     eax, esp
0x9DF1D5: push    eax
0x9DF1D6: lea     eax, [esp+10h+var_C]
0x9DF1DA: mov     large fs:0, eax
0x9DF1E0: push    offset byte_B06F94
0x9DF1E5: mov     ecx, offset INISettingCollection
0x9DF1EA: mov     [esp+14h+var_4], 0
0x9DF1F2: call    SettingCollectionList_AddSetting
0x9DF1F7: push    offset sub_A19E90; void (__cdecl *)()
0x9DF1FC: call    _atexit
0x9DF201: add     esp, 4
0x9DF204: mov     ecx, [esp+10h+var_C]
0x9DF208: mov     large fs:0, ecx
0x9DF20F: pop     ecx
0x9DF210: add     esp, 0Ch
0x9DF213: retn
