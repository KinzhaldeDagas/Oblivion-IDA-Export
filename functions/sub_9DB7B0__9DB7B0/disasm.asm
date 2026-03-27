0x9DB7B0: push    0FFFFFFFFh
0x9DB7B2: push    offset SEH_9DB7B0
0x9DB7B7: mov     eax, large fs:0
0x9DB7BD: push    eax
0x9DB7BE: mov     eax, ___security_cookie
0x9DB7C3: xor     eax, esp
0x9DB7C5: push    eax
0x9DB7C6: lea     eax, [esp+10h+var_C]
0x9DB7CA: mov     large fs:0, eax
0x9DB7D0: push    offset unk_B0556C
0x9DB7D5: mov     ecx, offset INISettingCollection
0x9DB7DA: mov     [esp+14h+var_4], 0
0x9DB7E2: call    SettingCollectionList_AddSetting
0x9DB7E7: push    offset sub_A18120; void (__cdecl *)()
0x9DB7EC: call    _atexit
0x9DB7F1: add     esp, 4
0x9DB7F4: mov     ecx, [esp+10h+var_C]
0x9DB7F8: mov     large fs:0, ecx
0x9DB7FF: pop     ecx
0x9DB800: add     esp, 0Ch
0x9DB803: retn
