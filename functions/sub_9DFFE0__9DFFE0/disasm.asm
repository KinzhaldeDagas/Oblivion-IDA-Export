0x9DFFE0: push    0FFFFFFFFh
0x9DFFE2: push    offset SEH_9DFFE0
0x9DFFE7: mov     eax, large fs:0
0x9DFFED: push    eax
0x9DFFEE: mov     eax, ___security_cookie
0x9DFFF3: xor     eax, esp
0x9DFFF5: push    eax
0x9DFFF6: lea     eax, [esp+10h+var_C]
0x9DFFFA: mov     large fs:0, eax
0x9E0000: push    offset off_B070F0; "water"
0x9E0005: mov     ecx, offset INISettingCollection
0x9E000A: mov     [esp+14h+var_4], 0
0x9E0012: call    SettingCollectionList_AddSetting
0x9E0017: push    offset sub_A1A600; void (__cdecl *)()
0x9E001C: call    _atexit
0x9E0021: add     esp, 4
0x9E0024: mov     ecx, [esp+10h+var_C]
0x9E0028: mov     large fs:0, ecx
0x9E002F: pop     ecx
0x9E0030: add     esp, 0Ch
0x9E0033: retn
