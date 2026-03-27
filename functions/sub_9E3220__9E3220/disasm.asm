0x9E3220: push    0FFFFFFFFh
0x9E3222: push    offset SEH_9E3220
0x9E3227: mov     eax, large fs:0
0x9E322D: push    eax
0x9E322E: mov     eax, ___security_cookie
0x9E3233: xor     eax, esp
0x9E3235: push    eax
0x9E3236: lea     eax, [esp+10h+var_C]
0x9E323A: mov     large fs:0, eax
0x9E3240: push    offset byte_B097E0
0x9E3245: mov     ecx, offset INISettingCollection
0x9E324A: mov     [esp+14h+var_4], 0
0x9E3252: call    SettingCollectionList_AddSetting
0x9E3257: push    offset sub_A1BBF0; void (__cdecl *)()
0x9E325C: call    _atexit
0x9E3261: add     esp, 4
0x9E3264: mov     ecx, [esp+10h+var_C]
0x9E3268: mov     large fs:0, ecx
0x9E326F: pop     ecx
0x9E3270: add     esp, 0Ch
0x9E3273: retn
