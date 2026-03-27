0x9DD6C0: push    0FFFFFFFFh
0x9DD6C2: push    offset SEH_9DD6C0
0x9DD6C7: mov     eax, large fs:0
0x9DD6CD: push    eax
0x9DD6CE: mov     eax, ___security_cookie
0x9DD6D3: xor     eax, esp
0x9DD6D5: push    eax
0x9DD6D6: lea     eax, [esp+10h+var_C]
0x9DD6DA: mov     large fs:0, eax
0x9DD6E0: push    offset dword_B06D54
0x9DD6E5: mov     ecx, offset INISettingCollection
0x9DD6EA: mov     [esp+14h+var_4], 0
0x9DD6F2: call    SettingCollectionList_AddSetting
0x9DD6F7: push    offset sub_A19110; void (__cdecl *)()
0x9DD6FC: call    _atexit
0x9DD701: add     esp, 4
0x9DD704: mov     ecx, [esp+10h+var_C]
0x9DD708: mov     large fs:0, ecx
0x9DD70F: pop     ecx
0x9DD710: add     esp, 0Ch
0x9DD713: retn
