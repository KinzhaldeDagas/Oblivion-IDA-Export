0x9E4990: push    0FFFFFFFFh
0x9E4992: push    offset SEH_9E4990
0x9E4997: mov     eax, large fs:0
0x9E499D: push    eax
0x9E499E: mov     eax, ___security_cookie
0x9E49A3: xor     eax, esp
0x9E49A5: push    eax
0x9E49A6: lea     eax, [esp+10h+var_C]
0x9E49AA: mov     large fs:0, eax
0x9E49B0: push    offset off_B11A8C; "1.0, 1.0"
0x9E49B5: mov     ecx, offset BlendSettingCollection
0x9E49BA: mov     [esp+14h+var_4], 0
0x9E49C2: call    SettingCollectionList_AddSetting
0x9E49C7: push    offset sub_A1C910; void (__cdecl *)()
0x9E49CC: call    _atexit
0x9E49D1: add     esp, 4
0x9E49D4: mov     ecx, [esp+10h+var_C]
0x9E49D8: mov     large fs:0, ecx
0x9E49DF: pop     ecx
0x9E49E0: add     esp, 0Ch
0x9E49E3: retn
