0x9E2BE0: push    0FFFFFFFFh
0x9E2BE2: push    offset SEH_9E2BE0
0x9E2BE7: mov     eax, large fs:0
0x9E2BED: push    eax
0x9E2BEE: mov     eax, ___security_cookie
0x9E2BF3: xor     eax, esp
0x9E2BF5: push    eax
0x9E2BF6: lea     eax, [esp+10h+var_C]
0x9E2BFA: mov     large fs:0, eax
0x9E2C00: push    offset dword_B08B5C
0x9E2C05: mov     ecx, offset INISettingCollection
0x9E2C0A: mov     [esp+14h+var_4], 0
0x9E2C12: call    SettingCollectionList_AddSetting
0x9E2C17: push    offset sub_A1B8D0; void (__cdecl *)()
0x9E2C1C: call    _atexit
0x9E2C21: add     esp, 4
0x9E2C24: mov     ecx, [esp+10h+var_C]
0x9E2C28: mov     large fs:0, ecx
0x9E2C2F: pop     ecx
0x9E2C30: add     esp, 0Ch
0x9E2C33: retn
