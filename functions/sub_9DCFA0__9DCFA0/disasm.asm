0x9DCFA0: push    0FFFFFFFFh
0x9DCFA2: push    offset SEH_9DCFA0
0x9DCFA7: mov     eax, large fs:0
0x9DCFAD: push    eax
0x9DCFAE: mov     eax, ___security_cookie
0x9DCFB3: xor     eax, esp
0x9DCFB5: push    eax
0x9DCFB6: lea     eax, [esp+10h+var_C]
0x9DCFBA: mov     large fs:0, eax
0x9DCFC0: push    offset byte_B06CBC
0x9DCFC5: mov     ecx, offset INISettingCollection
0x9DCFCA: mov     [esp+14h+var_4], 0
0x9DCFD2: call    SettingCollectionList_AddSetting
0x9DCFD7: push    offset sub_A18D80; void (__cdecl *)()
0x9DCFDC: call    _atexit
0x9DCFE1: add     esp, 4
0x9DCFE4: mov     ecx, [esp+10h+var_C]
0x9DCFE8: mov     large fs:0, ecx
0x9DCFEF: pop     ecx
0x9DCFF0: add     esp, 0Ch
0x9DCFF3: retn
