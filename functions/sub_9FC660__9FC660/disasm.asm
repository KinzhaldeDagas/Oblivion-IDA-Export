0x9FC660: push    0FFFFFFFFh
0x9FC662: push    offset SEH_9FC660
0x9FC667: mov     eax, large fs:0
0x9FC66D: push    eax
0x9FC66E: mov     eax, ___security_cookie
0x9FC673: xor     eax, esp
0x9FC675: push    eax
0x9FC676: lea     eax, [esp+10h+var_C]
0x9FC67A: mov     large fs:0, eax
0x9FC680: push    offset unk_B14390
0x9FC685: mov     ecx, offset INISettingCollection
0x9FC68A: mov     [esp+14h+var_4], 0
0x9FC692: call    SettingCollectionList_AddSetting
0x9FC697: push    offset sub_A24E10; void (__cdecl *)()
0x9FC69C: call    _atexit
0x9FC6A1: add     esp, 4
0x9FC6A4: mov     ecx, [esp+10h+var_C]
0x9FC6A8: mov     large fs:0, ecx
0x9FC6AF: pop     ecx
0x9FC6B0: add     esp, 0Ch
0x9FC6B3: retn
