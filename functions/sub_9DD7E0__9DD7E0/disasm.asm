0x9DD7E0: push    0FFFFFFFFh
0x9DD7E2: push    offset SEH_9DD7E0
0x9DD7E7: mov     eax, large fs:0
0x9DD7ED: push    eax
0x9DD7EE: mov     eax, ___security_cookie
0x9DD7F3: xor     eax, esp
0x9DD7F5: push    eax
0x9DD7F6: lea     eax, [esp+10h+var_C]
0x9DD7FA: mov     large fs:0, eax
0x9DD800: push    offset flt_B06D6C
0x9DD805: mov     ecx, offset INISettingCollection
0x9DD80A: mov     [esp+14h+var_4], 0
0x9DD812: call    SettingCollectionList_AddSetting
0x9DD817: push    offset sub_A191A0; void (__cdecl *)()
0x9DD81C: call    _atexit
0x9DD821: add     esp, 4
0x9DD824: mov     ecx, [esp+10h+var_C]
0x9DD828: mov     large fs:0, ecx
0x9DD82F: pop     ecx
0x9DD830: add     esp, 0Ch
0x9DD833: retn
