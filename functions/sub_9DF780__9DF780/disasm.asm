0x9DF780: push    0FFFFFFFFh
0x9DF782: push    offset SEH_9DF780
0x9DF787: mov     eax, large fs:0
0x9DF78D: push    eax
0x9DF78E: mov     eax, ___security_cookie
0x9DF793: xor     eax, esp
0x9DF795: push    eax
0x9DF796: lea     eax, [esp+10h+var_C]
0x9DF79A: mov     large fs:0, eax
0x9DF7A0: push    offset flt_B07040
0x9DF7A5: mov     ecx, offset INISettingCollection
0x9DF7AA: mov     [esp+14h+var_4], 0
0x9DF7B2: call    SettingCollectionList_AddSetting
0x9DF7B7: push    offset sub_A1A1E0; void (__cdecl *)()
0x9DF7BC: call    _atexit
0x9DF7C1: add     esp, 4
0x9DF7C4: mov     ecx, [esp+10h+var_C]
0x9DF7C8: mov     large fs:0, ecx
0x9DF7CF: pop     ecx
0x9DF7D0: add     esp, 0Ch
0x9DF7D3: retn
