0x9FD7B0: push    0FFFFFFFFh
0x9FD7B2: push    offset SEH_9FD7B0
0x9FD7B7: mov     eax, large fs:0
0x9FD7BD: push    eax
0x9FD7BE: mov     eax, ___security_cookie
0x9FD7C3: xor     eax, esp
0x9FD7C5: push    eax
0x9FD7C6: lea     eax, [esp+10h+var_C]
0x9FD7CA: mov     large fs:0, eax
0x9FD7D0: push    offset flt_B14CC4
0x9FD7D5: mov     ecx, offset INISettingCollection
0x9FD7DA: mov     [esp+14h+var_4], 0
0x9FD7E2: call    SettingCollectionList_AddSetting
0x9FD7E7: push    offset sub_A256D0; void (__cdecl *)()
0x9FD7EC: call    _atexit
0x9FD7F1: add     esp, 4
0x9FD7F4: mov     ecx, [esp+10h+var_C]
0x9FD7F8: mov     large fs:0, ecx
0x9FD7FF: pop     ecx
0x9FD800: add     esp, 0Ch
0x9FD803: retn
