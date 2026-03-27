0x9FB6A0: push    0FFFFFFFFh
0x9FB6A2: push    offset SEH_9FB6A0
0x9FB6A7: mov     eax, large fs:0
0x9FB6AD: push    eax
0x9FB6AE: mov     eax, ___security_cookie
0x9FB6B3: xor     eax, esp
0x9FB6B5: push    eax
0x9FB6B6: lea     eax, [esp+10h+var_C]
0x9FB6BA: mov     large fs:0, eax
0x9FB6C0: push    offset flt_B135E0
0x9FB6C5: mov     ecx, offset INISettingCollection
0x9FB6CA: mov     [esp+14h+var_4], 0
0x9FB6D2: call    SettingCollectionList_AddSetting
0x9FB6D7: push    offset sub_A24790; void (__cdecl *)()
0x9FB6DC: call    _atexit
0x9FB6E1: add     esp, 4
0x9FB6E4: mov     ecx, [esp+10h+var_C]
0x9FB6E8: mov     large fs:0, ecx
0x9FB6EF: pop     ecx
0x9FB6F0: add     esp, 0Ch
0x9FB6F3: retn
