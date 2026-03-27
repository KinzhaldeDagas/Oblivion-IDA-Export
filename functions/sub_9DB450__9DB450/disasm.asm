0x9DB450: push    0FFFFFFFFh
0x9DB452: push    offset SEH_9DB450
0x9DB457: mov     eax, large fs:0
0x9DB45D: push    eax
0x9DB45E: mov     eax, ___security_cookie
0x9DB463: xor     eax, esp
0x9DB465: push    eax
0x9DB466: lea     eax, [esp+10h+var_C]
0x9DB46A: mov     large fs:0, eax
0x9DB470: push    offset unk_B0523C
0x9DB475: mov     ecx, offset INISettingCollection
0x9DB47A: mov     [esp+14h+var_4], 0
0x9DB482: call    SettingCollectionList_AddSetting
0x9DB487: push    offset sub_A17F80; void (__cdecl *)()
0x9DB48C: call    _atexit
0x9DB491: add     esp, 4
0x9DB494: mov     ecx, [esp+10h+var_C]
0x9DB498: mov     large fs:0, ecx
0x9DB49F: pop     ecx
0x9DB4A0: add     esp, 0Ch
0x9DB4A3: retn
