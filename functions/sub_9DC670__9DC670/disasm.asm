0x9DC670: push    0FFFFFFFFh
0x9DC672: push    offset SEH_9DC670
0x9DC677: mov     eax, large fs:0
0x9DC67D: push    eax
0x9DC67E: mov     eax, ___security_cookie
0x9DC683: xor     eax, esp
0x9DC685: push    eax
0x9DC686: lea     eax, [esp+10h+var_C]
0x9DC68A: mov     large fs:0, eax
0x9DC690: push    offset dword_B06AA8
0x9DC695: mov     ecx, offset INISettingCollection
0x9DC69A: mov     [esp+14h+var_4], 0
0x9DC6A2: call    SettingCollectionList_AddSetting
0x9DC6A7: push    offset sub_A18890; void (__cdecl *)()
0x9DC6AC: call    _atexit
0x9DC6B1: add     esp, 4
0x9DC6B4: mov     ecx, [esp+10h+var_C]
0x9DC6B8: mov     large fs:0, ecx
0x9DC6BF: pop     ecx
0x9DC6C0: add     esp, 0Ch
0x9DC6C3: retn
