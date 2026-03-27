0x9FF3A0: push    0FFFFFFFFh
0x9FF3A2: push    offset SEH_9FF3A0
0x9FF3A7: mov     eax, large fs:0
0x9FF3AD: push    eax
0x9FF3AE: mov     eax, ___security_cookie
0x9FF3B3: xor     eax, esp
0x9FF3B5: push    eax
0x9FF3B6: lea     eax, [esp+10h+var_C]
0x9FF3BA: mov     large fs:0, eax
0x9FF3C0: push    offset dword_B1624C
0x9FF3C5: mov     ecx, offset INISettingCollection
0x9FF3CA: mov     [esp+14h+var_4], 0
0x9FF3D2: call    SettingCollectionList_AddSetting
0x9FF3D7: push    offset sub_A262B0; void (__cdecl *)()
0x9FF3DC: call    _atexit
0x9FF3E1: add     esp, 4
0x9FF3E4: mov     ecx, [esp+10h+var_C]
0x9FF3E8: mov     large fs:0, ecx
0x9FF3EF: pop     ecx
0x9FF3F0: add     esp, 0Ch
0x9FF3F3: retn
