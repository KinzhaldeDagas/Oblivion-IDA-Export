0x9E3070: push    0FFFFFFFFh
0x9E3072: push    offset SEH_9E3070
0x9E3077: mov     eax, large fs:0
0x9E307D: push    eax
0x9E307E: mov     eax, ___security_cookie
0x9E3083: xor     eax, esp
0x9E3085: push    eax
0x9E3086: lea     eax, [esp+10h+var_C]
0x9E308A: mov     large fs:0, eax
0x9E3090: push    offset flt_B097C0
0x9E3095: mov     ecx, offset INISettingCollection
0x9E309A: mov     [esp+14h+var_4], 0
0x9E30A2: call    SettingCollectionList_AddSetting
0x9E30A7: push    offset sub_A1BB30; void (__cdecl *)()
0x9E30AC: call    _atexit
0x9E30B1: add     esp, 4
0x9E30B4: mov     ecx, [esp+10h+var_C]
0x9E30B8: mov     large fs:0, ecx
0x9E30BF: pop     ecx
0x9E30C0: add     esp, 0Ch
0x9E30C3: retn
