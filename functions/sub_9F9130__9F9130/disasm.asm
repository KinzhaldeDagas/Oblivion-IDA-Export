0x9F9130: push    0FFFFFFFFh
0x9F9132: push    offset SEH_9F9130
0x9F9137: mov     eax, large fs:0
0x9F913D: push    eax
0x9F913E: mov     eax, ___security_cookie
0x9F9143: xor     eax, esp
0x9F9145: push    eax
0x9F9146: lea     eax, [esp+10h+var_C]
0x9F914A: mov     large fs:0, eax
0x9F9150: push    offset byte_B125F0
0x9F9155: mov     ecx, offset INISettingCollection
0x9F915A: mov     [esp+14h+var_4], 0
0x9F9162: call    SettingCollectionList_AddSetting
0x9F9167: push    offset sub_A23630; void (__cdecl *)()
0x9F916C: call    _atexit
0x9F9171: add     esp, 4
0x9F9174: mov     ecx, [esp+10h+var_C]
0x9F9178: mov     large fs:0, ecx
0x9F917F: pop     ecx
0x9F9180: add     esp, 0Ch
0x9F9183: retn
