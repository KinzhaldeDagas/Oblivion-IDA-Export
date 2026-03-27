0x9FE3C0: push    0FFFFFFFFh
0x9FE3C2: push    offset SEH_9FE3C0
0x9FE3C7: mov     eax, large fs:0
0x9FE3CD: push    eax
0x9FE3CE: mov     eax, ___security_cookie
0x9FE3D3: xor     eax, esp
0x9FE3D5: push    eax
0x9FE3D6: lea     eax, [esp+10h+var_C]
0x9FE3DA: mov     large fs:0, eax
0x9FE3E0: push    offset byte_B14F48
0x9FE3E5: mov     ecx, offset INISettingCollection
0x9FE3EA: mov     [esp+14h+var_4], 0
0x9FE3F2: call    SettingCollectionList_AddSetting
0x9FE3F7: push    offset sub_A25CE0; void (__cdecl *)()
0x9FE3FC: call    _atexit
0x9FE401: add     esp, 4
0x9FE404: mov     ecx, [esp+10h+var_C]
0x9FE408: mov     large fs:0, ecx
0x9FE40F: pop     ecx
0x9FE410: add     esp, 0Ch
0x9FE413: retn
