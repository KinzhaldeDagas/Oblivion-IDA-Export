0x9FBB90: push    0FFFFFFFFh
0x9FBB92: push    offset SEH_9FBB90
0x9FBB97: mov     eax, large fs:0
0x9FBB9D: push    eax
0x9FBB9E: mov     eax, ___security_cookie
0x9FBBA3: xor     eax, esp
0x9FBBA5: push    eax
0x9FBBA6: lea     eax, [esp+10h+var_C]
0x9FBBAA: mov     large fs:0, eax
0x9FBBB0: push    offset dword_B1399C
0x9FBBB5: mov     ecx, offset INISettingCollection
0x9FBBBA: mov     [esp+14h+var_4], 0
0x9FBBC2: call    SettingCollectionList_AddSetting
0x9FBBC7: push    offset sub_A249E0; void (__cdecl *)()
0x9FBBCC: call    _atexit
0x9FBBD1: add     esp, 4
0x9FBBD4: mov     ecx, [esp+10h+var_C]
0x9FBBD8: mov     large fs:0, ecx
0x9FBBDF: pop     ecx
0x9FBBE0: add     esp, 0Ch
0x9FBBE3: retn
