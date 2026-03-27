0x9D8A70: push    0FFFFFFFFh
0x9D8A72: push    offset SEH_9D8A70
0x9D8A77: mov     eax, large fs:0
0x9D8A7D: push    eax
0x9D8A7E: mov     eax, ___security_cookie
0x9D8A83: xor     eax, esp
0x9D8A85: push    eax
0x9D8A86: lea     eax, [esp+10h+var_C]
0x9D8A8A: mov     large fs:0, eax
0x9D8A90: push    offset byte_B02D38
0x9D8A95: mov     ecx, offset INISettingCollection
0x9D8A9A: mov     [esp+14h+var_4], 0
0x9D8AA2: call    SettingCollectionList_AddSetting
0x9D8AA7: push    offset sub_A16AF0; void (__cdecl *)()
0x9D8AAC: call    _atexit
0x9D8AB1: add     esp, 4
0x9D8AB4: mov     ecx, [esp+10h+var_C]
0x9D8AB8: mov     large fs:0, ecx
0x9D8ABF: pop     ecx
0x9D8AC0: add     esp, 0Ch
0x9D8AC3: retn
