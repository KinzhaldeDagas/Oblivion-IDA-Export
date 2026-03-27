0x9D9130: push    0FFFFFFFFh
0x9D9132: push    offset SEH_9D9130
0x9D9137: mov     eax, large fs:0
0x9D913D: push    eax
0x9D913E: mov     eax, ___security_cookie
0x9D9143: xor     eax, esp
0x9D9145: push    eax
0x9D9146: lea     eax, [esp+10h+var_C]
0x9D914A: mov     large fs:0, eax
0x9D9150: push    offset flt_B02DC8
0x9D9155: mov     ecx, offset INISettingCollection
0x9D915A: mov     [esp+14h+var_4], 0
0x9D9162: call    SettingCollectionList_AddSetting
0x9D9167: push    offset sub_A16E50; void (__cdecl *)()
0x9D916C: call    _atexit
0x9D9171: add     esp, 4
0x9D9174: mov     ecx, [esp+10h+var_C]
0x9D9178: mov     large fs:0, ecx
0x9D917F: pop     ecx
0x9D9180: add     esp, 0Ch
0x9D9183: retn
