0x9DC370: push    0FFFFFFFFh
0x9DC372: push    offset SEH_9DC370
0x9DC377: mov     eax, large fs:0
0x9DC37D: push    eax
0x9DC37E: mov     eax, ___security_cookie
0x9DC383: xor     eax, esp
0x9DC385: push    eax
0x9DC386: lea     eax, [esp+10h+var_C]
0x9DC38A: mov     large fs:0, eax
0x9DC390: push    offset aHsz?fG
0x9DC395: mov     ecx, offset INISettingCollection
0x9DC39A: mov     [esp+14h+var_4], 0
0x9DC3A2: call    SettingCollectionList_AddSetting
0x9DC3A7: push    offset sub_A186E0; void (__cdecl *)()
0x9DC3AC: call    _atexit
0x9DC3B1: add     esp, 4
0x9DC3B4: mov     ecx, [esp+10h+var_C]
0x9DC3B8: mov     large fs:0, ecx
0x9DC3BF: pop     ecx
0x9DC3C0: add     esp, 0Ch
0x9DC3C3: retn
