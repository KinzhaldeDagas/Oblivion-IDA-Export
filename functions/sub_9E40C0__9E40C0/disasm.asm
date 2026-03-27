0x9E40C0: push    0FFFFFFFFh
0x9E40C2: push    offset SEH_9E40C0
0x9E40C7: mov     eax, large fs:0
0x9E40CD: push    eax
0x9E40CE: mov     eax, ___security_cookie
0x9E40D3: xor     eax, esp
0x9E40D5: push    eax
0x9E40D6: lea     eax, [esp+10h+var_C]
0x9E40DA: mov     large fs:0, eax
0x9E40E0: push    offset off_B10D70
0x9E40E5: mov     ecx, offset INISettingCollection
0x9E40EA: mov     [esp+14h+var_4], 0
0x9E40F2: call    SettingCollectionList_AddSetting
0x9E40F7: push    offset sub_A1C440; void (__cdecl *)()
0x9E40FC: call    _atexit
0x9E4101: add     esp, 4
0x9E4104: mov     ecx, [esp+10h+var_C]
0x9E4108: mov     large fs:0, ecx
0x9E410F: pop     ecx
0x9E4110: add     esp, 0Ch
0x9E4113: retn
