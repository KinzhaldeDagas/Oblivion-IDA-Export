0x9DD960: push    0FFFFFFFFh
0x9DD962: push    offset SEH_9DD960
0x9DD967: mov     eax, large fs:0
0x9DD96D: push    eax
0x9DD96E: mov     eax, ___security_cookie
0x9DD973: xor     eax, esp
0x9DD975: push    eax
0x9DD976: lea     eax, [esp+10h+var_C]
0x9DD97A: mov     large fs:0, eax
0x9DD980: push    offset flt_B06D8C
0x9DD985: mov     ecx, offset INISettingCollection
0x9DD98A: mov     [esp+14h+var_4], 0
0x9DD992: call    SettingCollectionList_AddSetting
0x9DD997: push    offset sub_A19260; void (__cdecl *)()
0x9DD99C: call    _atexit
0x9DD9A1: add     esp, 4
0x9DD9A4: mov     ecx, [esp+10h+var_C]
0x9DD9A8: mov     large fs:0, ecx
0x9DD9AF: pop     ecx
0x9DD9B0: add     esp, 0Ch
0x9DD9B3: retn
