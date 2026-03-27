0x9DD300: push    0FFFFFFFFh
0x9DD302: push    offset SEH_9DD300
0x9DD307: mov     eax, large fs:0
0x9DD30D: push    eax
0x9DD30E: mov     eax, ___security_cookie
0x9DD313: xor     eax, esp
0x9DD315: push    eax
0x9DD316: lea     eax, [esp+10h+var_C]
0x9DD31A: mov     large fs:0, eax
0x9DD320: push    offset unk_B06D04
0x9DD325: mov     ecx, offset INISettingCollection
0x9DD32A: mov     [esp+14h+var_4], 0
0x9DD332: call    SettingCollectionList_AddSetting
0x9DD337: push    offset sub_A18F30; void (__cdecl *)()
0x9DD33C: call    _atexit
0x9DD341: add     esp, 4
0x9DD344: mov     ecx, [esp+10h+var_C]
0x9DD348: mov     large fs:0, ecx
0x9DD34F: pop     ecx
0x9DD350: add     esp, 0Ch
0x9DD353: retn
