0x9DF160: push    0FFFFFFFFh
0x9DF162: push    offset SEH_9DF160
0x9DF167: mov     eax, large fs:0
0x9DF16D: push    eax
0x9DF16E: mov     eax, ___security_cookie
0x9DF173: xor     eax, esp
0x9DF175: push    eax
0x9DF176: lea     eax, [esp+10h+var_C]
0x9DF17A: mov     large fs:0, eax
0x9DF180: push    offset dword_B06F8C
0x9DF185: mov     ecx, offset INISettingCollection
0x9DF18A: mov     [esp+14h+var_4], 0
0x9DF192: call    SettingCollectionList_AddSetting
0x9DF197: push    offset sub_A19E60; void (__cdecl *)()
0x9DF19C: call    _atexit
0x9DF1A1: add     esp, 4
0x9DF1A4: mov     ecx, [esp+10h+var_C]
0x9DF1A8: mov     large fs:0, ecx
0x9DF1AF: pop     ecx
0x9DF1B0: add     esp, 0Ch
0x9DF1B3: retn
