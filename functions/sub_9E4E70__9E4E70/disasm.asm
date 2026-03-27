0x9E4E70: push    0FFFFFFFFh
0x9E4E72: push    offset SEH_9E4E70
0x9E4E77: mov     eax, large fs:0
0x9E4E7D: push    eax
0x9E4E7E: mov     eax, ___security_cookie
0x9E4E83: xor     eax, esp
0x9E4E85: push    eax
0x9E4E86: lea     eax, [esp+10h+var_C]
0x9E4E8A: mov     large fs:0, eax
0x9E4E90: push    offset off_B11AF4; "1.0, 1.0"
0x9E4E95: mov     ecx, offset BlendSettingCollection
0x9E4E9A: mov     [esp+14h+var_4], 0
0x9E4EA2: call    SettingCollectionList_AddSetting
0x9E4EA7: push    offset sub_A1CB80; void (__cdecl *)()
0x9E4EAC: call    _atexit
0x9E4EB1: add     esp, 4
0x9E4EB4: mov     ecx, [esp+10h+var_C]
0x9E4EB8: mov     large fs:0, ecx
0x9E4EBF: pop     ecx
0x9E4EC0: add     esp, 0Ch
0x9E4EC3: retn
