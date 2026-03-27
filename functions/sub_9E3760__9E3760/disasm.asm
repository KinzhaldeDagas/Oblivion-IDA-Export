0x9E3760: push    0FFFFFFFFh
0x9E3762: push    offset SEH_9E3760
0x9E3767: mov     eax, large fs:0
0x9E376D: push    eax
0x9E376E: mov     eax, ___security_cookie
0x9E3773: xor     eax, esp
0x9E3775: push    eax
0x9E3776: lea     eax, [esp+10h+var_C]
0x9E377A: mov     large fs:0, eax
0x9E3780: push    offset unk_B09B38
0x9E3785: mov     ecx, offset INISettingCollection
0x9E378A: mov     [esp+14h+var_4], 0
0x9E3792: call    SettingCollectionList_AddSetting
0x9E3797: push    offset sub_A1BF40; void (__cdecl *)()
0x9E379C: call    _atexit
0x9E37A1: add     esp, 4
0x9E37A4: mov     ecx, [esp+10h+var_C]
0x9E37A8: mov     large fs:0, ecx
0x9E37AF: pop     ecx
0x9E37B0: add     esp, 0Ch
0x9E37B3: retn
