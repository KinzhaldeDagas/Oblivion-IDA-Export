0x9FD450: push    0FFFFFFFFh
0x9FD452: push    offset SEH_9FD450
0x9FD457: mov     eax, large fs:0
0x9FD45D: push    eax
0x9FD45E: mov     eax, ___security_cookie
0x9FD463: xor     eax, esp
0x9FD465: push    eax
0x9FD466: lea     eax, [esp+10h+var_C]
0x9FD46A: mov     large fs:0, eax
0x9FD470: push    offset unk_B14B9C
0x9FD475: mov     ecx, offset INISettingCollection
0x9FD47A: mov     [esp+14h+var_4], 0
0x9FD482: call    SettingCollectionList_AddSetting
0x9FD487: push    offset sub_A25520; void (__cdecl *)()
0x9FD48C: call    _atexit
0x9FD491: add     esp, 4
0x9FD494: mov     ecx, [esp+10h+var_C]
0x9FD498: mov     large fs:0, ecx
0x9FD49F: pop     ecx
0x9FD4A0: add     esp, 0Ch
0x9FD4A3: retn
