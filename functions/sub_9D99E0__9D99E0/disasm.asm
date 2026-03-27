0x9D99E0: push    0FFFFFFFFh
0x9D99E2: push    offset SEH_9D99E0
0x9D99E7: mov     eax, large fs:0
0x9D99ED: push    eax
0x9D99EE: mov     eax, ___security_cookie
0x9D99F3: xor     eax, esp
0x9D99F5: push    eax
0x9D99F6: lea     eax, [esp+10h+var_C]
0x9D99FA: mov     large fs:0, eax
0x9D9A00: push    offset NearDistance
0x9D9A05: mov     ecx, offset INISettingCollection
0x9D9A0A: mov     [esp+14h+var_4], 0
0x9D9A12: call    SettingCollectionList_AddSetting
0x9D9A17: push    offset sub_A172A0; void (__cdecl *)()
0x9D9A1C: call    _atexit
0x9D9A21: add     esp, 4
0x9D9A24: mov     ecx, [esp+10h+var_C]
0x9D9A28: mov     large fs:0, ecx
0x9D9A2F: pop     ecx
0x9D9A30: add     esp, 0Ch
0x9D9A33: retn
