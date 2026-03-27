0x9F9190: push    0FFFFFFFFh
0x9F9192: push    offset SEH_9F9190
0x9F9197: mov     eax, large fs:0
0x9F919D: push    eax
0x9F919E: mov     eax, ___security_cookie
0x9F91A3: xor     eax, esp
0x9F91A5: push    eax
0x9F91A6: lea     eax, [esp+10h+var_C]
0x9F91AA: mov     large fs:0, eax
0x9F91B0: push    offset unk_B125F8
0x9F91B5: mov     ecx, offset INISettingCollection
0x9F91BA: mov     [esp+14h+var_4], 0
0x9F91C2: call    SettingCollectionList_AddSetting
0x9F91C7: push    offset sub_A23660; void (__cdecl *)()
0x9F91CC: call    _atexit
0x9F91D1: add     esp, 4
0x9F91D4: mov     ecx, [esp+10h+var_C]
0x9F91D8: mov     large fs:0, ecx
0x9F91DF: pop     ecx
0x9F91E0: add     esp, 0Ch
0x9F91E3: retn
