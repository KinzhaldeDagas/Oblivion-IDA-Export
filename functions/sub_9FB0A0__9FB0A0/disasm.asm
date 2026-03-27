0x9FB0A0: push    0FFFFFFFFh
0x9FB0A2: push    offset SEH_9FB0A0
0x9FB0A7: mov     eax, large fs:0
0x9FB0AD: push    eax
0x9FB0AE: mov     eax, ___security_cookie
0x9FB0B3: xor     eax, esp
0x9FB0B5: push    eax
0x9FB0B6: lea     eax, [esp+10h+var_C]
0x9FB0BA: mov     large fs:0, eax
0x9FB0C0: push    offset byte_B13220
0x9FB0C5: mov     ecx, offset INISettingCollection
0x9FB0CA: mov     [esp+14h+var_4], 0
0x9FB0D2: call    SettingCollectionList_AddSetting
0x9FB0D7: push    offset sub_A24490; void (__cdecl *)()
0x9FB0DC: call    _atexit
0x9FB0E1: add     esp, 4
0x9FB0E4: mov     ecx, [esp+10h+var_C]
0x9FB0E8: mov     large fs:0, ecx
0x9FB0EF: pop     ecx
0x9FB0F0: add     esp, 0Ch
0x9FB0F3: retn
