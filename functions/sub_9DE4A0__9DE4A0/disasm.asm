0x9DE4A0: push    0FFFFFFFFh
0x9DE4A2: push    offset SEH_9DE4A0
0x9DE4A7: mov     eax, large fs:0
0x9DE4AD: push    eax
0x9DE4AE: mov     eax, ___security_cookie
0x9DE4B3: xor     eax, esp
0x9DE4B5: push    eax
0x9DE4B6: lea     eax, [esp+10h+var_C]
0x9DE4BA: mov     large fs:0, eax
0x9DE4C0: push    offset flt_B06E7C
0x9DE4C5: mov     ecx, offset INISettingCollection
0x9DE4CA: mov     [esp+14h+var_4], 0
0x9DE4D2: call    SettingCollectionList_AddSetting
0x9DE4D7: push    offset sub_A19800; void (__cdecl *)()
0x9DE4DC: call    _atexit
0x9DE4E1: add     esp, 4
0x9DE4E4: mov     ecx, [esp+10h+var_C]
0x9DE4E8: mov     large fs:0, ecx
0x9DE4EF: pop     ecx
0x9DE4F0: add     esp, 0Ch
0x9DE4F3: retn
