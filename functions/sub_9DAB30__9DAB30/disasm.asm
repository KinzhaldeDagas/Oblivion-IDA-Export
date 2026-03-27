0x9DAB30: push    0FFFFFFFFh
0x9DAB32: push    offset SEH_9DAB30
0x9DAB37: mov     eax, large fs:0
0x9DAB3D: push    eax
0x9DAB3E: mov     eax, ___security_cookie
0x9DAB43: xor     eax, esp
0x9DAB45: push    eax
0x9DAB46: lea     eax, [esp+10h+var_C]
0x9DAB4A: mov     large fs:0, eax
0x9DAB50: push    offset sInvalidationFile_Archive
0x9DAB55: mov     ecx, offset INISettingCollection
0x9DAB5A: mov     [esp+14h+var_4], 0
0x9DAB62: call    SettingCollectionList_AddSetting
0x9DAB67: push    offset sub_A17AD0; void (__cdecl *)()
0x9DAB6C: call    _atexit
0x9DAB71: add     esp, 4
0x9DAB74: mov     ecx, [esp+10h+var_C]
0x9DAB78: mov     large fs:0, ecx
0x9DAB7F: pop     ecx
0x9DAB80: add     esp, 0Ch
0x9DAB83: retn
