0x9D9370: push    0FFFFFFFFh
0x9D9372: push    offset SEH_9D9370
0x9D9377: mov     eax, large fs:0
0x9D937D: push    eax
0x9D937E: mov     eax, ___security_cookie
0x9D9383: xor     eax, esp
0x9D9385: push    eax
0x9D9386: lea     eax, [esp+10h+var_C]
0x9D938A: mov     large fs:0, eax
0x9D9390: push    offset unk_B02DF8
0x9D9395: mov     ecx, offset INISettingCollection
0x9D939A: mov     [esp+14h+var_4], 0
0x9D93A2: call    SettingCollectionList_AddSetting
0x9D93A7: push    offset sub_A16F70; void (__cdecl *)()
0x9D93AC: call    _atexit
0x9D93B1: add     esp, 4
0x9D93B4: mov     ecx, [esp+10h+var_C]
0x9D93B8: mov     large fs:0, ecx
0x9D93BF: pop     ecx
0x9D93C0: add     esp, 0Ch
0x9D93C3: retn
