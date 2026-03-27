0x9DC5B0: push    0FFFFFFFFh
0x9DC5B2: push    offset SEH_9DC5B0
0x9DC5B7: mov     eax, large fs:0
0x9DC5BD: push    eax
0x9DC5BE: mov     eax, ___security_cookie
0x9DC5C3: xor     eax, esp
0x9DC5C5: push    eax
0x9DC5C6: lea     eax, [esp+10h+var_C]
0x9DC5CA: mov     large fs:0, eax
0x9DC5D0: push    offset dword_B06A98
0x9DC5D5: mov     ecx, offset INISettingCollection
0x9DC5DA: mov     [esp+14h+var_4], 0
0x9DC5E2: call    SettingCollectionList_AddSetting
0x9DC5E7: push    offset sub_A18830; void (__cdecl *)()
0x9DC5EC: call    _atexit
0x9DC5F1: add     esp, 4
0x9DC5F4: mov     ecx, [esp+10h+var_C]
0x9DC5F8: mov     large fs:0, ecx
0x9DC5FF: pop     ecx
0x9DC600: add     esp, 0Ch
0x9DC603: retn
