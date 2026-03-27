0x9DACB0: push    0FFFFFFFFh
0x9DACB2: push    offset SEH_9DACB0
0x9DACB7: mov     eax, large fs:0
0x9DACBD: push    eax
0x9DACBE: mov     eax, ___security_cookie
0x9DACC3: xor     eax, esp
0x9DACC5: push    eax
0x9DACC6: lea     eax, [esp+10h+var_C]
0x9DACCA: mov     large fs:0, eax
0x9DACD0: push    offset dword_B048E4
0x9DACD5: mov     ecx, offset INISettingCollection
0x9DACDA: mov     [esp+14h+var_4], 0
0x9DACE2: call    SettingCollectionList_AddSetting
0x9DACE7: push    offset sub_A17BA0; void (__cdecl *)()
0x9DACEC: call    _atexit
0x9DACF1: add     esp, 4
0x9DACF4: mov     ecx, [esp+10h+var_C]
0x9DACF8: mov     large fs:0, ecx
0x9DACFF: pop     ecx
0x9DAD00: add     esp, 0Ch
0x9DAD03: retn
