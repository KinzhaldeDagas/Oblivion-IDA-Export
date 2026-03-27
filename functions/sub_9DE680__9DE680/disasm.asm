0x9DE680: push    0FFFFFFFFh
0x9DE682: push    offset SEH_9DE680
0x9DE687: mov     eax, large fs:0
0x9DE68D: push    eax
0x9DE68E: mov     eax, ___security_cookie
0x9DE693: xor     eax, esp
0x9DE695: push    eax
0x9DE696: lea     eax, [esp+10h+var_C]
0x9DE69A: mov     large fs:0, eax
0x9DE6A0: push    offset flt_B06EA4
0x9DE6A5: mov     ecx, offset INISettingCollection
0x9DE6AA: mov     [esp+14h+var_4], 0
0x9DE6B2: call    SettingCollectionList_AddSetting
0x9DE6B7: push    offset sub_A198F0; void (__cdecl *)()
0x9DE6BC: call    _atexit
0x9DE6C1: add     esp, 4
0x9DE6C4: mov     ecx, [esp+10h+var_C]
0x9DE6C8: mov     large fs:0, ecx
0x9DE6CF: pop     ecx
0x9DE6D0: add     esp, 0Ch
0x9DE6D3: retn
