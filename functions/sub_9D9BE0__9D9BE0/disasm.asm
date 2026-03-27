0x9D9BE0: push    0FFFFFFFFh
0x9D9BE2: push    offset SEH_9D9BE0
0x9D9BE7: mov     eax, large fs:0
0x9D9BED: push    eax
0x9D9BEE: mov     eax, ___security_cookie
0x9D9BF3: xor     eax, esp
0x9D9BF5: push    eax
0x9D9BF6: lea     eax, [esp+10h+var_C]
0x9D9BFA: mov     large fs:0, eax
0x9D9C00: push    offset dword_B0315C
0x9D9C05: mov     ecx, offset INISettingCollection
0x9D9C0A: mov     [esp+14h+var_4], 0
0x9D9C12: call    SettingCollectionList_AddSetting
0x9D9C17: push    offset sub_A17390; void (__cdecl *)()
0x9D9C1C: call    _atexit
0x9D9C21: add     esp, 4
0x9D9C24: mov     ecx, [esp+10h+var_C]
0x9D9C28: mov     large fs:0, ecx
0x9D9C2F: pop     ecx
0x9D9C30: add     esp, 0Ch
0x9D9C33: retn
