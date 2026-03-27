0x9D9560: push    0FFFFFFFFh
0x9D9562: push    offset SEH_9D9560
0x9D9567: mov     eax, large fs:0
0x9D956D: push    eax
0x9D956E: mov     eax, ___security_cookie
0x9D9573: xor     eax, esp
0x9D9575: push    eax
0x9D9576: lea     eax, [esp+10h+var_C]
0x9D957A: mov     large fs:0, eax
0x9D9580: push    offset lpParameter
0x9D9585: mov     ecx, offset INISettingCollection
0x9D958A: mov     [esp+14h+var_4], 0
0x9D9592: call    SettingCollectionList_AddSetting
0x9D9597: push    offset sub_A17060; void (__cdecl *)()
0x9D959C: call    _atexit
0x9D95A1: add     esp, 4
0x9D95A4: mov     ecx, [esp+10h+var_C]
0x9D95A8: mov     large fs:0, ecx
0x9D95AF: pop     ecx
0x9D95B0: add     esp, 0Ch
0x9D95B3: retn
