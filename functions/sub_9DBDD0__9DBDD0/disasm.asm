0x9DBDD0: push    0FFFFFFFFh
0x9DBDD2: push    offset SEH_9DBDD0
0x9DBDD7: mov     eax, large fs:0
0x9DBDDD: push    eax
0x9DBDDE: mov     eax, ___security_cookie
0x9DBDE3: xor     eax, esp
0x9DBDE5: push    eax
0x9DBDE6: lea     eax, [esp+10h+var_C]
0x9DBDEA: mov     large fs:0, eax
0x9DBDF0: push    offset byte_B05BBC
0x9DBDF5: mov     ecx, offset INISettingCollection
0x9DBDFA: mov     [esp+14h+var_4], 0
0x9DBE02: call    SettingCollectionList_AddSetting
0x9DBE07: push    offset sub_A18440; void (__cdecl *)()
0x9DBE0C: call    _atexit
0x9DBE11: add     esp, 4
0x9DBE14: mov     ecx, [esp+10h+var_C]
0x9DBE18: mov     large fs:0, ecx
0x9DBE1F: pop     ecx
0x9DBE20: add     esp, 0Ch
0x9DBE23: retn
