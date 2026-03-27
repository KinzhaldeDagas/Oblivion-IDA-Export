0x9D8CB0: push    0FFFFFFFFh
0x9D8CB2: push    offset SEH_9D8CB0
0x9D8CB7: mov     eax, large fs:0
0x9D8CBD: push    eax
0x9D8CBE: mov     eax, ___security_cookie
0x9D8CC3: xor     eax, esp
0x9D8CC5: push    eax
0x9D8CC6: lea     eax, [esp+10h+var_C]
0x9D8CCA: mov     large fs:0, eax
0x9D8CD0: push    offset flt_B02D68
0x9D8CD5: mov     ecx, offset INISettingCollection
0x9D8CDA: mov     [esp+14h+var_4], 0
0x9D8CE2: call    SettingCollectionList_AddSetting
0x9D8CE7: push    offset sub_A16C10; void (__cdecl *)()
0x9D8CEC: call    _atexit
0x9D8CF1: add     esp, 4
0x9D8CF4: mov     ecx, [esp+10h+var_C]
0x9D8CF8: mov     large fs:0, ecx
0x9D8CFF: pop     ecx
0x9D8D00: add     esp, 0Ch
0x9D8D03: retn
