0x9FDFA0: push    0FFFFFFFFh
0x9FDFA2: push    offset SEH_9FDFA0
0x9FDFA7: mov     eax, large fs:0
0x9FDFAD: push    eax
0x9FDFAE: mov     eax, ___security_cookie
0x9FDFB3: xor     eax, esp
0x9FDFB5: push    eax
0x9FDFB6: lea     eax, [esp+10h+var_C]
0x9FDFBA: mov     large fs:0, eax
0x9FDFC0: push    offset flt_B14EF0
0x9FDFC5: mov     ecx, offset INISettingCollection
0x9FDFCA: mov     [esp+14h+var_4], 0
0x9FDFD2: call    SettingCollectionList_AddSetting
0x9FDFD7: push    offset sub_A25AD0; void (__cdecl *)()
0x9FDFDC: call    _atexit
0x9FDFE1: add     esp, 4
0x9FDFE4: mov     ecx, [esp+10h+var_C]
0x9FDFE8: mov     large fs:0, ecx
0x9FDFEF: pop     ecx
0x9FDFF0: add     esp, 0Ch
0x9FDFF3: retn
