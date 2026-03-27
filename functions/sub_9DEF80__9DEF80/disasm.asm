0x9DEF80: push    0FFFFFFFFh
0x9DEF82: push    offset SEH_9DEF80
0x9DEF87: mov     eax, large fs:0
0x9DEF8D: push    eax
0x9DEF8E: mov     eax, ___security_cookie
0x9DEF93: xor     eax, esp
0x9DEF95: push    eax
0x9DEF96: lea     eax, [esp+10h+var_C]
0x9DEF9A: mov     large fs:0, eax
0x9DEFA0: push    offset flt_B06F64
0x9DEFA5: mov     ecx, offset INISettingCollection
0x9DEFAA: mov     [esp+14h+var_4], 0
0x9DEFB2: call    SettingCollectionList_AddSetting
0x9DEFB7: push    offset sub_A19D70; void (__cdecl *)()
0x9DEFBC: call    _atexit
0x9DEFC1: add     esp, 4
0x9DEFC4: mov     ecx, [esp+10h+var_C]
0x9DEFC8: mov     large fs:0, ecx
0x9DEFCF: pop     ecx
0x9DEFD0: add     esp, 0Ch
0x9DEFD3: retn
