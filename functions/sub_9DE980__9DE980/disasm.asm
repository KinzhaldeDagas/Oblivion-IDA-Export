0x9DE980: push    0FFFFFFFFh
0x9DE982: push    offset SEH_9DE980
0x9DE987: mov     eax, large fs:0
0x9DE98D: push    eax
0x9DE98E: mov     eax, ___security_cookie
0x9DE993: xor     eax, esp
0x9DE995: push    eax
0x9DE996: lea     eax, [esp+10h+var_C]
0x9DE99A: mov     large fs:0, eax
0x9DE9A0: push    offset flt_B06EE4
0x9DE9A5: mov     ecx, offset INISettingCollection
0x9DE9AA: mov     [esp+14h+var_4], 0
0x9DE9B2: call    SettingCollectionList_AddSetting
0x9DE9B7: push    offset sub_A19A70; void (__cdecl *)()
0x9DE9BC: call    _atexit
0x9DE9C1: add     esp, 4
0x9DE9C4: mov     ecx, [esp+10h+var_C]
0x9DE9C8: mov     large fs:0, ecx
0x9DE9CF: pop     ecx
0x9DE9D0: add     esp, 0Ch
0x9DE9D3: retn
