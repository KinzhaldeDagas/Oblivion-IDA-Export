0x9F8CB0: push    0FFFFFFFFh
0x9F8CB2: push    offset SEH_9F8CB0
0x9F8CB7: mov     eax, large fs:0
0x9F8CBD: push    eax
0x9F8CBE: mov     eax, ___security_cookie
0x9F8CC3: xor     eax, esp
0x9F8CC5: push    eax
0x9F8CC6: lea     eax, [esp+10h+var_C]
0x9F8CCA: mov     large fs:0, eax
0x9F8CD0: push    offset unk_B120FC
0x9F8CD5: mov     ecx, offset INISettingCollection
0x9F8CDA: mov     [esp+14h+var_4], 0
0x9F8CE2: call    SettingCollectionList_AddSetting
0x9F8CE7: push    offset sub_A234C0; void (__cdecl *)()
0x9F8CEC: call    _atexit
0x9F8CF1: add     esp, 4
0x9F8CF4: mov     ecx, [esp+10h+var_C]
0x9F8CF8: mov     large fs:0, ecx
0x9F8CFF: pop     ecx
0x9F8D00: add     esp, 0Ch
0x9F8D03: retn
