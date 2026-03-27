0x9DEDA0: push    0FFFFFFFFh
0x9DEDA2: push    offset SEH_9DEDA0
0x9DEDA7: mov     eax, large fs:0
0x9DEDAD: push    eax
0x9DEDAE: mov     eax, ___security_cookie
0x9DEDB3: xor     eax, esp
0x9DEDB5: push    eax
0x9DEDB6: lea     eax, [esp+10h+var_C]
0x9DEDBA: mov     large fs:0, eax
0x9DEDC0: push    offset unk_B06F3C
0x9DEDC5: mov     ecx, offset INISettingCollection
0x9DEDCA: mov     [esp+14h+var_4], 0
0x9DEDD2: call    SettingCollectionList_AddSetting
0x9DEDD7: push    offset sub_A19C80; void (__cdecl *)()
0x9DEDDC: call    _atexit
0x9DEDE1: add     esp, 4
0x9DEDE4: mov     ecx, [esp+10h+var_C]
0x9DEDE8: mov     large fs:0, ecx
0x9DEDEF: pop     ecx
0x9DEDF0: add     esp, 0Ch
0x9DEDF3: retn
