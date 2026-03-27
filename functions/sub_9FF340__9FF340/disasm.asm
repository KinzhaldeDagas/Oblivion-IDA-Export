0x9FF340: push    0FFFFFFFFh
0x9FF342: push    offset SEH_9FF340
0x9FF347: mov     eax, large fs:0
0x9FF34D: push    eax
0x9FF34E: mov     eax, ___security_cookie
0x9FF353: xor     eax, esp
0x9FF355: push    eax
0x9FF356: lea     eax, [esp+10h+var_C]
0x9FF35A: mov     large fs:0, eax
0x9FF360: push    offset dword_B16244
0x9FF365: mov     ecx, offset INISettingCollection
0x9FF36A: mov     [esp+14h+var_4], 0
0x9FF372: call    SettingCollectionList_AddSetting
0x9FF377: push    offset sub_A26280; void (__cdecl *)()
0x9FF37C: call    _atexit
0x9FF381: add     esp, 4
0x9FF384: mov     ecx, [esp+10h+var_C]
0x9FF388: mov     large fs:0, ecx
0x9FF38F: pop     ecx
0x9FF390: add     esp, 0Ch
0x9FF393: retn
