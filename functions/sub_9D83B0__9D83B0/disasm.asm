0x9D83B0: push    0FFFFFFFFh
0x9D83B2: push    offset SEH_9D83B0
0x9D83B7: mov     eax, large fs:0
0x9D83BD: push    eax
0x9D83BE: mov     eax, ___security_cookie
0x9D83C3: xor     eax, esp
0x9D83C5: push    eax
0x9D83C6: lea     eax, [esp+10h+var_C]
0x9D83CA: mov     large fs:0, eax
0x9D83D0: push    offset off_B02CA8
0x9D83D5: mov     ecx, offset INISettingCollection
0x9D83DA: mov     [esp+14h+var_4], 0
0x9D83E2: call    SettingCollectionList_AddSetting
0x9D83E7: push    offset sub_A16790; void (__cdecl *)()
0x9D83EC: call    _atexit
0x9D83F1: add     esp, 4
0x9D83F4: mov     ecx, [esp+10h+var_C]
0x9D83F8: mov     large fs:0, ecx
0x9D83FF: pop     ecx
0x9D8400: add     esp, 0Ch
0x9D8403: retn
