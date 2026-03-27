0x9DBB70: push    0FFFFFFFFh
0x9DBB72: push    offset SEH_9DBB70
0x9DBB77: mov     eax, large fs:0
0x9DBB7D: push    eax
0x9DBB7E: mov     eax, ___security_cookie
0x9DBB83: xor     eax, esp
0x9DBB85: push    eax
0x9DBB86: lea     eax, [esp+10h+var_C]
0x9DBB8A: mov     large fs:0, eax
0x9DBB90: push    offset byte_B055BC
0x9DBB95: mov     ecx, offset INISettingCollection
0x9DBB9A: mov     [esp+14h+var_4], 0
0x9DBBA2: call    SettingCollectionList_AddSetting
0x9DBBA7: push    offset sub_A18300; void (__cdecl *)()
0x9DBBAC: call    _atexit
0x9DBBB1: add     esp, 4
0x9DBBB4: mov     ecx, [esp+10h+var_C]
0x9DBBB8: mov     large fs:0, ecx
0x9DBBBF: pop     ecx
0x9DBBC0: add     esp, 0Ch
0x9DBBC3: retn
