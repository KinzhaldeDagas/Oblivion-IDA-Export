0x9D95C0: push    0FFFFFFFFh
0x9D95C2: push    offset SEH_9D95C0
0x9D95C7: mov     eax, large fs:0
0x9D95CD: push    eax
0x9D95CE: mov     eax, ___security_cookie
0x9D95D3: xor     eax, esp
0x9D95D5: push    eax
0x9D95D6: lea     eax, [esp+10h+var_C]
0x9D95DA: mov     large fs:0, eax
0x9D95E0: push    offset off_B0308C; "Oblivion iv logo.bik"
0x9D95E5: mov     ecx, offset INISettingCollection
0x9D95EA: mov     [esp+14h+var_4], 0
0x9D95F2: call    SettingCollectionList_AddSetting
0x9D95F7: push    offset sub_A17090; void (__cdecl *)()
0x9D95FC: call    _atexit
0x9D9601: add     esp, 4
0x9D9604: mov     ecx, [esp+10h+var_C]
0x9D9608: mov     large fs:0, ecx
0x9D960F: pop     ecx
0x9D9610: add     esp, 0Ch
0x9D9613: retn
