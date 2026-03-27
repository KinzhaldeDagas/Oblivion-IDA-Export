0x9E4120: push    0FFFFFFFFh
0x9E4122: push    offset SEH_9E4120
0x9E4127: mov     eax, large fs:0
0x9E412D: push    eax
0x9E412E: mov     eax, ___security_cookie
0x9E4133: xor     eax, esp
0x9E4135: push    eax
0x9E4136: lea     eax, [esp+10h+var_C]
0x9E413A: mov     large fs:0, eax
0x9E4140: push    offset off_B10D78
0x9E4145: mov     ecx, offset INISettingCollection
0x9E414A: mov     [esp+14h+var_4], 0
0x9E4152: call    SettingCollectionList_AddSetting
0x9E4157: push    offset sub_A1C470; void (__cdecl *)()
0x9E415C: call    _atexit
0x9E4161: add     esp, 4
0x9E4164: mov     ecx, [esp+10h+var_C]
0x9E4168: mov     large fs:0, ecx
0x9E416F: pop     ecx
0x9E4170: add     esp, 0Ch
0x9E4173: retn
