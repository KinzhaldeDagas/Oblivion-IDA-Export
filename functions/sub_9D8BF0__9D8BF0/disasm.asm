0x9D8BF0: push    0FFFFFFFFh
0x9D8BF2: push    offset SEH_9D8BF0
0x9D8BF7: mov     eax, large fs:0
0x9D8BFD: push    eax
0x9D8BFE: mov     eax, ___security_cookie
0x9D8C03: xor     eax, esp
0x9D8C05: push    eax
0x9D8C06: lea     eax, [esp+10h+var_C]
0x9D8C0A: mov     large fs:0, eax
0x9D8C10: push    offset dword_B02D58
0x9D8C15: mov     ecx, offset INISettingCollection
0x9D8C1A: mov     [esp+14h+var_4], 0
0x9D8C22: call    SettingCollectionList_AddSetting
0x9D8C27: push    offset sub_A16BB0; void (__cdecl *)()
0x9D8C2C: call    _atexit
0x9D8C31: add     esp, 4
0x9D8C34: mov     ecx, [esp+10h+var_C]
0x9D8C38: mov     large fs:0, ecx
0x9D8C3F: pop     ecx
0x9D8C40: add     esp, 0Ch
0x9D8C43: retn
