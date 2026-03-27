0x9FDCA0: push    0FFFFFFFFh
0x9FDCA2: push    offset SEH_9FDCA0
0x9FDCA7: mov     eax, large fs:0
0x9FDCAD: push    eax
0x9FDCAE: mov     eax, ___security_cookie
0x9FDCB3: xor     eax, esp
0x9FDCB5: push    eax
0x9FDCB6: lea     eax, [esp+10h+var_C]
0x9FDCBA: mov     large fs:0, eax
0x9FDCC0: push    offset flt_B14EB0
0x9FDCC5: mov     ecx, offset INISettingCollection
0x9FDCCA: mov     [esp+14h+var_4], 0
0x9FDCD2: call    SettingCollectionList_AddSetting
0x9FDCD7: push    offset sub_A25950; void (__cdecl *)()
0x9FDCDC: call    _atexit
0x9FDCE1: add     esp, 4
0x9FDCE4: mov     ecx, [esp+10h+var_C]
0x9FDCE8: mov     large fs:0, ecx
0x9FDCEF: pop     ecx
0x9FDCF0: add     esp, 0Ch
0x9FDCF3: retn
