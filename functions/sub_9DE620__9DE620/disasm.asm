0x9DE620: push    0FFFFFFFFh
0x9DE622: push    offset SEH_9DE620
0x9DE627: mov     eax, large fs:0
0x9DE62D: push    eax
0x9DE62E: mov     eax, ___security_cookie
0x9DE633: xor     eax, esp
0x9DE635: push    eax
0x9DE636: lea     eax, [esp+10h+var_C]
0x9DE63A: mov     large fs:0, eax
0x9DE640: push    offset flt_B06E9C
0x9DE645: mov     ecx, offset INISettingCollection
0x9DE64A: mov     [esp+14h+var_4], 0
0x9DE652: call    SettingCollectionList_AddSetting
0x9DE657: push    offset sub_A198C0; void (__cdecl *)()
0x9DE65C: call    _atexit
0x9DE661: add     esp, 4
0x9DE664: mov     ecx, [esp+10h+var_C]
0x9DE668: mov     large fs:0, ecx
0x9DE66F: pop     ecx
0x9DE670: add     esp, 0Ch
0x9DE673: retn
