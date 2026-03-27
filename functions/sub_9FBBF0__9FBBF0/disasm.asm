0x9FBBF0: push    0FFFFFFFFh
0x9FBBF2: push    offset SEH_9FBBF0
0x9FBBF7: mov     eax, large fs:0
0x9FBBFD: push    eax
0x9FBBFE: mov     eax, ___security_cookie
0x9FBC03: xor     eax, esp
0x9FBC05: push    eax
0x9FBC06: lea     eax, [esp+10h+var_C]
0x9FBC0A: mov     large fs:0, eax
0x9FBC10: push    offset dword_B139A4
0x9FBC15: mov     ecx, offset INISettingCollection
0x9FBC1A: mov     [esp+14h+var_4], 0
0x9FBC22: call    SettingCollectionList_AddSetting
0x9FBC27: push    offset sub_A24A10; void (__cdecl *)()
0x9FBC2C: call    _atexit
0x9FBC31: add     esp, 4
0x9FBC34: mov     ecx, [esp+10h+var_C]
0x9FBC38: mov     large fs:0, ecx
0x9FBC3F: pop     ecx
0x9FBC40: add     esp, 0Ch
0x9FBC43: retn
