0x9D9980: push    0FFFFFFFFh
0x9D9982: push    offset SEH_9D9980
0x9D9987: mov     eax, large fs:0
0x9D998D: push    eax
0x9D998E: mov     eax, ___security_cookie
0x9D9993: xor     eax, esp
0x9D9995: push    eax
0x9D9996: lea     eax, [esp+10h+var_C]
0x9D999A: mov     large fs:0, eax
0x9D99A0: push    offset flt_B0312C
0x9D99A5: mov     ecx, offset INISettingCollection
0x9D99AA: mov     [esp+14h+var_4], 0
0x9D99B2: call    SettingCollectionList_AddSetting
0x9D99B7: push    offset sub_A17270; void (__cdecl *)()
0x9D99BC: call    _atexit
0x9D99C1: add     esp, 4
0x9D99C4: mov     ecx, [esp+10h+var_C]
0x9D99C8: mov     large fs:0, ecx
0x9D99CF: pop     ecx
0x9D99D0: add     esp, 0Ch
0x9D99D3: retn
