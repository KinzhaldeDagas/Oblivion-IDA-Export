0x9DB930: push    0FFFFFFFFh
0x9DB932: push    offset SEH_9DB930
0x9DB937: mov     eax, large fs:0
0x9DB93D: push    eax
0x9DB93E: mov     eax, ___security_cookie
0x9DB943: xor     eax, esp
0x9DB945: push    eax
0x9DB946: lea     eax, [esp+10h+var_C]
0x9DB94A: mov     large fs:0, eax
0x9DB950: push    offset byte_B0558C
0x9DB955: mov     ecx, offset INISettingCollection
0x9DB95A: mov     [esp+14h+var_4], 0
0x9DB962: call    SettingCollectionList_AddSetting
0x9DB967: push    offset sub_A181E0; void (__cdecl *)()
0x9DB96C: call    _atexit
0x9DB971: add     esp, 4
0x9DB974: mov     ecx, [esp+10h+var_C]
0x9DB978: mov     large fs:0, ecx
0x9DB97F: pop     ecx
0x9DB980: add     esp, 0Ch
0x9DB983: retn
