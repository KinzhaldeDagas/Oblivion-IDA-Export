0x9FD810: push    0FFFFFFFFh
0x9FD812: push    offset SEH_9FD810
0x9FD817: mov     eax, large fs:0
0x9FD81D: push    eax
0x9FD81E: mov     eax, ___security_cookie
0x9FD823: xor     eax, esp
0x9FD825: push    eax
0x9FD826: lea     eax, [esp+10h+var_C]
0x9FD82A: mov     large fs:0, eax
0x9FD830: push    offset flt_B14CCC
0x9FD835: mov     ecx, offset INISettingCollection
0x9FD83A: mov     [esp+14h+var_4], 0
0x9FD842: call    SettingCollectionList_AddSetting
0x9FD847: push    offset sub_A25700; void (__cdecl *)()
0x9FD84C: call    _atexit
0x9FD851: add     esp, 4
0x9FD854: mov     ecx, [esp+10h+var_C]
0x9FD858: mov     large fs:0, ecx
0x9FD85F: pop     ecx
0x9FD860: add     esp, 0Ch
0x9FD863: retn
