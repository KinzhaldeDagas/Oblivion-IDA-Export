0x9FD120: push    0FFFFFFFFh
0x9FD122: push    offset SEH_9FD120
0x9FD127: mov     eax, large fs:0
0x9FD12D: push    eax
0x9FD12E: mov     eax, ___security_cookie
0x9FD133: xor     eax, esp
0x9FD135: push    eax
0x9FD136: lea     eax, [esp+10h+var_C]
0x9FD13A: mov     large fs:0, eax
0x9FD140: push    offset dword_B148EC
0x9FD145: mov     ecx, offset INISettingCollection
0x9FD14A: mov     [esp+14h+var_4], 0
0x9FD152: call    SettingCollectionList_AddSetting
0x9FD157: push    offset sub_A253B0; void (__cdecl *)()
0x9FD15C: call    _atexit
0x9FD161: add     esp, 4
0x9FD164: mov     ecx, [esp+10h+var_C]
0x9FD168: mov     large fs:0, ecx
0x9FD16F: pop     ecx
0x9FD170: add     esp, 0Ch
0x9FD173: retn
