0x9D86B0: push    0FFFFFFFFh
0x9D86B2: push    offset SEH_9D86B0
0x9D86B7: mov     eax, large fs:0
0x9D86BD: push    eax
0x9D86BE: mov     eax, ___security_cookie
0x9D86C3: xor     eax, esp
0x9D86C5: push    eax
0x9D86C6: lea     eax, [esp+10h+var_C]
0x9D86CA: mov     large fs:0, eax
0x9D86D0: push    offset unk_B02CE8
0x9D86D5: mov     ecx, offset INISettingCollection
0x9D86DA: mov     [esp+14h+var_4], 0
0x9D86E2: call    SettingCollectionList_AddSetting
0x9D86E7: push    offset sub_A16910; void (__cdecl *)()
0x9D86EC: call    _atexit
0x9D86F1: add     esp, 4
0x9D86F4: mov     ecx, [esp+10h+var_C]
0x9D86F8: mov     large fs:0, ecx
0x9D86FF: pop     ecx
0x9D8700: add     esp, 0Ch
0x9D8703: retn
