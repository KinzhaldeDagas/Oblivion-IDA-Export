0x9D8770: push    0FFFFFFFFh
0x9D8772: push    offset SEH_9D8770
0x9D8777: mov     eax, large fs:0
0x9D877D: push    eax
0x9D877E: mov     eax, ___security_cookie
0x9D8783: xor     eax, esp
0x9D8785: push    eax
0x9D8786: lea     eax, [esp+10h+var_C]
0x9D878A: mov     large fs:0, eax
0x9D8790: push    offset off_B02CF8
0x9D8795: mov     ecx, offset INISettingCollection
0x9D879A: mov     [esp+14h+var_4], 0
0x9D87A2: call    SettingCollectionList_AddSetting
0x9D87A7: push    offset sub_A16970; void (__cdecl *)()
0x9D87AC: call    _atexit
0x9D87B1: add     esp, 4
0x9D87B4: mov     ecx, [esp+10h+var_C]
0x9D87B8: mov     large fs:0, ecx
0x9D87BF: pop     ecx
0x9D87C0: add     esp, 0Ch
0x9D87C3: retn
