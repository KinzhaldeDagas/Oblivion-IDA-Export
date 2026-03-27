0x9E05D0: push    0FFFFFFFFh
0x9E05D2: push    offset SEH_9E05D0
0x9E05D7: mov     eax, large fs:0
0x9E05DD: push    eax
0x9E05DE: mov     eax, ___security_cookie
0x9E05E3: xor     eax, esp
0x9E05E5: push    eax
0x9E05E6: lea     eax, [esp+10h+var_C]
0x9E05EA: mov     large fs:0, eax
0x9E05F0: push    offset byte_B07644
0x9E05F5: mov     ecx, offset INISettingCollection
0x9E05FA: mov     [esp+14h+var_4], 0
0x9E0602: call    SettingCollectionList_AddSetting
0x9E0607: push    offset sub_A1A940; void (__cdecl *)()
0x9E060C: call    _atexit
0x9E0611: add     esp, 4
0x9E0614: mov     ecx, [esp+10h+var_C]
0x9E0618: mov     large fs:0, ecx
0x9E061F: pop     ecx
0x9E0620: add     esp, 0Ch
0x9E0623: retn
