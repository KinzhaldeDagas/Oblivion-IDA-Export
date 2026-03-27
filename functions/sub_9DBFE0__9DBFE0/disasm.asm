0x9DBFE0: push    0FFFFFFFFh
0x9DBFE2: push    offset SEH_9DBFE0
0x9DBFE7: mov     eax, large fs:0
0x9DBFED: push    eax
0x9DBFEE: mov     eax, ___security_cookie
0x9DBFF3: xor     eax, esp
0x9DBFF5: push    eax
0x9DBFF6: lea     eax, [esp+10h+var_C]
0x9DBFFA: mov     large fs:0, eax
0x9DC000: push    offset byte_B06310
0x9DC005: mov     ecx, offset INISettingCollection
0x9DC00A: mov     [esp+14h+var_4], 0
0x9DC012: call    SettingCollectionList_AddSetting
0x9DC017: push    offset sub_A18550; void (__cdecl *)()
0x9DC01C: call    _atexit
0x9DC021: add     esp, 4
0x9DC024: mov     ecx, [esp+10h+var_C]
0x9DC028: mov     large fs:0, ecx
0x9DC02F: pop     ecx
0x9DC030: add     esp, 0Ch
0x9DC033: retn
