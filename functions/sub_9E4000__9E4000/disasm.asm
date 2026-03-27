0x9E4000: push    0FFFFFFFFh
0x9E4002: push    offset SEH_9E4000
0x9E4007: mov     eax, large fs:0
0x9E400D: push    eax
0x9E400E: mov     eax, ___security_cookie
0x9E4013: xor     eax, esp
0x9E4015: push    eax
0x9E4016: lea     eax, [esp+10h+var_C]
0x9E401A: mov     large fs:0, eax
0x9E4020: push    offset mp3String
0x9E4025: mov     ecx, offset INISettingCollection
0x9E402A: mov     [esp+14h+var_4], 0
0x9E4032: call    SettingCollectionList_AddSetting
0x9E4037: push    offset sub_A1C3E0; void (__cdecl *)()
0x9E403C: call    _atexit
0x9E4041: add     esp, 4
0x9E4044: mov     ecx, [esp+10h+var_C]
0x9E4048: mov     large fs:0, ecx
0x9E404F: pop     ecx
0x9E4050: add     esp, 0Ch
0x9E4053: retn
