0x9FD8D0: push    0FFFFFFFFh
0x9FD8D2: push    offset SEH_9FD8D0
0x9FD8D7: mov     eax, large fs:0
0x9FD8DD: push    eax
0x9FD8DE: mov     eax, ___security_cookie
0x9FD8E3: xor     eax, esp
0x9FD8E5: push    eax
0x9FD8E6: lea     eax, [esp+10h+var_C]
0x9FD8EA: mov     large fs:0, eax
0x9FD8F0: push    offset flt_B14CDC
0x9FD8F5: mov     ecx, offset INISettingCollection
0x9FD8FA: mov     [esp+14h+var_4], 0
0x9FD902: call    SettingCollectionList_AddSetting
0x9FD907: push    offset sub_A25760; void (__cdecl *)()
0x9FD90C: call    _atexit
0x9FD911: add     esp, 4
0x9FD914: mov     ecx, [esp+10h+var_C]
0x9FD918: mov     large fs:0, ecx
0x9FD91F: pop     ecx
0x9FD920: add     esp, 0Ch
0x9FD923: retn
