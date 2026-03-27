0x9DFCE0: push    0FFFFFFFFh
0x9DFCE2: push    offset SEH_9DFCE0
0x9DFCE7: mov     eax, large fs:0
0x9DFCED: push    eax
0x9DFCEE: mov     eax, ___security_cookie
0x9DFCF3: xor     eax, esp
0x9DFCF5: push    eax
0x9DFCF6: lea     eax, [esp+10h+var_C]
0x9DFCFA: mov     large fs:0, eax
0x9DFD00: push    offset dword_B070B0
0x9DFD05: mov     ecx, offset INISettingCollection
0x9DFD0A: mov     [esp+14h+var_4], 0
0x9DFD12: call    SettingCollectionList_AddSetting
0x9DFD17: push    offset sub_A1A480; void (__cdecl *)()
0x9DFD1C: call    _atexit
0x9DFD21: add     esp, 4
0x9DFD24: mov     ecx, [esp+10h+var_C]
0x9DFD28: mov     large fs:0, ecx
0x9DFD2F: pop     ecx
0x9DFD30: add     esp, 0Ch
0x9DFD33: retn
