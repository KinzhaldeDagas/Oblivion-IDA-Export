0x9D8080: push    0FFFFFFFFh
0x9D8082: push    offset SEH_9D8080
0x9D8087: mov     eax, large fs:0
0x9D808D: push    eax
0x9D808E: mov     eax, ___security_cookie
0x9D8093: xor     eax, esp
0x9D8095: push    eax
0x9D8096: lea     eax, [esp+10h+var_C]
0x9D809A: mov     large fs:0, eax
0x9D80A0: push    offset bBackgroundKey
0x9D80A5: mov     ecx, offset INISettingCollection
0x9D80AA: mov     [esp+14h+var_4], 0
0x9D80B2: call    SettingCollectionList_AddSetting
0x9D80B7: push    offset sub_A16460; void (__cdecl *)()
0x9D80BC: call    _atexit
0x9D80C1: add     esp, 4
0x9D80C4: mov     ecx, [esp+10h+var_C]
0x9D80C8: mov     large fs:0, ecx
0x9D80CF: pop     ecx
0x9D80D0: add     esp, 0Ch
0x9D80D3: retn
