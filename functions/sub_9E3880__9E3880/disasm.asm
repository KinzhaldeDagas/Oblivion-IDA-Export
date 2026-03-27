0x9E3880: push    0FFFFFFFFh
0x9E3882: push    offset SEH_9E3880
0x9E3887: mov     eax, large fs:0
0x9E388D: push    eax
0x9E388E: mov     eax, ___security_cookie
0x9E3893: xor     eax, esp
0x9E3895: push    eax
0x9E3896: lea     eax, [esp+10h+var_C]
0x9E389A: mov     large fs:0, eax
0x9E38A0: push    offset unk_B09C08
0x9E38A5: mov     ecx, offset INISettingCollection
0x9E38AA: mov     [esp+14h+var_4], 0
0x9E38B2: call    SettingCollectionList_AddSetting
0x9E38B7: push    offset sub_A1BFD0; void (__cdecl *)()
0x9E38BC: call    _atexit
0x9E38C1: add     esp, 4
0x9E38C4: mov     ecx, [esp+10h+var_C]
0x9E38C8: mov     large fs:0, ecx
0x9E38CF: pop     ecx
0x9E38D0: add     esp, 0Ch
0x9E38D3: retn
