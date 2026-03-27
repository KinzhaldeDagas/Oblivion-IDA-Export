0x9FCC40: push    0FFFFFFFFh
0x9FCC42: push    offset SEH_9FCC40
0x9FCC47: mov     eax, large fs:0
0x9FCC4D: push    eax
0x9FCC4E: mov     eax, ___security_cookie
0x9FCC53: xor     eax, esp
0x9FCC55: push    eax
0x9FCC56: lea     eax, [esp+10h+var_C]
0x9FCC5A: mov     large fs:0, eax
0x9FCC60: push    offset dword_B1486C
0x9FCC65: mov     ecx, offset INISettingCollection
0x9FCC6A: mov     [esp+14h+var_4], 0
0x9FCC72: call    SettingCollectionList_AddSetting
0x9FCC77: push    offset sub_A25140; void (__cdecl *)()
0x9FCC7C: call    _atexit
0x9FCC81: add     esp, 4
0x9FCC84: mov     ecx, [esp+10h+var_C]
0x9FCC88: mov     large fs:0, ecx
0x9FCC8F: pop     ecx
0x9FCC90: add     esp, 0Ch
0x9FCC93: retn
