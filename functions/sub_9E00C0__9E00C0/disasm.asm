0x9E00C0: push    0FFFFFFFFh
0x9E00C2: push    offset SEH_9E00C0
0x9E00C7: mov     eax, large fs:0
0x9E00CD: push    eax
0x9E00CE: mov     eax, ___security_cookie
0x9E00D3: xor     eax, esp
0x9E00D5: push    eax
0x9E00D6: lea     eax, [esp+10h+var_C]
0x9E00DA: mov     large fs:0, eax
0x9E00E0: push    offset dword_B07280
0x9E00E5: mov     ecx, offset INISettingCollection
0x9E00EA: mov     [esp+14h+var_4], 0
0x9E00F2: call    SettingCollectionList_AddSetting
0x9E00F7: push    offset sub_A1A6C0; void (__cdecl *)()
0x9E00FC: call    _atexit
0x9E0101: add     esp, 4
0x9E0104: mov     ecx, [esp+10h+var_C]
0x9E0108: mov     large fs:0, ecx
0x9E010F: pop     ecx
0x9E0110: add     esp, 0Ch
0x9E0113: retn
