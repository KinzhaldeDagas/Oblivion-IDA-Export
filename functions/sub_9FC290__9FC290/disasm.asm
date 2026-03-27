0x9FC290: push    0FFFFFFFFh
0x9FC292: push    offset SEH_9FC290
0x9FC297: mov     eax, large fs:0
0x9FC29D: push    eax
0x9FC29E: mov     eax, ___security_cookie
0x9FC2A3: xor     eax, esp
0x9FC2A5: push    eax
0x9FC2A6: lea     eax, [esp+10h+var_C]
0x9FC2AA: mov     large fs:0, eax
0x9FC2B0: push    offset aOgsJ
0x9FC2B5: mov     ecx, offset INISettingCollection
0x9FC2BA: mov     [esp+14h+var_4], 0
0x9FC2C2: call    SettingCollectionList_AddSetting
0x9FC2C7: push    offset sub_A24C20; void (__cdecl *)()
0x9FC2CC: call    _atexit
0x9FC2D1: add     esp, 4
0x9FC2D4: mov     ecx, [esp+10h+var_C]
0x9FC2D8: mov     large fs:0, ecx
0x9FC2DF: pop     ecx
0x9FC2E0: add     esp, 0Ch
0x9FC2E3: retn
