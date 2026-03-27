0x9D9680: push    0FFFFFFFFh
0x9D9682: push    offset SEH_9D9680
0x9D9687: mov     eax, large fs:0
0x9D968D: push    eax
0x9D968E: mov     eax, ___security_cookie
0x9D9693: xor     eax, esp
0x9D9695: push    eax
0x9D9696: lea     eax, [esp+10h+var_C]
0x9D969A: mov     large fs:0, eax
0x9D96A0: push    offset off_B0309C; "CreditsMenu.bik"
0x9D96A5: mov     ecx, offset INISettingCollection
0x9D96AA: mov     [esp+14h+var_4], 0
0x9D96B2: call    SettingCollectionList_AddSetting
0x9D96B7: push    offset sub_A170F0; void (__cdecl *)()
0x9D96BC: call    _atexit
0x9D96C1: add     esp, 4
0x9D96C4: mov     ecx, [esp+10h+var_C]
0x9D96C8: mov     large fs:0, ecx
0x9D96CF: pop     ecx
0x9D96D0: add     esp, 0Ch
0x9D96D3: retn
