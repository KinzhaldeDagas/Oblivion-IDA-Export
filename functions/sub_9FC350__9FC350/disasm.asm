0x9FC350: push    0FFFFFFFFh
0x9FC352: push    offset SEH_9FC350
0x9FC357: mov     eax, large fs:0
0x9FC35D: push    eax
0x9FC35E: mov     eax, ___security_cookie
0x9FC363: xor     eax, esp
0x9FC365: push    eax
0x9FC366: lea     eax, [esp+10h+var_C]
0x9FC36A: mov     large fs:0, eax
0x9FC370: push    offset flt_B14158
0x9FC375: mov     ecx, offset INISettingCollection
0x9FC37A: mov     [esp+14h+var_4], 0
0x9FC382: call    SettingCollectionList_AddSetting
0x9FC387: push    offset sub_A24C80; void (__cdecl *)()
0x9FC38C: call    _atexit
0x9FC391: add     esp, 4
0x9FC394: mov     ecx, [esp+10h+var_C]
0x9FC398: mov     large fs:0, ecx
0x9FC39F: pop     ecx
0x9FC3A0: add     esp, 0Ch
0x9FC3A3: retn
