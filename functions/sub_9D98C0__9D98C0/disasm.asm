0x9D98C0: push    0FFFFFFFFh
0x9D98C2: push    offset SEH_9D98C0
0x9D98C7: mov     eax, large fs:0
0x9D98CD: push    eax
0x9D98CE: mov     eax, ___security_cookie
0x9D98D3: xor     eax, esp
0x9D98D5: push    eax
0x9D98D6: lea     eax, [esp+10h+var_C]
0x9D98DA: mov     large fs:0, eax
0x9D98E0: push    offset flt_B0311C
0x9D98E5: mov     ecx, offset INISettingCollection
0x9D98EA: mov     [esp+14h+var_4], 0
0x9D98F2: call    SettingCollectionList_AddSetting
0x9D98F7: push    offset sub_A17210; void (__cdecl *)()
0x9D98FC: call    _atexit
0x9D9901: add     esp, 4
0x9D9904: mov     ecx, [esp+10h+var_C]
0x9D9908: mov     large fs:0, ecx
0x9D990F: pop     ecx
0x9D9910: add     esp, 0Ch
0x9D9913: retn
