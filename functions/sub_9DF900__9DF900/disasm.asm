0x9DF900: push    0FFFFFFFFh
0x9DF902: push    offset SEH_9DF900
0x9DF907: mov     eax, large fs:0
0x9DF90D: push    eax
0x9DF90E: mov     eax, ___security_cookie
0x9DF913: xor     eax, esp
0x9DF915: push    eax
0x9DF916: lea     eax, [esp+10h+var_C]
0x9DF91A: mov     large fs:0, eax
0x9DF920: push    offset byte_B07060
0x9DF925: mov     ecx, offset INISettingCollection
0x9DF92A: mov     [esp+14h+var_4], 0
0x9DF932: call    SettingCollectionList_AddSetting
0x9DF937: push    offset sub_A1A2A0; void (__cdecl *)()
0x9DF93C: call    _atexit
0x9DF941: add     esp, 4
0x9DF944: mov     ecx, [esp+10h+var_C]
0x9DF948: mov     large fs:0, ecx
0x9DF94F: pop     ecx
0x9DF950: add     esp, 0Ch
0x9DF953: retn
