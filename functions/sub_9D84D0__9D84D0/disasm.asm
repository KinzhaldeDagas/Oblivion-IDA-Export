0x9D84D0: push    0FFFFFFFFh
0x9D84D2: push    offset SEH_9D84D0
0x9D84D7: mov     eax, large fs:0
0x9D84DD: push    eax
0x9D84DE: mov     eax, ___security_cookie
0x9D84E3: xor     eax, esp
0x9D84E5: push    eax
0x9D84E6: lea     eax, [esp+10h+var_C]
0x9D84EA: mov     large fs:0, eax
0x9D84F0: push    offset off_B02CC0
0x9D84F5: mov     ecx, offset INISettingCollection
0x9D84FA: mov     [esp+14h+var_4], 0
0x9D8502: call    SettingCollectionList_AddSetting
0x9D8507: push    offset sub_A16820; void (__cdecl *)()
0x9D850C: call    _atexit
0x9D8511: add     esp, 4
0x9D8514: mov     ecx, [esp+10h+var_C]
0x9D8518: mov     large fs:0, ecx
0x9D851F: pop     ecx
0x9D8520: add     esp, 0Ch
0x9D8523: retn
