0x9DEEC0: push    0FFFFFFFFh
0x9DEEC2: push    offset SEH_9DEEC0
0x9DEEC7: mov     eax, large fs:0
0x9DEECD: push    eax
0x9DEECE: mov     eax, ___security_cookie
0x9DEED3: xor     eax, esp
0x9DEED5: push    eax
0x9DEED6: lea     eax, [esp+10h+var_C]
0x9DEEDA: mov     large fs:0, eax
0x9DEEE0: push    offset unk_B06F54
0x9DEEE5: mov     ecx, offset INISettingCollection
0x9DEEEA: mov     [esp+14h+var_4], 0
0x9DEEF2: call    SettingCollectionList_AddSetting
0x9DEEF7: push    offset sub_A19D10; void (__cdecl *)()
0x9DEEFC: call    _atexit
0x9DEF01: add     esp, 4
0x9DEF04: mov     ecx, [esp+10h+var_C]
0x9DEF08: mov     large fs:0, ecx
0x9DEF0F: pop     ecx
0x9DEF10: add     esp, 0Ch
0x9DEF13: retn
