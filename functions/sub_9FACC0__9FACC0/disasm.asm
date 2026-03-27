0x9FACC0: push    0FFFFFFFFh
0x9FACC2: push    offset SEH_9FACC0
0x9FACC7: mov     eax, large fs:0
0x9FACCD: push    eax
0x9FACCE: mov     eax, ___security_cookie
0x9FACD3: xor     eax, esp
0x9FACD5: push    eax
0x9FACD6: lea     eax, [esp+10h+var_C]
0x9FACDA: mov     large fs:0, eax
0x9FACE0: push    offset dword_B12DB4
0x9FACE5: mov     ecx, offset INISettingCollection
0x9FACEA: mov     [esp+14h+var_4], 0
0x9FACF2: call    SettingCollectionList_AddSetting
0x9FACF7: push    offset sub_A242B0; void (__cdecl *)()
0x9FACFC: call    _atexit
0x9FAD01: add     esp, 4
0x9FAD04: mov     ecx, [esp+10h+var_C]
0x9FAD08: mov     large fs:0, ecx
0x9FAD0F: pop     ecx
0x9FAD10: add     esp, 0Ch
0x9FAD13: retn
