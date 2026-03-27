0x9DB690: push    0FFFFFFFFh
0x9DB692: push    offset SEH_9DB690
0x9DB697: mov     eax, large fs:0
0x9DB69D: push    eax
0x9DB69E: mov     eax, ___security_cookie
0x9DB6A3: xor     eax, esp
0x9DB6A5: push    eax
0x9DB6A6: lea     eax, [esp+10h+var_C]
0x9DB6AA: mov     large fs:0, eax
0x9DB6B0: push    offset unk_B05554
0x9DB6B5: mov     ecx, offset INISettingCollection
0x9DB6BA: mov     [esp+14h+var_4], 0
0x9DB6C2: call    SettingCollectionList_AddSetting
0x9DB6C7: push    offset sub_A18090; void (__cdecl *)()
0x9DB6CC: call    _atexit
0x9DB6D1: add     esp, 4
0x9DB6D4: mov     ecx, [esp+10h+var_C]
0x9DB6D8: mov     large fs:0, ecx
0x9DB6DF: pop     ecx
0x9DB6E0: add     esp, 0Ch
0x9DB6E3: retn
