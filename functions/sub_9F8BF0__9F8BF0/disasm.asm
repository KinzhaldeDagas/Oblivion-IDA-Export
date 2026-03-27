0x9F8BF0: push    0FFFFFFFFh
0x9F8BF2: push    offset SEH_9F8BF0
0x9F8BF7: mov     eax, large fs:0
0x9F8BFD: push    eax
0x9F8BFE: mov     eax, ___security_cookie
0x9F8C03: xor     eax, esp
0x9F8C05: push    eax
0x9F8C06: lea     eax, [esp+10h+var_C]
0x9F8C0A: mov     large fs:0, eax
0x9F8C10: push    offset dword_B120EC
0x9F8C15: mov     ecx, offset INISettingCollection
0x9F8C1A: mov     [esp+14h+var_4], 0
0x9F8C22: call    SettingCollectionList_AddSetting
0x9F8C27: push    offset sub_A23460; void (__cdecl *)()
0x9F8C2C: call    _atexit
0x9F8C31: add     esp, 4
0x9F8C34: mov     ecx, [esp+10h+var_C]
0x9F8C38: mov     large fs:0, ecx
0x9F8C3F: pop     ecx
0x9F8C40: add     esp, 0Ch
0x9F8C43: retn
