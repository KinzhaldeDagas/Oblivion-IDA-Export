0x9E0330: push    0FFFFFFFFh
0x9E0332: push    offset SEH_9E0330
0x9E0337: mov     eax, large fs:0
0x9E033D: push    eax
0x9E033E: mov     eax, ___security_cookie
0x9E0343: xor     eax, esp
0x9E0345: push    eax
0x9E0346: lea     eax, [esp+10h+var_C]
0x9E034A: mov     large fs:0, eax
0x9E0350: push    offset flt_B0760C
0x9E0355: mov     ecx, offset INISettingCollection
0x9E035A: mov     [esp+14h+var_4], 0
0x9E0362: call    SettingCollectionList_AddSetting
0x9E0367: push    offset sub_A1A7F0; void (__cdecl *)()
0x9E036C: call    _atexit
0x9E0371: add     esp, 4
0x9E0374: mov     ecx, [esp+10h+var_C]
0x9E0378: mov     large fs:0, ecx
0x9E037F: pop     ecx
0x9E0380: add     esp, 0Ch
0x9E0383: retn
