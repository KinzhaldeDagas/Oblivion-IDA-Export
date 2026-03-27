0x9E3190: push    0FFFFFFFFh
0x9E3192: push    offset SEH_9E3190
0x9E3197: mov     eax, large fs:0
0x9E319D: push    eax
0x9E319E: mov     eax, ___security_cookie
0x9E31A3: xor     eax, esp
0x9E31A5: push    eax
0x9E31A6: lea     eax, [esp+10h+var_C]
0x9E31AA: mov     large fs:0, eax
0x9E31B0: push    offset iNumHavokThreads
0x9E31B5: mov     ecx, offset INISettingCollection
0x9E31BA: mov     [esp+14h+var_4], 0
0x9E31C2: call    SettingCollectionList_AddSetting
0x9E31C7: push    offset sub_A1BBC0; void (__cdecl *)()
0x9E31CC: call    _atexit
0x9E31D1: add     esp, 4
0x9E31D4: mov     ecx, [esp+10h+var_C]
0x9E31D8: mov     large fs:0, ecx
0x9E31DF: pop     ecx
0x9E31E0: add     esp, 0Ch
0x9E31E3: retn
