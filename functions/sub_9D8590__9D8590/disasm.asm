0x9D8590: push    0FFFFFFFFh
0x9D8592: push    offset SEH_9D8590
0x9D8597: mov     eax, large fs:0
0x9D859D: push    eax
0x9D859E: mov     eax, ___security_cookie
0x9D85A3: xor     eax, esp
0x9D85A5: push    eax
0x9D85A6: lea     eax, [esp+10h+var_C]
0x9D85AA: mov     large fs:0, eax
0x9D85B0: push    offset off_B02CD0
0x9D85B5: mov     ecx, offset INISettingCollection
0x9D85BA: mov     [esp+14h+var_4], 0
0x9D85C2: call    SettingCollectionList_AddSetting
0x9D85C7: push    offset sub_A16880; void (__cdecl *)()
0x9D85CC: call    _atexit
0x9D85D1: add     esp, 4
0x9D85D4: mov     ecx, [esp+10h+var_C]
0x9D85D8: mov     large fs:0, ecx
0x9D85DF: pop     ecx
0x9D85E0: add     esp, 0Ch
0x9D85E3: retn
