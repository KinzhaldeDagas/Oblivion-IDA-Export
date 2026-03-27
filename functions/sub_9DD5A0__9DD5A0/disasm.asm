0x9DD5A0: push    0FFFFFFFFh
0x9DD5A2: push    offset SEH_9DD5A0
0x9DD5A7: mov     eax, large fs:0
0x9DD5AD: push    eax
0x9DD5AE: mov     eax, ___security_cookie
0x9DD5B3: xor     eax, esp
0x9DD5B5: push    eax
0x9DD5B6: lea     eax, [esp+10h+var_C]
0x9DD5BA: mov     large fs:0, eax
0x9DD5C0: push    offset dword_B06D3C
0x9DD5C5: mov     ecx, offset INISettingCollection
0x9DD5CA: mov     [esp+14h+var_4], 0
0x9DD5D2: call    SettingCollectionList_AddSetting
0x9DD5D7: push    offset sub_A19080; void (__cdecl *)()
0x9DD5DC: call    _atexit
0x9DD5E1: add     esp, 4
0x9DD5E4: mov     ecx, [esp+10h+var_C]
0x9DD5E8: mov     large fs:0, ecx
0x9DD5EF: pop     ecx
0x9DD5F0: add     esp, 0Ch
0x9DD5F3: retn
