0x9DC040: push    0FFFFFFFFh
0x9DC042: push    offset SEH_9DC040
0x9DC047: mov     eax, large fs:0
0x9DC04D: push    eax
0x9DC04E: mov     eax, ___security_cookie
0x9DC053: xor     eax, esp
0x9DC055: push    eax
0x9DC056: lea     eax, [esp+10h+var_C]
0x9DC05A: mov     large fs:0, eax
0x9DC060: push    offset flt_B06530
0x9DC065: mov     ecx, offset INISettingCollection
0x9DC06A: mov     [esp+14h+var_4], 0
0x9DC072: call    SettingCollectionList_AddSetting
0x9DC077: push    offset sub_A18580; void (__cdecl *)()
0x9DC07C: call    _atexit
0x9DC081: add     esp, 4
0x9DC084: mov     ecx, [esp+10h+var_C]
0x9DC088: mov     large fs:0, ecx
0x9DC08F: pop     ecx
0x9DC090: add     esp, 0Ch
0x9DC093: retn
