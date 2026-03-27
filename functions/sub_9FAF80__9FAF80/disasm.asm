0x9FAF80: push    0FFFFFFFFh
0x9FAF82: push    offset SEH_9FAF80
0x9FAF87: mov     eax, large fs:0
0x9FAF8D: push    eax
0x9FAF8E: mov     eax, ___security_cookie
0x9FAF93: xor     eax, esp
0x9FAF95: push    eax
0x9FAF96: lea     eax, [esp+10h+var_C]
0x9FAF9A: mov     large fs:0, eax
0x9FAFA0: push    offset byte_B13208
0x9FAFA5: mov     ecx, offset INISettingCollection
0x9FAFAA: mov     [esp+14h+var_4], 0
0x9FAFB2: call    SettingCollectionList_AddSetting
0x9FAFB7: push    offset sub_A24400; void (__cdecl *)()
0x9FAFBC: call    _atexit
0x9FAFC1: add     esp, 4
0x9FAFC4: mov     ecx, [esp+10h+var_C]
0x9FAFC8: mov     large fs:0, ecx
0x9FAFCF: pop     ecx
0x9FAFD0: add     esp, 0Ch
0x9FAFD3: retn
