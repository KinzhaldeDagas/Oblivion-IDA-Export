0x9F8A70: push    0FFFFFFFFh
0x9F8A72: push    offset SEH_9F8A70
0x9F8A77: mov     eax, large fs:0
0x9F8A7D: push    eax
0x9F8A7E: mov     eax, ___security_cookie
0x9F8A83: xor     eax, esp
0x9F8A85: push    eax
0x9F8A86: lea     eax, [esp+10h+var_C]
0x9F8A8A: mov     large fs:0, eax
0x9F8A90: push    offset flt_B120CC
0x9F8A95: mov     ecx, offset INISettingCollection
0x9F8A9A: mov     [esp+14h+var_4], 0
0x9F8AA2: call    SettingCollectionList_AddSetting
0x9F8AA7: push    offset sub_A233A0; void (__cdecl *)()
0x9F8AAC: call    _atexit
0x9F8AB1: add     esp, 4
0x9F8AB4: mov     ecx, [esp+10h+var_C]
0x9F8AB8: mov     large fs:0, ecx
0x9F8ABF: pop     ecx
0x9F8AC0: add     esp, 0Ch
0x9F8AC3: retn
