0x9FC2F0: push    0FFFFFFFFh
0x9FC2F2: push    offset SEH_9FC2F0
0x9FC2F7: mov     eax, large fs:0
0x9FC2FD: push    eax
0x9FC2FE: mov     eax, ___security_cookie
0x9FC303: xor     eax, esp
0x9FC305: push    eax
0x9FC306: lea     eax, [esp+10h+var_C]
0x9FC30A: mov     large fs:0, eax
0x9FC310: push    offset unk_B14150
0x9FC315: mov     ecx, offset INISettingCollection
0x9FC31A: mov     [esp+14h+var_4], 0
0x9FC322: call    SettingCollectionList_AddSetting
0x9FC327: push    offset sub_A24C50; void (__cdecl *)()
0x9FC32C: call    _atexit
0x9FC331: add     esp, 4
0x9FC334: mov     ecx, [esp+10h+var_C]
0x9FC338: mov     large fs:0, ecx
0x9FC33F: pop     ecx
0x9FC340: add     esp, 0Ch
0x9FC343: retn
