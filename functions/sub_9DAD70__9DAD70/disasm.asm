0x9DAD70: push    0FFFFFFFFh
0x9DAD72: push    offset SEH_9DAD70
0x9DAD77: mov     eax, large fs:0
0x9DAD7D: push    eax
0x9DAD7E: mov     eax, ___security_cookie
0x9DAD83: xor     eax, esp
0x9DAD85: push    eax
0x9DAD86: lea     eax, [esp+10h+var_C]
0x9DAD8A: mov     large fs:0, eax
0x9DAD90: push    offset unk_B048F4
0x9DAD95: mov     ecx, offset INISettingCollection
0x9DAD9A: mov     [esp+14h+var_4], 0
0x9DADA2: call    SettingCollectionList_AddSetting
0x9DADA7: push    offset sub_A17C00; void (__cdecl *)()
0x9DADAC: call    _atexit
0x9DADB1: add     esp, 4
0x9DADB4: mov     ecx, [esp+10h+var_C]
0x9DADB8: mov     large fs:0, ecx
0x9DADBF: pop     ecx
0x9DADC0: add     esp, 0Ch
0x9DADC3: retn
