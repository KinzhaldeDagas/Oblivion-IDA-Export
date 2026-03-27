0x9D8FB0: push    0FFFFFFFFh
0x9D8FB2: push    offset SEH_9D8FB0
0x9D8FB7: mov     eax, large fs:0
0x9D8FBD: push    eax
0x9D8FBE: mov     eax, ___security_cookie
0x9D8FC3: xor     eax, esp
0x9D8FC5: push    eax
0x9D8FC6: lea     eax, [esp+10h+var_C]
0x9D8FCA: mov     large fs:0, eax
0x9D8FD0: push    offset flt_B02DA8
0x9D8FD5: mov     ecx, offset INISettingCollection
0x9D8FDA: mov     [esp+14h+var_4], 0
0x9D8FE2: call    SettingCollectionList_AddSetting
0x9D8FE7: push    offset sub_A16D90; void (__cdecl *)()
0x9D8FEC: call    _atexit
0x9D8FF1: add     esp, 4
0x9D8FF4: mov     ecx, [esp+10h+var_C]
0x9D8FF8: mov     large fs:0, ecx
0x9D8FFF: pop     ecx
0x9D9000: add     esp, 0Ch
0x9D9003: retn
