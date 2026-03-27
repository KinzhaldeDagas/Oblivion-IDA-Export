0x9D8E90: push    0FFFFFFFFh
0x9D8E92: push    offset SEH_9D8E90
0x9D8E97: mov     eax, large fs:0
0x9D8E9D: push    eax
0x9D8E9E: mov     eax, ___security_cookie
0x9D8EA3: xor     eax, esp
0x9D8EA5: push    eax
0x9D8EA6: lea     eax, [esp+10h+var_C]
0x9D8EAA: mov     large fs:0, eax
0x9D8EB0: push    offset flt_B02D90
0x9D8EB5: mov     ecx, offset INISettingCollection
0x9D8EBA: mov     [esp+14h+var_4], 0
0x9D8EC2: call    SettingCollectionList_AddSetting
0x9D8EC7: push    offset sub_A16D00; void (__cdecl *)()
0x9D8ECC: call    _atexit
0x9D8ED1: add     esp, 4
0x9D8ED4: mov     ecx, [esp+10h+var_C]
0x9D8ED8: mov     large fs:0, ecx
0x9D8EDF: pop     ecx
0x9D8EE0: add     esp, 0Ch
0x9D8EE3: retn
