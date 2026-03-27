0x9FD630: push    0FFFFFFFFh
0x9FD632: push    offset SEH_9FD630
0x9FD637: mov     eax, large fs:0
0x9FD63D: push    eax
0x9FD63E: mov     eax, ___security_cookie
0x9FD643: xor     eax, esp
0x9FD645: push    eax
0x9FD646: lea     eax, [esp+10h+var_C]
0x9FD64A: mov     large fs:0, eax
0x9FD650: push    offset unk_B14BC4
0x9FD655: mov     ecx, offset INISettingCollection
0x9FD65A: mov     [esp+14h+var_4], 0
0x9FD662: call    SettingCollectionList_AddSetting
0x9FD667: push    offset sub_A25610; void (__cdecl *)()
0x9FD66C: call    _atexit
0x9FD671: add     esp, 4
0x9FD674: mov     ecx, [esp+10h+var_C]
0x9FD678: mov     large fs:0, ecx
0x9FD67F: pop     ecx
0x9FD680: add     esp, 0Ch
0x9FD683: retn
