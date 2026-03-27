0x9FD9A0: push    0FFFFFFFFh
0x9FD9A2: push    offset SEH_9FD9A0
0x9FD9A7: mov     eax, large fs:0
0x9FD9AD: push    eax
0x9FD9AE: mov     eax, ___security_cookie
0x9FD9B3: xor     eax, esp
0x9FD9B5: push    eax
0x9FD9B6: lea     eax, [esp+10h+var_C]
0x9FD9BA: mov     large fs:0, eax
0x9FD9C0: push    offset flt_B14E34
0x9FD9C5: mov     ecx, offset INISettingCollection
0x9FD9CA: mov     [esp+14h+var_4], 0
0x9FD9D2: call    SettingCollectionList_AddSetting
0x9FD9D7: push    offset sub_A257B0; void (__cdecl *)()
0x9FD9DC: call    _atexit
0x9FD9E1: add     esp, 4
0x9FD9E4: mov     ecx, [esp+10h+var_C]
0x9FD9E8: mov     large fs:0, ecx
0x9FD9EF: pop     ecx
0x9FD9F0: add     esp, 0Ch
0x9FD9F3: retn
