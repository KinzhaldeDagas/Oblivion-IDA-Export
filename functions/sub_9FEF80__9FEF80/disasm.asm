0x9FEF80: push    0FFFFFFFFh
0x9FEF82: push    offset SEH_9FEF80
0x9FEF87: mov     eax, large fs:0
0x9FEF8D: push    eax
0x9FEF8E: mov     eax, ___security_cookie
0x9FEF93: xor     eax, esp
0x9FEF95: push    eax
0x9FEF96: lea     eax, [esp+10h+var_C]
0x9FEF9A: mov     large fs:0, eax
0x9FEFA0: push    offset flt_B16198
0x9FEFA5: mov     ecx, offset INISettingCollection
0x9FEFAA: mov     [esp+14h+var_4], 0
0x9FEFB2: call    SettingCollectionList_AddSetting
0x9FEFB7: push    offset sub_A26090; void (__cdecl *)()
0x9FEFBC: call    _atexit
0x9FEFC1: add     esp, 4
0x9FEFC4: mov     ecx, [esp+10h+var_C]
0x9FEFC8: mov     large fs:0, ecx
0x9FEFCF: pop     ecx
0x9FEFD0: add     esp, 0Ch
0x9FEFD3: retn
