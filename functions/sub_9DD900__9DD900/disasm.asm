0x9DD900: push    0FFFFFFFFh
0x9DD902: push    offset SEH_9DD900
0x9DD907: mov     eax, large fs:0
0x9DD90D: push    eax
0x9DD90E: mov     eax, ___security_cookie
0x9DD913: xor     eax, esp
0x9DD915: push    eax
0x9DD916: lea     eax, [esp+10h+var_C]
0x9DD91A: mov     large fs:0, eax
0x9DD920: push    offset flt_B06D84
0x9DD925: mov     ecx, offset INISettingCollection
0x9DD92A: mov     [esp+14h+var_4], 0
0x9DD932: call    SettingCollectionList_AddSetting
0x9DD937: push    offset sub_A19230; void (__cdecl *)()
0x9DD93C: call    _atexit
0x9DD941: add     esp, 4
0x9DD944: mov     ecx, [esp+10h+var_C]
0x9DD948: mov     large fs:0, ecx
0x9DD94F: pop     ecx
0x9DD950: add     esp, 0Ch
0x9DD953: retn
