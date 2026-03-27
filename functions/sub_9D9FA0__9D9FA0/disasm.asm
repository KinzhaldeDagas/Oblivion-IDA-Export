0x9D9FA0: push    0FFFFFFFFh
0x9D9FA2: push    offset SEH_9D9FA0
0x9D9FA7: mov     eax, large fs:0
0x9D9FAD: push    eax
0x9D9FAE: mov     eax, ___security_cookie
0x9D9FB3: xor     eax, esp
0x9D9FB5: push    eax
0x9D9FB6: lea     eax, [esp+10h+var_C]
0x9D9FBA: mov     large fs:0, eax
0x9D9FC0: push    offset unk_B0340C
0x9D9FC5: mov     ecx, offset INISettingCollection
0x9D9FCA: mov     [esp+14h+var_4], 0
0x9D9FD2: call    SettingCollectionList_AddSetting
0x9D9FD7: push    offset sub_A17570; void (__cdecl *)()
0x9D9FDC: call    _atexit
0x9D9FE1: add     esp, 4
0x9D9FE4: mov     ecx, [esp+10h+var_C]
0x9D9FE8: mov     large fs:0, ecx
0x9D9FEF: pop     ecx
0x9D9FF0: add     esp, 0Ch
0x9D9FF3: retn
