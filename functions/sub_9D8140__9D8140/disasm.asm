0x9D8140: push    0FFFFFFFFh
0x9D8142: push    offset SEH_9D8140
0x9D8147: mov     eax, large fs:0
0x9D814D: push    eax
0x9D814E: mov     eax, ___security_cookie
0x9D8153: xor     eax, esp
0x9D8155: push    eax
0x9D8156: lea     eax, [esp+10h+var_C]
0x9D815A: mov     large fs:0, eax
0x9D8160: push    offset dword_B02C44
0x9D8165: mov     ecx, offset INISettingCollection
0x9D816A: mov     [esp+14h+var_4], 0
0x9D8172: call    SettingCollectionList_AddSetting
0x9D8177: push    offset sub_A164C0; void (__cdecl *)()
0x9D817C: call    _atexit
0x9D8181: add     esp, 4
0x9D8184: mov     ecx, [esp+10h+var_C]
0x9D8188: mov     large fs:0, ecx
0x9D818F: pop     ecx
0x9D8190: add     esp, 0Ch
0x9D8193: retn
