0x9DBCB0: push    0FFFFFFFFh
0x9DBCB2: push    offset SEH_9DBCB0
0x9DBCB7: mov     eax, large fs:0
0x9DBCBD: push    eax
0x9DBCBE: mov     eax, ___security_cookie
0x9DBCC3: xor     eax, esp
0x9DBCC5: push    eax
0x9DBCC6: lea     eax, [esp+10h+var_C]
0x9DBCCA: mov     large fs:0, eax
0x9DBCD0: push    offset byte_B05BA4
0x9DBCD5: mov     ecx, offset INISettingCollection
0x9DBCDA: mov     [esp+14h+var_4], 0
0x9DBCE2: call    SettingCollectionList_AddSetting
0x9DBCE7: push    offset sub_A183B0; void (__cdecl *)()
0x9DBCEC: call    _atexit
0x9DBCF1: add     esp, 4
0x9DBCF4: mov     ecx, [esp+10h+var_C]
0x9DBCF8: mov     large fs:0, ecx
0x9DBCFF: pop     ecx
0x9DBD00: add     esp, 0Ch
0x9DBD03: retn
