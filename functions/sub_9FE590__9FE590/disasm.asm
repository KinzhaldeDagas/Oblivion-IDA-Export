0x9FE590: push    0FFFFFFFFh
0x9FE592: push    offset SEH_9FE590
0x9FE597: mov     eax, large fs:0
0x9FE59D: push    eax
0x9FE59E: mov     eax, ___security_cookie
0x9FE5A3: xor     eax, esp
0x9FE5A5: push    eax
0x9FE5A6: lea     eax, [esp+10h+var_C]
0x9FE5AA: mov     large fs:0, eax
0x9FE5B0: push    offset unk_B15370
0x9FE5B5: mov     ecx, offset INISettingCollection
0x9FE5BA: mov     [esp+14h+var_4], 0
0x9FE5C2: call    SettingCollectionList_AddSetting
0x9FE5C7: push    offset sub_A25D70; void (__cdecl *)()
0x9FE5CC: call    _atexit
0x9FE5D1: add     esp, 4
0x9FE5D4: mov     ecx, [esp+10h+var_C]
0x9FE5D8: mov     large fs:0, ecx
0x9FE5DF: pop     ecx
0x9FE5E0: add     esp, 0Ch
0x9FE5E3: retn
