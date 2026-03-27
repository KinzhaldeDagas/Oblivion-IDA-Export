0x9DBAB0: push    0FFFFFFFFh
0x9DBAB2: push    offset SEH_9DBAB0
0x9DBAB7: mov     eax, large fs:0
0x9DBABD: push    eax
0x9DBABE: mov     eax, ___security_cookie
0x9DBAC3: xor     eax, esp
0x9DBAC5: push    eax
0x9DBAC6: lea     eax, [esp+10h+var_C]
0x9DBACA: mov     large fs:0, eax
0x9DBAD0: push    offset byte_B055AC
0x9DBAD5: mov     ecx, offset INISettingCollection
0x9DBADA: mov     [esp+14h+var_4], 0
0x9DBAE2: call    SettingCollectionList_AddSetting
0x9DBAE7: push    offset sub_A182A0; void (__cdecl *)()
0x9DBAEC: call    _atexit
0x9DBAF1: add     esp, 4
0x9DBAF4: mov     ecx, [esp+10h+var_C]
0x9DBAF8: mov     large fs:0, ecx
0x9DBAFF: pop     ecx
0x9DBB00: add     esp, 0Ch
0x9DBB03: retn
