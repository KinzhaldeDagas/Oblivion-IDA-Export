0x9DD8A0: push    0FFFFFFFFh
0x9DD8A2: push    offset SEH_9DD8A0
0x9DD8A7: mov     eax, large fs:0
0x9DD8AD: push    eax
0x9DD8AE: mov     eax, ___security_cookie
0x9DD8B3: xor     eax, esp
0x9DD8B5: push    eax
0x9DD8B6: lea     eax, [esp+10h+var_C]
0x9DD8BA: mov     large fs:0, eax
0x9DD8C0: push    offset flt_B06D7C
0x9DD8C5: mov     ecx, offset INISettingCollection
0x9DD8CA: mov     [esp+14h+var_4], 0
0x9DD8D2: call    SettingCollectionList_AddSetting
0x9DD8D7: push    offset sub_A19200; void (__cdecl *)()
0x9DD8DC: call    _atexit
0x9DD8E1: add     esp, 4
0x9DD8E4: mov     ecx, [esp+10h+var_C]
0x9DD8E8: mov     large fs:0, ecx
0x9DD8EF: pop     ecx
0x9DD8F0: add     esp, 0Ch
0x9DD8F3: retn
