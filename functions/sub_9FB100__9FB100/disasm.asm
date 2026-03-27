0x9FB100: push    0FFFFFFFFh
0x9FB102: push    offset SEH_9FB100
0x9FB107: mov     eax, large fs:0
0x9FB10D: push    eax
0x9FB10E: mov     eax, ___security_cookie
0x9FB113: xor     eax, esp
0x9FB115: push    eax
0x9FB116: lea     eax, [esp+10h+var_C]
0x9FB11A: mov     large fs:0, eax
0x9FB120: push    offset byte_B13228
0x9FB125: mov     ecx, offset INISettingCollection
0x9FB12A: mov     [esp+14h+var_4], 0
0x9FB132: call    SettingCollectionList_AddSetting
0x9FB137: push    offset sub_A244C0; void (__cdecl *)()
0x9FB13C: call    _atexit
0x9FB141: add     esp, 4
0x9FB144: mov     ecx, [esp+10h+var_C]
0x9FB148: mov     large fs:0, ecx
0x9FB14F: pop     ecx
0x9FB150: add     esp, 0Ch
0x9FB153: retn
