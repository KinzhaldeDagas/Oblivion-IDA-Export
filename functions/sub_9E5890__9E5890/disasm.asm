0x9E5890: push    0FFFFFFFFh
0x9E5892: push    offset SEH_9E5890
0x9E5897: mov     eax, large fs:0
0x9E589D: push    eax
0x9E589E: mov     eax, ___security_cookie
0x9E58A3: xor     eax, esp
0x9E58A5: push    eax
0x9E58A6: lea     eax, [esp+10h+var_C]
0x9E58AA: mov     large fs:0, eax
0x9E58B0: push    offset off_B11BCC; "1.0, 1.0"
0x9E58B5: mov     ecx, offset BlendSettingCollection
0x9E58BA: mov     [esp+14h+var_4], 0
0x9E58C2: call    SettingCollectionList_AddSetting
0x9E58C7: push    offset sub_A1D090; void (__cdecl *)()
0x9E58CC: call    _atexit
0x9E58D1: add     esp, 4
0x9E58D4: mov     ecx, [esp+10h+var_C]
0x9E58D8: mov     large fs:0, ecx
0x9E58DF: pop     ecx
0x9E58E0: add     esp, 0Ch
0x9E58E3: retn
