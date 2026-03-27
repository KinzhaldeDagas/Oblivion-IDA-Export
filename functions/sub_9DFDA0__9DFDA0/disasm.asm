0x9DFDA0: push    0FFFFFFFFh
0x9DFDA2: push    offset SEH_9DFDA0
0x9DFDA7: mov     eax, large fs:0
0x9DFDAD: push    eax
0x9DFDAE: mov     eax, ___security_cookie
0x9DFDB3: xor     eax, esp
0x9DFDB5: push    eax
0x9DFDB6: lea     eax, [esp+10h+var_C]
0x9DFDBA: mov     large fs:0, eax
0x9DFDC0: push    offset unk_B070C0
0x9DFDC5: mov     ecx, offset INISettingCollection
0x9DFDCA: mov     [esp+14h+var_4], 0
0x9DFDD2: call    SettingCollectionList_AddSetting
0x9DFDD7: push    offset sub_A1A4E0; void (__cdecl *)()
0x9DFDDC: call    _atexit
0x9DFDE1: add     esp, 4
0x9DFDE4: mov     ecx, [esp+10h+var_C]
0x9DFDE8: mov     large fs:0, ecx
0x9DFDEF: pop     ecx
0x9DFDF0: add     esp, 0Ch
0x9DFDF3: retn
