0x9D9070: push    0FFFFFFFFh
0x9D9072: push    offset SEH_9D9070
0x9D9077: mov     eax, large fs:0
0x9D907D: push    eax
0x9D907E: mov     eax, ___security_cookie
0x9D9083: xor     eax, esp
0x9D9085: push    eax
0x9D9086: lea     eax, [esp+10h+var_C]
0x9D908A: mov     large fs:0, eax
0x9D9090: push    offset flt_B02DB8
0x9D9095: mov     ecx, offset INISettingCollection
0x9D909A: mov     [esp+14h+var_4], 0
0x9D90A2: call    SettingCollectionList_AddSetting
0x9D90A7: push    offset sub_A16DF0; void (__cdecl *)()
0x9D90AC: call    _atexit
0x9D90B1: add     esp, 4
0x9D90B4: mov     ecx, [esp+10h+var_C]
0x9D90B8: mov     large fs:0, ecx
0x9D90BF: pop     ecx
0x9D90C0: add     esp, 0Ch
0x9D90C3: retn
